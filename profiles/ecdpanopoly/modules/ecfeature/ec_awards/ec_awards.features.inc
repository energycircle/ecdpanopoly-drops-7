<?php
/**
 * @file
 * ec_awards.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_awards_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_awards_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function ec_awards_default_entityform_type() {
  $items = array();
  $items['award_nomination_form'] = entity_import('entityform_type', '{
    "type" : "award_nomination_form",
    "label" : "Award Nomination Form",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "plain_text" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "plain_text" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "5" : "5", "3" : "3", "6" : "6", "4" : "4", "1" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "Thanks for putting your thought and your time into nominating someone for a NESEA award.",
        "format" : "plain_text"
      },
      "enable_block" : 1
    },
    "weight" : "0",
    "metatags" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/award-nomination-form",
        "alias" : "award\\/nomination-form",
        "language" : "und"
      }
    }
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function ec_awards_node_info() {
  $items = array(
    'award' => array(
      'name' => t('Award'),
      'base' => 'node_content',
      'description' => t('An award such as  Zero Net Energy Contest Winner, or Zero Net Energy Contest Runner-up'),
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
function ec_awards_weight_features_default_settings() {
  $settings = array();

  $settings['award'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
