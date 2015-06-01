<?php
/**
 * @file
 * ec_blog_post.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_blog_post_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ec_blog_post_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function ec_blog_post_user_default_permissions_alter(&$data) {
  if (isset($data['create blog_post content'])) {
    unset($data['create blog_post content']['roles']['EC Platinum admin']);
    unset($data['create blog_post content']['roles']['EC Platinum editor']);
  }
  if (isset($data['delete any blog_post content'])) {
    unset($data['delete any blog_post content']['roles']['EC Platinum admin']);
  }
  if (isset($data['delete terms in blog_categories'])) {
    unset($data['delete terms in blog_categories']['roles']['EC Platinum admin']);
  }
  if (isset($data['edit any blog_post content'])) {
    unset($data['edit any blog_post content']['roles']['EC Platinum admin']);
    unset($data['edit any blog_post content']['roles']['EC Platinum editor']);
  }
  if (isset($data['edit terms in blog_categories'])) {
    unset($data['edit terms in blog_categories']['roles']['EC Platinum admin']);
  }
}

/**
 * Implements hook_node_info().
 */
function ec_blog_post_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_blog_post_weight_features_default_settings() {
  $settings = array();

  $settings['blog_post'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
