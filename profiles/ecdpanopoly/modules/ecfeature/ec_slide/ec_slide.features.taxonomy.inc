<?php
/**
 * @file
 * ec_slide.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ec_slide_taxonomy_default_vocabularies() {
  return array(
    'slide_set' => array(
      'name' => 'Slide Set',
      'machine_name' => 'slide_set',
      'description' => 'Slide grouping, such as home page slides',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'uuid' => '',
    ),
  );
}
