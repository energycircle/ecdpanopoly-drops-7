<?php
/**
 * @file
 * ec_campaign_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ec_campaign_page_field_default_field_bases() {
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
