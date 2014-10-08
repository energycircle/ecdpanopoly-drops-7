<?php
/**
 * @file
 * ec_distinction.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ec_distinction_taxonomy_default_vocabularies() {
  return array(
    'distinction_types' => array(
      'name' => 'Distinction Types',
      'machine_name' => 'distinction_types',
      'description' => 'Categories for content of type distinction',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
