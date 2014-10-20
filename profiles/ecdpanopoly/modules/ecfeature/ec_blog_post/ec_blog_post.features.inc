<?php
/**
 * @file
 * ec_blog_post.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_blog_post_default_cer() {
  $items = array();
  $items['node:blog_post:field_ref_blog_article*node:article:field_ref_article_blog'] = entity_import('cer', '{
    "identifier" : "node:blog_post:field_ref_blog_article*node:article:field_ref_article_blog",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "0" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:blog_post:field_ref_blog_article" } ] },
    "cer_right" : { "und" : [ { "path" : "node:article:field_ref_article_blog" } ] }
  }');
  $items['node:blog_post:field_ref_blog_case_study*node:case_study:field_ref_case_study_blog'] = entity_import('cer', '{
    "identifier" : "node:blog_post:field_ref_blog_case_study*node:case_study:field_ref_case_study_blog",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:blog_post:field_ref_blog_case_study" } ] },
    "cer_right" : { "und" : [ { "path" : "node:case_study:field_ref_case_study_blog" } ] }
  }');
  $items['node:blog_post:field_ref_blog_page*node:panopoly_page:field_ref_page_blog'] = entity_import('cer', '{
    "identifier" : "node:blog_post:field_ref_blog_page*node:panopoly_page:field_ref_page_blog",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "0" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:blog_post:field_ref_blog_page" } ] },
    "cer_right" : { "und" : [ { "path" : "node:panopoly_page:field_ref_page_blog" } ] }
  }');
  $items['node:blog_post:field_ref_blog_serv_cat*node:service_category:field_ref_serv_cat_blog'] = entity_import('cer', '{
    "identifier" : "node:blog_post:field_ref_blog_serv_cat*node:service_category:field_ref_serv_cat_blog",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:blog_post:field_ref_blog_serv_cat" } ] },
    "cer_right" : { "und" : [ { "path" : "node:service_category:field_ref_serv_cat_blog" } ] }
  }');
  $items['node:blog_post:field_ref_blog_serv_group*node:service_group:field_ref_serv_group_blog'] = entity_import('cer', '{
    "identifier" : "node:blog_post:field_ref_blog_serv_group*node:service_group:field_ref_serv_group_blog",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "0" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:blog_post:field_ref_blog_serv_group" } ] },
    "cer_right" : { "und" : [ { "path" : "node:service_group:field_ref_serv_group_blog" } ] }
  }');
  $items['node:blog_post:field_ref_blog_service*node:service:field_ref_service_blog'] = entity_import('cer', '{
    "identifier" : "node:blog_post:field_ref_blog_service*node:service:field_ref_service_blog",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:blog_post:field_ref_blog_service" } ] },
    "cer_right" : { "und" : [ { "path" : "node:service:field_ref_service_blog" } ] }
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_blog_post_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_views_api().
 */
function ec_blog_post_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_blog_post_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => '',
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
function ec_blog_post_weight_features_default_settings() {
  $settings = array();

  $settings['blog_post'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
