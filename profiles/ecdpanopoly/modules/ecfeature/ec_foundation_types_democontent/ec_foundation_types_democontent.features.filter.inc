<?php
/**
 * @file
 * ec_foundation_types_democontent.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ec_foundation_types_democontent_filter_default_formats() {
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
