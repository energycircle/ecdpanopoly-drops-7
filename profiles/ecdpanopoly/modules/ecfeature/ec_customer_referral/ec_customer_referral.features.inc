<?php
/**
 * @file
 * ec_customer_referral.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_customer_referral_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function ec_customer_referral_default_entityform_type() {
  $items = array();
  $items['customer_referral'] = entity_import('entityform_type', '{
    "type" : "customer_referral",
    "label" : "Customer Referral",
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
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for referring friends! We look forward to offering our services.\\u003C\\/p\\u003E",
        "format" : "panopoly_wysiwyg_text"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "5" : 0, "3" : 0, "6" : 0, "4" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "current_type" : "customer_referral",
      "enable_block" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function ec_customer_referral_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: customer_referral
  $schemaorg['entityform']['customer_referral'] = array(
    'field_ec_referral_referrer_email' => array(
      'predicates' => array(),
    ),
    'field_ec_referral_referrer_name' => array(
      'predicates' => array(),
    ),
    'field_ec_referral_refer_friend' => array(
      'predicates' => array(),
    ),
  );

  return $schemaorg;
}
