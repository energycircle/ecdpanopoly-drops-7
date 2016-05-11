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
    $data['default']->options['animationLoop'] = 1; /* WAS: '' */
    $data['default']->options['controlNav'] = 0; /* WAS: '' */
    $data['default']->options['directionNav'] = 1; /* WAS: '' */
    $data['default']->options['keyboard'] = 1; /* WAS: '' */
    $data['default']->options['mousewheel'] = 0; /* WAS: '' */
    $data['default']->options['multipleKeyboard'] = 0; /* WAS: '' */
    $data['default']->options['pauseOnAction'] = 1; /* WAS: '' */
    $data['default']->options['pauseOnHover'] = 0; /* WAS: '' */
    $data['default']->options['pausePlay'] = 0; /* WAS: '' */
    $data['default']->options['randomize'] = 0; /* WAS: '' */
    $data['default']->options['reverse'] = 0; /* WAS: '' */
    $data['default']->options['slideshow'] = 1; /* WAS: '' */
    $data['default']->options['smoothHeight'] = 0; /* WAS: '' */
    $data['default']->options['thumbCaptions'] = 0; /* WAS: '' */
    $data['default']->options['thumbCaptionsBoth'] = 0; /* WAS: '' */
    $data['default']->options['touch'] = 1; /* WAS: '' */
    $data['default']->options['useCSS'] = 1; /* WAS: '' */
    $data['default']->options['video'] = 0; /* WAS: '' */
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
 * Implements hook_rdf_default_mappings().
 */
function ec_slide_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: slide
  $schemaorg['node']['slide'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  );

  // Exported RDF mapping: slide_set
  $schemaorg['taxonomy_term']['slide_set'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
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
