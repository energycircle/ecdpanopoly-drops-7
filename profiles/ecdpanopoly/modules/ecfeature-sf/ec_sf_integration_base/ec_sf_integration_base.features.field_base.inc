<?php
/**
 * @file
 * ec_sf_integration_base.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ec_sf_integration_base_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_sf_full_name'.
  $field_bases['field_sf_full_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_full_name',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_hidden',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'field_hidden_text',
  );

  // Exported field_base: 'field_sf_lead_id'.
  $field_bases['field_sf_lead_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_lead_id',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_hidden',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'field_hidden_text',
  );

  // Exported field_base: 'field_sf_lead_source'.
  $field_bases['field_sf_lead_source'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_lead_source',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_hidden',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'field_hidden_text',
  );

  // Exported field_base: 'field_sf_product_interest'.
  $field_bases['field_sf_product_interest'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_product_interest',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_hidden',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'field_hidden_text',
  );

  // Exported field_base: 'field_sf_utm_content'.
  $field_bases['field_sf_utm_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_utm_content',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_hidden',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'field_hidden_text',
  );

  // Exported field_base: 'field_sf_utm_medium'.
  $field_bases['field_sf_utm_medium'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_utm_medium',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_hidden',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'field_hidden_text',
  );

  // Exported field_base: 'field_sf_utm_source'.
  $field_bases['field_sf_utm_source'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_utm_source',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_hidden',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'field_hidden_text',
  );

  // Exported field_base: 'field_sf_utm_term'.
  $field_bases['field_sf_utm_term'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_utm_term',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_hidden',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'field_hidden_text',
  );

  // Exported field_base: 'field_sf_utm_campaign_name'.
  $field_bases['field_sf_utm_campaign_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sf_utm_campaign_name',
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
