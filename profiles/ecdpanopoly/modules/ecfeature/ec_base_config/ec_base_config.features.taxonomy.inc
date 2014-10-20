<?php
/**
 * @file
 * ec_base_config.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ec_base_config_taxonomy_default_vocabularies() {
  return array(
    'article_types' => array(
      'name' => 'Article Types',
      'machine_name' => 'article_types',
      'description' => 'Types of content posted using the "Article" type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'departments' => array(
      'name' => 'Departments',
      'machine_name' => 'departments',
      'description' => 'Team or department names, for staff members',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
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
