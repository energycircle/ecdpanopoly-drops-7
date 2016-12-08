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

  // Exported field_base: 'field_a_b_reason_for_testing'.
  $field_bases['field_a_b_reason_for_testing'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_a_b_reason_for_testing',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_a_b_reference_page'.
  $field_bases['field_a_b_reference_page'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_a_b_reference_page',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'field_default_token' => array(
            'status' => TRUE,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'audience' => 'audience',
          'campaign_page' => 'campaign_page',
          'city_page' => 'city_page',
          'external_video' => 'external_video',
          'financing_option' => 'financing_option',
          'panopoly_page' => 'panopoly_page',
          'promotion' => 'promotion',
          'service' => 'service',
          'service_category' => 'service_category',
          'service_group' => 'service_group',
          'slide' => 'slide',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_a_b_test_page'.
  $field_bases['field_a_b_test_page'] = array(
    'active' => 1,
    'cardinality' => 2,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_a_b_test_page',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'BPage' => 'Experiment Page (B Page)',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
