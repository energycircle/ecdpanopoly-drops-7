<?php
/**
 * @file
 * ec_external_forms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_external_forms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ec_external_forms_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_external_forms_node_info() {
  $items = array(
    'external_form' => array(
      'name' => t('External Form'),
      'base' => 'node_content',
      'description' => t('Used to embed forms from Solve 360, Infusionsoft, WuFu or Google forms. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
