<?php
/**
 * @file
 * ec_mobile_changes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_mobile_changes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
