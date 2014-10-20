<?php
/**
 * @file
 * ec_casestudy.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_casestudy_default_cer() {
  $items = array();
  $items['node:case_study:field_ref_case_study_promo*node:promotion:field_ref_promo_case_study'] = entity_import('cer', '{
    "identifier" : "node:case_study:field_ref_case_study_promo*node:promotion:field_ref_promo_case_study",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "0" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:case_study:field_ref_case_study_promo" } ] },
    "cer_right" : { "und" : [ { "path" : "node:promotion:field_ref_promo_case_study" } ] }
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_casestudy_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ec_casestudy_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
