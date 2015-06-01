<?php
/**
 * @file
 * ec_promotions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_promotions_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_promotions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function ec_promotions_default_entityform_type() {
  $items = array();
  $items['promotion'] = entity_import('entityform_type', '{
    "type" : "promotion",
    "label" : "Promotion",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "submit_button_text" : "Claim This Offer",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Congratulations on claiming this promotion! ",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EWe\\u0027re excited to hear from you! We\\u0027ll be in touch within 24 hours. For an immediate response or emergency service, please call us\\u003C\\/p\\u003E",
        "format" : "panopoly_wysiwyg_text"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : 0, "5" : 0, "4" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "promotion\\/thank-you",
      "instruction_pre" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "current_type" : "promotion",
      "enable_block" : 1
    },
    "weight" : "0",
    "metatags" : [],
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function ec_promotions_node_info() {
  $items = array(
    'promotion' => array(
      'name' => t('Promotion'),
      'base' => 'node_content',
      'description' => t('A sale, special listing, or other promotion'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_promotions_weight_features_default_settings() {
  $settings = array();

  $settings['promotion'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
