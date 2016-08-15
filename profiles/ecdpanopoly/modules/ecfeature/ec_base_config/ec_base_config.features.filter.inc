<?php
/**
 * @file
 * ec_base_config.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ec_base_config_filter_default_formats() {
  $formats = array();

  // Exported format: iframe.
  $formats['iframe'] = array(
    'format' => 'iframe',
    'name' => 'iframe',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
