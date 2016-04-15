#!/bin/bash

# Check arguments and requirements.
if [ ${#@} -lt 1 ]; then
  echo "This script expects one argument (site machine name)."
  exit 1
fi

if [ -x ${HOME}/.my.cnf ]; then
  echo "This script requires ${HOME}/.my.cnf."
  exit 1
fi

# Map arguments.
SITE=$1
DBNAME=`echo $1 | tr -d [:punct:] | cut -c -16`
DBUSER=${DBNAME}
DBPASS=${DBNAME}

# Create database.
echo "Creating database..."
mysql --defaults-file=${HOME}/.my.cnf -e "CREATE DATABASE ${DBNAME}; CREATE USER ${DBUSER}@'localhost' IDENTIFIED BY '${DBPASS}'; GRANT ALL PRIVILEGES ON ${DBNAME}.* TO ${DBUSER}@'localhost' WITH GRANT OPTION;"
if [ $? -eq 1 ]; then
  exit 1;
fi

# Create document root.
echo "Creating document root..."
DIR=/var/www/${SITE}
DOCROOT=${DIR}/docroot

sudo mkdir -p ${DOCROOT}
sudo chown -R ${USER}:${USER} ${DIR}

# Create drush alias.
echo "Creating drush alias..."
if [ ! -d /etc/drush ]; then
  sudo mkdir /etc/drush
fi
if [ ! -f /etc/drush/aliases.drushrc.php ]; then
  sudo sh -c "echo \"<?php\" > /etc/drush/aliases.drushrc.php"
fi

sudo sh -c "echo \"
\$\"aliases\"['${SITE}'] = array(
  'root' => '${DOCROOT}',
  'uri' => 'http://${SITE}',
);\" >> /etc/drush/aliases.drushrc.php"

# Add an entry to hosts file.
echo "Adding an entry to hosts file..."
sudo sh -c "echo \"127.0.0.1 ${SITE}\" >> /etc/hosts"

# Create and enable a virtualhost.
echo "Creating an Apache virtual host..."
sudo sh -c "echo \"
<VirtualHost *:80>
	ServerName ${SITE}
	DocumentRoot ${DOCROOT}
  <Directory ${DOCROOT}>
    Options FollowSymLinks
    AllowOverride All
    Require all granted
  </Directory>
</VirtualHost>\" > /etc/apache2/sites-available/${SITE}.conf"
sudo a2ensite ${SITE} 2>&1 > /dev/null
sudo service apache2 reload 2>&1 > /dev/null

# Download and install Drupal.
echo "Downloading Drupal 7..."
drush -q dl -y drupal-7 --destination=${DIR} --drupal-project-rename=docroot
echo "Installing Drupal with minimal profile..."
drush -q @${SITE} site-install -y minimal --account-pass=admin --site-name=${SITE} --db-url="mysql://${DBUSER}:${DBPASS}@localhost/${DBNAME}"
mkdir ${DOCROOT}/sites/all/libraries
mkdir ${DOCROOT}/sites/all/{modules,themes}/{custom,contrib}
find ${DIR} -type d -exec chmod 2775 {} \;
find ${DIR} -type f -exec chmod 0664 {} \;
sudo chown www-data ${DOCROOT}/sites/default/files

# Prepare Drupal for work.
echo "Enabling/Disabling modules..."
drush -q @${SITE} dis -y update

drush -q @${SITE} dl admin_menu adminimal_theme adminimal_admin_menu devel object_log module_filter fpa
drush -q @${SITE} en -y contextual field_ui adminimal_admin_menu admin_devel devel object_log module_filter fpa

drush -q @${SITE} vset admin_theme adminimal
drush -q @${SITE} vset cron_safe_threshold 0
drush -q @${SITE} vset devel_raw_names 1

# Browser please.
echo "Opening one-time login link in browser..."
drush @${SITE} user-login --browser