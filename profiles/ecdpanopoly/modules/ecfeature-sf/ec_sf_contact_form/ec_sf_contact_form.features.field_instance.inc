<?php
/**
 * @file
 * ec_sf_contact_form.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ec_sf_contact_form_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-contact_us-field_sf_full_name'.
  $field_instances['entityform-contact_us-field_sf_full_name'] = array(
    'bundle' => 'contact_us',
    'default_value' => array(
      0 => array(
        'value' => '[entityform:field_first_name] [entityform:field_last_name]',
      ),
    ),
    'default_value_function' => 'field_default_token_default_value_function',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sf_full_name',
    'label' => 'Full Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_hidden',
      'settings' => array(),
      'type' => 'field_hidden',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_sf_lead_id'.
  $field_instances['entityform-contact_us-field_sf_lead_id'] = array(
    'bundle' => 'contact_us',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sf_lead_id',
    'label' => 'Lead ID',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_hidden',
      'settings' => array(),
      'type' => 'field_hidden',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_sf_lead_source'.
  $field_instances['entityform-contact_us-field_sf_lead_source'] = array(
    'bundle' => 'contact_us',
    'default_value' => array(
      0 => array(
        'value' => 'Web',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sf_lead_source',
    'label' => 'Lead Source',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_hidden',
      'settings' => array(),
      'type' => 'field_hidden',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_sf_product_interest'.
  $field_instances['entityform-contact_us-field_sf_product_interest'] = array(
    'bundle' => 'contact_us',
    'default_value' => array(
      0 => array(
        'value' => '[current-page:title]',
      ),
    ),
    'default_value_function' => 'field_default_token_default_value_function',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sf_product_interest',
    'label' => 'Product Interest',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_hidden',
      'settings' => array(),
      'type' => 'field_hidden',
      'weight' => 48,
    ),
  );

  // Exported field_instance:
  // 'entityform-contact_us-field_sf_utm_campaign_name'.
  $field_instances['entityform-contact_us-field_sf_utm_campaign_name'] = array(
    'bundle' => 'contact_us',
    'default_value' => array(
      0 => array(
        'value' => '[current-page:query:utm_campaign_name]',
      ),
    ),
    'default_value_function' => 'field_default_token_default_value_function',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sf_utm_campaign_name',
    'label' => 'UTM Campaign Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_hidden',
      'settings' => array(),
      'type' => 'field_hidden',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_sf_utm_content'.
  $field_instances['entityform-contact_us-field_sf_utm_content'] = array(
    'bundle' => 'contact_us',
    'default_value' => array(
      0 => array(
        'value' => '[current-page:query:utm_content]',
      ),
    ),
    'default_value_function' => 'field_default_token_default_value_function',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sf_utm_content',
    'label' => 'UTM Content',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_hidden',
      'settings' => array(),
      'type' => 'field_hidden',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_sf_utm_medium'.
  $field_instances['entityform-contact_us-field_sf_utm_medium'] = array(
    'bundle' => 'contact_us',
    'default_value' => array(
      0 => array(
        'value' => '[current-page:query:utm_medium]',
      ),
    ),
    'default_value_function' => 'field_default_token_default_value_function',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sf_utm_medium',
    'label' => 'UTM Medium',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_hidden',
      'settings' => array(),
      'type' => 'field_hidden',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_sf_utm_source'.
  $field_instances['entityform-contact_us-field_sf_utm_source'] = array(
    'bundle' => 'contact_us',
    'default_value' => array(
      0 => array(
        'value' => '[current-page:query:utm_source]',
      ),
    ),
    'default_value_function' => 'field_default_token_default_value_function',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sf_utm_source',
    'label' => 'UTM Source',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_hidden',
      'settings' => array(),
      'type' => 'field_hidden',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_sf_utm_term'.
  $field_instances['entityform-contact_us-field_sf_utm_term'] = array(
    'bundle' => 'contact_us',
    'default_value' => array(
      0 => array(
        'value' => '[current-page:query:utm_term]',
      ),
    ),
    'default_value_function' => 'field_default_token_default_value_function',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sf_utm_term',
    'label' => 'UTM Term',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_hidden',
      'settings' => array(),
      'type' => 'field_hidden',
      'weight' => 46,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Full Name');
  t('Lead ID');
  t('Lead Source');
  t('Product Interest');
  t('UTM Campaign Name');
  t('UTM Content');
  t('UTM Medium');
  t('UTM Source');
  t('UTM Term');

  return $field_instances;
}
