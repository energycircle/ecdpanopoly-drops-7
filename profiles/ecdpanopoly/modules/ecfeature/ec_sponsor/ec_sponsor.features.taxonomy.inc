<?php
/**
 * @file
 * ec_sponsor.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ec_sponsor_taxonomy_default_vocabularies() {
  return array(
    'sponsor_types' => array(
      'name' => 'Sponsor Types',
      'machine_name' => 'sponsor_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
    ),
  );
}
