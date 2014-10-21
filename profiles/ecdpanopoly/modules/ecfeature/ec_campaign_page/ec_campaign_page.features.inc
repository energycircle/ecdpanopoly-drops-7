<?php
/**
 * @file
 * ec_campaign_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_campaign_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
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
function ec_campaign_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_campaign_page_node_info() {
  $items = array(
    'campaign_page' => array(
      'name' => t('Campaign Page'),
      'base' => 'node_content',
      'description' => t('Used as a one-off promotion landing page that is combined with a marketing initiative to drive traffic. These pages will have no menu link and excluded from the sitemap.'),
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
function ec_campaign_page_weight_features_default_settings() {
  $settings = array();

  $settings['campaign_page'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
