<?php
/**
 * @file
 * ec_service_review_system.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_service_review_system_defaultconfig_features() {
  return array(
    'ec_service_review_system' => array(
      'field_default_fields' => 'field_default_fields',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function ec_service_review_system_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'entityform-sreview-field_sreview_city'.
  $fields['entityform-sreview-field_sreview_city'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_city',
      'field_permissions' => array(
        'type' => 0,
      ),
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
      'bundle' => 'sreview',
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
          'weight' => 3,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_city',
      'label' => 'City',
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
        'weight' => 5,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_email'.
  $fields['entityform-sreview-field_sreview_email'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_email',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'email',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'sreview',
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
          'weight' => 1,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_email',
      'label' => 'Email',
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
        'weight' => 4,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_email_sent'.
  $fields['entityform-sreview-field_sreview_email_sent'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_email_sent',
      'field_permissions' => array(
        'type' => 2,
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'Follow-up Email Sent',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'sreview',
      'default_value' => NULL,
      'default_value_label_token' => 0,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'list_default',
          'weight' => 15,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_email_sent',
      'label' => 'High Rating Email Sent',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 9,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_name'.
  $fields['entityform-sreview-field_sreview_name'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_name',
      'field_permissions' => array(
        'type' => 0,
      ),
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
      'bundle' => 'sreview',
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
          'weight' => 2,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_name',
      'label' => 'Name',
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
        'weight' => 3,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_rating'.
  $fields['entityform-sreview-field_sreview_rating'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_rating',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          6 => 6,
          7 => 7,
          8 => 8,
          9 => 9,
          10 => 10,
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'sreview',
      'default_value' => NULL,
      'default_value_label_token' => 0,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'list_default',
          'weight' => 9,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_rating',
      'label' => 'Rating',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 6,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_ratinglabels'.
  $fields['entityform-sreview-field_sreview_ratinglabels'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_ratinglabels',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'markup',
      'settings' => array(
        'markup' => array(
          'format' => 'panopoly_html_text',
          'value' => '<p class="rating-labels"><span class="rating-labels low">Not likely</span><span class="rating-labels high">Very likely</span></p>',
        ),
      ),
      'translatable' => 0,
      'type' => 'markup',
    ),
    'field_instance' => array(
      'bundle' => 'sreview',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'markup',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'markup_default',
          'weight' => 8,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_ratinglabels',
      'label' => 'Rating labels',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup',
        'weight' => 5,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_review'.
  $fields['entityform-sreview-field_sreview_review'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_review',
      'field_permissions' => array(
        'type' => 0,
      ),
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
      'bundle' => 'sreview',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_review',
      'label' => 'Review',
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
        'weight' => 6,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_send_email'.
  $fields['entityform-sreview-field_sreview_send_email'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_send_email',
      'field_permissions' => array(
        'type' => 2,
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'Send Follow up Email',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'sreview',
      'default_value' => NULL,
      'default_value_label_token' => 0,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'list_default',
          'weight' => 14,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_send_email',
      'label' => 'Send High Rating Followup Email',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 8,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_services'.
  $fields['entityform-sreview-field_sreview_services'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_services',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Heating' => 'Heating',
          'Air Conditioning' => 'Air Conditioning',
          'Insulation' => 'Insulation',
          'Connected Home' => 'Connected Home',
          'Energy Audit' => 'Energy Audit',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'sreview',
      'default_value' => NULL,
      'default_value_label_token' => 0,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'list_default',
          'weight' => 6,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_services',
      'label' => 'Services',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 4,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_step1'.
  $fields['entityform-sreview-field_sreview_step1'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_step1',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'markup',
      'settings' => array(
        'markup' => array(
          'format' => 'panopoly_html_text',
          'value' => '<p class="step"><span class="step-button">Step 1</span>Enter your email, name, city and zip code.</p>

',
        ),
      ),
      'translatable' => 0,
      'type' => 'markup',
    ),
    'field_instance' => array(
      'bundle' => 'sreview',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'markup',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'markup_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_step1',
      'label' => 'Step 1',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup',
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_step2'.
  $fields['entityform-sreview-field_sreview_step2'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_step2',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'markup',
      'settings' => array(
        'markup' => array(
          'format' => 'panopoly_html_text',
          'value' => '<p class="step"><span class="step-button">Step 2</span>Check the services you used us for.</p>',
        ),
      ),
      'translatable' => 0,
      'type' => 'markup',
    ),
    'field_instance' => array(
      'bundle' => 'sreview',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'markup',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'markup_default',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_step2',
      'label' => 'Step 2',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup',
        'weight' => 3,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_step3'.
  $fields['entityform-sreview-field_sreview_step3'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_step3',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'markup',
      'settings' => array(
        'markup' => array(
          'format' => 'panopoly_html_text',
          'value' => '<p class="step"><span class="step-button">Step 3</span>How likely are you to recommend us to a friend?</p>',
        ),
      ),
      'translatable' => 0,
      'type' => 'markup',
    ),
    'field_instance' => array(
      'bundle' => 'sreview',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'markup',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'markup_default',
          'weight' => 7,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_step3',
      'label' => 'Step 3',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup',
        'weight' => 4,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_step4'.
  $fields['entityform-sreview-field_sreview_step4'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_step4',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'markup',
      'settings' => array(
        'markup' => array(
          'format' => 'panopoly_html_text',
          'value' => '<p class="step"><span class="step-button">Step 4</span>Please take a minute to tell us about your experience.</p>',
        ),
      ),
      'translatable' => 0,
      'type' => 'markup',
    ),
    'field_instance' => array(
      'bundle' => 'sreview',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'markup',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'markup_default',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_step4',
      'label' => 'Step 4',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup',
        'weight' => 5,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_tags'.
  $fields['entityform-sreview-field_sreview_tags'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_tags',
      'field_permissions' => array(
        'type' => 2,
      ),
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'service_review_tags',
            'parent' => 0,
          ),
        ),
        'options_list_callback' => 'title_taxonomy_allowed_values',
      ),
      'translatable' => 0,
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'sreview',
      'default_value' => array(
        0 => array(
          'tid' => 25,
        ),
      ),
      'default_value_label_token' => 0,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 13,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_tags',
      'label' => 'Review Tags',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 7,
      ),
    ),
  );

  // Exported field: 'entityform-sreview-field_sreview_zipcode'.
  $fields['entityform-sreview-field_sreview_zipcode'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_zipcode',
      'field_permissions' => array(
        'type' => 0,
      ),
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
      'bundle' => 'sreview',
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
          'weight' => 12,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_sreview_zipcode',
      'label' => 'Zipcode',
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
        'weight' => 6,
      ),
    ),
  );

  // Exported field: 'node-sreview_site-field_sreview_logo'.
  $fields['node-sreview_site-field_sreview_logo'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_logo',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'sreview_site',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 1,
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
      'field_name' => 'field_sreview_logo',
      'label' => 'Service Review Site Logo',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'logo',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '2400x2400',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'private' => 0,
            'public' => 'public',
            'vimeo' => 0,
            'youtube' => 0,
          ),
          'allowed_types' => array(
            'audio' => 0,
            'document' => 0,
            'image' => 'image',
            'video' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 'media_default--media_browser_1',
            'media_default--media_browser_my_files' => 0,
            'media_internet' => 0,
            'upload' => 'upload',
          ),
          'manualcrop_crop_info' => 1,
          'manualcrop_default_crop_area' => 1,
          'manualcrop_enable' => 0,
          'manualcrop_inline_crop' => 0,
          'manualcrop_instant_crop' => FALSE,
          'manualcrop_instant_preview' => 1,
          'manualcrop_keyboard' => 1,
          'manualcrop_maximize_default_crop_area' => 0,
          'manualcrop_require_cropping' => array(),
          'manualcrop_styles_list' => array(),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 0,
        ),
        'type' => 'media_generic',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'node-sreview_site-field_sreview_page'.
  $fields['node-sreview_site-field_sreview_page'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sreview_page',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => 0,
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'sreview_site',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'link_default',
          'weight' => 2,
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
      'field_name' => 'field_sreview_page',
      'label' => 'Service Review Page',
      'required' => 0,
      'settings' => array(
        'absolute_url' => 1,
        'attributes' => array(
          'class' => '',
          'configurable_class' => 0,
          'configurable_title' => 0,
          'rel' => '',
          'target' => '_blank',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'rel_remove' => 'default',
        'title' => 'optional',
        'title_label_use_field_label' => 0,
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => 2,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('City');
  t('Email');
  t('High Rating Email Sent');
  t('Name');
  t('Rating');
  t('Rating labels');
  t('Review');
  t('Review Tags');
  t('Send High Rating Followup Email');
  t('Service Review Page');
  t('Service Review Site Logo');
  t('Services');
  t('Step 1');
  t('Step 2');
  t('Step 3');
  t('Step 4');
  t('Zipcode');

  return $fields;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_service_review_system_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_sreview_site';
  $strongarm->value = 0;
  $export['diff_enable_revisions_page_node_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_sreview_site';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_sreview_site';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'generate_sreview_site';
  $strongarm->value = 'Generate authkeys';
  $export['generate_sreview_site'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function ec_service_review_system_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node sreview_site defaults'.
  $permissions['administer panelizer node sreview_site defaults'] = array(
    'name' => 'administer panelizer node sreview_site defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term service_review_tags defaults'.
  $permissions['administer panelizer taxonomy_term service_review_tags defaults'] = array(
    'name' => 'administer panelizer taxonomy_term service_review_tags defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create sreview_site content'.
  $permissions['create sreview_site content'] = array(
    'name' => 'create sreview_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sreview_site content'.
  $permissions['delete any sreview_site content'] = array(
    'name' => 'delete any sreview_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sreview_site content'.
  $permissions['delete own sreview_site content'] = array(
    'name' => 'delete own sreview_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in service_review_tags'.
  $permissions['delete terms in service_review_tags'] = array(
    'name' => 'delete terms in service_review_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any sreview_site content'.
  $permissions['edit any sreview_site content'] = array(
    'name' => 'edit any sreview_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sreview_site content'.
  $permissions['edit own sreview_site content'] = array(
    'name' => 'edit own sreview_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in service_review_tags'.
  $permissions['edit terms in service_review_tags'] = array(
    'name' => 'edit terms in service_review_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
