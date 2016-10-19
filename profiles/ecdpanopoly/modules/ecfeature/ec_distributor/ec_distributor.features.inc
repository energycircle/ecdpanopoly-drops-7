<?php
/**
 * @file
 * ec_distributor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_distributor_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_distributor_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_roles_permissions_alter().
 */
function ec_distributor_default_roles_permissions_alter(&$data) {
  if (isset($data['EC Platinum admin'])) {
    $data['EC Platinum admin']['permissions']['create distributor content'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['delete any distributor content'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['delete own distributor content'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['edit any distributor content'] = TRUE; /* WAS: '' */
    $data['EC Platinum admin']['permissions']['edit own distributor content'] = TRUE; /* WAS: '' */
  }
  if (isset($data['EC Platinum editor'])) {
    $data['EC Platinum editor']['permissions']['create distributor content'] = TRUE; /* WAS: '' */
    $data['EC Platinum editor']['permissions']['delete own distributor content'] = TRUE; /* WAS: '' */
    $data['EC Platinum editor']['permissions']['edit any distributor content'] = TRUE; /* WAS: '' */
    $data['EC Platinum editor']['permissions']['edit own distributor content'] = TRUE; /* WAS: '' */
  }
  if (isset($data['administrator'])) {
    $data['administrator']['permissions']['create distributor content'] = TRUE; /* WAS: '' */
    $data['administrator']['permissions']['delete any distributor content'] = TRUE; /* WAS: '' */
    $data['administrator']['permissions']['delete own distributor content'] = TRUE; /* WAS: '' */
    $data['administrator']['permissions']['edit any distributor content'] = TRUE; /* WAS: '' */
    $data['administrator']['permissions']['edit own distributor content'] = TRUE; /* WAS: '' */
  }
}

/**
 * Implements hook_node_info().
 */
function ec_distributor_node_info() {
  $items = array(
    'distributor' => array(
      'name' => t('Distributor'),
      'base' => 'node_content',
      'description' => t('Used to display distributors on the site as well as pull them into other content.'),
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
function ec_distributor_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: distributor
  $schemaorg['node']['distributor'] = array(
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
function ec_distributor_weight_features_default_settings() {
  $settings = array();

  $settings['distributor'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
