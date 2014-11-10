<?php
/**
 * @file
 * ec_conference_tracks_sessions.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_conference_tracks_sessions_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_info|node|session|form';
  $field_group->group_name = 'group_session_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Session Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_areas_of_focus',
      1 => 'field_event_location',
      2 => 'field_event_time',
      3 => 'field_session_ceu_information',
      4 => 'field_session_chairs',
      5 => 'field_session_documents',
      6 => 'field_session_speakers',
      7 => 'field_session_ceus',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-session-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_session_info|node|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_track_info|node|track|form';
  $field_group->group_name = 'group_track_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'track';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Track Information',
    'weight' => '5',
    'children' => array(
      0 => 'field_ref_track_conference',
      1 => 'field_ref_track_session',
      2 => 'field_track_chairs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-track-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_track_info|node|track|form'] = $field_group;

  return $export;
}
