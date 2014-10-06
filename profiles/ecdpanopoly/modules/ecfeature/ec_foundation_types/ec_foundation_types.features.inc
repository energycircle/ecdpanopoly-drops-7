<?php
/**
 * @file
 * ec_foundation_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_foundation_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
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
 * Implements hook_views_api().
 */
function ec_foundation_types_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function ec_foundation_types_default_entityform_type() {
  $items = array();
  $items['campaign_form'] = entity_import('entityform_type', '{
    "type" : "campaign_form",
    "label" : "Campaign Form",
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
      "redirect_path" : "campaign\\/thank_you?=[current-page:title]",
      "instruction_pre" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "enable_block" : 0
    },
    "weight" : "0",
    "paths" : []
  }');
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
        "value" : "\\u003Cp\\u003EWe\\u0027re excited to hear from you! We\\u0027ll be in touch within 24 hours. For an immediate response or emergency service, please call 732-223-8221\\u003C\\/p\\u003E",
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
    "paths" : []
  }');
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
function ec_foundation_types_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('A news story, press release, or other type of article.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'campaign_page' => array(
      'name' => t('Campaign Page'),
      'base' => 'node_content',
      'description' => t('Used as a one-off promotion landing page that is combined with a marketing initiative to drive traffic. These pages will have no menu link and excluded from the sitemap.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'case_study' => array(
      'name' => t('Case Study'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'distinction' => array(
      'name' => t('Distinction'),
      'base' => 'node_content',
      'description' => t('A certification, membership, award, partner, etc. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('A photo set to be displayed as a photo gallery or similar display type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_page' => array(
      'name' => t('Product Page'),
      'base' => 'node_content',
      'description' => t('A page to display general information about a product.  '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'promotion' => array(
      'name' => t('Promotion'),
      'base' => 'node_content',
      'description' => t('A sale, special listing, or other promotion'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => t('A slide to include in the home page slide set or another slide set.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'staff' => array(
      'name' => t('Staff'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('A customer testimonial, including text, image, and/or video'),
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
function ec_foundation_types_weight_features_default_settings() {
  $settings = array();

  $settings['article'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['blog_post'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['campaign_page'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['case_study'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['distinction'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['faq'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['gallery'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['product_page'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['promotion'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

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

  $settings['slide'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['staff'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['testimonial'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
