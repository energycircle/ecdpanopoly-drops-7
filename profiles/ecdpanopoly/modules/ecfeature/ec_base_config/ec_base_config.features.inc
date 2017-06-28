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
  if (isset($data['user-user-field_user_about'])) {
    $data['user-user-field_user_about']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['user-user-field_user_about']['display']['default']['weight'] = 0; /* WAS: 1 */
    unset($data['user-user-field_user_about']['display']['default']['module']);
  }
  if (isset($data['user-user-field_user_picture'])) {
    $data['user-user-field_user_picture']['display']['default']['type'] = 'hidden'; /* WAS: 'image' */
    $data['user-user-field_user_picture']['display']['default']['weight'] = 1; /* WAS: 2 */
    unset($data['user-user-field_user_picture']['display']['default']['module']);
    unset($data['user-user-field_user_picture']['display']['default']['settings']['image_link']);
    unset($data['user-user-field_user_picture']['display']['default']['settings']['image_style']);
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
 * Implements hook_image_styles_alter().
 */
function ec_base_config_image_styles_alter(&$data) {
  if (isset($data['linkit_thumb'])) {

  if (!isset($data['linkit_thumb']['storage']) || $data['linkit_thumb']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['linkit_thumb']['effects'] = array_values($data['linkit_thumb']['effects']);
    $data['linkit_thumb']['label'] = 'linkit_thumb';
  }
  }
}

/**
 * Implements hook_default_linkit_profiles_alter().
 */
function ec_base_config_default_linkit_profiles_alter(&$data) {
  if (isset($data['content_editors'])) {
    $data['content_editors']->data['entity:entityform_type'] = array(
      'result_description' => '',
    ); /* WAS: '' */
    $data['content_editors']->data['entity:fieldable_panels_pane'] = array(
      'result_description' => '',
    ); /* WAS: '' */
    $data['content_editors']->data['entity:file']['url_type'] = 'entity'; /* WAS: '' */
    $data['content_editors']->data['entity:menu_link'] = array(
      'result_description' => '',
      'bundles' => array(
        'menu-auxiliary-menu' => 0,
        'devel' => 0,
        'features' => 0,
        'main-menu' => 0,
        'management' => 0,
        'navigation' => 0,
        'user-menu' => 0,
      ),
      'group_by_bundle' => 0,
    ); /* WAS: '' */
    $data['content_editors']->data['entity:node']['bundles'] = array(
      'article' => 0,
      'audience' => 0,
      'blog_post' => 0,
      'campaign_page' => 0,
      'case_study' => 0,
      'city_page' => 0,
      'panopoly_page' => 0,
      'distinction' => 0,
      'distributor' => 0,
      'external_form' => 0,
      'external_video' => 0,
      'faq' => 0,
      'financing_option' => 0,
      'gallery' => 0,
      'panopoly_landing_page' => 0,
      'product_category' => 0,
      'product_page' => 0,
      'promotion' => 0,
      'review_site' => 0,
      'service' => 0,
      'service_category' => 0,
      'service_group' => 0,
      'slide' => 0,
      'staff' => 0,
      'testimonial' => 0,
    ); /* WAS: '' */
    $data['content_editors']->data['entity:node']['group_by_bundle'] = 0; /* WAS: '' */
    $data['content_editors']->data['entity:taxonomy_term']['bundles'] = array(
      'article_types' => 0,
      'blog_categories' => 0,
      'distinction_types' => 0,
      'review_site_tags' => 0,
      'slide_set' => 0,
      'departments' => 0,
      'panopoly_categories' => 0,
    ); /* WAS: '' */
    $data['content_editors']->data['entity:taxonomy_term']['group_by_bundle'] = 0; /* WAS: '' */
    $data['content_editors']->data['insert_plugin']['url_method'] = 3; /* WAS: 2 */
    $data['content_editors']->data['search_plugins']['entity:entityform_type'] = array(
      'enabled' => 0,
      'weight' => -10,
    ); /* WAS: '' */
    $data['content_editors']->data['search_plugins']['entity:fieldable_panels_pane'] = array(
      'enabled' => 0,
      'weight' => -10,
    ); /* WAS: '' */
    $data['content_editors']->data['search_plugins']['entity:menu_link'] = array(
      'enabled' => 0,
      'weight' => -10,
    ); /* WAS: '' */
    $data['content_editors']->data['text_formats']['iframe'] = 0; /* WAS: '' */
    unset($data['content_editors']->data['entity:search_api_index']);
    unset($data['content_editors']->data['entity:search_api_server']);
    unset($data['content_editors']->data['search_plugins']['entity:search_api_index']);
    unset($data['content_editors']->data['search_plugins']['entity:search_api_server']);
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function ec_base_config_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['panopoly_html_text'])) {
    $data['panopoly_html_text']['preferences']['add_to_summaries'] = FALSE; /* WAS: 0 */
    $data['panopoly_html_text']['rdf_mapping'] = array(); /* WAS: '' */
    unset($data['panopoly_html_text']['settings']['theme']);
  }
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['rdf_mapping'] = array(); /* WAS: '' */
  }
}
