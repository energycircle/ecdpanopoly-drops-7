<?php
/**
 * @file
 * ec_migrate_ecpro_news_blog_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ec_migrate_ecpro_news_blog_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ecpro_news_import';
  $feeds_importer->config = array(
    'name' => 'ecPRO-News-import',
    'description' => 'Import the NEWS content type from the ecPRO platform.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 1,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '999',
        'auto_scheme' => 'http',
        'accept_invalid_cert' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'tags',
            'target' => 'field_blog_category',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'author_name',
            'target' => 'field_migrate_author',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'url',
            'target' => 'field_migrate_previous_url:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'guid',
            'target' => 'field_migrate_guid',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'panopoly_wysiwyg_text',
        'skip_hash_check' => 1,
        'bundle' => 'blog_post',
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
  $export['ecpro_news_import'] = $feeds_importer;

  return $export;
}
