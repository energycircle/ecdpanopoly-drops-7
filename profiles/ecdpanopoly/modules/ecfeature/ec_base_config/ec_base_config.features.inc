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
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
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
  $items['contact_us'] = entity_import('entityform_type', '{
    "type" : "contact_us",
    "label" : "Contact Us",
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
      "submission_page_title" : "Thank you for contacting us!",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EIf a response is necessary, we will review your inquiry and get back to you as soon as possible.\\u003C\\/p\\u003E",
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
      "enable_block" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function ec_base_config_field_default_field_instances_alter(&$data) {
  if (isset($data['node-panopoly_page-field_featured_image'])) {
    $data['node-panopoly_page-field_featured_image']['default_value'] = array(); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['default']['type'] = 'hidden'; /* WAS: 'image' */
    $data['node-panopoly_page-field_featured_image']['display']['default']['weight'] = 3; /* WAS: 0 */
    $data['node-panopoly_page-field_featured_image']['display']['featured']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['featured']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['featured']['settings']['field_multiple_limit_order'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['search_result']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['search_result']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['search_result']['settings']['field_multiple_limit_order'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['show_this_block'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 12,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['teaser']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['teaser']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['teaser']['settings']['field_multiple_limit_order'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['module'] = 'media'; /* WAS: 'image' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['allowed_schemes'] = array(
      'public' => 'public',
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['allowed_types'] = array(
      'image' => 'image',
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['browser_plugins'] = array(); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['type'] = 'media_generic'; /* WAS: 'image_image' */
    $data['node-panopoly_page-field_featured_image']['widget']['weight'] = 3; /* WAS: 1 */
    unset($data['node-panopoly_page-field_featured_image']['display']['default']['module']);
    unset($data['node-panopoly_page-field_featured_image']['display']['default']['settings']['image_link']);
    unset($data['node-panopoly_page-field_featured_image']['display']['default']['settings']['image_style']);
  }
}

/**
 * Implements hook_file_default_displays_alter().
 */
function ec_base_config_file_default_displays_alter(&$data) {
  if (isset($data['video__default__file_field_file_video'])) {
    $data['video__default__file_field_file_video']->settings['muted'] = 0; /* WAS: '' */
    $data['video__default__file_field_file_video']->settings['preload'] = ''; /* WAS: '' */
    $data['video__default__file_field_file_video']->weight = -40; /* WAS: 50 */
  }
  if (isset($data['video__default__media_vimeo_video'])) {
    $data['video__default__media_vimeo_video']->weight = -47; /* WAS: 0 */
  }
  if (isset($data['video__default__media_youtube_video'])) {
    $data['video__default__media_youtube_video']->settings['captions'] = FALSE; /* WAS: '' */
    $data['video__default__media_youtube_video']->weight = -49; /* WAS: 0 */
  }
}

/**
 * Implements hook_file_default_types_alter().
 */
function ec_base_config_file_default_types_alter(&$data) {
  if (isset($data['video'])) {
    $data['video']->disabled = FALSE; /* WAS: '' */
    $data['video']->mimetypes[1] = 'video/vimeo'; /* WAS: '' */
    $data['video']->mimetypes[2] = 'video/youtube'; /* WAS: '' */
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function ec_base_config_filter_default_formats_alter(&$data) {
  if (isset($data['panopoly_html_text'])) {
    $data['panopoly_html_text']['cache'] = 0; /* WAS: 1 */
    $data['panopoly_html_text']['filters']['filter_tokens'] = array(
      'settings' => array(),
      'status' => 1,
      'weight' => 0,
    ); /* WAS: '' */
    unset($data['panopoly_html_text']['filters']['wysiwyg']);
  }
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['cache'] = 0; /* WAS: 1 */
    $data['panopoly_wysiwyg_text']['filters']['filter_tokens'] = array(
      'settings' => array(),
      'status' => 1,
      'weight' => 0,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function ec_base_config_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['panopoly_html_text'])) {
    $data['panopoly_html_text']['rdf_mapping'] = array(); /* WAS: '' */
  }
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['rdf_mapping'] = array(); /* WAS: '' */
  }
}
