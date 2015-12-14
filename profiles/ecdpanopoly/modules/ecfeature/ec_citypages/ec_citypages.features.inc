<?php
/**
 * @file
 * ec_citypages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_citypages_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_citypages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_citypages_node_info() {
  $items = array(
    'city_page' => array(
      'name' => t('City Page'),
      'base' => 'node_content',
      'description' => t('A landing page for a locality in the service area.'),
      'has_title' => '1',
      'title_label' => t('Name of city, town or neighborhood'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_citypages_weight_features_default_settings() {
  $settings = array();

  $settings['city_page'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
