##
# SCRIPT COMMANDS
##

# system-install
#
# This is meant to setup the server on Travis-CI so that it can run the tests.
#
system_install() {
  # Add the Google Chrome packages.
  header Setting up APT
  wget -q -O - https://dl-ssl.google.com/linux/linux_signing_key.pub | sudo apt-key add -
  sudo sh -c 'echo "deb http://dl.google.com/linux/chrome/deb/ stable main" >> /etc/apt/sources.list.d/google.list'
  sudo apt-get update > /dev/null

  # Create a database for our Drupal site.
  mysql -e 'create database drupal;'
  

  # Install the latest Drush 6.
  header Installing Drush
  composer global require --prefer-source --no-interaction drush/drush:6.*
  drush dl -y drupalorg_drush-7.x-1.x-dev --destination=$HOME/.drush
  drush cc drush

  # Build Codebase
  mkdir profiles
  mv ecdpanopoly profiles/
  mkdir drupal
  mv profiles drupal/

  # Build the current branch.
  header Building ecdpanopoly from current branch
  cd drupal
  drush make --yes profiles/ecdpanopoly/drupal-org-core.make --prepare-install
  drush make --yes profiles/ecdpanopoly/drupal-org.make --no-core --contrib-destination=profiles/ecdpanopoly
  if [[ "$INSTALL_ecdpanopoly_DEMO_FROM_APPS" != 1 ]]; then
    #drush dl ecdpanopoly_demo-1.x-dev   ##Disabled to test
  fi
  drush dl diff
  mkdir sites/default/private
  mkdir sites/default/private/files
  mkdir sites/default/private/temp

  # Build Behat dependencies
  header Installing Behat
  cd profiles/ecdpanopoly/modules/ecdpanopoly/ecdpanopoly_test/tests
  composer install --prefer-source --no-interaction
  cd ../../../../../../../

  # Verify that all the .make files will work on Drupal.org.
  header Verifying .make file
  drush verify-makefile drupal/profiles/ecdpanopoly/drupal-org.make
  find drupal/profiles/ecdpanopoly/modules -name \*.make -print0 | xargs -0 -n1 drush verify-makefile

  # Download an old version to test upgrading from.
  if [[ "$UPGRADE" != none ]]; then
    header Downloading ecdpanopoly $UPGRADE
    drush dl ecdpanopoly-$UPGRADE
  fi

  # Setup files
  sudo chmod -R 777 drupal/sites/all

  # Setup display for Selenium
  header Starting X
  sh -e /etc/init.d/xvfb start
  sleep 5

  # Get Chrome and ChromeDriver
  header Installing Google Chrome
  sudo apt-get install -y --force-yes google-chrome-stable
  wget http://chromedriver.storage.googleapis.com/2.9/chromedriver_linux64.zip
  unzip -a chromedriver_linux64.zip

  # Insane hack from jsdevel:
  #   https://github.com/jsdevel/travis-debugging/blob/master/shim.bash
  # This allows chrome-sandbox to work in side of OpenVZ, because I can't
  # figure out how to start chrome with --no-sandbox.
  sudo rm -f $CHROME_SANDBOX
  sudo wget https://googledrive.com/host/0B5VlNZ_Rvdw6NTJoZDBSVy1ZdkE -O $CHROME_SANDBOX
  sudo chown root:root $CHROME_SANDBOX
  sudo chmod 4755 $CHROME_SANDBOX
  sudo md5sum $CHROME_SANDBOX

  # Get Selenium
  header Downloading Selenium
  wget http://selenium-release.storage.googleapis.com/2.41/selenium-server-standalone-2.41.0.jar
 
  # Disable sendmail
  echo sendmail_path=`which true` >> ~/.phpenv/versions/$(phpenv version-name)/etc/php.ini

  # Enable APC
  echo "extension=apc.so" >> ~/.phpenv/versions/$(phpenv version-name)/etc/php.ini
  echo "apc.shm_size=256M" >> ~/.phpenv/versions/$(phpenv version-name)/etc/php.ini

  # Increase the MySQL connection timeout on the PHP end.
  echo "mysql.connect_timeout=3000" >> ~/.phpenv/versions/$(phpenv version-name)/etc/php.ini
  echo "default_socket_timeout=3000" >> ~/.phpenv/versions/$(phpenv version-name)/etc/php.ini

  # Increase the MySQL server timetout and packet size.
  mysql -e "SET GLOBAL wait_timeout = 36000;"
  mysql -e "SET GLOBAL max_allowed_packet = 33554432;"
}

