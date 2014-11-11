<?php
/**
 * @file
 * ec_conferences_lte.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_conferences_lte_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Regional',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '0b89747c-20c3-4e92-8d60-e8a6d9ed5b5f',
    'vocabulary_machine_name' => 'conferences_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'conferences-types/regional',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Local',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '755bca13-209f-4291-ac88-56cb9e069d2f',
    'vocabulary_machine_name' => 'conferences_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'conferences-types/local',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'National',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'b20d6614-3ff6-4389-a609-0790ce9caa1e',
    'vocabulary_machine_name' => 'conferences_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'conferences-types/national',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
