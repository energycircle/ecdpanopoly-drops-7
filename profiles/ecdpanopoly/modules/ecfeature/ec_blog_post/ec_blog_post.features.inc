<?php
/**
 * @file
 * ec_blog_post.features.inc
 */

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