# before_tests
#
# Setup Drupal to run the tests.
#
before_tests() {
  # Hack to get the correct version of ecdpanopoly Demo (there was no 1.0-rc4 or 1.0-rc5)
  UPGRADE_DEMO_VERSION=`echo $UPGRADE | sed -e s/^7.x-//`
  case $UPGRADE_DEMO_VERSION in
    1.0-rc[45])
      UPGRADE_DEMO_VERSION=1.0-rc3
      ;;
  esac

  # Do the site install (either the current revision or old for the upgrade).
  header Installing Drupal
  if [[ "$UPGRADE" == none ]]; then
    cd drupal
  else
    cd ecdpanopoly-$UPGRADE
    if [[ "$INSTALL_ecdpanopoly_DEMO_FROM_APPS" != 1 ]]; then
      drush dl ecdpanopoly_demo-$UPGRADE_DEMO_VERSION
    fi
  fi
  drush si ecdpanopoly --db-url=mysql://root:@127.0.0.1/drupal --account-name=admin --account-pass=admin --site-mail=admin@example.com --site-name="ecdpanopoly" --yes
  drush vset -y file_private_path "sites/default/private/files"
  drush vset -y file_temporary_path "sites/default/private/temp"

  # Switch to the ecdpanopoly platform built from Git (if we aren't there already).
  cd ../drupal

  # If we're an upgrade test, run the upgrade process.
  if [[ "$UPGRADE" != none ]]; then
    header Upgrading to latest version
    cp -a ../ecdpanopoly-$UPGRADE/sites/default/* sites/default/
    run_test drush updb --yes
    drush cc all
  fi

  # Our tests depend on ecdpanopoly_test.
  #drush en -y ecdpanopoly_test

  # Run the webserver
  header Starting webserver
  drush runserver --server=builtin 8888 > /dev/null 2>&1 &
  echo $! > /tmp/web-server-pid
  wait_for_port 8888

  cd ..

  # Run the selenium server
  header Starting selenium
  java -jar selenium-server-standalone-2.41.0.jar -Dwebdriver.chrome.driver=`pwd`/chromedriver > /dev/null 2>&1 &
  echo $! > /tmp/selenium-server-pid
  wait_for_port 4444
}

# before_tests
#
# Run the tests.
#
run_tests() {
  header Running tests

  # Make the Travis tests repos agnostic by injecting drupal_root with BEHAT_PARAMS
  export BEHAT_PARAMS="extensions[Drupal\\DrupalExtension\\Extension][drupal][drupal_root]=$BUILD_TOP/drupal"

  cd drupal/profiles/ecdpanopoly/modules/ecdpanopoly/ecdpanopoly_test/tests

  # If this isn't an upgrade, we test if any features are overridden.
  if [[ "$UPGRADE" == none ]]; then
    run_test ../../../../scripts/check-overridden.sh
  fi

  # First, run all the tests in Firefox.
  run_test ./bin/behat --config behat.travis.yml

  # Then run some Chrome-only tests.
  run_test ./bin/behat --config behat.travis.yml -p chrome
}

# after_tests
#
# Clean up after the tests.
#
after_tests() {
  header Cleaning up after tests

  WEB_SERVER_PID=`cat /tmp/webserver-server-pid`
  SELENIUM_SERVER_PID=`cat /tmp/selenium-server-pid`

  # Stop the servers we started
  kill $WEB_SERVER_PID
  kill $SELENIUM_SERVER_PID
}

##
# UTILITY FUNCTIONS:
##

# Prints a message about the section of the script.
header() {
  set +xv
  echo
  echo "** $@"
  echo
  set -xv
}

# Sets the exit level to error.
set_error() {
  EXIT_VALUE=1
}

# Runs a command and sets an error if it fails.
run_test() {
  if ! $@; then
    set_error
  fi
}

# Runs a command showing all the lines executed
run_command() {
  set -xv
  $@
  set +xv
}

# Wait for a specific port to respond to connections.
wait_for_port() {
  local port=$1
  while echo | telnet localhost $port 2>&1 | grep -qe 'Connection refused'; do
    echo "Connection refused on port $port. Waiting 5 seconds..."
    sleep 5
  done
}

##
# SCRIPT MAIN:
##

# Capture all errors and set our overall exit value.
trap 'set_error' ERR

# We want to always start from the same directory:
cd $BUILD_TOP

case $COMMAND in
  system-install)
    run_command system_install
    ;;

  drupal-install)
    run_command drupal_install
    ;;

  before-tests)
    run_command before_tests
    ;;

  run-tests)
    run_command run_tests
    ;;

  after-tests)
    run_command after_tests
    ;;
esac

exit $EXIT_VALUE
