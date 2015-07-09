<?php
/**
 * @file
 * ec_awards.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ec_awards_taxonomy_default_vocabularies() {
  return array(
    'award_types' => array(
      'name' => 'Award Types',
      'machine_name' => 'award_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
    ),
  );
}
