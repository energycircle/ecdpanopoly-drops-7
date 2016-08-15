<?php
/**
 * @file
 * ec_sr3.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_sr3_defaultconfig_features() {
  return array(
    'ec_sr3' => array(
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
function ec_sr3_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'node-sr3_service_review-field_sr3_city'.
  $fields['node-sr3_service_review-field_sr3_city'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sr3_city',
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
      'bundle' => 'sr3_service_review',
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
          'weight' => 7,
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
      'field_name' => 'field_sr3_city',
      'label' => 'SR3 City',
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
        'weight' => 16,
      ),
    ),
  );

  // Exported field: 'node-sr3_service_review-field_sr3_employee_courtesy'.
  $fields['node-sr3_service_review-field_sr3_employee_courtesy'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sr3_employee_courtesy',
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
          1 => 'Poor',
          2 => 'Below Average',
          3 => 'Average',
          4 => 'Good',
          5 => 'Excellent',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'sr3_service_review',
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
          'weight' => 3,
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
      'field_name' => 'field_sr3_employee_courtesy',
      'label' => 'SR3 Employee Courtesy',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 12,
      ),
    ),
  );

  // Exported field: 'node-sr3_service_review-field_sr3_name'.
  $fields['node-sr3_service_review-field_sr3_name'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sr3_name',
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
      'bundle' => 'sr3_service_review',
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
      'field_name' => 'field_sr3_name',
      'label' => 'SR3 Name',
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
        'weight' => 15,
      ),
    ),
  );

  // Exported field: 'node-sr3_service_review-field_sr3_overall_experience'.
  $fields['node-sr3_service_review-field_sr3_overall_experience'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sr3_overall_experience',
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
          1 => 'Poor',
          2 => 'Below Average',
          3 => 'Average',
          4 => 'Good',
          5 => 'Excellent',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'sr3_service_review',
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
          'weight' => 4,
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
      'field_name' => 'field_sr3_overall_experience',
      'label' => 'SR3 Overall Experience',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 13,
      ),
    ),
  );

  // Exported field: 'node-sr3_service_review-field_sr3_quality_of_work'.
  $fields['node-sr3_service_review-field_sr3_quality_of_work'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sr3_quality_of_work',
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
          1 => 'Poor',
          2 => 'Below Average',
          3 => 'Average',
          4 => 'Good',
          5 => 'Excellent',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'sr3_service_review',
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
      'field_name' => 'field_sr3_quality_of_work',
      'label' => 'SR3 Quality of Work',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 11,
      ),
    ),
  );

  // Exported field: 'node-sr3_service_review-field_sr3_rating_value'.
  $fields['node-sr3_service_review-field_sr3_rating_value'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sr3_rating_value',
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
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'sr3_service_review',
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
      'field_name' => 'field_sr3_rating_value',
      'label' => 'Please rate the quality of our service',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 18,
      ),
    ),
  );

  // Exported field: 'node-sr3_service_review-field_sr3_recommendation'.
  $fields['node-sr3_service_review-field_sr3_recommendation'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sr3_recommendation',
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
          0 => 0,
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
      'bundle' => 'sr3_service_review',
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
          'weight' => 5,
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
      'field_name' => 'field_sr3_recommendation',
      'label' => 'SR3 recommendation',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 14,
      ),
    ),
  );

  // Exported field: 'node-sr3_service_review-field_sr3_response_time'.
  $fields['node-sr3_service_review-field_sr3_response_time'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sr3_response_time',
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
          1 => 'Poor',
          2 => 'Below Average',
          3 => 'Average',
          4 => 'Good',
          5 => 'Excellent',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'sr3_service_review',
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
      'field_name' => 'field_sr3_response_time',
      'label' => 'Response Time',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 10,
      ),
    ),
  );

  // Exported field: 'node-sr3_service_review-field_sr3_service_feedback'.
  $fields['node-sr3_service_review-field_sr3_service_feedback'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sr3_service_feedback',
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
      'bundle' => 'sr3_service_review',
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
          'weight' => 11,
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
      'field_name' => 'field_sr3_service_feedback',
      'label' => 'Please leave your feedback',
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
        'weight' => 20,
      ),
    ),
  );

  // Exported field: 'node-sr3_service_review-field_sr3_service_review'.
  $fields['node-sr3_service_review-field_sr3_service_review'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sr3_service_review',
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
      'bundle' => 'sr3_service_review',
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
          'weight' => 10,
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
      'field_name' => 'field_sr3_service_review',
      'label' => 'Please leave your review',
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
        'weight' => 19,
      ),
    ),
  );

  // Exported field: 'node-sr3_service_review-field_sr3_services_provided'.
  $fields['node-sr3_service_review-field_sr3_services_provided'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sr3_services_provided',
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
            'vocabulary' => 'sr3_review_services',
            'parent' => 0,
          ),
        ),
        'options_list_callback' => 'title_taxonomy_allowed_values',
      ),
      'translatable' => 0,
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'sr3_service_review',
      'default_value' => NULL,
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
          'weight' => 12,
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
      'field_name' => 'field_sr3_services_provided',
      'label' => 'SR3 Services Provided',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 21,
      ),
    ),
  );

  // Exported field: 'node-sr3_service_review-field_sr3_zipcode'.
  $fields['node-sr3_service_review-field_sr3_zipcode'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sr3_zipcode',
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
      'bundle' => 'sr3_service_review',
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
          'weight' => 8,
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
      'field_name' => 'field_sr3_zipcode',
      'label' => 'SR3 Zipcode',
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
        'weight' => 17,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Please leave your feedback');
  t('Please leave your review');
  t('Please rate the quality of our service');
  t('Response Time');
  t('SR3 City');
  t('SR3 Employee Courtesy');
  t('SR3 Name');
  t('SR3 Overall Experience');
  t('SR3 Quality of Work');
  t('SR3 Services Provided');
  t('SR3 Zipcode');
  t('SR3 recommendation');

  return $fields;
}

/**
 * Implements hook_defaultconfig_field_group_info().
 */
