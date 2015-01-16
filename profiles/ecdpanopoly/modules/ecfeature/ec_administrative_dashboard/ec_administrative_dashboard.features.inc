<?php
/**
 * @file
 * ec_administrative_dashboard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_administrative_dashboard_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
