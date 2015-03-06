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
 * Implements hook_field_default_field_instances_alter().
 */
function ec_gallery_field_default_field_instances_alter(&$data) {
  if (isset($data['node-gallery-field_gallery_image'])) {
    $data['node-gallery-field_gallery_image']['widget']['module'] = 'media'; /* WAS: 'image' */
    $data['node-gallery-field_gallery_image']['widget']['settings']['allowed_schemes'] = array(
      0 => 'private',
      1 => 'public',
    ); /* WAS: '' */
    $data['node-gallery-field_gallery_image']['widget']['settings']['allowed_types'] = array(
      0 => 'image',
    ); /* WAS: '' */
    $data['node-gallery-field_gallery_image']['widget']['settings']['browser_plugins'] = array(); /* WAS: '' */
    $data['node-gallery-field_gallery_image']['widget']['type'] = 'media_generic'; /* WAS: 'image_image' */
  }
}

/**
 * Implements hook_default_roles_permissions_alter().
 */
function ec_gallery_default_roles_permissions_alter(&$data) {
  if (isset($data['EC Platinum admin'])) {
    unset($data['EC Platinum admin']['permissions']['administer panelizer node gallery breadcrumbs']);
    unset($data['EC Platinum admin']['permissions']['administer panelizer node gallery context']);
    unset($data['EC Platinum admin']['permissions']['administer panelizer node gallery defaults']);
    unset($data['EC Platinum admin']['permissions']['administer panelizer node gallery overview']);
    unset($data['EC Platinum admin']['permissions']['administer panelizer node gallery settings']);
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function ec_gallery_user_default_permissions_alter(&$data) {
  if (isset($data['administer panelizer node gallery breadcrumbs'])) {
    unset($data['administer panelizer node gallery breadcrumbs']['roles']['EC Platinum admin']);
  }
  if (isset($data['administer panelizer node gallery context'])) {
    unset($data['administer panelizer node gallery context']['roles']['EC Platinum admin']);
  }
  if (isset($data['administer panelizer node gallery defaults'])) {
    unset($data['administer panelizer node gallery defaults']['roles']['EC Platinum admin']);
  }
  if (isset($data['administer panelizer node gallery overview'])) {
    unset($data['administer panelizer node gallery overview']['roles']['EC Platinum admin']);
  }
  if (isset($data['administer panelizer node gallery settings'])) {
    unset($data['administer panelizer node gallery settings']['roles']['EC Platinum admin']);
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
