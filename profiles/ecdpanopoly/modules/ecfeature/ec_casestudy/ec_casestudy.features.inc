<?php
/**
 * @file
 * ec_casestudy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_casestudy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
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
function ec_casestudy_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function ec_casestudy_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:case_study:default:default'])) {
    $data['node:case_study:default:default']->display->title_pane = 'new-b84ebfba-7d4c-40cb-b4dc-488daad43ae6'; /* WAS: 0 */
  }
}

/**
 * Implements hook_default_roles_permissions_alter().
 */
function ec_casestudy_default_roles_permissions_alter(&$data) {
  if (isset($data['EC Platinum admin'])) {
    $data['EC Platinum admin']['permissions']['administer panelizer node case_study breadcrumbs'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node case_study context'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node case_study defaults'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node case_study overview'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['administer panelizer node case_study settings'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['delete own case_study content'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['edit own case_study content'] = TRUE; /* WAS: '' */
  }
  if (isset($data['EC Platinum editor'])) {
    unset($data['EC Platinum editor']['permissions']['administer panelizer node case_study content']);
  }
}

/**
 * Implements hook_node_info().
 */
function ec_casestudy_node_info() {
  $items = array(
    'case_study' => array(
      'name' => t('Case Study'),
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
function ec_casestudy_weight_features_default_settings() {
  $settings = array();

  $settings['case_study'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
