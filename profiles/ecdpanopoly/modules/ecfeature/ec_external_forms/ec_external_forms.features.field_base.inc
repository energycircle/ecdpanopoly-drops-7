<?php
/**
 * @file
 * ec_external_forms.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ec_external_forms_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ex_form_embed_code'.
  $field_bases['field_ex_form_embed_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ex_form_embed_code',
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

  return $field_bases;
}
