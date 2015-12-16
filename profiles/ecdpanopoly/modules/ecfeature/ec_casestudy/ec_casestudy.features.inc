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
 * Implements hook_field_group_info_alter().
 */
function ec_casestudy_field_group_info_alter(&$data) {
  if (isset($data['group_citypages_shown_this_page|node|city_page|form'])) {
    $data['group_citypages_shown_this_page|node|city_page|form']->data['children'][1] = 'field_ref_citypages_case_study'; /* WAS: '' */
    $data['group_citypages_shown_this_page|node|city_page|form']->data['children'][2] = 'field_ref_citypages_testimonials'; /* WAS: '' */
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
 * Implements hook_rdf_default_mappings().
 */
function ec_casestudy_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: case_study
  $schemaorg['node']['case_study'] = array(
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

  return $schemaorg;
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
