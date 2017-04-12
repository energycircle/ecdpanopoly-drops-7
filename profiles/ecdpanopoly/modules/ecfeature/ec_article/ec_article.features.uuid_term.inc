<?php
/**
 * @file
 * ec_article.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_article_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Press Release',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '288809f1-98ce-41bc-9a40-a29a9ab09c87',
    'vocabulary_machine_name' => 'article_types',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'article-types/press-release',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'News',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '6266565d-3eb9-46b0-b86f-77383d2b04ad',
    'vocabulary_machine_name' => 'article_types',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'article-types/news',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
