<?php
/**
 * @file
 * ec_distributor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_distributor_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_distributor_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function ec_distributor_user_default_permissions_alter(&$data) {
  if (isset($data['create distributor content'])) {
    $data['create distributor content']['roles']['EC Platinum admin'] = 'EC Platinum admin'; /* WAS: '' */
  }
  if (isset($data['delete any distributor content'])) {
    $data['delete any distributor content']['roles']['EC Platinum admin'] = 'EC Platinum admin'; /* WAS: '' */
  }
  if (isset($data['delete own distributor content'])) {
    $data['delete own distributor content']['roles']['EC Platinum admin'] = 'EC Platinum admin'; /* WAS: '' */
  }
  if (isset($data['edit any distributor content'])) {
    $data['edit any distributor content']['roles']['EC Platinum admin'] = 'EC Platinum admin'; /* WAS: '' */
  }
  if (isset($data['edit own distributor content'])) {
    $data['edit own distributor content']['roles']['EC Platinum admin'] = 'EC Platinum admin'; /* WAS: '' */
  }
}

/**
 * Implements hook_node_info().
 */
function ec_distributor_node_info() {
  $items = array(
    'distributor' => array(
      'name' => t('Distributor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Company'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_distributor_weight_features_default_settings() {
  $settings = array();

  $settings['distributor'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
