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
  $field_group->identifier = 'group_shown_on_this_page|node|gallery|form';
  $field_group->group_name = 'group_shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show This On',
    'weight' => '7',
    'children' => array(
      0 => 'field_ref_gallery_case_study',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-shown-on-this-page field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_shown_on_this_page|node|gallery|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Show This On');

  return $field_groups;
}
