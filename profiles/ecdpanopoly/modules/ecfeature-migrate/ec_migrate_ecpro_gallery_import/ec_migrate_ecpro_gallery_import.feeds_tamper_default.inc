<?php
/**
 * @file
 * ec_migrate_ecpro_gallery_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ec_migrate_ecpro_gallery_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ecpro_gallery_import-description-find_replace';
  $feeds_tamper->importer = 'ecpro_gallery_import';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'class="imagefield imagefield-field_ec_pro_imagefield"',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['ecpro_gallery_import-description-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ecpro_gallery_import-description-strip_tags';
  $feeds_tamper->importer = 'ecpro_gallery_import';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '<img><p>',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip tags';
  $export['ecpro_gallery_import-description-strip_tags'] = $feeds_tamper;

  return $export;
}
