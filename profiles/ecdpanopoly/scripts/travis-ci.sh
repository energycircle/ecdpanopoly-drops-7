#!/bin/bash

COMMAND=$1
BUILD_TOP=`dirname $TRAVIS_BUILD_DIR`
EXIT_VALUE=0

export PATH="$HOME/.composer/vendor/bin:$PATH"
export DISPLAY=:99.0
export CHROME_SANDBOX=/opt/google/chrome/chrome-sandbox

#Setup PHP
curl -s https://getcomposer.org/installer | php
php composer.phar install

language: php
php:
  - 5.4

  #disable xdebug
  php5dismod xdebug


mysql:
  database: drupal
  username: root
  encoding: utf8

before_install:
  - composer self-update
  - export BASEDIR=${PWD}

install:
  - phpenv rehash
  - composer install

before_script:
  - echo "sendmail_path='true'" >> `php --ini | grep "Loaded Configuration" | awk '{print $4}'`
  - ./bin/install_drupal_mysql.sh
  - cd html
  - $BASEDIR/vendor/bin/drush runserver --server=builtin 8080 --strict=0 &
  - cd ..
  - until netstat -an 2>/dev/null | grep '8080.*LISTEN'; do sleep 0.2; done

script:
  - $BASEDIR/tests/behat
  
  #download selenium
wget http://selenium.googlecode.com/files/selenium-server-standalone-2.25.0.jar
java -jar selenium-server-standalone-2.25.0.jar

# Configuration vars.
  - DRUPAL_TI_MODULE_NAME="registry_autoload"
  - DRUPAL_TI_SIMPLETEST_GROUP="Registry"

 matrix:
 # [[[ SELECT ANY OR MORE OPTIONS ]]]
  - DRUPAL_TI_RUNNERS="simpletest"