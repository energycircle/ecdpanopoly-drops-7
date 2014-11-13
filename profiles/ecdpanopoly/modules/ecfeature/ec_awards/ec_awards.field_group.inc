<?php
/**
 * @file
 * ec_awards.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_awards_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_award_nominations|node|award|form';
  $field_group->group_name = 'group_award_nominations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Nominations',
    'weight' => '6',
    'children' => array(
      0 => 'field_award_nomination_deadline',
      1 => 'field_award_nomination_form',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_award_nominations|node|award|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_award_runnersup|node|award|form';
  $field_group->group_name = 'group_award_runnersup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Runners-up',
    'weight' => '8',
    'children' => array(
      0 => 'field_ref_award_run_user',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_award_runnersup|node|award|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_award_winner|node|award|form';
  $field_group->group_name = 'group_award_winner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Winner',
    'weight' => '7',
    'children' => array(
      0 => 'field_award_winner_description',
      1 => 'field_ref_award_win_user',
      2 => 'field_award_user_company',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_award_winner|node|award|form'] = $field_group;

  return $export;
}
