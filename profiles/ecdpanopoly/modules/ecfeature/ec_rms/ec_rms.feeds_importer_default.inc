<?php
/**
 * @file
 * ec_rms.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ec_rms_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'rms_import_customers_for_reviews';
  $feeds_importer->config = array(
    'name' => 'RMS: Import Customers for Reviews',
    'description' => 'Import a set of customers and immediately send an RMS email to each one.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
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
            'source' => 'First Name',
            'target' => 'field_review_first_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Last Name',
            'target' => 'field_review_last_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'City',
            'target' => 'field_review_city',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Email',
            'target' => 'field_review_email',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ec_review',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['rms_import_customers_for_reviews'] = $feeds_importer;

  return $export;
}
