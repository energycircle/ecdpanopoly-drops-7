<?php
/**
 * @file
 * ec_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function ec_gallery_user_default_permissions_alter(&$data) {
  if (isset($data['create gallery content'])) {
    unset($data['create gallery content']['roles']['EC Platinum admin']);
    unset($data['create gallery content']['roles']['EC Platinum editor']);
  }
  if (isset($data['delete any gallery content'])) {
    unset($data['delete any gallery content']['roles']['EC Platinum admin']);
  }
  if (isset($data['delete own gallery content'])) {
    unset($data['delete own gallery content']['roles']['EC Platinum admin']);
  }
  if (isset($data['edit any gallery content'])) {
    unset($data['edit any gallery content']['roles']['EC Platinum admin']);
    unset($data['edit any gallery content']['roles']['EC Platinum editor']);
  }
  if (isset($data['edit own gallery content'])) {
    unset($data['edit own gallery content']['roles']['EC Platinum admin']);
  }
}

/**
 * Implements hook_node_info().
 */
function ec_gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('A photo set to be displayed as a photo gallery or similar display type.'),
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
function ec_gallery_weight_features_default_settings() {
  $settings = array();

  $settings['gallery'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
