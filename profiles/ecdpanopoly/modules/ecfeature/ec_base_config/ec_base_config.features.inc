<?php
/**
 * @file
 * ec_base_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_base_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function ec_base_config_default_entityform_type() {
  $items = array();
  $items['contact'] = entity_import('entityform_type', '{
    "type" : "contact",
    "label" : "Contact",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "submit_button_text" : "Contact Us",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Thanks for contacting Tom Rostron Heating and Air Conditioning!",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EWe\\u0027re excited to hear from you! We\\u0027ll be in touch within 24 hours. For an immediate response or emergency service, please call 732-223-8221\\u003C\\/p\\u003E",
        "format" : "panopoly_wysiwyg_text"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3", "5" : "5", "4" : "4" },
      "resubmit_action" : "confirm",
      "redirect_path" : "contact\\/thank-you",
      "instruction_pre" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "current_type" : "contact",
      "enable_block" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}