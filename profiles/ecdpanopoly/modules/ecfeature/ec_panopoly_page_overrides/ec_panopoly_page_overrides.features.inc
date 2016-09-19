<?php
/**
 * @file
 * ec_panopoly_page_overrides.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_panopoly_page_overrides_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_panopoly_page_overrides_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_strongarm_alter().
 */
function ec_panopoly_page_overrides_strongarm_alter(&$data) {
  if (isset($data['panelizer_defaults_node_panopoly_page'])) {
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['default']['choice'] = 1; /* WAS: 0 */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['featured']['status'] = 0; /* WAS: 1 */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['grouped_teaser'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['page_manager']['status'] = 0; /* WAS: 1 */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['show_this_block'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['teaser']['status'] = 0; /* WAS: 1 */
    unset($data['panelizer_defaults_node_panopoly_page']->value['view modes']['search_result']['substitute']);
  }
}

/**
 * Implements hook_rdf_default_mappings().
 */
function ec_panopoly_page_overrides_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: panopoly_page
  $schemaorg['node']['panopoly_page'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
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
        0 => 'schema:name',
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
    'field_call_to_action' => array(
      'predicates' => array(),
    ),
    'field_featured_image' => array(
      'predicates' => array(
        0 => 'schema:primaryImageOfPage',
        1 => 'foaf:primaryImage',
      ),
      'type' => 'rel',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_panopoly_page_overrides_weight_features_default_settings() {
  $settings = array();

  $settings['panopoly_page'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
