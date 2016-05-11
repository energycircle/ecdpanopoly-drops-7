<?php
/**
 * @file
 * ec_product_page_category.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_product_page_category_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_node_info().
 */
function ec_product_page_category_node_info() {
  $items = array(
    'product_category' => array(
      'name' => t('Product Category'),
      'base' => 'node_content',
      'description' => t('Used to categorize products on the site as well as pull them into other content.'),
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
function ec_product_page_category_weight_features_default_settings() {
  $settings = array();

  $settings['product_category'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
