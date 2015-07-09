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
  $field_group->identifier = 'group_conf_info|node|conference|form';
  $field_group->group_name = 'group_conf_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'conference';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conference Information',
    'weight' => '8',
    'children' => array(
      0 => 'field_event_registration_link',
      1 => 'field_event_registration_message',
      2 => 'field_ref_conference_venue',
      3 => 'field_conf_exhibitors',
      4 => 'field_event_sponsors_ref',
      5 => 'field_conference_tracks_ref',
      6 => 'field_conference_documents',
      7 => 'field_ref_conference_banner',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-conf-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_conf_info|node|conference|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conference_detail_pages|node|conference|form';
  $field_group->group_name = 'group_conference_detail_pages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'conference';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Detail Pages',
    'weight' => '9',
    'children' => array(
      0 => 'field_ref_conference_details',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-conference-detail-pages field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_conference_detail_pages|node|conference|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conference_information|file|document|form';
  $field_group->group_name = 'group_conference_information';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conferences',
    'weight' => '7',
    'children' => array(
      0 => 'field_ref_file_conference',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Conferences',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-conference-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_conference_information|file|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conference_special_pages|node|conference|form';
  $field_group->group_name = 'group_conference_special_pages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'conference';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Special Pages',
    'weight' => '10',
    'children' => array(
      0 => 'field_conference_sessions_page',
      1 => 'field_conference_speakers_page',
      2 => 'field_conference_ambassador_page',
      3 => 'field_conference_exhibitors_page',
      4 => 'field_conference_sponsors_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-conference-special-pages field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_conference_special_pages|node|conference|form'] = $field_group;

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
  $field_group->identifier = 'group_file_sessions|file|document|form';
  $field_group->group_name = 'group_file_sessions';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sessions',
    'weight' => '8',
    'children' => array(
      0 => 'field_ref_document_session',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-file-sessions field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_file_sessions|file|document|form'] = $field_group;

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
