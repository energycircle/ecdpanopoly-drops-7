<?php
/**
 * @file
 * ec_sr3.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_sr3_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Energy Audits',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '170c1944-4dcd-441e-90bc-a243abedc8a6',
    'vocabulary_machine_name' => 'sr3_review_services',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Air Conditioning',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '1c1b564c-584b-45f6-b7dd-207173804a40',
    'vocabulary_machine_name' => 'sr3_review_services',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Insulation',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'b8d1a12c-6b21-4a51-b7e4-3026af5626d4',
    'vocabulary_machine_name' => 'sr3_review_services',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Heating',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'cdc4ee6d-9562-4fe6-a394-c2dfc92e138c',
    'vocabulary_machine_name' => 'sr3_review_services',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Connected Home',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'dff50211-f731-4218-b8df-91562e8384ac',
    'vocabulary_machine_name' => 'sr3_review_services',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
