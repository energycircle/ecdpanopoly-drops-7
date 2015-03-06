<?php
/**
 * @file
 * ec_base_config.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ec_base_config_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-contact-field_address'
  $field_instances['entityform-contact-field_address'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 4,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 4,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'default_country' => NULL,
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'addressfield_standard',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-contact-field_business2'
  $field_instances['entityform-contact-field_business2'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'email' => array(
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_business2',
    'label' => 'Business Name',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-contact-field_email'
  $field_instances['entityform-contact-field_email'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'email_default',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'email_default',
        'weight' => 3,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'email_default',
        'weight' => 3,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'email_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-contact-field_first_name'
  $field_instances['entityform-contact-field_first_name'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-contact-field_last_name'
  $field_instances['entityform-contact-field_last_name'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
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
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'table' => array(
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
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-contact-field_phone'
  $field_instances['entityform-contact-field_phone'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'phone',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'phone',
        'weight' => 2,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'phone',
        'weight' => 2,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'phone',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 1,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'phone_country_code' => 0,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'phone_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-contact-field_question_or_comment'
  $field_instances['entityform-contact-field_question_or_comment'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_question_or_comment',
    'label' => 'Question or Comment',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_address'
  $field_instances['entityform-contact_us-field_address'] = array(
    'bundle' => 'contact_us',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => '',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_email'
  $field_instances['entityform-contact_us-field_email'] = array(
    'bundle' => 'contact_us',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
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
  );

  // Exported field_instance: 'entityform-contact_us-field_first_name'
  $field_instances['entityform-contact_us-field_first_name'] = array(
    'bundle' => 'contact_us',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 1,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_last_name'
  $field_instances['entityform-contact_us-field_last_name'] = array(
    'bundle' => 'contact_us',
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
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 1,
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
  );

  // Exported field_instance: 'entityform-contact_us-field_phone'
  $field_instances['entityform-contact_us-field_phone'] = array(
    'bundle' => 'contact_us',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'phone',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'phone_country_code' => 0,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_question_or_comment'
  $field_instances['entityform-contact_us-field_question_or_comment'] = array(
    'bundle' => 'contact_us',
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
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_question_or_comment',
    'label' => 'Question or Comment',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Business Name');
  t('Email');
  t('First Name');
  t('Last Name');
  t('Phone');
  t('Question or Comment');

  return $field_instances;
}