function ec_sr3_defaultconfig_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sr3_evaluation|node|sr3_service_review|form';
  $field_group->group_name = 'group_sr3_evaluation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sr3_service_review';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SR3 Evaluation',
    'weight' => '1',
    'children' => array(
      0 => 'group_sr3_ratings',
      1 => 'group_sr3_services',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'SR3 Evaluation',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-sr3-evaluation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sr3_evaluation|node|sr3_service_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sr3_feedback|node|sr3_service_review|form';
  $field_group->group_name = 'group_sr3_feedback';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sr3_service_review';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feedback',
    'weight' => '5',
    'children' => array(
      0 => 'field_sr3_service_feedback',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Feedback',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-sr3-feedback field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sr3_feedback|node|sr3_service_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sr3_ratings|node|sr3_service_review|form';
  $field_group->group_name = 'group_sr3_ratings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sr3_service_review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sr3_evaluation';
  $field_group->data = array(
    'label' => 'SR3 Ratings',
    'weight' => '24',
    'children' => array(
      0 => 'field_sr3_response_time',
      1 => 'field_sr3_quality_of_work',
      2 => 'field_sr3_employee_courtesy',
      3 => 'field_sr3_overall_experience',
      4 => 'field_sr3_recommendation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'SR3 Ratings',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-sr3-ratings field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sr3_ratings|node|sr3_service_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sr3_rating|node|sr3_service_review|form';
  $field_group->group_name = 'group_sr3_rating';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sr3_service_review';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rating',
    'weight' => '3',
    'children' => array(
      0 => 'field_sr3_rating_value',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Rating',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-sr3-rating field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sr3_rating|node|sr3_service_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sr3_reviewer|node|sr3_service_review|form';
  $field_group->group_name = 'group_sr3_reviewer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sr3_service_review';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reviewer',
    'weight' => '2',
    'children' => array(
      0 => 'field_sr3_name',
      1 => 'field_sr3_city',
      2 => 'field_sr3_zipcode',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Reviewer',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-sr3-reviewer field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sr3_reviewer|node|sr3_service_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sr3_review|node|sr3_service_review|form';
  $field_group->group_name = 'group_sr3_review';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sr3_service_review';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Review',
    'weight' => '4',
    'children' => array(
      0 => 'field_sr3_service_review',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Review',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-sr3-review field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sr3_review|node|sr3_service_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sr3_services|node|sr3_service_review|form';
  $field_group->group_name = 'group_sr3_services';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sr3_service_review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sr3_evaluation';
  $field_group->data = array(
    'label' => 'SR3 Services',
    'weight' => '23',
    'children' => array(
      0 => 'field_sr3_services_provided',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'SR3 Services',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sr3-services field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sr3_services|node|sr3_service_review|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Feedback');
  t('Rating');
  t('Review');
  t('Reviewer');
  t('SR3 Evaluation');
  t('SR3 Ratings');
  t('SR3 Services');

  return $field_groups;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_sr3_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_sr3_service_review';
  $strongarm->value = 'edit-rabbit-hole';
  $export['additional_settings__active_tab_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_sr3_service_review';
  $strongarm->value = 'Review [current-date:short]';
  $export['ant_pattern_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_sr3_service_review';
  $strongarm->value = 0;
  $export['ant_php_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_sr3_service_review';
  $strongarm->value = '1';
  $export['ant_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_menutitle_sr3_service_review';
  $strongarm->value = 0;
  $export['auto_menutitle_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clear_all_sr3_service_review';
  $strongarm->value = 0;
  $export['clear_all_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_cancel_sr3_service_review';
  $strongarm->value = '0';
  $export['content_type_extras_cancel_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_preview_button_sr3_service_review';
  $strongarm->value = 'Preview';
  $export['content_type_extras_preview_button_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_button_sr3_service_review';
  $strongarm->value = 'Save and Edit';
  $export['content_type_extras_save_and_edit_button_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_sr3_service_review';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_edit_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_button_sr3_service_review';
  $strongarm->value = 'Save and New';
  $export['content_type_extras_save_and_new_button_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_sr3_service_review';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_new_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_title_hide_sr3_service_review';
  $strongarm->value = 0;
  $export['content_type_extras_title_hide_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_sr3_service_review';
  $strongarm->value = 0;
  $export['date_popup_authored_enabled_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_sr3_service_review';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_sr3_service_review';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_term_node_listings_sr3_review_services';
  $strongarm->value = 'hide_listing';
  $export['disable_term_node_listings_sr3_review_services'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__sr3_service_review';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '9',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
        'xmlsitemap' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'generate_sr3_service_review';
  $strongarm->value = 'Generate authkeys';
  $export['generate_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sr3_service_review';
  $strongarm->value = array();
  $export['menu_options_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sr3_service_review';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__sr3_service_review';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__sr3_review_services';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term__sr3_review_services'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_authlink_enable_sr3_service_review';
  $strongarm->value = 1;
  $export['node_authlink_enable_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_authlink_expire_sr3_service_review';
  $strongarm->value = '86400';
  $export['node_authlink_expire_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_authlink_grants_sr3_service_review';
  $strongarm->value = array(
    0 => 'view',
    1 => 'update',
  );
  $export['node_authlink_grants_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_buttons_edit_delete_edit_sr3_service_review';
  $strongarm->value = 'Delete';
  $export['node_buttons_edit_delete_edit_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_buttons_edit_preview_edit_sr3_service_review';
  $strongarm->value = 'Preview';
  $export['node_buttons_edit_preview_edit_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_buttons_edit_preview_new_sr3_service_review';
  $strongarm->value = 'Preview';
  $export['node_buttons_edit_preview_new_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_buttons_edit_save_edit_sr3_service_review';
  $strongarm->value = 'Submit Review';
  $export['node_buttons_edit_save_edit_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_buttons_edit_save_new_sr3_service_review';
  $strongarm->value = 'Submit Service Review';
  $export['node_buttons_edit_save_new_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sr3_service_review';
  $strongarm->value = array();
  $export['node_options_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sr3_service_review';
  $strongarm->value = '0';
  $export['node_preview_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sr3_service_review';
  $strongarm->value = 0;
  $export['node_submitted_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_sr3_service_review';
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
  $export['panelizer_defaults_node_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_sr3_review_services';
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
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'diff_standard' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_sr3_review_services'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_sr3_service_review_pattern';
  $strongarm->value = '';
  $export['pathauto_node_sr3_service_review_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_setting_name_sr3_service_review';
  $strongarm->value = 'rh_node_redirect';
  $export['redirect_setting_name_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_sr3_service_review';
  $strongarm->value = 'rh_node';
  $export['rh_module_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_sr3_service_review';
  $strongarm->value = '0';
  $export['rh_node_action_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_sr3_service_review';
  $strongarm->value = 0;
  $export['rh_node_override_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_sr3_service_review';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_sr3_service_review';
  $strongarm->value = 'thank-you-your-review';
  $export['rh_node_redirect_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_sr3_service_review';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'schemaorg_ui_type_sr3_service_review';
  $strongarm->value = '';
  $export['schemaorg_ui_type_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sync_translations_sr3_service_review';
  $strongarm->value = '0';
  $export['sync_translations_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_permissions_sr3_service_review';
  $strongarm->value = array(
    0 => 'create_roles',
    1 => 'edit_roles',
    2 => 'edit_own_roles',
    3 => 'delete_roles',
    4 => 'delete_own_roles',
  );
  $export['user_permissions_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_default_sr3_service_review';
  $strongarm->value = '0';
  $export['weight_default_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_enabled_sr3_service_review';
  $strongarm->value = '0';
  $export['weight_enabled_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_menu_sr3_service_review';
  $strongarm->value = '0';
  $export['weight_menu_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_range_sr3_service_review';
  $strongarm->value = '20';
  $export['weight_range_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_sr3_service_review';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_sr3_service_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_sr3_review_services';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_sr3_review_services'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_taxonomy_default_vocabularies().
 */
function ec_sr3_defaultconfig_taxonomy_default_vocabularies() {
  return array(
    'sr3_review_services' => array(
      'name' => 'SR3 Review Services',
      'machine_name' => 'sr3_review_services',
      'description' => 'Services in the review system checkbox set',
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
function ec_sr3_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node sr3_service_review defaults'.
  $permissions['administer panelizer node sr3_service_review defaults'] = array(
    'name' => 'administer panelizer node sr3_service_review defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term sr3_review_services defaults'.
  $permissions['administer panelizer taxonomy_term sr3_review_services defaults'] = array(
    'name' => 'administer panelizer taxonomy_term sr3_review_services defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create sr3_service_review content'.
  $permissions['create sr3_service_review content'] = array(
    'name' => 'create sr3_service_review content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sr3_service_review content'.
  $permissions['delete any sr3_service_review content'] = array(
    'name' => 'delete any sr3_service_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sr3_service_review content'.
  $permissions['delete own sr3_service_review content'] = array(
    'name' => 'delete own sr3_service_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in sr3_review_services'.
  $permissions['delete terms in sr3_review_services'] = array(
    'name' => 'delete terms in sr3_review_services',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any sr3_service_review content'.
  $permissions['edit any sr3_service_review content'] = array(
    'name' => 'edit any sr3_service_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sr3_service_review content'.
  $permissions['edit own sr3_service_review content'] = array(
    'name' => 'edit own sr3_service_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in sr3_review_services'.
  $permissions['edit terms in sr3_review_services'] = array(
    'name' => 'edit terms in sr3_review_services',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}

/**
 * Implements hook_defaultconfig_views_default_views().
 */
function ec_sr3_defaultconfig_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sr3_manage_reviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SR3 - Manage Reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SR3 - Manage Customer Reviews';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'break_row';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_sr3_name' => 'field_sr3_name',
    'created' => 'created',
    'field_sr3_city' => 'field_sr3_city',
    'field_sr3_zipcode' => 'field_sr3_zipcode',
    'field_sr3_recommendation' => 'field_sr3_recommendation',
    'field_sr3_rating_value' => 'field_sr3_rating_value',
    'field_sr3_service_feedback' => 'field_sr3_service_feedback',
    'field_sr3_service_review' => 'field_sr3_service_review',
    'status' => 'status',
    'field_sr3_response_time' => 'field_sr3_response_time',
    'field_sr3_employee_courtesy' => 'field_sr3_employee_courtesy',
    'field_sr3_overall_experience' => 'field_sr3_overall_experience',
    'field_sr3_quality_of_work' => 'field_sr3_quality_of_work',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'field_sr3_name',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_zipcode' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'field_sr3_name',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_recommendation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_rating_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_service_feedback' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_service_review' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_response_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'created',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_employee_courtesy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'created',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_overall_experience' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'created',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_quality_of_work' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'created',
      'separator2' => '',
      'colspan' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'views_bulk_operations',
      'separator2' => '',
      'colspan' => '',
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: SR3 Name */
  $handler->display->display_options['fields']['field_sr3_name']['id'] = 'field_sr3_name';
  $handler->display->display_options['fields']['field_sr3_name']['table'] = 'field_data_field_sr3_name';
  $handler->display->display_options['fields']['field_sr3_name']['field'] = 'field_sr3_name';
  $handler->display->display_options['fields']['field_sr3_name']['label'] = 'Name';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'panopoly_time';
  /* Field: Content: SR3 City */
  $handler->display->display_options['fields']['field_sr3_city']['id'] = 'field_sr3_city';
  $handler->display->display_options['fields']['field_sr3_city']['table'] = 'field_data_field_sr3_city';
  $handler->display->display_options['fields']['field_sr3_city']['field'] = 'field_sr3_city';
  $handler->display->display_options['fields']['field_sr3_city']['label'] = 'City';
  $handler->display->display_options['fields']['field_sr3_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_city']['alter']['text'] = '[field_sr3_city]<br />';
  /* Field: Content: SR3 Zipcode */
  $handler->display->display_options['fields']['field_sr3_zipcode']['id'] = 'field_sr3_zipcode';
  $handler->display->display_options['fields']['field_sr3_zipcode']['table'] = 'field_data_field_sr3_zipcode';
  $handler->display->display_options['fields']['field_sr3_zipcode']['field'] = 'field_sr3_zipcode';
  $handler->display->display_options['fields']['field_sr3_zipcode']['label'] = 'Zipcode';
  /* Field: Content: SR3 recommendation */
  $handler->display->display_options['fields']['field_sr3_recommendation']['id'] = 'field_sr3_recommendation';
  $handler->display->display_options['fields']['field_sr3_recommendation']['table'] = 'field_data_field_sr3_recommendation';
  $handler->display->display_options['fields']['field_sr3_recommendation']['field'] = 'field_sr3_recommendation';
  $handler->display->display_options['fields']['field_sr3_recommendation']['label'] = '0-10 Score';
  /* Field: Content: Please rate the quality of our service */
  $handler->display->display_options['fields']['field_sr3_rating_value']['id'] = 'field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['table'] = 'field_data_field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['field'] = 'field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['label'] = '1-5 Score';
  /* Field: Content: Please leave your feedback */
  $handler->display->display_options['fields']['field_sr3_service_feedback']['id'] = 'field_sr3_service_feedback';
  $handler->display->display_options['fields']['field_sr3_service_feedback']['table'] = 'field_data_field_sr3_service_feedback';
  $handler->display->display_options['fields']['field_sr3_service_feedback']['field'] = 'field_sr3_service_feedback';
  $handler->display->display_options['fields']['field_sr3_service_feedback']['label'] = 'Feedback';
  /* Field: Content: Please leave your review */
  $handler->display->display_options['fields']['field_sr3_service_review']['id'] = 'field_sr3_service_review';
  $handler->display->display_options['fields']['field_sr3_service_review']['table'] = 'field_data_field_sr3_service_review';
  $handler->display->display_options['fields']['field_sr3_service_review']['field'] = 'field_sr3_service_review';
  $handler->display->display_options['fields']['field_sr3_service_review']['label'] = 'Review';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published to Reviews page';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Response Time */
  $handler->display->display_options['fields']['field_sr3_response_time']['id'] = 'field_sr3_response_time';
  $handler->display->display_options['fields']['field_sr3_response_time']['table'] = 'field_data_field_sr3_response_time';
  $handler->display->display_options['fields']['field_sr3_response_time']['field'] = 'field_sr3_response_time';
  $handler->display->display_options['fields']['field_sr3_response_time']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_response_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_response_time']['alter']['text'] = 'Response Time: [field_sr3_response_time]<br />';
  $handler->display->display_options['fields']['field_sr3_response_time']['element_label_colon'] = FALSE;
  /* Field: Content: SR3 Employee Courtesy */
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['id'] = 'field_sr3_employee_courtesy';
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['table'] = 'field_data_field_sr3_employee_courtesy';
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['field'] = 'field_sr3_employee_courtesy';
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['alter']['text'] = 'Employee Courtesy: [field_sr3_employee_courtesy] <br />';
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['element_label_colon'] = FALSE;
  /* Field: Content: SR3 Overall Experience */
  $handler->display->display_options['fields']['field_sr3_overall_experience']['id'] = 'field_sr3_overall_experience';
  $handler->display->display_options['fields']['field_sr3_overall_experience']['table'] = 'field_data_field_sr3_overall_experience';
  $handler->display->display_options['fields']['field_sr3_overall_experience']['field'] = 'field_sr3_overall_experience';
  $handler->display->display_options['fields']['field_sr3_overall_experience']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_overall_experience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_overall_experience']['alter']['text'] = 'Overall Experience: [field_sr3_overall_experience]<br />';
  $handler->display->display_options['fields']['field_sr3_overall_experience']['element_label_colon'] = FALSE;
  /* Field: Content: SR3 Quality of Work */
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['id'] = 'field_sr3_quality_of_work';
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['table'] = 'field_data_field_sr3_quality_of_work';
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['field'] = 'field_sr3_quality_of_work';
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['alter']['text'] = 'Quality of Work: [field_sr3_quality_of_work]<br />';
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Placeholder 1';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '&nbsp;';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sr3_service_review' => 'sr3_service_review',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/manage-reviews';
  $export['sr3_manage_reviews'] = $view;

  $view = new view();
  $view->name = 'sr3_review_sites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SR3 Review Sites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Review Page Link */
  $handler->display->display_options['fields']['field_review_site_url']['id'] = 'field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['table'] = 'field_data_field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['field'] = 'field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_site_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_review_site_url']['type'] = 'link_plain';
  /* Field: Content: Review Site Logo */
  $handler->display->display_options['fields']['field_review_site_logo']['id'] = 'field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['table'] = 'field_data_field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['field'] = 'field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_logo']['alter']['text'] = '<p class="review-site"><a class="review-site-logo" href="[field_review_site_url]">[field_review_site_logo]</a></p>';
  $handler->display->display_options['fields']['field_review_site_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_site_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_review_site_logo']['settings'] = array(
    'image_style' => 's_140',
    'image_link' => '',
  );
  /* Field: Content: Review CTA */
  $handler->display->display_options['fields']['field_review_site_cta']['id'] = 'field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['table'] = 'field_data_field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['field'] = 'field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_cta']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_cta']['alter']['text'] = '<p class="review-site"><a class="review-site-cta" href="[field_review_site_url]">[field_review_site_cta]</a></p>';
  $handler->display->display_options['fields']['field_review_site_cta']['element_label_colon'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'sr3_review_sites:panel_pane_2';
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
    'review_site' => 'review_site',
  );
  /* Filter criterion: Content: Show in SR3 Review Sites list (field_review_site_show) */
  $handler->display->display_options['filters']['field_review_site_show_value']['id'] = 'field_review_site_show_value';
  $handler->display->display_options['filters']['field_review_site_show_value']['table'] = 'field_data_field_review_site_show';
  $handler->display->display_options['filters']['field_review_site_show_value']['field'] = 'field_review_site_show_value';
  $handler->display->display_options['filters']['field_review_site_show_value']['value'] = array(
    1 => '1',
  );

  /* Display: Review Sites */
  $handler = $view->new_display('panel_pane', 'Review Sites', 'panel_pane_1');

  /* Display: Rearrange Review Sites */
  $handler = $view->new_display('panel_pane', 'Rearrange Review Sites', 'panel_pane_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_review_site_url' => 'field_review_site_url',
    'field_review_site_logo' => 'field_review_site_logo',
    'field_review_site_cta' => 'field_review_site_cta',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_review_site_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_review_site_logo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_review_site_cta' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Review Page Link */
  $handler->display->display_options['fields']['field_review_site_url']['id'] = 'field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['table'] = 'field_data_field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['field'] = 'field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_site_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_review_site_url']['type'] = 'link_plain';
  /* Field: Content: Review Site Logo */
  $handler->display->display_options['fields']['field_review_site_logo']['id'] = 'field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['table'] = 'field_data_field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['field'] = 'field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_logo']['alter']['text'] = '<p class="review-site"><a class="review-site-logo" href="[field_review_site_url]">[field_review_site_logo]</a></p>';
  $handler->display->display_options['fields']['field_review_site_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_site_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_review_site_logo']['settings'] = array(
    'image_style' => 's_140',
    'image_link' => '',
  );
  /* Field: Content: Review CTA */
  $handler->display->display_options['fields']['field_review_site_cta']['id'] = 'field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['table'] = 'field_data_field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['field'] = 'field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_cta']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_cta']['alter']['text'] = '<p class="review-site"><a class="review-site-cta" href="[field_review_site_url]">[field_review_site_cta]</a></p>';
  $handler->display->display_options['fields']['field_review_site_cta']['element_label_colon'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = 'Rearrange';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $export['sr3_review_sites'] = $view;

  $view = new view();
  $view->name = 'sr3_service_review';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SR3 Service Reviews';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Please rate the quality of our service */
  $handler->display->display_options['fields']['field_sr3_rating_value']['id'] = 'field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['table'] = 'field_data_field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['field'] = 'field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_rating_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sr3_rating_value']['type'] = 'list_key';
  /* Field: Content: Please leave your review */
  $handler->display->display_options['fields']['field_sr3_service_review']['id'] = 'field_sr3_service_review';
  $handler->display->display_options['fields']['field_sr3_service_review']['table'] = 'field_data_field_sr3_service_review';
  $handler->display->display_options['fields']['field_sr3_service_review']['field'] = 'field_sr3_service_review';
  $handler->display->display_options['fields']['field_sr3_service_review']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_service_review']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'panopoly_day';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'panopoly_time';
  /* Field: Content: SR3 City */
  $handler->display->display_options['fields']['field_sr3_city']['id'] = 'field_sr3_city';
  $handler->display->display_options['fields']['field_sr3_city']['table'] = 'field_data_field_sr3_city';
  $handler->display->display_options['fields']['field_sr3_city']['field'] = 'field_sr3_city';
  $handler->display->display_options['fields']['field_sr3_city']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_city']['alter']['text'] = ', [field_sr3_city]';
  $handler->display->display_options['fields']['field_sr3_city']['element_label_colon'] = FALSE;
  /* Field: Content: SR3 Name */
  $handler->display->display_options['fields']['field_sr3_name']['id'] = 'field_sr3_name';
  $handler->display->display_options['fields']['field_sr3_name']['table'] = 'field_data_field_sr3_name';
  $handler->display->display_options['fields']['field_sr3_name']['field'] = 'field_sr3_name';
  $handler->display->display_options['fields']['field_sr3_name']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_name']['alter']['text'] = '[field_sr3_name][field_sr3_city]';
  $handler->display->display_options['fields']['field_sr3_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'sr3_service_review' => 'sr3_service_review',
  );

  /* Display: Reviews */
  $handler = $view->new_display('panel_pane', 'Reviews', 'panel_pane_1');
  $export['sr3_service_review'] = $view;

  $view = new view();
  $view->name = 'sr3_service_review_average';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SR3 Service Review Average';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Average Rating';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: AVG(Content: Please rate the quality of our service) */
  $handler->display->display_options['fields']['field_sr3_rating_value']['id'] = 'field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['table'] = 'field_data_field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['field'] = 'field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_sr3_rating_value']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_rating_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_rating_value']['alter']['text'] = '<span class="rating-[field_sr3_rating_value]">[field_sr3_rating_value]</span>';
  $handler->display->display_options['fields']['field_sr3_rating_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sr3_rating_value']['type'] = 'list_key';
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
    'sr3_service_review' => 'sr3_service_review',
  );

  /* Display: Average Rating */
  $handler = $view->new_display('panel_pane', 'Average Rating', 'panel_pane_1');
  $export['sr3_service_review_average'] = $view;

  $view = new view();
  $view->name = 'test_sr3';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TEST SR3';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TEST SR3';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'authkey' => 'authkey',
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
    'authkey' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Node Auth link: Authkey */
  $handler->display->display_options['fields']['authkey']['id'] = 'authkey';
  $handler->display->display_options['fields']['authkey']['table'] = 'node_authlink_nodes';
  $handler->display->display_options['fields']['authkey']['field'] = 'authkey';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'sr3_service_review' => 'sr3_service_review',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'test-sr3';
  $export['test_sr3'] = $view;

  return $export;
}
