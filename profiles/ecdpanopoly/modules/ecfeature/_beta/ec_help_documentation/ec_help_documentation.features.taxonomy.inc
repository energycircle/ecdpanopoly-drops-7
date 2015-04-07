<?php
/**
 * @file
 * ec_help_documentation.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ec_help_documentation_taxonomy_default_vocabularies() {
  return array(
    'help_document_type' => array(
      'name' => 'Help Document Type',
      'machine_name' => 'help_document_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'uuid' => 'ea07d54c-e04b-4c46-a385-57843cf644bc',
    ),
  );
}
