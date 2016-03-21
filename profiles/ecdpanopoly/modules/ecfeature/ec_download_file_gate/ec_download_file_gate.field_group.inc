<?php
/**
 * @file
 * ec_download_file_gate.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_download_file_gate_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_this_on|node|gated_file_page|form';
  $field_group->group_name = 'group_show_this_on';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gated_file_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show This On',
    'weight' => '7',
    'children' => array(
      0 => 'field_ref_gated_file_service',
      1 => 'field_ref_gated_file_serv_cat',
      2 => 'field_ref_gated_file_serv_group',
      3 => 'field_ref_gated_file_page',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-this-on field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_show_this_on|node|gated_file_page|form'] = $field_group;

  return $export;
}
