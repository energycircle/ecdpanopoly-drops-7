<?php
/**
 * @file
 * ec_faq.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_faq_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shown_on_this_page|node|faq|form';
  $field_group->group_name = 'group_shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show This On',
    'weight' => '103',
    'children' => array(
      0 => 'field_ref_faq_serv',
      1 => 'field_ref_faq_servcat',
      2 => 'field_ref_faq_servgroup',
      3 => 'field_ref_faq_content_page',
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
  $export['group_shown_on_this_page|node|faq|form'] = $field_group;

  return $export;
}
