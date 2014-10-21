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
    'name' => 'News',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'a40cea4b-201f-4166-ae2b-aa10500db955',
    'vocabulary_machine_name' => 'article_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Press Release',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'b7920a33-fc7a-415d-9563-2e3eb3d4f76e',
    'vocabulary_machine_name' => 'article_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
