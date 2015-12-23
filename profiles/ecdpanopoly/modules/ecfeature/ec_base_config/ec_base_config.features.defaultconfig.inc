<?php
/**
 * @file
 * ec_base_config.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_base_config_defaultconfig_features() {
  return array(
    'ec_base_config' => array(
      'field_default_fields' => 'field_default_fields',
      'metatag_config_default' => 'metatag_config_default',
      'strongarm' => 'strongarm',
      'views_default_views' => 'views_default_views',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function ec_base_config_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'entityform-contact-field_address'.
  $fields['entityform-contact-field_address'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'addressfield',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'addressfield',
    ),
    'field_instance' => array(
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
    ),
  );

  // Exported field: 'entityform-contact-field_business2'.
  $fields['entityform-contact-field_business2'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_business2',
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
    ),
  );

  // Exported field: 'entityform-contact-field_email'.
  $fields['entityform-contact-field_email'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_email',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'email',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'email',
    ),
    'field_instance' => array(
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
    ),
  );

  // Exported field: 'entityform-contact-field_first_name'.
  $fields['entityform-contact-field_first_name'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_first_name',
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
    ),
  );

  // Exported field: 'entityform-contact-field_last_name'.
  $fields['entityform-contact-field_last_name'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_last_name',
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
    ),
  );

  // Exported field: 'entityform-contact-field_phone'.
  $fields['entityform-contact-field_phone'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_phone',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'phone',
      'settings' => array(
        'country' => 'ca',
      ),
      'translatable' => 0,
      'type' => 'phone',
    ),
    'field_instance' => array(
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
    ),
  );

  // Exported field: 'entityform-contact-field_question_or_comment'.
  $fields['entityform-contact-field_question_or_comment'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_question_or_comment',
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
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
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

  return $fields;
}

/**
 * Implements hook_defaultconfig_metatag_config_default().
 */
