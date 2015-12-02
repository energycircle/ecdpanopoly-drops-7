<?php
/**
 * @file
 * ec_slide.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_slide_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
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
function ec_slide_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flexslider_default_presets_alter().
 */
function ec_slide_flexslider_default_presets_alter(&$data) {
  if (isset($data['default'])) {
    $data['default']->options['animationLoop'] = 1; /* WAS: TRUE */
    $data['default']->options['controlNav'] = 0; /* WAS: 1 */
    $data['default']->options['directionNav'] = 1; /* WAS: TRUE */
    $data['default']->options['keyboard'] = 1; /* WAS: TRUE */
    $data['default']->options['mousewheel'] = 0; /* WAS: FALSE */
    $data['default']->options['multipleKeyboard'] = 0; /* WAS: FALSE */
    $data['default']->options['pauseOnAction'] = 1; /* WAS: TRUE */
    $data['default']->options['pauseOnHover'] = 0; /* WAS: FALSE */
    $data['default']->options['pausePlay'] = 0; /* WAS: FALSE */
    $data['default']->options['randomize'] = 0; /* WAS: FALSE */
    $data['default']->options['reverse'] = 0; /* WAS: FALSE */
    $data['default']->options['slideshow'] = 1; /* WAS: TRUE */
    $data['default']->options['smoothHeight'] = 0; /* WAS: FALSE */
    $data['default']->options['thumbCaptions'] = 0; /* WAS: FALSE */
    $data['default']->options['thumbCaptionsBoth'] = 0; /* WAS: FALSE */
    $data['default']->options['touch'] = 1; /* WAS: TRUE */
    $data['default']->options['useCSS'] = 1; /* WAS: TRUE */
    $data['default']->options['video'] = 0; /* WAS: FALSE */
    unset($data['default']->export_type);
    unset($data['default']->type);
  }
}

/**
 * Implements hook_image_styles_alter().
 */
function ec_slide_image_styles_alter(&$data) {
  if (isset($data['flexslider_full'])) {

  if (!isset($data['flexslider_full']['storage']) || $data['flexslider_full']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['flexslider_full']['effects'] = array_values($data['flexslider_full']['effects']);
    $data['flexslider_full']['label'] = 'flexslider_full';
  }
  }
  if (isset($data['flexslider_thumbnail'])) {

  if (!isset($data['flexslider_thumbnail']['storage']) || $data['flexslider_thumbnail']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['flexslider_thumbnail']['effects'] = array_values($data['flexslider_thumbnail']['effects']);
    $data['flexslider_thumbnail']['label'] = 'flexslider_thumbnail';
  }
  }
}

/**
 * Implements hook_node_info().
 */
function ec_slide_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => t('A slide to include in the home page slide set or another slide set.'),
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
function ec_slide_weight_features_default_settings() {
  $settings = array();

  $settings['slide'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
