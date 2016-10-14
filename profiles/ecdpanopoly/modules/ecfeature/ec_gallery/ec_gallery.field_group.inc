<?php
/**
 * @file
 * ec_gallery.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_gallery_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edit_content|node|gallery|form';
  $field_group->group_name = 'group_edit_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_shown_on_this_page',
      1 => 'group_general',
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
  $field_groups['group_edit_content|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|gallery|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_gallery_image',
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
  $field_groups['group_general|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shown_on_this_page|node|gallery|form';
  $field_group->group_name = 'group_shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'Add this content to these pages',
    'weight' => '3',
    'children' => array(
      0 => 'field_ref_gallery_case_study',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Add this content to these pages',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_shown_on_this_page|node|gallery|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add this content to these pages');
  t('Edit Content');
  t('General');

  return $field_groups;
}
