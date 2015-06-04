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
  $field_group->identifier = 'group_event_details|node|conference_event|form';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'conference_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '3',
    'children' => array(
      0 => 'field_event_location',
      1 => 'field_event_time',
      2 => 'field_ref_conf_event_user',
      3 => 'field_rev_conf_event_conference',
      4 => 'field_event_sponsors_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_details|node|conference_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_details|node|session|form';
  $field_group->group_name = 'group_session_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Session Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_event_location',
      1 => 'field_event_time',
      2 => 'field_ref_session_track',
      3 => 'field_session_chairs',
      4 => 'field_session_speakers',
      5 => 'field_session_format',
      6 => 'field_session_code',
      7 => 'field_session_keynote',
      8 => 'field_session_panelist',
      9 => 'field_external_identifier',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-session-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_session_details|node|session|form'] = $field_group;

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
      1 => 'field_session_ceu_information',
      2 => 'field_session_ceus',
      3 => 'field_session_learning_objective',
      4 => 'field_ref_session_document',
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
    'weight' => '1',
    'children' => array(
      0 => 'field_ref_track_conference',
      1 => 'field_ref_track_session',
      2 => 'field_track_chairs',
      3 => 'field_external_identifier',
      4 => 'field_track_abreviation',
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
