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
  if (isset($data['node-gallery-body'])) {
    $data['node-gallery-body']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-gallery-field_gallery_image'])) {
    $data['node-gallery-field_gallery_image']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-gallery-field_ref_gallery_case_study'])) {
    $data['node-gallery-field_ref_gallery_case_study']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_default_roles_permissions_alter().
 */
function ec_gallery_default_roles_permissions_alter(&$data) {
  if (isset($data['EC Platinum admin'])) {
    $data['EC Platinum admin']['permissions']['administer panelizer node gallery breadcrumbs'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node gallery context'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node gallery defaults'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node gallery overview'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node gallery settings'] = TRUE; /* WAS: '' */
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function ec_gallery_user_default_permissions_alter(&$data) {
  if (isset($data['administer panelizer node gallery breadcrumbs'])) {
    $data['administer panelizer node gallery breadcrumbs']['roles']['administrator'] = 'administrator'; /* WAS: '' */
  }
  if (isset($data['administer panelizer node gallery content'])) {
    $data['administer panelizer node gallery content']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['administer panelizer node gallery content']['roles']['EC Platinum admin']);
  }
  if (isset($data['administer panelizer node gallery context'])) {
    $data['administer panelizer node gallery context']['roles']['administrator'] = 'administrator'; /* WAS: '' */
  }
  if (isset($data['administer panelizer node gallery defaults'])) {
    $data['administer panelizer node gallery defaults']['roles']['administrator'] = 'administrator'; /* WAS: '' */
  }
  if (isset($data['administer panelizer node gallery layout'])) {
    $data['administer panelizer node gallery layout']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['administer panelizer node gallery layout']['roles']['EC Platinum admin']);
  }
  if (isset($data['administer panelizer node gallery overview'])) {
    $data['administer panelizer node gallery overview']['roles']['administrator'] = 'administrator'; /* WAS: '' */
  }
  if (isset($data['administer panelizer node gallery settings'])) {
    $data['administer panelizer node gallery settings']['roles']['administrator'] = 'administrator'; /* WAS: '' */
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
