<?php
/**
 * @file
 * ec_service_stack.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_service_stack_default_cer() {
  $items = array();
  $items['node:service_category:field_ref_serv_cat_promo*node:promotion:field_ref_promo_serv_cat'] = entity_import('cer', '{
    "identifier" : "node:service_category:field_ref_serv_cat_promo*node:promotion:field_ref_promo_serv_cat",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:service_category:field_ref_serv_cat_promo" } ] },
    "cer_right" : { "und" : [ { "path" : "node:promotion:field_ref_promo_serv_cat" } ] }
  }');
  $items['node:service_category:field_ref_serv_cat_services*node:service:field_ref_service_serv_cat'] = entity_import('cer', '{
    "identifier" : "node:service_category:field_ref_serv_cat_services*node:service:field_ref_service_serv_cat",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:service_category:field_ref_serv_cat_services" } ] },
    "cer_right" : { "und" : [ { "path" : "node:service:field_ref_service_serv_cat" } ] }
  }');
  $items['node:service_group:field_ref_serv_group_promo*node:promotion:field_ref_promo_serv_group'] = entity_import('cer', '{
    "identifier" : "node:service_group:field_ref_serv_group_promo*node:promotion:field_ref_promo_serv_group",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:service_group:field_ref_serv_group_promo" } ] },
    "cer_right" : { "und" : [ { "path" : "node:promotion:field_ref_promo_serv_group" } ] }
  }');
  $items['node:service_group:field_ref_serv_group_serv_cat*node:service_category:field_ref_serv_cat_serv_group'] = entity_import('cer', '{
    "identifier" : "node:service_group:field_ref_serv_group_serv_cat*node:service_category:field_ref_serv_cat_serv_group",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:service_group:field_ref_serv_group_serv_cat" } ] },
    "cer_right" : { "und" : [ { "path" : "node:service_category:field_ref_serv_cat_serv_group" } ] }
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_service_stack_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
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
      "roles" : { "1" : "1", "2" : "2", "3" : "3", "5" : "5", "4" : "4" },
      "resubmit_action" : "new",
      "redirect_path" : "schedule_service\\/thank_you",
      "instruction_pre" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "enable_block" : 0
    },
    "weight" : "0",
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
      'description' => t('A single service.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service_category' => array(
      'name' => t('Service Category'),
      'base' => 'node_content',
      'description' => t('A grouping of services. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service_group' => array(
      'name' => t('Service Group'),
      'base' => 'node_content',
      'description' => t('A group of service categories.  '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
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
