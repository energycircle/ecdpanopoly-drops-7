<?php
/**
 * @file
 * ec_service_stack.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ec_service_stack_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Schedule Service',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'panopoly_page',
  'language' => 'und',
  'created' => 1491400471,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b89ebaed-31eb-4807-8c68-ccb85e55d1ca',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Use the contact form below to request a scheduled appointment.&nbsp;</p>',
        'summary' => '',
        'format' => 'panopoly_wysiwyg_text',
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
  'field_button_text' => array(
    'und' => array(
      0 => array(
        'value' => 'Request Appointment',
        'format' => NULL,
      ),
    ),
  ),
  'field_call_to_action' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This is a CALL TO ACTION example<br><a href="tel:15555555555">1 (555) 555-5555</a></p>',
        'format' => 'panopoly_wysiwyg_text',
      ),
    ),
  ),
  'field_featured_video' => array(),
  'field_ref_to_cta_form' => array(
    'und' => array(
      0 => array(
        'target_id' => 3,
      ),
    ),
  ),
  'field_a_b_reason_for_testing' => array(),
  'field_a_b_reference_page' => array(),
  'field_a_b_test_page' => array(),
  'field_ref_page_blog' => array(),
  'field_ref_page_case_study' => array(),
  'field_ref_page_faq' => array(),
  'field_ref_page_testimonial' => array(),
  'field_ref_page_promotions' => array(),
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
    'pathauto' => 0,
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
      'extra' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did_uuid' => '10c9e351-f69c-4629-b191-77b8b01f4f1c',
    ),
  ),
  'content_experiments' => '',
  'machine_name' => FALSE,
  'pathauto_perform_alias' => FALSE,
  'date' => '2017-04-05 09:54:31 -0400',
  'user_uuid' => '2eab63da-865c-476e-b863-6010d0487c6e',
);
  return $nodes;
}
