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
 * Implements hook_views_default_views_alter().
 */
function ec_casestudy_views_default_views_alter(&$data) {
  if (isset($data['gallery_slideshow_carousel'])) {
    $data['gallery_slideshow_carousel']->description = 'Case Study page Gallery slideshow with thumbnail navigation'; /* WAS: 'Used as a template for add thumbnail sliders. Make sure to clone and edit.' */
    $data['gallery_slideshow_carousel']->display['default']->display_options['arguments'] = array(
      'nid' => array(
        'id' => 'nid',
        'table' => 'node',
        'field' => 'nid',
        'relationship' => 'reverse_field_ref_case_study_gallery_node',
        'default_action' => 'default',
        'default_argument_type' => 'node',
        'summary' => array(
          'number_of_records' => 0,
          'format' => 'default_summary',
        ),
        'summary_options' => array(
          'items_per_page' => 25,
        ),
      ),
    ); /* WAS: '' */
    $data['gallery_slideshow_carousel']->display['default']->display_options['relationships'] = array(
      'reverse_field_ref_case_study_gallery_node' => array(
        'id' => 'reverse_field_ref_case_study_gallery_node',
        'table' => 'node',
        'field' => 'reverse_field_ref_case_study_gallery_node',
      ),
    ); /* WAS: '' */
    $data['gallery_slideshow_carousel']->display['panel_pane_2']->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE; /* WAS: '' */
    $data['gallery_slideshow_carousel']->display['panel_pane_2']->display_options['fields']['field_gallery_image']['label'] = ''; /* WAS: '' */
    $data['gallery_slideshow_carousel']->human_name = 'Case Study Gallery Slideshow'; /* WAS: 'Gallery Slideshow Carousel' */
    unset($data['gallery_slideshow_carousel']->display['panel_pane_1']->display_options['style_options']['captionfield']);
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
