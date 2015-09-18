<?php
/**
 * @file
 * ec_slide_demo_content.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_slide_demo_content_defaultconfig_features() {
  return array(
    'ec_slide_demo_content' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_slide_demo_content_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_promote_slide';
  $strongarm->value = 0;
  $export['node_export_reset_promote_slide'] = $strongarm;

  return $export;
}
