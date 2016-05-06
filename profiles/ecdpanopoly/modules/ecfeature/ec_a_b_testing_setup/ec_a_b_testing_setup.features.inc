<?php
/**
 * @file
 * ec_a_b_testing_setup.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_a_b_testing_setup_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ec_a_b_testing_setup_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
