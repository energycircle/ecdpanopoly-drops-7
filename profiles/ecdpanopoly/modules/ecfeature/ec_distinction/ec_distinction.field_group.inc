<?php
/**
 * @file
 * ec_distinction.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_distinction_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_add_logo|node|distinction|form';
  $field_group->group_name = 'group_add_logo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'distinction';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'Add Logo',
    'weight' => '13',
    'children' => array(
      0 => 'field_content_link',
      1 => 'field_logo',
      2 => 'field_dynamic_seal',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-add-logo field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_add_logo|node|distinction|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edit_content|node|distinction|form';
  $field_group->group_name = 'group_edit_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'distinction';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_general',
      1 => 'group_add_logo',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-edit-content field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_edit_content|node|distinction|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|distinction|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'distinction';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '12',
    'children' => array(
      0 => 'body',
      1 => 'field_distinction_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_general|node|distinction|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Logo');
  t('Edit Content');
  t('General');

  return $field_groups;
}
