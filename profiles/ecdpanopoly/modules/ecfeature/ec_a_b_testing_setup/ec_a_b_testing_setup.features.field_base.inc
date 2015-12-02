<?php
/**
 * @file
 * ec_a_b_testing_setup.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ec_a_b_testing_setup_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_a_b_test_page'.
  $field_bases['field_a_b_test_page'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_a_b_test_page',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'A Page' => 'A Page',
        'B Page' => 'B Page',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
