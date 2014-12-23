<?php
/**
 * @file
 * ec_conferences_lte.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_conferences_lte_field_group_info() {
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
  $field_group->identifier = 'group_teaser_block_content|node|conference_details|form';
  $field_group->group_name = 'group_teaser_block_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'conference_details';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser Block Content',
    'weight' => '4',
    'children' => array(
      0 => 'field_conf_detail_teaser_content',
      1 => 'field_conf_detail_page_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-teaser-block-content field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_teaser_block_content|node|conference_details|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venue_info|node|venue|form';
  $field_group->group_name = 'group_venue_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'venue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Venue Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_ref_venue_layout',
      1 => 'field_venue_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-venue-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_venue_info|node|venue|form'] = $field_group;

  return $export;
}
