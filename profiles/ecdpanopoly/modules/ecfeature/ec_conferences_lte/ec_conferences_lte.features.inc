<?php
/**
 * @file
 * ec_conferences_lte.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_conferences_lte_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_conferences_lte_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_conferences_lte_node_info() {
  $items = array(
    'conference' => array(
      'name' => t('Conference'),
      'base' => 'node_content',
      'description' => t('A major conference event (not for local events).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'conference_details' => array(
      'name' => t('Conference Details'),
      'base' => 'node_content',
      'description' => t('A detail page for a conference. Be sure to enter the menu item and menu parent, if you want this page to appear in the sidebar menu for the conference.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'venue' => array(
      'name' => t('Venue'),
      'base' => 'node_content',
      'description' => t('A conference location.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
