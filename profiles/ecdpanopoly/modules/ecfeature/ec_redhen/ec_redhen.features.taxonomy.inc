<?php
/**
 * @file
 * ec_redhen.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ec_redhen_taxonomy_default_vocabularies() {
  return array(
    'contact_position' => array(
      'name' => 'Contact Position',
      'machine_name' => 'contact_position',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'note_type' => array(
      'name' => 'Note type',
      'machine_name' => 'note_type',
      'description' => NULL,
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