function ec_base_config_defaultconfig_metatag_config_default() {
  $export = array();

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'global';
  $config->config = array(
    'title' => array(
      'value' => '[current-page:title] | [site:name]',
    ),
    'generator' => array(
      'value' => 'Drupal 7 (http://drupal.org)',
    ),
    'canonical' => array(
      'value' => '[current-page:url:absolute]',
    ),
    'shortlink' => array(
      'value' => '[current-page:url:unaliased]',
    ),
    'og:type' => array(
      'value' => 'article',
    ),
    'og:title' => array(
      'value' => '[current-page:title]',
    ),
    'og:site_name' => array(
      'value' => '[site:name]',
    ),
    'og:url' => array(
      'value' => '[current-page:url:absolute]',
    ),
  );
  $export['global'] = $config;

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'node';
  $config->config = array(
    'title' => array(
      'value' => '[node:title] | [site:name]',
    ),
    'description' => array(
      'value' => '[node:summary]',
    ),
    'author' => array(
      'value' => '[node:author:field_google_url]',
    ),
    'og:title' => array(
      'value' => '[node:title]',
    ),
    'og:description' => array(
      'value' => '[node:summary]',
    ),
  );
  $export['node'] = $config;

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'taxonomy_term';
  $config->config = array(
    'title' => array(
      'value' => '[term:name] | [site:name]',
    ),
    'description' => array(
      'value' => '[term:description]',
    ),
    'og:title' => array(
      'value' => '[term:name]',
    ),
    'og:description' => array(
      'value' => '[term:description]',
    ),
  );
  $export['taxonomy_term'] = $config;

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'user';
  $config->config = array(
    'title' => array(
      'value' => '[user:name] | [site:name]',
    ),
    'og:type' => array(
      'value' => 'profile',
    ),
    'og:title' => array(
      'value' => '[user:name]',
    ),
    'og:image' => array(
      'value' => '[user:picture:url]',
    ),
  );
  $export['user'] = $config;

  return $export;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_base_config_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_default_settings';
  $strongarm->value = array(
    'title_label' => 'Title',
    'node_preview' => '0',
    'content_type_extras_preview_button' => 'Preview',
    'content_type_extras_save_and_new' => '1',
    'content_type_extras_save_and_new_button' => 'Save and New',
    'content_type_extras_save_and_edit' => '0',
    'content_type_extras_save_and_edit_button' => 'Save and Edit',
    'content_type_extras_cancel' => '0',
    'node_options' => array(
      'status' => 'status',
      'promote' => 0,
      'sticky' => 0,
      'revision' => 0,
    ),
    'node_submitted' => 1,
    'user_permissions' => array(
      'create_roles' => array(
        5 => '5',
        3 => '3',
        4 => '4',
        1 => 0,
        2 => 0,
      ),
      'edit_roles' => array(
        5 => '5',
        3 => '3',
        4 => '4',
        1 => 0,
        2 => 0,
      ),
      'delete_roles' => array(
        5 => '5',
        3 => '3',
        1 => 0,
        2 => 0,
        4 => 0,
      ),
    ),
    'content_type_extras_descriptions_required' => 0,
    'content_type_extras_remove_body' => 0,
    'content_type_extras_title_hide' => 0,
    'content_type_extras_title_hide_css' => 0,
    'content_type_extras_title_hide_front' => 0,
    'content_type_extras_top_buttons' => array(
      'manage_fields' => 0,
      'node_edit' => 0,
    ),
    'content_type_extras_excluded_node_forms' => array(
      0 => '',
    ),
    'xmlsitemap_settings' => array(
      'status' => '1',
      'priority' => '0.5',
    ),
    'content_type_extras__active_tab' => 'edit-configuration',
  );
  $export['content_type_extras_default_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_debug';
  $strongarm->value = 0;
  $export['googleanalytics_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_roles';
  $strongarm->value = array(
    1 => '1',
    2 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $export['googleanalytics_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackadsense';
  $strongarm->value = 1;
  $export['googleanalytics_trackadsense'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackdoubleclick';
  $strongarm->value = 1;
  $export['googleanalytics_trackdoubleclick'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_tracker_anonymizeip';
  $strongarm->value = 1;
  $export['googleanalytics_tracker_anonymizeip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackfiles';
  $strongarm->value = 1;
  $export['googleanalytics_trackfiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackfiles_extensions';
  $strongarm->value = '7z|aac|arc|arj|asf|asx|avi|bin|csv|doc|exe|flv|gif|gz|gzip|hqx|jar|jpe?g|js|mp(2|3|4|e?g)|mov(ie)?|msi|msp|pdf|phps|png|ppt|qtm?|ra(m|r)?|sea|sit|tar|tgz|torrent|txt|wav|wma|wmv|wpd|xls|xml|z|zip';
  $export['googleanalytics_trackfiles_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_tracklinkid';
  $strongarm->value = 1;
  $export['googleanalytics_tracklinkid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackmailto';
  $strongarm->value = 1;
  $export['googleanalytics_trackmailto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackmessages';
  $strongarm->value = array(
    'status' => 'status',
    'warning' => 'warning',
    'error' => 'error',
  );
  $export['googleanalytics_trackmessages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackoutbound';
  $strongarm->value = 1;
  $export['googleanalytics_trackoutbound'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackurlfragments';
  $strongarm->value = 1;
  $export['googleanalytics_trackurlfragments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackuserid';
  $strongarm->value = 0;
  $export['googleanalytics_trackuserid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_visibility_pages';
  $strongarm->value = '0';
  $export['googleanalytics_visibility_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_visibility_roles';
  $strongarm->value = '0';
  $export['googleanalytics_visibility_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'gd';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panopoly_magic_live_preview';
  $strongarm->value = '0';
  $export['panopoly_magic_live_preview'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panopoly_magic_pane_add_preview';
  $strongarm->value = '2';
  $export['panopoly_magic_pane_add_preview'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panopoly_magic_show_panels_styles';
  $strongarm->value = '1';
  $export['panopoly_magic_show_panels_styles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panopoly_magic_strip_js_from_preview';
  $strongarm->value = '1';
  $export['panopoly_magic_strip_js_from_preview'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'digital@energycircle.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'This is your site slogan';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_tree_recursion_limit';
  $strongarm->value = '2';
  $export['token_tree_recursion_limit'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_views_default_views().
 */
function ec_base_config_defaultconfig_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fieldable_pane_entities';
  $view->description = 'Administrative view to show a list of fieldable pane entities and administer them.';
  $view->tag = 'default';
  $view->base_table = 'fieldable_panels_panes';
  $view->human_name = 'Fieldable pane entities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer fieldable panels panes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'bundle' => 'bundle',
    'title' => 'title',
    'reusable' => 'reusable',
    'admin_title' => 'admin_title',
    'category' => 'category',
    'admin_description' => 'admin_description',
    'view_entity' => 'view_entity',
    'edit_entity' => 'view_entity',
    'delete_entity' => 'view_entity',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'bundle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'reusable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'admin_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'admin_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_entity' => array(
      'align' => '',
      'separator' => '&nbsp;',
      'empty_column' => 1,
    ),
    'edit_entity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_entity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no entities of this type.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Fieldable pane: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Fieldable pane: Reusable */
  $handler->display->display_options['fields']['reusable']['id'] = 'reusable';
  $handler->display->display_options['fields']['reusable']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['reusable']['field'] = 'reusable';
  /* Field: Fieldable pane: Administrative title */
  $handler->display->display_options['fields']['admin_title']['id'] = 'admin_title';
  $handler->display->display_options['fields']['admin_title']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['admin_title']['field'] = 'admin_title';
  /* Field: Fieldable pane: Administrative category */
  $handler->display->display_options['fields']['category']['id'] = 'category';
  $handler->display->display_options['fields']['category']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['category']['field'] = 'category';
  /* Field: Fieldable pane: Administrative description */
  $handler->display->display_options['fields']['admin_description']['id'] = 'admin_description';
  $handler->display->display_options['fields']['admin_description']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['admin_description']['field'] = 'admin_description';
  /* Field: Fieldable pane: Administrative link */
  $handler->display->display_options['fields']['view_entity']['id'] = 'view_entity';
  $handler->display->display_options['fields']['view_entity']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['view_entity']['field'] = 'view_entity';
  /* Field: Fieldable pane: Administrative edit link */
  $handler->display->display_options['fields']['edit_entity']['id'] = 'edit_entity';
  $handler->display->display_options['fields']['edit_entity']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['edit_entity']['field'] = 'edit_entity';
  /* Field: Fieldable pane: Administrative delete link */
  $handler->display->display_options['fields']['delete_entity']['id'] = 'delete_entity';
  $handler->display->display_options['fields']['delete_entity']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['delete_entity']['field'] = 'delete_entity';
  /* Contextual filter: Fieldable pane: Bundle */
  $handler->display->display_options['arguments']['bundle']['id'] = 'bundle';
  $handler->display->display_options['arguments']['bundle']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['arguments']['bundle']['field'] = 'bundle';
  $handler->display->display_options['arguments']['bundle']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['bundle']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bundle']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bundle']['summary_options']['items_per_page'] = '50';
  $export['fieldable_pane_entities'] = $view;

  $view = new view();
  $view->name = 'fieldable_pane_entity_revisions';
  $view->description = 'Administrative view to show a list of revisions of a fieldable pane entity and administer them.';
  $view->tag = 'default';
  $view->base_table = 'fieldable_panels_panes_revision';
  $view->human_name = 'Fieldable pane entity revisions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer fieldable panels panes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'log' => 'log',
    'name' => 'name',
    'timestamp' => 'timestamp',
    'view_revision' => 'view_revision',
    'edit_revision' => 'view_revision',
    'make_current' => 'view_revision',
    'delete_revision' => 'view_revision',
    'is_current' => 'log',
  );
  $handler->display->display_options['style_options']['default'] = 'timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'log' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_revision' => array(
      'align' => '',
      'separator' => ' &nbsp; ',
      'empty_column' => 0,
    ),
    'edit_revision' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'make_current' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_revision' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'is_current' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Fieldable pane (historical data): Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'fieldable_panels_panes_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Fieldable pane (historical data): Log message */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'fieldable_panels_panes_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['fields']['log']['empty'] = 'No log message.';
  $handler->display->display_options['fields']['log']['hide_alter_empty'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Fieldable pane (historical data): Created date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'fieldable_panels_panes_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  /* Field: Fieldable pane (historical data): Is current */
  $handler->display->display_options['fields']['is_current']['id'] = 'is_current';
  $handler->display->display_options['fields']['is_current']['table'] = 'fieldable_panels_panes_revision';
  $handler->display->display_options['fields']['is_current']['field'] = 'is_current';
  $handler->display->display_options['fields']['is_current']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['is_current']['current_text'] = ' <em>(is current)</em>';
  /* Field: Fieldable pane (historical data): Administrative link */
  $handler->display->display_options['fields']['view_revision']['id'] = 'view_revision';
  $handler->display->display_options['fields']['view_revision']['table'] = 'fieldable_panels_panes_revision';
  $handler->display->display_options['fields']['view_revision']['field'] = 'view_revision';
  $handler->display->display_options['fields']['view_revision']['label'] = 'Operations';
  $handler->display->display_options['fields']['view_revision']['hide_alter_empty'] = FALSE;
  /* Field: Fieldable pane (historical data): Administrative edit link */
  $handler->display->display_options['fields']['edit_revision']['id'] = 'edit_revision';
  $handler->display->display_options['fields']['edit_revision']['table'] = 'fieldable_panels_panes_revision';
  $handler->display->display_options['fields']['edit_revision']['field'] = 'edit_revision';
  $handler->display->display_options['fields']['edit_revision']['label'] = '';
  $handler->display->display_options['fields']['edit_revision']['element_label_colon'] = FALSE;
  /* Field: Fieldable pane (historical data): Administrative delete link */
  $handler->display->display_options['fields']['delete_revision']['id'] = 'delete_revision';
  $handler->display->display_options['fields']['delete_revision']['table'] = 'fieldable_panels_panes_revision';
  $handler->display->display_options['fields']['delete_revision']['field'] = 'delete_revision';
  $handler->display->display_options['fields']['delete_revision']['label'] = '';
  $handler->display->display_options['fields']['delete_revision']['element_label_colon'] = FALSE;
  /* Field: Fieldable pane (historical data): Administrative set current revision link */
  $handler->display->display_options['fields']['make_current']['id'] = 'make_current';
  $handler->display->display_options['fields']['make_current']['table'] = 'fieldable_panels_panes_revision';
  $handler->display->display_options['fields']['make_current']['field'] = 'make_current';
  $handler->display->display_options['fields']['make_current']['label'] = '';
  $handler->display->display_options['fields']['make_current']['element_label_colon'] = FALSE;
  /* Contextual filter: Fieldable pane (historical data): Fieldable pane ID */
  $handler->display->display_options['arguments']['fpid']['id'] = 'fpid';
  $handler->display->display_options['arguments']['fpid']['table'] = 'fieldable_panels_panes_revision';
  $handler->display->display_options['arguments']['fpid']['field'] = 'fpid';
  $handler->display->display_options['arguments']['fpid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['fpid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['fpid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['fpid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['fpid']['summary_options']['items_per_page'] = '50';
  $export['fieldable_pane_entity_revisions'] = $view;

  $view = new view();
  $view->name = 'redirects';
  $view->description = 'Displays a list of redirects on user and admin pages.';
  $view->tag = '';
  $view->base_table = 'redirect';
  $view->human_name = 'Redirects';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer redirects';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'source' => 'source',
    'redirect' => 'redirect',
    'language' => 'language',
    'count' => 'count',
    'access' => 'access',
    'edit_redirect' => 'edit_redirect',
    'delete_redirect' => 'delete_redirect',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'source' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'redirect' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'language' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'count' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'access' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'edit_redirect' => array(
      'align' => '',
      'separator' => '',
    ),
    'delete_redirect' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No URL redirects found.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Redirect: Redirect ID */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'redirect';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  /* Field: Redirect: Source URL */
  $handler->display->display_options['fields']['source']['id'] = 'source';
  $handler->display->display_options['fields']['source']['table'] = 'redirect';
  $handler->display->display_options['fields']['source']['field'] = 'source';
  $handler->display->display_options['fields']['source']['absolute'] = 0;
  /* Field: Redirect: Redirect URL */
  $handler->display->display_options['fields']['redirect']['id'] = 'redirect';
  $handler->display->display_options['fields']['redirect']['table'] = 'redirect';
  $handler->display->display_options['fields']['redirect']['field'] = 'redirect';
  $handler->display->display_options['fields']['redirect']['alter']['path'] = 'node';
  $handler->display->display_options['fields']['redirect']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['redirect']['absolute'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'redirect';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['empty'] = 'All';
  /* Field: Redirect: Clicks */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'redirect';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  /* Field: Redirect: Last accessed date */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'redirect';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['label'] = 'Last accessed';
  $handler->display->display_options['fields']['access']['empty'] = 'Never';
  $handler->display->display_options['fields']['access']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['access']['date_format'] = 'time ago';
  /* Field: Redirect: Operations */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'redirect';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  /* Filter criterion: Redirect: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'redirect';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'redirect' => 'redirect',
  );

  /* Display: Page: User redirects */
  $handler = $view->new_display('page', 'Page: User redirects', 'page_user');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Redirect: User ID */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'redirect';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['path'] = 'user/%/redirects';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Redirects';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Page: Admin redirects */
  $handler = $view->new_display('page', 'Page: Admin redirects', 'page_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/config/search/redirect/list';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['redirects'] = $view;

  return $export;
}
