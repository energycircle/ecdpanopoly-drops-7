<?php
/**
 * @file
 * ec_distinction.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_distinction_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Membership',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '953cda53-9ef3-4802-bcd3-5b9fedf9e45c',
    'vocabulary_machine_name' => 'distinction_types',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'distinction-types/memberships',
        'language' => 'und',
      ),
      1 => array(
        'alias' => 'distinction-types/membership',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
