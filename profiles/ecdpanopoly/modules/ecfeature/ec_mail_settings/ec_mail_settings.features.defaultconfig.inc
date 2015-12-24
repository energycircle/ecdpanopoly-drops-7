<?php
/**
 * @file
 * ec_mail_settings.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_mail_settings_defaultconfig_features() {
  return array(
    'ec_mail_settings' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_mail_settings_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_debugging';
  $strongarm->value = 0;
  $export['smtp_debugging'] = $strongarm;

  return $export;
}
