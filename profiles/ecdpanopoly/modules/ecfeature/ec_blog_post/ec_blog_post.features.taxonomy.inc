<?php
/**
 * @file
 * ec_blog_post.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ec_blog_post_taxonomy_default_vocabularies() {
  return array(
    'blog_categories' => array(
      'name' => 'Blog Categories',
      'machine_name' => 'blog_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'uuid' => '',
    ),
  );
}
