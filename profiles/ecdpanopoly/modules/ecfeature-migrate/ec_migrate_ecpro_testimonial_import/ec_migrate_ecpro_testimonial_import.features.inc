<?php
/**
 * @file
 * ec_migrate_ecpro_testimonial_import.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_migrate_ecpro_testimonial_import_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
