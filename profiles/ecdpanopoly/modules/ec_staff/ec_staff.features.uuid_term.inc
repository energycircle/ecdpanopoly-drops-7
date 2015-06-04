<?php
/**
 * @file
 * ec_staff.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ec_staff_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Sales',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '80ce6632-58bb-4cbb-8fc8-c66eaeb8ced6',
    'vocabulary_machine_name' => 'departments',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Service',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '85441b4c-e015-470a-b77f-b76ba74ae336',
    'vocabulary_machine_name' => 'departments',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Office',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'c7fd6cf5-b697-4ed2-bdd9-d1f87b49bf7a',
    'vocabulary_machine_name' => 'departments',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(),
  );
  return $terms;
}
