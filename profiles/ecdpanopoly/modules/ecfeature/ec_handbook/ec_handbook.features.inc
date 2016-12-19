<?php
/**
 * @file
 * ec_handbook.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_handbook_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ec_handbook_node_info() {
  $items = array(
    'handbook' => array(
      'name' => t('Handbook'),
      'base' => 'node_content',
      'description' => t('Content Management Handbook'),
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
function ec_handbook_weight_features_default_settings() {
  $settings = array();

  $settings['handbook'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
