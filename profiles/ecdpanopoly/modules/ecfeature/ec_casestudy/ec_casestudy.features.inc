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
    $data['node:case_study:default:default']->display->content['new-1126786f-4c05-4a8e-b5cc-2d078e0e3147']->position = 1; /* WAS: 3 */
    $data['node:case_study:default:default']->display->content['new-85ccb5cf-27c9-46f3-a39f-8b4f20d39cb2']->position = 0; /* WAS: 2 */
    $data['node:case_study:default:default']->display->content['new-905e2642-3f3f-49d4-923f-0dd613a046b1']->position = 3; /* WAS: 1 */
    $data['node:case_study:default:default']->display->content['new-9d978697-58b3-48a3-8879-6f3b3ad3b5dd']->position = 2; /* WAS: 0 */
    $data['node:case_study:default:default']->display->panels['two_66_33_first'][0] = 'new-85ccb5cf-27c9-46f3-a39f-8b4f20d39cb2'; /* WAS: 'new-9d978697-58b3-48a3-8879-6f3b3ad3b5dd' */
    $data['node:case_study:default:default']->display->panels['two_66_33_first'][1] = 'new-1126786f-4c05-4a8e-b5cc-2d078e0e3147'; /* WAS: 'new-905e2642-3f3f-49d4-923f-0dd613a046b1' */
    $data['node:case_study:default:default']->display->panels['two_66_33_first'][2] = 'new-9d978697-58b3-48a3-8879-6f3b3ad3b5dd'; /* WAS: 'new-85ccb5cf-27c9-46f3-a39f-8b4f20d39cb2' */
    $data['node:case_study:default:default']->display->panels['two_66_33_first'][3] = 'new-905e2642-3f3f-49d4-923f-0dd613a046b1'; /* WAS: 'new-1126786f-4c05-4a8e-b5cc-2d078e0e3147' */
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
