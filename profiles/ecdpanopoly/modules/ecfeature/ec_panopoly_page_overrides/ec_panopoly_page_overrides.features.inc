<?php
/**
 * @file
 * ec_panopoly_page_overrides.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_panopoly_page_overrides_default_cer() {
  $items = array();
  $items['node:panopoly_page:field_ref_page_blog*node:blog_post:field_ref_blog_page'] = entity_import('cer', '{
    "identifier" : "node:panopoly_page:field_ref_page_blog*node:blog_post:field_ref_blog_page",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:panopoly_page:field_ref_page_blog" } ] },
    "cer_right" : { "und" : [ { "path" : "node:blog_post:field_ref_blog_page" } ] }
  }');
  $items['node:panopoly_page:field_ref_page_case_study*node:case_study:field_ref_case_sudy_page'] = entity_import('cer', '{
    "identifier" : "node:panopoly_page:field_ref_page_case_study*node:case_study:field_ref_case_sudy_page",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:panopoly_page:field_ref_page_case_study" } ] },
    "cer_right" : { "und" : [ { "path" : "node:case_study:field_ref_case_sudy_page" } ] }
  }');
  $items['node:panopoly_page:field_ref_page_promotions*node:promotion:field_ref_promo_page'] = entity_import('cer', '{
    "identifier" : "node:panopoly_page:field_ref_page_promotions*node:promotion:field_ref_promo_page",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:panopoly_page:field_ref_page_promotions" } ] },
    "cer_right" : { "und" : [ { "path" : "node:promotion:field_ref_promo_page" } ] }
  }');
  $items['node:panopoly_page:field_ref_page_testimonial*node:testimonial:field_ref_testimonial_page'] = entity_import('cer', '{
    "identifier" : "node:panopoly_page:field_ref_page_testimonial*node:testimonial:field_ref_testimonial_page",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:panopoly_page:field_ref_page_testimonial" } ] },
    "cer_right" : { "und" : [ { "path" : "node:testimonial:field_ref_testimonial_page" } ] }
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_panopoly_page_overrides_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_panopoly_page_overrides_weight_features_default_settings() {
  $settings = array();

  $settings['panopoly_page'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
