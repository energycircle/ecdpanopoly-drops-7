<?php
/**
 * @file
 * ec_sr3.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ec_sr3_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'get5stars_reviews';
  $feeds_importer->config = array(
    'name' => 'Get5Stars Reviews',
    'description' => 'Import Get5Stars reviews from csv export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'field_sr3_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Rating',
            'target' => 'field_sr3_rating_value',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Feedback',
            'target' => 'field_sr3_service_review',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Received',
            'target' => 'created',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'sr3_service_review',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['get5stars_reviews'] = $feeds_importer;

  return $export;
}
