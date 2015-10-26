<?php
/**
 * @file
 * ec_external_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_external_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ec_external_video_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_roles_permissions_alter().
 */
function ec_external_video_default_roles_permissions_alter(&$data) {
  if (isset($data['EC Platinum admin'])) {
    $data['EC Platinum admin']['permissions']['create external_video content'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['delete own external_video content'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['edit any external_video content'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['edit own external_video content'] = TRUE; /* WAS: '' */
  }
  if (isset($data['administrator'])) {
    $data['administrator']['permissions']['create external_video content'] = TRUE; /* WAS: '' */
    $data['administrator']['permissions']['delete any external_video content'] = TRUE; /* WAS: '' */
    $data['administrator']['permissions']['delete own external_video content'] = TRUE; /* WAS: '' */
    $data['administrator']['permissions']['edit any external_video content'] = TRUE; /* WAS: '' */
    $data['administrator']['permissions']['edit own external_video content'] = TRUE; /* WAS: '' */
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function ec_external_video_user_default_permissions_alter(&$data) {
  if (isset($data['administer panelizer node external_video defaults'])) {
    unset($data['administer panelizer node external_video defaults']['module']);
  }
}

/**
 * Implements hook_node_info().
 */
function ec_external_video_node_info() {
  $items = array(
    'external_video' => array(
      'name' => t('External Video'),
      'base' => 'node_content',
      'description' => t('A video hosted on YouTube or Wistia'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
