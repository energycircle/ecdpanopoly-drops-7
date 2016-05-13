<?php
/**
 * @file
 * ec_service_review_system.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_service_review_system_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_service_review_system_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function ec_service_review_system_default_entityform_type() {
  $items = array();
  $items['sreview'] = entity_import('entityform_type', '{
    "type" : "sreview",
    "label" : "Service Review",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "5" : 0, "3" : 0, "6" : 0, "4" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "enable_block" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function ec_service_review_system_node_info() {
  $items = array(
    'sreview_site' => array(
      'name' => t('Service Review Site'),
      'base' => 'node_content',
      'description' => t('Used to display links to sites that manage customer reviews. Usually only one node will be created for this content type. '),
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
function ec_service_review_system_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: sreview
  $schemaorg['entityform']['sreview'] = array(
    'field_sreview_step1' => array(
      'predicates' => array(),
    ),
    'field_sreview_email' => array(
      'predicates' => array(),
    ),
    'field_sreview_name' => array(
      'predicates' => array(),
    ),
    'field_sreview_city' => array(
      'predicates' => array(),
    ),
    'field_testimonial_city' => array(
      'predicates' => array(),
    ),
    'field_sreview_step2' => array(
      'predicates' => array(),
    ),
    'field_sreview_services' => array(
      'predicates' => array(),
    ),
    'field_sreview_step3' => array(
      'predicates' => array(),
    ),
    'field_sreview_ratinglabels' => array(
      'predicates' => array(),
    ),
    'field_sreview_rating' => array(
      'predicates' => array(),
    ),
    'field_sreview_step4' => array(
      'predicates' => array(),
    ),
    'field_sreview_review' => array(
      'predicates' => array(),
    ),
    'field_sreview_zipcode' => array(
      'predicates' => array(),
    ),
    'field_sreview_tags' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_send_high_rating_followup_' => array(
      'predicates' => array(),
    ),
    'field_sreview_send_email' => array(
      'predicates' => array(),
    ),
    'field_sreview_email_sent' => array(
      'predicates' => array(),
    ),
  );

  // Exported RDF mapping: sreview_site
  $schemaorg['node']['sreview_site'] = array(
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
    'field_sreview_logo' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_sreview_page' => array(
      'predicates' => array(),
    ),
  );

  // Exported RDF mapping: service_review_tags
  $schemaorg['taxonomy_term']['service_review_tags'] = array(
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
