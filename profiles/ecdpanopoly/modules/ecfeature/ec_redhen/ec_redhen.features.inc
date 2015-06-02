<?php
/**
 * @file
 * ec_redhen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_redhen_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ec_redhen_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_redhen_contact_type().
 */
function ec_redhen_default_redhen_contact_type() {
  $items = array();
  $items['individual'] = entity_import('redhen_contact_type', '{
    "name" : "individual",
    "label" : "Individual",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  return $items;
}

/**
 * Implements hook_default_redhen_org_type().
 */
function ec_redhen_default_redhen_org_type() {
  $items = array();
  $items['business'] = entity_import('redhen_org_type', '{
    "name" : "business",
    "label" : "Business",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  return $items;
}
