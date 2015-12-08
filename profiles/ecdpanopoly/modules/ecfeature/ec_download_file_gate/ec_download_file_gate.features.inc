<?php
/**
 * @file
 * ec_download_file_gate.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_download_file_gate_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
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
function ec_download_file_gate_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_strongarm_alter().
 */
function ec_download_file_gate_strongarm_alter(&$data) {
  if (isset($data['ec_restrict_dl_max'])) {
    unset($data['ec_restrict_dl_max']);
  }
  if (isset($data['ec_restrict_dl_ty_url'])) {
    unset($data['ec_restrict_dl_ty_url']);
  }
  if (isset($data['field_bundle_settings_node__request_restricted'])) {
    unset($data['field_bundle_settings_node__request_restricted']);
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function ec_download_file_gate_views_default_views_alter(&$data) {
  if (isset($data['admin_views_file'])) {
    $data['admin_views_file']->display['default']->display_options['fields']['field_file_restricted'] = array(
      'id' => 'field_file_restricted',
      'table' => 'field_data_field_file_restricted',
      'field' => 'field_file_restricted',
      'type' => 'list_key',
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_node_info().
 */
function ec_download_file_gate_node_info() {
  $items = array(
    'gated_file_page' => array(
      'name' => t('Gated File Page'),
      'base' => 'node_content',
      'description' => t('Page to gather restricted file for email download gate'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'request_restricted' => array(
      'name' => t('Request Restricted'),
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
function ec_download_file_gate_weight_features_default_settings() {
  $settings = array();

  $settings['gated_file_page'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['request_restricted'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
