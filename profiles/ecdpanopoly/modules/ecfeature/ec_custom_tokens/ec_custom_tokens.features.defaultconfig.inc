<?php
/**
 * @file
 * ec_custom_tokens.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_custom_tokens_defaultconfig_features() {
  return array(
    'ec_custom_tokens' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_custom_tokens_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_custom_types';
  $strongarm->value = array(
    'custom' => (object) array(
      'name' => 'Client Information',
      'machine_name' => 'client-info',
      'description' => 'User created tokens types using the Custom Tokens module.',
    ),
    'social' => (object) array(
      'name' => 'Social',
      'machine_name' => 'social',
      'description' => 'social media links',
    ),
  );
  $export['token_custom_types'] = $strongarm;

  return $export;
}
