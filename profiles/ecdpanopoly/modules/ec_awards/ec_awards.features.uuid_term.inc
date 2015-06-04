<?php
/**
 * @file
 * ec_awards.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_awards_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Linda Wigington Leadership Award',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '274b5604-babb-4a15-9bce-ce513a233266',
    'vocabulary_machine_name' => 'award_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'award-types/linda-wigington-leadership-award',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Woman of the Year Award',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '48a8a55a-9606-4e71-9521-17a984de5621',
    'vocabulary_machine_name' => 'award_types',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'award-types/woman-year-award',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
