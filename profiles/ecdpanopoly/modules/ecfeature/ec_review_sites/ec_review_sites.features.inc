<?php
/**
 * @file
 * ec_review_sites.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_review_sites_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ec_review_sites_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_review_sites_node_info() {
  $items = array(
    'review_site' => array(
      'name' => t('Review Site'),
      'base' => 'node_content',
      'description' => t('Used to display review sites logos and links. This is connected to the testimonial type.'),
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
function ec_review_sites_weight_features_default_settings() {
  $settings = array();

  $settings['review_site'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
