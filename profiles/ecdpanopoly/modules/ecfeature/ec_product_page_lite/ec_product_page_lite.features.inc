<?php
/**
 * @file
 * ec_product_page_lite.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_product_page_lite_default_cer() {
  $items = array();
  $items['node:product_page:field_ref_prodpage_article*node:article:field_ref_article_product'] = entity_import('cer', '{
    "identifier" : "node:product_page:field_ref_prodpage_article*node:article:field_ref_article_product",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:product_page:field_ref_prodpage_article" } ] },
    "cer_right" : { "und" : [ { "path" : "node:article:field_ref_article_product" } ] }
  }');
  $items['node:product_page:field_ref_prodpage_case_study*node:case_study:field_ref_case_study_prodpage'] = entity_import('cer', '{
    "identifier" : "node:product_page:field_ref_prodpage_case_study*node:case_study:field_ref_case_study_prodpage",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:product_page:field_ref_prodpage_case_study" } ] },
    "cer_right" : { "und" : [ { "path" : "node:case_study:field_ref_case_study_prodpage" } ] }
  }');
  $items['node:product_page:field_ref_prodpage_promotion*node:promotion:field_ref_promotion_product'] = entity_import('cer', '{
    "identifier" : "node:product_page:field_ref_prodpage_promotion*node:promotion:field_ref_promotion_product",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:product_page:field_ref_prodpage_promotion" } ] },
    "cer_right" : { "und" : [ { "path" : "node:promotion:field_ref_promotion_product" } ] }
  }');
  $items['node:product_page:field_ref_prodpage_serv_cat*node:service_category:field_ref_serv_cat_prodpage'] = entity_import('cer', '{
    "identifier" : "node:product_page:field_ref_prodpage_serv_cat*node:service_category:field_ref_serv_cat_prodpage",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:product_page:field_ref_prodpage_serv_cat" } ] },
    "cer_right" : { "und" : [ { "path" : "node:service_category:field_ref_serv_cat_prodpage" } ] }
  }');
  $items['node:product_page:field_ref_prodpage_serv_group*node:service_group:field_ref_serv_group_prodpage'] = entity_import('cer', '{
    "identifier" : "node:product_page:field_ref_prodpage_serv_group*node:service_group:field_ref_serv_group_prodpage",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:product_page:field_ref_prodpage_serv_group" } ] },
    "cer_right" : { "und" : [ { "path" : "node:service_group:field_ref_serv_group_prodpage" } ] }
  }');
  $items['node:product_page:field_ref_prodpage_service*node:service:field_ref_service_product'] = entity_import('cer', '{
    "identifier" : "node:product_page:field_ref_prodpage_service*node:service:field_ref_service_product",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:product_page:field_ref_prodpage_service" } ] },
    "cer_right" : { "und" : [ { "path" : "node:service:field_ref_service_product" } ] }
  }');
  $items['node:product_page:field_ref_prodpage_testimonial*node:testimonial:field_ref_testimonial_prodpage'] = entity_import('cer', '{
    "identifier" : "node:product_page:field_ref_prodpage_testimonial*node:testimonial:field_ref_testimonial_prodpage",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:product_page:field_ref_prodpage_testimonial" } ] },
    "cer_right" : { "und" : [ { "path" : "node:testimonial:field_ref_testimonial_prodpage" } ] }
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_product_page_lite_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_product_page_lite_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
