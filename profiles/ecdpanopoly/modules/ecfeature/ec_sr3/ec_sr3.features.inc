<?php
/**
 * @file
 * ec_sr3.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_sr3_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ec_sr3_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_sr3_node_info() {
  $items = array(
    'sr3_service_review' => array(
      'name' => t('SR3 Service Review'),
      'base' => 'node_content',
      'description' => t('A customer\'s service review'),
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
function ec_sr3_weight_features_default_settings() {
  $settings = array();

  $settings['sr3_service_review'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
