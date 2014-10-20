<?php
/**
 * @file
 * ec_service_stack.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function ec_service_stack_default_cer() {
  $items = array();
  $items['node:service:field_ref_service_serv_cat*node:service_category:field_ref_serv_cat_services'] = entity_import('cer', '{
    "identifier" : "node:service:field_ref_service_serv_cat*node:service_category:field_ref_serv_cat_services",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:service:field_ref_service_serv_cat" } ] },
    "cer_right" : { "und" : [ { "path" : "node:service_category:field_ref_serv_cat_services" } ] }
  }');
  $items['node:service_category:field_ref_serv_cat_serv_group*node:service_group:field_ref_serv_group_serv_cat'] = entity_import('cer', '{
    "identifier" : "node:service_category:field_ref_serv_cat_serv_group*node:service_group:field_ref_serv_group_serv_cat",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:service_category:field_ref_serv_cat_serv_group" } ] },
    "cer_right" : { "und" : [ { "path" : "node:service_group:field_ref_serv_group_serv_cat" } ] }
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_service_stack_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
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
function ec_service_stack_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
