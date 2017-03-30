<?php
/**
 * @file
 * ec_migrate_wp_xml_import_to_blog.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ec_migrate_wp_xml_import_to_blog_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wordpress_xml_blog_import-xpathparser_11-find_replace';
  $feeds_tamper->importer = 'wordpress_xml_blog_import';
  $feeds_tamper->source = 'xpathparser:11';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'http://blog.russellshvac.com',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['wordpress_xml_blog_import-xpathparser_11-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wordpress_xml_blog_import-xpathparser_12-find_replace';
  $feeds_tamper->importer = 'wordpress_xml_blog_import';
  $feeds_tamper->source = 'xpathparser:12';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'http://blog.russellshvac.com',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['wordpress_xml_blog_import-xpathparser_12-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wordpress_xml_blog_import-xpathparser_12-trim';
  $feeds_tamper->importer = 'wordpress_xml_blog_import';
  $feeds_tamper->source = 'xpathparser:12';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '/',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['wordpress_xml_blog_import-xpathparser_12-trim'] = $feeds_tamper;

  return $export;
}
