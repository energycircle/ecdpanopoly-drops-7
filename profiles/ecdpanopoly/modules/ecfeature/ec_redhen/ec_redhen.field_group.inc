<?php
/**
 * @file
 * ec_redhen.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_redhen_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_detail_info|redhen_contact|individual|form';
  $field_group->group_name = 'group_detail_info';
  $field_group->entity_type = 'redhen_contact';
  $field_group->bundle = 'individual';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Detail Information',
    'weight' => '10',
    'children' => array(
      0 => 'redhen_contact_email',
      1 => 'field_phone',
      2 => 'field_website',
      3 => 'field_contact_job_title',
      4 => 'field_contact_bio',
      5 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-detail-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_detail_info|redhen_contact|individual|form'] = $field_group;

  return $export;
}
