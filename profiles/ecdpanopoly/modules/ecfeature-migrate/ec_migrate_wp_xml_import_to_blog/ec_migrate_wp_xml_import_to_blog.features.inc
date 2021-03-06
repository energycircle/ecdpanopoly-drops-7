<?php
/**
 * @file
 * ec_migrate_wp_xml_import_to_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_migrate_wp_xml_import_to_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
