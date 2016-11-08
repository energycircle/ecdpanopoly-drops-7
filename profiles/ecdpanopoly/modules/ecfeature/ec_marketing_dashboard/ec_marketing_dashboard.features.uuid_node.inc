<?php
/**
 * @file
 * ec_marketing_dashboard.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ec_marketing_dashboard_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Custom Dashboard',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'panopoly_landing_page',
  'language' => 'und',
  'created' => 1478538153,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '816df285-dd57-45b9-a2bd-08e22de6d218',
  'field_a_b_test_page' => array(),
  'rdf_mapping' => array(
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
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'view_mode' => 'page_manager',
      'name' => NULL,
      'css_id' => '',
      'css_class' => 'panopoly-landing-page',
      'css' => '',
      'no_blocks' => 0,
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'did_uuid' => '5464da8b-9174-42e0-9e98-90cca0a8c98f',
    ),
  ),
  'content_experiments' => '',
  'machine_name' => FALSE,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-11-07 12:02:33 -0500',
  'user_uuid' => '6252500c-de30-4d0d-984d-e080ea5b0932',
);
  return $nodes;
}
