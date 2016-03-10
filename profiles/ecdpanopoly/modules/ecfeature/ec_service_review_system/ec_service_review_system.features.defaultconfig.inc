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
      'field_group_info' => 'field_group_info',
      'strongarm' => 'strongarm',
      'taxonomy_default_vocabularies' => 'taxonomy_default_vocabularies',
      'user_default_permissions' => 'user_default_permissions',
      'views_default_views' => 'views_default_views',
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
 * Implements hook_defaultconfig_field_group_info().
 */
function ec_service_review_system_defaultconfig_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_1_group|entityform|sreview|form';
  $field_group->group_name = 'group_step_1_group';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sreview';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 1 Group',
    'weight' => '1',
    'children' => array(
      0 => 'field_sreview_step1',
      1 => 'field_sreview_email',
      2 => 'field_sreview_name',
      3 => 'field_sreview_city',
      4 => 'field_sreview_zipcode',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 1 Group',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'Step-1-fields',
        'classes' => 'group-step-1-group field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_1_group|entityform|sreview|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_2_group|entityform|sreview|form';
  $field_group->group_name = 'group_step_2_group';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sreview';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 2 Group',
    'weight' => '2',
    'children' => array(
      0 => 'field_sreview_step2',
      1 => 'field_sreview_services',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 2 Group',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'step-2-fields',
        'classes' => 'group-step-2-group field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_2_group|entityform|sreview|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_3_group|entityform|sreview|form';
  $field_group->group_name = 'group_step_3_group';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sreview';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 3 Group',
    'weight' => '3',
    'children' => array(
      0 => 'field_sreview_step3',
      1 => 'field_sreview_ratinglabels',
      2 => 'field_sreview_rating',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 3 Group',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'step-3-fields',
        'classes' => 'group-step-3-group field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_3_group|entityform|sreview|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_step_4_group|entityform|sreview|form';
  $field_group->group_name = 'group_step_4_group';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sreview';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 4 Group',
    'weight' => '4',
    'children' => array(
      0 => 'field_sreview_step4',
      1 => 'field_sreview_review',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 4 Group',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'step-4-fields',
        'classes' => 'group-step-4-group field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_step_4_group|entityform|sreview|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Step 1 Group');
  t('Step 2 Group');
  t('Step 3 Group');
  t('Step 4 Group');

  return $field_groups;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_service_review_system_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_sreview_site';
  $strongarm->value = 'edit-extras';
  $export['additional_settings__active_tab_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_sreview_site';
  $strongarm->value = '';
  $export['ant_pattern_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_sreview_site';
  $strongarm->value = 0;
  $export['ant_php_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_sreview_site';
  $strongarm->value = '0';
  $export['ant_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_menutitle_sreview_site';
  $strongarm->value = 0;
  $export['auto_menutitle_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clear_all_sreview_site';
  $strongarm->value = 0;
  $export['clear_all_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_cancel_sreview_site';
  $strongarm->value = '0';
  $export['content_type_extras_cancel_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_preview_button_sreview_site';
  $strongarm->value = 'Preview';
  $export['content_type_extras_preview_button_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_button_sreview_site';
  $strongarm->value = 'Save and Edit';
  $export['content_type_extras_save_and_edit_button_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_sreview_site';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_edit_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_button_sreview_site';
  $strongarm->value = 'Save and New';
  $export['content_type_extras_save_and_new_button_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_sreview_site';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_new_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_title_hide_sreview_site';
  $strongarm->value = 0;
  $export['content_type_extras_title_hide_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_sreview_site';
  $strongarm->value = 0;
  $export['date_popup_authored_enabled_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_sreview_site';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_sreview_site';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_sreview_site'] = $strongarm;

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
  $strongarm->name = 'disable_term_node_listings_service_review_tags';
  $strongarm->value = 'hide_listing';
  $export['disable_term_node_listings_service_review_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_entityform__sreview';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'email' => array(
        'custom_settings' => FALSE,
      ),
      'confirmation' => array(
        'custom_settings' => FALSE,
      ),
      'download' => array(
        'custom_settings' => FALSE,
      ),
      'table' => array(
        'custom_settings' => FALSE,
      ),
      'review' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_entityform__sreview'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__sreview_site';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'xmlsitemap' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'generate_sreview_site';
  $strongarm->value = 'Generate authkeys';
  $export['generate_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sreview_site';
  $strongarm->value = array();
  $export['menu_options_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sreview_site';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__sreview_site';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__service_review_tags';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term__service_review_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_authlink_expire_sreview_site';
  $strongarm->value = '0';
  $export['node_authlink_expire_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sreview_site';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sreview_site';
  $strongarm->value = '0';
  $export['node_preview_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sreview_site';
  $strongarm->value = 0;
  $export['node_submitted_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_sreview_site';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'show_this_block' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'grouped_teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_service_review_tags';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_service_review_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_sreview_site_pattern';
  $strongarm->value = 'service-review-site/[node:title]';
  $export['pathauto_node_sreview_site_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_sreview_site';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'schemaorg_ui_type_sreview_site';
  $strongarm->value = '';
  $export['schemaorg_ui_type_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sync_translations_sreview_site';
  $strongarm->value = '0';
  $export['sync_translations_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_permissions_sreview_site';
  $strongarm->value = array(
    0 => 'create_roles',
    1 => 'edit_roles',
    2 => 'edit_own_roles',
    3 => 'delete_roles',
    4 => 'delete_own_roles',
  );
  $export['user_permissions_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_default_sreview_site';
  $strongarm->value = '0';
  $export['weight_default_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_enabled_sreview_site';
  $strongarm->value = '0';
  $export['weight_enabled_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_menu_sreview_site';
  $strongarm->value = '0';
  $export['weight_menu_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_range_sreview_site';
  $strongarm->value = '20';
  $export['weight_range_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_sreview_site';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_sreview_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_service_review_tags';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_service_review_tags'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_taxonomy_default_vocabularies().
 */
function ec_service_review_system_defaultconfig_taxonomy_default_vocabularies() {
  return array(
    'service_review_tags' => (object) array(
      'name' => 'Service Review Tags',
      'machine_name' => 'service_review_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
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

  // Exported permission: 'create field_sreview_email_sent'.
  $permissions['create field_sreview_email_sent'] = array(
    'name' => 'create field_sreview_email_sent',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_sreview_send_email'.
  $permissions['create field_sreview_send_email'] = array(
    'name' => 'create field_sreview_send_email',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_sreview_tags'.
  $permissions['create field_sreview_tags'] = array(
    'name' => 'create field_sreview_tags',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
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
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any sreview_site content'.
  $permissions['edit any sreview_site content'] = array(
    'name' => 'edit any sreview_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit field_sreview_email_sent'.
  $permissions['edit field_sreview_email_sent'] = array(
    'name' => 'edit field_sreview_email_sent',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_sreview_send_email'.
  $permissions['edit field_sreview_send_email'] = array(
    'name' => 'edit field_sreview_send_email',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_sreview_tags'.
  $permissions['edit field_sreview_tags'] = array(
    'name' => 'edit field_sreview_tags',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_sreview_email_sent'.
  $permissions['edit own field_sreview_email_sent'] = array(
    'name' => 'edit own field_sreview_email_sent',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_sreview_send_email'.
  $permissions['edit own field_sreview_send_email'] = array(
    'name' => 'edit own field_sreview_send_email',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_sreview_tags'.
  $permissions['edit own field_sreview_tags'] = array(
    'name' => 'edit own field_sreview_tags',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
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
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view field_sreview_email_sent'.
  $permissions['view field_sreview_email_sent'] = array(
    'name' => 'view field_sreview_email_sent',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_sreview_send_email'.
  $permissions['view field_sreview_send_email'] = array(
    'name' => 'view field_sreview_send_email',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_sreview_tags'.
  $permissions['view field_sreview_tags'] = array(
    'name' => 'view field_sreview_tags',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_sreview_email_sent'.
  $permissions['view own field_sreview_email_sent'] = array(
    'name' => 'view own field_sreview_email_sent',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_sreview_send_email'.
  $permissions['view own field_sreview_send_email'] = array(
    'name' => 'view own field_sreview_send_email',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_sreview_tags'.
  $permissions['view own field_sreview_tags'] = array(
    'name' => 'view own field_sreview_tags',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}

/**
 * Implements hook_defaultconfig_views_default_views().
 */
function ec_service_review_system_defaultconfig_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sreview_manage_reviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Manage Service Reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage New Service Reviews';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'panopoly_wysiwyg_text',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_sreview_tags_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'field_sreview_rating' => 'field_sreview_rating',
    'field_sreview_review' => 'field_sreview_review',
    'field_sreview_name' => 'field_sreview_name',
    'field_sreview_city' => 'field_sreview_name',
    'field_sreview_zipcode' => 'field_sreview_name',
    'field_sreview_email' => 'field_sreview_name',
    'field_sreview_services' => 'field_sreview_name',
    'field_sreview_tags' => 'field_sreview_tags',
    'field_sreview_send_email' => 'created',
    'views_conditional' => 'created',
    'field_sreview_email_sent' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_rating' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_review' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_zipcode' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_services' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_send_email' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_conditional' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_email_sent' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>New = A new review, waiting to be processed. Un-check "New" when the review has been processed.</p>

<p>Show on Reviews Page = Immediately post the review to the live reviews page. (Make any needed edits before selecting this option.)</p>

<p>Other tags are for convenience in managing the reviews.</p>
';
  $handler->display->display_options['header']['area']['format'] = 'panopoly_html_text';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No reviews found. Try using different filter settings.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'panopoly_time';
  /* Field: Entityform Submission: Rating */
  $handler->display->display_options['fields']['field_sreview_rating']['id'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['table'] = 'field_data_field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['field'] = 'field_sreview_rating';
  /* Field: Entityform Submission: Review */
  $handler->display->display_options['fields']['field_sreview_review']['id'] = 'field_sreview_review';
  $handler->display->display_options['fields']['field_sreview_review']['table'] = 'field_data_field_sreview_review';
  $handler->display->display_options['fields']['field_sreview_review']['field'] = 'field_sreview_review';
  /* Field: Entityform Submission: Name */
  $handler->display->display_options['fields']['field_sreview_name']['id'] = 'field_sreview_name';
  $handler->display->display_options['fields']['field_sreview_name']['table'] = 'field_data_field_sreview_name';
  $handler->display->display_options['fields']['field_sreview_name']['field'] = 'field_sreview_name';
  $handler->display->display_options['fields']['field_sreview_name']['label'] = 'Customer';
  $handler->display->display_options['fields']['field_sreview_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_name']['alter']['text'] = '[field_sreview_name]<br />';
  /* Field: Entityform Submission: City */
  $handler->display->display_options['fields']['field_sreview_city']['id'] = 'field_sreview_city';
  $handler->display->display_options['fields']['field_sreview_city']['table'] = 'field_data_field_sreview_city';
  $handler->display->display_options['fields']['field_sreview_city']['field'] = 'field_sreview_city';
  $handler->display->display_options['fields']['field_sreview_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_city']['alter']['text'] = '[field_sreview_city]<br />';
  /* Field: Entityform Submission: Zipcode */
  $handler->display->display_options['fields']['field_sreview_zipcode']['id'] = 'field_sreview_zipcode';
  $handler->display->display_options['fields']['field_sreview_zipcode']['table'] = 'field_data_field_sreview_zipcode';
  $handler->display->display_options['fields']['field_sreview_zipcode']['field'] = 'field_sreview_zipcode';
  $handler->display->display_options['fields']['field_sreview_zipcode']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_zipcode']['alter']['text'] = '[field_sreview_zipcode]<br />';
  /* Field: Entityform Submission: Email */
  $handler->display->display_options['fields']['field_sreview_email']['id'] = 'field_sreview_email';
  $handler->display->display_options['fields']['field_sreview_email']['table'] = 'field_data_field_sreview_email';
  $handler->display->display_options['fields']['field_sreview_email']['field'] = 'field_sreview_email';
  $handler->display->display_options['fields']['field_sreview_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_email']['alter']['text'] = '[field_sreview_email]<br />';
  /* Field: Entityform Submission: Services */
  $handler->display->display_options['fields']['field_sreview_services']['id'] = 'field_sreview_services';
  $handler->display->display_options['fields']['field_sreview_services']['table'] = 'field_data_field_sreview_services';
  $handler->display->display_options['fields']['field_sreview_services']['field'] = 'field_sreview_services';
  $handler->display->display_options['fields']['field_sreview_services']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_services']['alter']['text'] = '[field_sreview_services]<br />';
  $handler->display->display_options['fields']['field_sreview_services']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_sreview_services']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sreview_services']['separator'] = ' | ';
  /* Field: Entityform Submission: Review Tags */
  $handler->display->display_options['fields']['field_sreview_tags']['id'] = 'field_sreview_tags';
  $handler->display->display_options['fields']['field_sreview_tags']['table'] = 'field_data_field_sreview_tags';
  $handler->display->display_options['fields']['field_sreview_tags']['field'] = 'field_sreview_tags';
  $handler->display->display_options['fields']['field_sreview_tags']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sreview_tags']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_plain',
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_sreview_tags']['delta_offset'] = '0';
  /* Field: Entityform Submission: Send High Rating Followup Email */
  $handler->display->display_options['fields']['field_sreview_send_email']['id'] = 'field_sreview_send_email';
  $handler->display->display_options['fields']['field_sreview_send_email']['table'] = 'field_data_field_sreview_send_email';
  $handler->display->display_options['fields']['field_sreview_send_email']['field'] = 'field_sreview_send_email';
  $handler->display->display_options['fields']['field_sreview_send_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_send_email']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sreview_send_email']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_sreview_send_email']['delta_offset'] = '0';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '3';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '8';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_sreview_send_email]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Entityform Submission: High Rating Email Sent */
  $handler->display->display_options['fields']['field_sreview_email_sent']['id'] = 'field_sreview_email_sent';
  $handler->display->display_options['fields']['field_sreview_email_sent']['table'] = 'field_data_field_sreview_email_sent';
  $handler->display->display_options['fields']['field_sreview_email_sent']['field'] = 'field_sreview_email_sent';
  $handler->display->display_options['fields']['field_sreview_email_sent']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_email_sent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sreview_email_sent']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_sreview_email_sent']['delta_offset'] = '0';
  /* Sort criterion: Entityform Submission: Date submitted */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'entityform';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sreview' => 'sreview',
  );
  /* Filter criterion: Entityform Submission: Review Tags (field_sreview_tags) */
  $handler->display->display_options['filters']['field_sreview_tags_tid']['id'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['table'] = 'field_data_field_sreview_tags';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['field'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['value'] = array(
    25 => '25',
  );
  $handler->display->display_options['filters']['field_sreview_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sreview_tags_tid']['expose']['operator_id'] = 'field_sreview_tags_tid_op';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['expose']['label'] = 'Filter Reviews';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['expose']['operator'] = 'field_sreview_tags_tid_op';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['expose']['identifier'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_sreview_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['vocabulary'] = 'service_review_tags';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/service-reviews';
  $export['sreview_manage_reviews'] = $view;

  $view = new view();
  $view->name = 'sreview_sites';
  $view->description = 'External review sites to display in the Review Management System';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Review Sites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_review_site_url' => 'field_review_site_url',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_review_site_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Satisfied with your experience? Please take a minute to share a review of our services on any of the following sites.</h2>';
  $handler->display->display_options['header']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Content: Service Review Page */
  $handler->display->display_options['fields']['field_sreview_page']['id'] = 'field_sreview_page';
  $handler->display->display_options['fields']['field_sreview_page']['table'] = 'field_data_field_sreview_page';
  $handler->display->display_options['fields']['field_sreview_page']['field'] = 'field_sreview_page';
  $handler->display->display_options['fields']['field_sreview_page']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sreview_page']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sreview_page']['type'] = 'link_plain';
  /* Field: Content: Service Review Site Logo */
  $handler->display->display_options['fields']['field_sreview_logo']['id'] = 'field_sreview_logo';
  $handler->display->display_options['fields']['field_sreview_logo']['table'] = 'field_data_field_sreview_logo';
  $handler->display->display_options['fields']['field_sreview_logo']['field'] = 'field_sreview_logo';
  $handler->display->display_options['fields']['field_sreview_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_logo']['alter']['text'] = '<a href="[field_sreview_page]" target="_blank">[field_sreview_logo]</a>';
  $handler->display->display_options['fields']['field_sreview_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sreview_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sreview_logo']['settings'] = array(
    'image_style' => 's_140',
    'image_link' => '',
  );
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'rms_review_sites:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sreview_site' => 'sreview_site',
  );

  /* Display: Service Review Sites */
  $handler = $view->new_display('panel_pane', 'Service Review Sites', 'panel_pane_1');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = 'Rearrange';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['path'] = 'admin/service-review-sites';
  $handler->display->display_options['menu']['title'] = 'RMS Review';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['sreview_sites'] = $view;

  $view = new view();
  $view->name = 'sreviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Service Reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Entityform Submission: Rating */
  $handler->display->display_options['fields']['field_sreview_rating']['id'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['table'] = 'field_data_field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['field'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_rating']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_rating']['element_label_colon'] = FALSE;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Scale of 1 to 5';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_sreview_rating]/2';
  /* Field: Entityform Submission: Rating */
  $handler->display->display_options['fields']['field_sreview_rating_1']['id'] = 'field_sreview_rating_1';
  $handler->display->display_options['fields']['field_sreview_rating_1']['table'] = 'field_data_field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating_1']['field'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating_1']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_rating_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_rating_1']['alter']['text'] = '<span class="rating-[expression]">[expression]</span>';
  $handler->display->display_options['fields']['field_sreview_rating_1']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Review */
  $handler->display->display_options['fields']['field_sreview_review']['id'] = 'field_sreview_review';
  $handler->display->display_options['fields']['field_sreview_review']['table'] = 'field_data_field_sreview_review';
  $handler->display->display_options['fields']['field_sreview_review']['field'] = 'field_sreview_review';
  $handler->display->display_options['fields']['field_sreview_review']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_review']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: City */
  $handler->display->display_options['fields']['field_sreview_city']['id'] = 'field_sreview_city';
  $handler->display->display_options['fields']['field_sreview_city']['table'] = 'field_data_field_sreview_city';
  $handler->display->display_options['fields']['field_sreview_city']['field'] = 'field_sreview_city';
  $handler->display->display_options['fields']['field_sreview_city']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_city']['alter']['text'] = ', [field_sreview_city]';
  $handler->display->display_options['fields']['field_sreview_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sreview_city']['hide_empty'] = TRUE;
  /* Field: Entityform Submission: Name */
  $handler->display->display_options['fields']['field_sreview_name']['id'] = 'field_sreview_name';
  $handler->display->display_options['fields']['field_sreview_name']['table'] = 'field_data_field_sreview_name';
  $handler->display->display_options['fields']['field_sreview_name']['field'] = 'field_sreview_name';
  $handler->display->display_options['fields']['field_sreview_name']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_name']['alter']['text'] = '[field_sreview_name][field_sreview_city]';
  $handler->display->display_options['fields']['field_sreview_name']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Services */
  $handler->display->display_options['fields']['field_sreview_services']['id'] = 'field_sreview_services';
  $handler->display->display_options['fields']['field_sreview_services']['table'] = 'field_data_field_sreview_services';
  $handler->display->display_options['fields']['field_sreview_services']['field'] = 'field_sreview_services';
  $handler->display->display_options['fields']['field_sreview_services']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_services']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_services']['alter']['text'] = 'Services: [field_sreview_services]';
  $handler->display->display_options['fields']['field_sreview_services']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sreview_services']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_sreview_services']['delta_offset'] = '0';
  /* Sort criterion: Entityform Submission: Rating (field_sreview_rating) */
  $handler->display->display_options['sorts']['field_sreview_rating_value']['id'] = 'field_sreview_rating_value';
  $handler->display->display_options['sorts']['field_sreview_rating_value']['table'] = 'field_data_field_sreview_rating';
  $handler->display->display_options['sorts']['field_sreview_rating_value']['field'] = 'field_sreview_rating_value';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sreview' => 'sreview',
  );
  /* Filter criterion: Entityform Submission: Review Tags (field_sreview_tags) */
  $handler->display->display_options['filters']['field_sreview_tags_tid']['id'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['table'] = 'field_data_field_sreview_tags';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['field'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['value'] = array(
    22 => '22',
  );
  $handler->display->display_options['filters']['field_sreview_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['vocabulary'] = 'service_review_tags';

  /* Display: Service Reviews */
  $handler = $view->new_display('panel_pane', 'Service Reviews', 'panel_pane_1');
  $export['sreviews'] = $view;

  $view = new view();
  $view->name = 'sreviews_average';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Service Review - Average';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Average Rating';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: AVG(Entityform Submission: Rating) */
  $handler->display->display_options['fields']['field_sreview_rating']['id'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['table'] = 'field_data_field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['field'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_sreview_rating']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_rating']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_rating']['alter']['text'] = '<span class="rating-[field_sreview_rating]">[field_sreview_rating]</span>';
  $handler->display->display_options['fields']['field_sreview_rating']['element_label_colon'] = FALSE;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_sreview_rating]/2';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="rating-[expression]">[expression]</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sreview' => 'sreview',
  );
  /* Filter criterion: Entityform Submission: Review Tags (field_sreview_tags) */
  $handler->display->display_options['filters']['field_sreview_tags_tid']['id'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['table'] = 'field_data_field_sreview_tags';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['field'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['value'] = array(
    22 => '22',
  );
  $handler->display->display_options['filters']['field_sreview_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['vocabulary'] = 'service_review_tags';

  /* Display: Average rating */
  $handler = $view->new_display('panel_pane', 'Average rating', 'panel_pane_1');
  $export['sreviews_average'] = $view;

  return $export;
}
