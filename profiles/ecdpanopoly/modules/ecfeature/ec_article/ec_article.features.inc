<?php
/**
 * @file
 * ec_article.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_article_default_cer() {
  $items = array();
  $items['node:article:field_ref_article_blog*node:blog_post:field_ref_blog_article'] = entity_import('cer', '{
    "identifier" : "node:article:field_ref_article_blog*node:blog_post:field_ref_blog_article",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:article:field_ref_article_blog" } ] },
    "cer_right" : { "und" : [ { "path" : "node:blog_post:field_ref_blog_article" } ] }
  }');
  $items['node:article:field_ref_article_case_study*node:case_study:field_ref_case_study_article'] = entity_import('cer', '{
    "identifier" : "node:article:field_ref_article_case_study*node:case_study:field_ref_case_study_article",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:article:field_ref_article_case_study" } ] },
    "cer_right" : { "und" : [ { "path" : "node:case_study:field_ref_case_study_article" } ] }
  }');
  $items['node:article:field_ref_article_product*node:product_page:field_ref_prodpage_article'] = entity_import('cer', '{
    "identifier" : "node:article:field_ref_article_product*node:product_page:field_ref_prodpage_article",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "0" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:article:field_ref_article_product" } ] },
    "cer_right" : { "und" : [ { "path" : "node:product_page:field_ref_prodpage_article" } ] }
  }');
  $items['node:article:field_ref_article_promo*node:promotion:field_ref_promo_article'] = entity_import('cer', '{
    "identifier" : "node:article:field_ref_article_promo*node:promotion:field_ref_promo_article",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "0" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:article:field_ref_article_promo" } ] },
    "cer_right" : { "und" : [ { "path" : "node:promotion:field_ref_promo_article" } ] }
  }');
  $items['node:article:field_ref_article_testimonial*node:testimonial:field_ref_testimonial_article'] = entity_import('cer', '{
    "identifier" : "node:article:field_ref_article_testimonial*node:testimonial:field_ref_testimonial_article",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "0" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:article:field_ref_article_testimonial" } ] },
    "cer_right" : { "und" : [ { "path" : "node:testimonial:field_ref_testimonial_article" } ] }
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
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
 * Implements hook_node_info().
 */
function ec_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('A news story, press release, or other type of article.'),
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
function ec_article_weight_features_default_settings() {
  $settings = array();

  $settings['article'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
