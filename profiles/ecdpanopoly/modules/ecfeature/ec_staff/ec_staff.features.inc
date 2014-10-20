<?php
/**
 * @file
 * ec_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_staff_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function ec_staff_default_entityform_type() {
  $items = array();
  $items['join_our_team'] = entity_import('entityform_type', '{
    "type" : "join_our_team",
    "label" : "Join Our Team",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "submit_button_text" : "Get Started",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Thanks for contacting Tom Rostron Heating and Air Conditioning!",
      "submission_text" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3", "5" : "5", "4" : "4" },
      "resubmit_action" : "new",
      "redirect_path" : "join_our_team\\/thank-you",
      "instruction_pre" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "current_type" : "join_our_team",
      "enable_block" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
