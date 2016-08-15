<?php
/**
 * @file
 * ec_sr3.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_sr3_field_group_info() {
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
