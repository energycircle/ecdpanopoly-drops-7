<?php
/**
 * @file
 * ec_service_review_system.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_service_review_system_field_group_info() {
  $export = array();

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
  $export['group_step_1_group|entityform|sreview|form'] = $field_group;

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
  $export['group_step_2_group|entityform|sreview|form'] = $field_group;

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
  $export['group_step_3_group|entityform|sreview|form'] = $field_group;

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
  $export['group_step_4_group|entityform|sreview|form'] = $field_group;

  return $export;
}
