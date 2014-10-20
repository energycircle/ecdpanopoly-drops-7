<?php
/**
 * @file
 * ec_casestudy.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ec_casestudy_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-case_study-field_ref_case_study_promo'
  $field_instances['node-case_study-field_ref_case_study_promo'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Promotions shown on this page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'show_this_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ref_case_study_promo',
    'label' => 'Promotions',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 16,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Promotions');
  t('Promotions shown on this page.');

  return $field_instances;
}
