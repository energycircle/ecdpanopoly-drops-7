<?php
/**
 * @file
 * ec_blog_post.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function ec_blog_post_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:blog_post.
  $config['node:blog_post'] = array(
    'instance' => 'node:blog_post',
    'config' => array(
      'image_src' => array(
        'value' => '[node:field_blog_image] ',
      ),
    ),
  );

  return $config;
}
