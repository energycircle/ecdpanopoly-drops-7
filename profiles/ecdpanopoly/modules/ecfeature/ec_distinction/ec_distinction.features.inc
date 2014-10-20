<?php
/**
 * @file
 * ec_distinction.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_distinction_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_distinction_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_distinction_node_info() {
  $items = array(
    'distinction' => array(
      'name' => t('Distinction'),
      'base' => 'node_content',
      'description' => t('A certification, membership, award, partner, etc. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_distinction_weight_features_default_settings() {
  $settings = array();

  $settings['distinction'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
