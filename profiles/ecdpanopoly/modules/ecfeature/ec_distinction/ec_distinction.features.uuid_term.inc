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
    'name' => 'Certification',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '2070ac8f-436d-49a3-aa7c-1fd500b2d75c',
    'vocabulary_machine_name' => 'distinction_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Partner',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '2f7772f2-560a-470a-a070-e824b3917474',
    'vocabulary_machine_name' => 'distinction_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Awards',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '6409a748-aa35-41a3-95d5-c0aa19982e8a',
    'vocabulary_machine_name' => 'distinction_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Membership',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'd397fb8e-26fb-4952-8f7d-086a15414b3c',
    'vocabulary_machine_name' => 'distinction_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
