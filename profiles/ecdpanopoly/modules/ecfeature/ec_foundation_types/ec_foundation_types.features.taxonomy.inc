<?php
/**
 * @file
 * ec_foundation_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ec_foundation_types_taxonomy_default_vocabularies() {
  return array(
    'article_types' => array(
      'name' => 'Article Types',
      'machine_name' => 'article_types',
      'description' => 'Types of content posted using the "Article" type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'blog_categories' => array(
      'name' => 'Blog Categories',
      'machine_name' => 'blog_categories',
      'description' => '',
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
    'slide_set' => array(
      'name' => 'Slide Set',
      'machine_name' => 'slide_set',
      'description' => 'Slide grouping, such as home page slides',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
