<?php
/**
 * @file
 * ec_migrate_wp_xml_import_to_blog.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ec_migrate_wp_xml_import_to_blog_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wordpress_xml_blog_import';
  $feeds_importer->config = array(
    'name' => 'Wordpress XML - Blog Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml, xml html htm xml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
        'delete_uploaded_file' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:6' => 'guid',
          'xpathparser:1' => 'title',
          'xpathparser:2' => 'content:encoded',
          'xpathparser:3' => 'post_date',
          'xpathparser:5' => 'category',
          'xpathparser:9' => 'pubDate',
          'xpathparser:10' => 'wp:post_id',
          'xpathparser:12' => 'link',
          'xpathparser:13' => 'link',
        ),
        'rawXML' => array(
          'xpathparser:6' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:5' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
        ),
        'context' => '//item',
        'exp' => array(
          'errors' => 1,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 'context',
            'xpathparser:6' => 'xpathparser:6',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:3' => 'xpathparser:3',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:9' => 'xpathparser:9',
            'xpathparser:10' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:6',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => 0,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'format' => 'panopoly_wysiwyg_text',
            'language' => 'und',
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_blog_category',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_display_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_old_post_id',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'xpathparser:12',
            'target' => 'path_alias',
            'pathauto_override' => 1,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_old_permalink',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
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
    'process_in_background' => 1,
  );
  $export['wordpress_xml_blog_import'] = $feeds_importer;

  return $export;
}
