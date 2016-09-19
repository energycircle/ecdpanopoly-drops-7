<?php
/**
 * @file
 * ec_promotions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ec_promotions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__promotion';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__promotion'] = $strongarm;

  return $export;
}
