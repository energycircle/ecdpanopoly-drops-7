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
    $data['content_editors']->data['attribute_plugins']['target']['enabled'] = 1; /* WAS: 0 */
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
      'award' => 0,
      'blog_post' => 0,
      'campaign_page' => 0,
      'case_study' => 0,
      'panopoly_page' => 0,
      'distinction' => 0,
      'distributor' => 0,
      'faq' => 0,
      'financing_option' => 0,
      'gallery' => 0,
      'panopoly_landing_page' => 0,
      'product_category' => 0,
      'product_page' => 0,
      'promotion' => 0,
      'service' => 0,
      'service_category' => 0,
      'service_group' => 0,
      'slide' => 0,
      'staff' => 0,
      'testimonial' => 0,
    ); /* WAS: '' */
    $data['content_editors']->data['entity:node']['group_by_bundle'] = 0; /* WAS: '' */
    $data['content_editors']->data['entity:taxonomy_term']['bundles'] = array(
      'panopoly_categories' => 0,
      'blog_categories' => 0,
      'slide_set' => 0,
      'article_types' => 0,
      'distinction_types' => 0,
      'departments' => 0,
      'award_types' => 0,
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
