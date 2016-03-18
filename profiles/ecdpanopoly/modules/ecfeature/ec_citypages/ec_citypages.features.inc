<?php
/**
 * @file
 * ec_citypages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_citypages_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_citypages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_citypages_node_info() {
  $items = array(
    'city_page' => array(
      'name' => t('City Page'),
      'base' => 'node_content',
      'description' => t('A landing page for a locality in the service area.'),
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
function ec_citypages_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: city_page
  $schemaorg['node']['city_page'] = array(
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
    'field_citypages_area' => array(
      'predicates' => array(),
    ),
    'field_citypages_pin' => array(
      'predicates' => array(),
    ),
    'field_citypages_image' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_call_to_action' => array(
      'predicates' => array(),
    ),
    'field_ref_to_cta_form' => array(
      'predicates' => array(),
    ),
    'field_button_text' => array(
      'predicates' => array(),
    ),
    'field_citypages_other_descriptio' => array(
      'predicates' => array(),
    ),
  );

  return $schemaorg;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_citypages_weight_features_default_settings() {
  $settings = array();

  $settings['city_page'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
