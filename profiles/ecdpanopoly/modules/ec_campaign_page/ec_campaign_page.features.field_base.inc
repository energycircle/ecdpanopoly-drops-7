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

  // Exported field_base: 'field_page_tracking'
  $field_bases['field_page_tracking'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_page_tracking',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_hidden',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'field_hidden_text',
  );

  return $field_bases;
}
