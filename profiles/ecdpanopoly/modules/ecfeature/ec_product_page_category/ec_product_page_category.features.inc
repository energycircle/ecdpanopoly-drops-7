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
 * Implements hook_default_roles_permissions_alter().
 */
function ec_product_page_category_default_roles_permissions_alter(&$data) {
  if (isset($data['EC Platinum admin'])) {
    $data['EC Platinum admin']['permissions']['administer panelizer node product_category breadcrumbs'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node product_category content'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node product_category context'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node product_category defaults'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node product_category layout'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node product_category overview'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node product_category settings'] = TRUE; /* WAS: '' */
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function ec_product_page_category_user_default_permissions_alter(&$data) {
  if (isset($data['administer panelizer node product_category breadcrumbs'])) {
    $data['administer panelizer node product_category breadcrumbs']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['administer panelizer node product_category breadcrumbs']['roles']['EC SuperAdmin']);
  }
  if (isset($data['administer panelizer node product_category content'])) {
    $data['administer panelizer node product_category content']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['administer panelizer node product_category content']['roles']['EC SuperAdmin']);
  }
  if (isset($data['administer panelizer node product_category context'])) {
    $data['administer panelizer node product_category context']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['administer panelizer node product_category context']['roles']['EC SuperAdmin']);
  }
  if (isset($data['administer panelizer node product_category defaults'])) {
    $data['administer panelizer node product_category defaults']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['administer panelizer node product_category defaults']['roles']['EC SuperAdmin']);
  }
  if (isset($data['administer panelizer node product_category layout'])) {
    $data['administer panelizer node product_category layout']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['administer panelizer node product_category layout']['roles']['EC SuperAdmin']);
  }
  if (isset($data['administer panelizer node product_category overview'])) {
    $data['administer panelizer node product_category overview']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['administer panelizer node product_category overview']['roles']['EC SuperAdmin']);
  }
  if (isset($data['administer panelizer node product_category settings'])) {
    $data['administer panelizer node product_category settings']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['administer panelizer node product_category settings']['roles']['EC SuperAdmin']);
  }
  if (isset($data['create product_category content'])) {
    $data['create product_category content']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['create product_category content']['roles']['EC SuperAdmin']);
  }
  if (isset($data['delete any product_category content'])) {
    $data['delete any product_category content']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['delete any product_category content']['roles']['EC SuperAdmin']);
  }
  if (isset($data['delete own product_category content'])) {
    $data['delete own product_category content']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['delete own product_category content']['roles']['EC SuperAdmin']);
  }
  if (isset($data['edit any product_category content'])) {
    $data['edit any product_category content']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['edit any product_category content']['roles']['EC SuperAdmin']);
  }
  if (isset($data['edit own product_category content'])) {
    $data['edit own product_category content']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    unset($data['edit own product_category content']['roles']['EC SuperAdmin']);
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
