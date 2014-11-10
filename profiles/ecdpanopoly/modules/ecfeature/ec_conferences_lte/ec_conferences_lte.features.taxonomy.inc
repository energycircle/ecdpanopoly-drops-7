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
    'conference_detail_page_types' => array(
      'name' => 'Conference Detail Page Types',
      'machine_name' => 'conference_detail_page_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
