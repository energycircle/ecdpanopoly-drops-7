<?php
/**
 * @file
 * ec_conferences_lte.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ec_conferences_lte_taxonomy_default_vocabularies() {
  return array(
    'conferences_types' => array(
      'name' => 'Conferences Types',
      'machine_name' => 'conferences_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
