<?php
/**
 * @file
 * ec_external_forms.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ec_external_forms_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-external_form-field_ex_form_embed_code'.
  $field_instances['node-external_form-field_ex_form_embed_code'] = array(
    'bundle' => 'external_form',
    'default_value' => array(
      0 => array(
        'value' => 'Copy form code here and select iframe. ',
        'format' => 'iframe',
      ),
    ),
    'deleted' => 0,
    'description' => 'Use the IFRAME editor setting to ensure not to strip important HTML tags',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'field_multiple_limit_order' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'grouped_teaser' => array(
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
    'field_name' => 'field_ex_form_embed_code',
    'label' => 'Form Embed Code',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Form Embed Code');
  t('Use the IFRAME editor setting to ensure not to strip important HTML tags');

  return $field_instances;
}
