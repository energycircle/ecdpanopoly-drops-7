<?php
/**
 * @file
 * ec_service_stack.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_service_stack_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
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
function ec_service_stack_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function ec_service_stack_default_entityform_type() {
  $items = array();
  $items['schedule_service'] = entity_import('entityform_type', '{
    "type" : "schedule_service",
    "label" : "Schedule Service",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "submit_button_text" : "ButtonText",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "\\u003Cnone\\u003E",
      "submission_text" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "5" : "5", "3" : "3", "4" : "4" },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "enable_block" : 0
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  $items['schedule_service_w_address'] = entity_import('entityform_type', '{
    "type" : "schedule_service_w_address",
    "label" : "Schedule Service w\\/Address",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "submit_button_text" : "ButtonText",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "\\u003Cnone\\u003E",
      "submission_text" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3", "5" : "5", "6" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "enable_block" : 0
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
function ec_service_stack_node_info() {
  $items = array(
    'service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => t('A single service page, ex. AC Maintenance, Air Sealing, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service_category' => array(
      'name' => t('Service Category'),
      'base' => 'node_content',
      'description' => t('A group of services pages on a similar topic, ex. Home Efficiency Services, Heating & Cooling, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service_group' => array(
      'name' => t('Service Group'),
      'base' => 'node_content',
      'description' => t('A group of service categories, useful for when another level of division is needed in service offerings.'),
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
function ec_service_stack_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: schedule_service_w_address
  $schemaorg['entityform']['schedule_service_w_address'] = array(
    'field_name' => array(
      'predicates' => array(),
    ),
    'field_phone' => array(
      'predicates' => array(),
    ),
    'field_email' => array(
      'predicates' => array(),
    ),
    'field_address' => array(
      'predicates' => array(),
    ),
    'field_page_tracking' => array(
      'predicates' => array(),
    ),
    'field_i_need' => array(
      'predicates' => array(),
    ),
  );

  // Exported RDF mapping: service
  $schemaorg['node']['service'] = array(
    'rdftype' => array(
      0 => 'schema:Service',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
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
        0 => 'schema:articleBody',
        1 => 'content:encoded',
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
    'field_display_subtitle' => array(
      'predicates' => array(
        0 => 'schema:availableService',
      ),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_service_image' => array(
      'predicates' => array(
        0 => 'schema:primaryImageOfPage',
      ),
      'type' => 'rel',
    ),
    'field_featured_video' => array(
      'predicates' => array(
        0 => 'schema:video',
      ),
    ),
    'field_ref_service_serv_cat' => array(
      'predicates' => array(
        0 => 'schema:serviceType',
      ),
    ),
    'field_ref_service_blog' => array(
      'predicates' => array(
        0 => 'schema:associatedArticle',
      ),
    ),
    'field_ref_service_faq' => array(
      'predicates' => array(
        0 => 'schema:associatedArticle',
      ),
    ),
    'field_ref_service_testimonial' => array(
      'predicates' => array(
        0 => 'schema:reviews',
      ),
    ),
    'field_ref_service_promo' => array(
      'predicates' => array(
        0 => 'schema:offers',
      ),
    ),
    'field_a_b_test_page' => array(
      'predicates' => array(),
    ),
    'field_call_to_action' => array(
      'predicates' => array(),
    ),
    'field_ref_to_cta_form' => array(
      'predicates' => array(),
    ),
    'field_service_icon' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_ref_external_form' => array(
      'predicates' => array(),
    ),
  );

  // Exported RDF mapping: service_category
  $schemaorg['node']['service_category'] = array(
    'rdftype' => array(
      0 => 'schema:Service',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
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
        0 => 'schema:articleBody',
        1 => 'content:encoded',
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
    'field_display_subtitle' => array(
      'predicates' => array(
        0 => 'schema:availableService',
      ),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_service_category_image' => array(
      'predicates' => array(
        0 => 'schema:primaryImageOfPage',
      ),
      'type' => 'rel',
    ),
    'field_featured_video' => array(
      'predicates' => array(
        0 => 'schema:video',
      ),
    ),
    'field_ref_serv_cat_services' => array(
      'predicates' => array(
        0 => 'schema:availableService',
      ),
    ),
    'field_ref_serv_cat_blog' => array(
      'predicates' => array(
        0 => 'schema:associatedArticle',
      ),
    ),
    'field_ref_serv_cat_case_study' => array(
      'predicates' => array(
        0 => 'schema:associatedArticle',
      ),
    ),
    'field_ref_serv_cat_promo' => array(
      'predicates' => array(
        0 => 'schema:offers',
      ),
    ),
    'field_ref_serv_cat_testimonial' => array(
      'predicates' => array(
        0 => 'schema:reviews',
      ),
    ),
    'field_ref_serv_cat_faq' => array(
      'predicates' => array(
        0 => 'schema:associatedArticle',
      ),
    ),
    'field_a_b_test_page' => array(
      'predicates' => array(),
    ),
    'field_call_to_action' => array(
      'predicates' => array(),
    ),
    'field_ref_to_cta_form' => array(
      'predicates' => array(),
    ),
    'field_service_category_icon' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
  );

  // Exported RDF mapping: service_group
  $schemaorg['node']['service_group'] = array(
    'rdftype' => array(
      0 => 'schema:ServiceChannel',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
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
        0 => 'schema:articleBody',
        1 => 'content:encoded',
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
    'field_service_group_image' => array(
      'predicates' => array(
        0 => 'schema:primaryImageOfPage',
      ),
      'type' => 'rel',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_ref_serv_group_serv_cat' => array(
      'predicates' => array(
        0 => 'schema:serviceType',
      ),
    ),
    'field_ref_serv_group_blog' => array(
      'predicates' => array(
        0 => 'schema:associatedArticle',
      ),
    ),
    'field_ref_serv_group_case_study' => array(
      'predicates' => array(
        0 => 'schema:associatedArticle',
      ),
    ),
    'field_ref_serv_group_promo' => array(
      'predicates' => array(
        0 => 'schema:offers',
      ),
    ),
    'field_ref_serv_group_testimonial' => array(
      'predicates' => array(
        0 => 'schema:reviews',
      ),
    ),
    'field_ref_serv_group_faq' => array(
      'predicates' => array(
        0 => 'schema:associatedArticle',
      ),
    ),
    'field_a_b_test_page' => array(
      'predicates' => array(),
    ),
    'field_call_to_action' => array(
      'predicates' => array(),
    ),
    'field_ref_to_cta_form' => array(
      'predicates' => array(),
    ),
    'field_service_group_icon' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_service_stack_weight_features_default_settings() {
  $settings = array();

  $settings['service'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['service_category'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['service_group'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
