<?php
/**
 * @file
 * ec_custom_dashboard.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ec_custom_dashboard_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Custom Dashboard',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'panopoly_page',
  'language' => 'und',
  'created' => 1475688081,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '55093536-d0c6-4c5d-878e-cb8984c8ef59',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This is going to be the custom dashboard</p>',
        'summary' => '',
        'format' => 'panopoly_wysiwyg_text',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_featured_categories' => array(),
  'field_featured_image' => array(),
  'field_featured_status' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_button_text' => array(),
  'field_call_to_action' => array(
    'und' => array(
      0 => array(
        'value' => '<p></p><p><a href="tel:15555555555">1 (555) 555-5555</a></p><p></p>',
        'format' => 'panopoly_wysiwyg_text',
      ),
    ),
  ),
  'field_featured_video' => array(),
  'field_ref_to_cta_form' => array(),
  'field_ref_page_blog' => array(),
  'field_ref_page_faq' => array(),
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
    'field_call_to_action' => array(
      'predicates' => array(),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'panelizer' => array(
    'default' => array(
      'entity_type' => 'node',
      'view_mode' => 'default',
      'name' => NULL,
      'css_id' => '',
      'css_class' => 'page-default',
      'css' => '',
      'no_blocks' => 0,
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(
        'panels_breadcrumbs_state' => 1,
        'panels_breadcrumbs_titles' => '',
        'panels_breadcrumbs_paths' => '',
        'panels_breadcrumbs_home' => 0,
      ),
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did_uuid' => '10c9e351-f69c-4629-b191-77b8b01f4f1c',
    ),
  ),
  'machine_name' => FALSE,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-10-05 13:21:21 -0400',
  'user_uuid' => 'fff361cd-7794-40b8-8586-24c19af63380',
);
  return $nodes;
}
