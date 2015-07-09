<?php
/**
 * @file
 * ec_conference_tracks_sessions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_conference_tracks_sessions_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_conference_tracks_sessions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function ec_conference_tracks_sessions_default_entityform_type() {
  $items = array();
  $items['conference_ambassador_sign_up'] = entity_import('entityform_type', '{
    "type" : "conference_ambassador_sign_up",
    "label" : "Conference Ambassador Sign Up",
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
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "5" : "5", "3" : "3", "6" : "6", "4" : "4" },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EYes! I\\u0027m interested in becoming a Conference Ambassador and promoting ACI\\u0027s excellent educational and networking events.\\u003C\\/p\\u003E",
        "format" : "panopoly_wysiwyg_text"
      },
      "enable_block" : 1
    },
    "weight" : "0",
    "metatags" : [],
    "paths" : []
  }');
  $items['conference_mobile_app_banner_ad'] = entity_import('entityform_type', '{
    "type" : "conference_mobile_app_banner_ad",
    "label" : "Conference Mobile App Banner Ad",
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
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "5" : "5", "3" : "3", "6" : "6", "4" : "4" },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cdiv\\u003E\\u003Cdiv\\u003E\\u003Cdiv\\u003E\\u003Cp\\u003EGet your company name in front of home performance professionals from every sector through a conference mobile app banner ad at the \\u003Ca href=\\u0022http:\\/\\/www.affordablecomfort.org\\/national2014\\u0022 target=\\u0022_blank\\u0022\\u003E2014 ACI National Home Performance Conference \\u0026amp; Trade Show\\u003C\\/a\\u003E! The conference mobile app banner ad includes a rotating banner advertisement with a link to your website and post-event analytics. Reach contractors, HVAC professionals, remodelers, utilities, manufacturers, program implementers, and beyond!\\u003C\\/p\\u003E\\u003Cp\\u003EConference Mobile App Banner Ad Price: $1,500\\u003C\\/p\\u003E\\u003Cp\\u003EYes! I\\u0027d like to be contacted by Jim Browne, ACI\\u0027s director of business development, to discuss this exciting opportunity.\\u0026nbsp;\\u003C\\/p\\u003E\\u003C\\/div\\u003E\\u003C\\/div\\u003E\\u003C\\/div\\u003E",
        "format" : "panopoly_wysiwyg_text"
      },
      "enable_block" : 1
    },
    "weight" : "0",
    "metatags" : [],
    "paths" : []
  }');
  $items['volunteer_at_a_conference'] = entity_import('entityform_type', '{
    "type" : "volunteer_at_a_conference",
    "label" : "Volunteer at a Conference",
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
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "5" : "5", "3" : "3", "6" : "6", "4" : "4" },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EYes! \\u0026nbsp;I would like to Volunteer at your conference.\\u003C\\/p\\u003E",
        "format" : "panopoly_wysiwyg_text"
      },
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
function ec_conference_tracks_sessions_node_info() {
  $items = array(
    'conference_event' => array(
      'name' => t('Conference Event'),
      'base' => 'node_content',
      'description' => t('A special event at a conference, such as an evening event, outing, or other event to be included in the special events schedule. (Not for sessions or workshops)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'conference_schedule' => array(
      'name' => t('Conference Schedule'),
      'base' => 'node_content',
      'description' => t('A landing page for a major conference\'s schedule'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => t('A regular session in a conference track (not used for a workshop, demo, or other special event).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'track' => array(
      'name' => t('Track'),
      'base' => 'node_content',
      'description' => t('A conference track, associated with one or more conferences.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Enter the track name including the track number. Example: "Track 1: Homes"'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_conference_tracks_sessions_weight_features_default_settings() {
  $settings = array();

  $settings['conference'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['conference_details'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['conference_event'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['conference_schedule'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['track'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
