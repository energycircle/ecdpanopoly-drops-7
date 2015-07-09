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
  $field_group->identifier = 'group_detail_information|redhen_org|business|form';
  $field_group->group_name = 'group_detail_information';
  $field_group->entity_type = 'redhen_org';
  $field_group->bundle = 'business';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Detail Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_address',
      1 => 'field_contact_bio',
      2 => 'field_logo',
      3 => 'field_phone',
      4 => 'field_website',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-detail-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_detail_information|redhen_org|business|form'] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'field_contact_bio',
      1 => 'field_contact_job_title',
      2 => 'field_phone',
      3 => 'field_website',
      4 => 'redhen_contact_email',
      5 => 'field_contact_address',
      6 => 'field_contact_credentials',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_participation|redhen_contact|individual|form';
  $field_group->group_name = 'group_participation';
  $field_group->entity_type = 'redhen_contact';
  $field_group->bundle = 'individual';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Participation',
    'weight' => '6',
    'children' => array(
      0 => 'field_contact_events_attended',
      1 => 'field_contact_session_keynote',
      2 => 'field_contact_session_panelist',
      3 => 'field_contact_session_chair',
      4 => 'field_contact_session_speaker',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-participation field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_participation|redhen_contact|individual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_participation|redhen_org|business|form';
  $field_group->group_name = 'group_participation';
  $field_group->entity_type = 'redhen_org';
  $field_group->bundle = 'business';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Participation',
    'weight' => '4',
    'children' => array(
      0 => 'field_exhibitors_at',
      1 => 'field_sponsored_events',
      2 => 'field_partner',
      3 => 'field_nesp_supporter',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-participation field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_participation|redhen_org|business|form'] = $field_group;

  return $export;
}
