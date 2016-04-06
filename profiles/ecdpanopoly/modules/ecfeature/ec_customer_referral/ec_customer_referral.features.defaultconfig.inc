<?php
/**
 * @file
 * ec_customer_referral.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_customer_referral_defaultconfig_features() {
  return array(
    'ec_customer_referral' => array(
      'field_default_fields' => 'field_default_fields',
      'field_group_info' => 'field_group_info',
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function ec_customer_referral_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'entityform-customer_referral-field_ec_referral_refer_friend'.
  $fields['entityform-customer_referral-field_ec_referral_refer_friend'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 3,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_ec_referral_refer_friend',
      'foreign keys' => array(),
      'indexes' => array(
        'revision_id' => array(
          0 => 'revision_id',
        ),
      ),
      'locked' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'hide_blank_items' => 1,
        'path' => '',
      ),
      'translatable' => 0,
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'customer_referral',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_ec_referral_refer_friend',
      'label' => 'Refer Friend',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => 4,
      ),
    ),
  );

  // Exported field: 'entityform-customer_referral-field_ec_referral_referrer_email'.
  $fields['entityform-customer_referral-field_ec_referral_referrer_email'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_ec_referral_referrer_email',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'email',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'customer_referral',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'email',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'email_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_ec_referral_referrer_email',
      'label' => 'Your Email',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'email_textfield',
        'weight' => 3,
      ),
    ),
  );

  // Exported field: 'entityform-customer_referral-field_ec_referral_referrer_name'.
  $fields['entityform-customer_referral-field_ec_referral_referrer_name'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_ec_referral_referrer_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'customer_referral',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_ec_referral_referrer_name',
      'label' => 'Your Name',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 2,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Refer Friend');
  t('Your Email');
  t('Your Name');

  return $fields;
}

/**
 * Implements hook_defaultconfig_field_group_info().
 */
function ec_customer_referral_defaultconfig_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ec_referral_information|entityform|customer_referral|form';
  $field_group->group_name = 'group_ec_referral_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'customer_referral';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_ec_referral_referrer_email',
      1 => 'field_ec_referral_referrer_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ec-referral-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ec_referral_information|entityform|customer_referral|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ec_referral_list|entityform|customer_referral|form';
  $field_group->group_name = 'group_ec_referral_list';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'customer_referral';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Referral Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_ec_referral_refer_friend',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ec-referral-list field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ec_referral_list|entityform|customer_referral|form'] = $field_group;

  return $export;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_customer_referral_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_entityform__customer_referral';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_entityform__customer_referral'] = $strongarm;

  return $export;
}
