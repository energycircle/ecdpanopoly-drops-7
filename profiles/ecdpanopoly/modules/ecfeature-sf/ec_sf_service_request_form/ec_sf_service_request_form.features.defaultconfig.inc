<?php
/**
 * @file
 * ec_sf_service_request_form.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_sf_service_request_form_defaultconfig_features() {
  return array(
    'ec_sf_service_request_form' => array(
      'field_default_fields' => 'field_default_fields',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function ec_sf_service_request_form_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'entityform-schedule_service-field_sf_full_name'.
  $fields['entityform-schedule_service-field_sf_full_name'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sf_full_name',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'field_hidden',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'field_hidden_text',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_service',
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
          'weight' => 14,
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'review' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'table' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'token' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
        'weight' => 8,
      ),
    ),
  );

  // Exported field: 'entityform-schedule_service-field_sf_lead_id'.
  $fields['entityform-schedule_service-field_sf_lead_id'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sf_lead_id',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'field_hidden',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'field_hidden_text',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_service',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 10,
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'review' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'table' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'token' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
        'weight' => 6,
      ),
    ),
  );

  // Exported field: 'entityform-schedule_service-field_sf_lead_source'.
  $fields['entityform-schedule_service-field_sf_lead_source'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sf_lead_source',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'field_hidden',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'field_hidden_text',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_service',
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
          'weight' => 20,
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'review' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'table' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'token' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
        'weight' => 7,
      ),
    ),
  );

  // Exported field: 'entityform-schedule_service-field_sf_product_interest'.
  $fields['entityform-schedule_service-field_sf_product_interest'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sf_product_interest',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'field_hidden',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'field_hidden_text',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_service',
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
          'weight' => 21,
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'review' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'table' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'token' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
        'weight' => 16,
      ),
    ),
  );

  // Exported field: 'entityform-schedule_service-field_sf_utm_content'.
  $fields['entityform-schedule_service-field_sf_utm_content'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sf_utm_content',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'field_hidden',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'field_hidden_text',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_service',
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
          'weight' => 16,
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'review' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'table' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'token' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
        'weight' => 12,
      ),
    ),
  );

  // Exported field: 'entityform-schedule_service-field_sf_utm_medium'.
  $fields['entityform-schedule_service-field_sf_utm_medium'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sf_utm_medium',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'field_hidden',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'field_hidden_text',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_service',
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
          'weight' => 15,
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'review' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'table' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'token' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
        'weight' => 11,
      ),
    ),
  );

  // Exported field: 'entityform-schedule_service-field_sf_utm_source'.
  $fields['entityform-schedule_service-field_sf_utm_source'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sf_utm_source',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'field_hidden',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'field_hidden_text',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_service',
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
          'weight' => 18,
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'review' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'table' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'token' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
        'weight' => 13,
      ),
    ),
  );

  // Exported field: 'entityform-schedule_service-field_sf_utm_term'.
  $fields['entityform-schedule_service-field_sf_utm_term'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sf_utm_term',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'field_hidden',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'field_hidden_text',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_service',
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
          'weight' => 19,
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'review' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'table' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'token' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
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
        'weight' => 14,
      ),
    ),
  );

  // Exported field: 'entityform-schedule_service-field_sf_utm_term'.
  $fields['entityform-schedule_service-field_sf_utm_campaign_name'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sf_utm_campaign_name',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'field_hidden',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'field_hidden_text',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_service',
      'default_value' => array(
        0 => array(
          'value' => '[current-page:query:utm_name]',
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
          'weight' => 19,
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'review' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'table' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'token' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sf_utm_campaign_name',
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
        'weight' => 14,
      ),
    ),
  );


  // Translatables
  // Included for use with string extractors like potx.
  t('Full Name');
  t('Lead ID');
  t('Lead Source');
  t('Product Interest');
  t('UTM Content');
  t('UTM Medium');
  t('UTM Source');
  t('UTM Campaign Name');
  t('UTM Term');

  return $fields;
}
