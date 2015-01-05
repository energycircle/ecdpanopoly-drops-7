<?php
/**
 * @file
 * ec_rms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_rms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
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
function ec_rms_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_rms_node_info() {
  $items = array(
    'ec_review' => array(
      'name' => t('RMS - Customer Review'),
      'base' => 'node_content',
      'description' => t('A customer review'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'review_site' => array(
      'name' => t('RMS - Review Site'),
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
function ec_rms_weight_features_default_settings() {
  $settings = array();

  $settings['ec_review'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['review_site'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
