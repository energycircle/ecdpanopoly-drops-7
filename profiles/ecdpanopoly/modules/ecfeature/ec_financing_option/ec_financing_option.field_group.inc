<?php
/**
 * @file
 * ec_financing_option.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_financing_option_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_form|node|financing_option|form';
  $field_group->group_name = 'group_cta_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'financing_option';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'CTA Form',
    'weight' => '8',
    'children' => array(
      0 => 'field_button_text',
      1 => 'field_call_to_action',
      2 => 'field_ref_to_cta_form',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cta-form field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_cta_form|node|financing_option|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edit_content|node|financing_option|form';
  $field_group->group_name = 'group_edit_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'financing_option';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit Content',
    'weight' => '2',
    'children' => array(
      0 => 'group_cta_form',
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
  $field_groups['group_edit_content|node|financing_option|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|financing_option|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'financing_option';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '7',
    'children' => array(
      0 => 'body',
      1 => 'field_financing_logo',
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
  $field_groups['group_general|node|financing_option|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inactive_fields|node|financing_option|form';
  $field_group->group_name = 'group_inactive_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'financing_option';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inactive Fields',
    'weight' => '3',
    'children' => array(
      0 => 'field_a_b_reason_for_testing',
      1 => 'field_a_b_reference_page',
      2 => 'field_a_b_test_page',
      3 => 'field_financing_forms',
      4 => 'field_financing_link',
      5 => 'metatags',
      6 => 'redirect',
      7 => 'xmlsitemap',
      8 => 'group_show_this_on',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Inactive Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'element-hidden',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_inactive_fields|node|financing_option|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_this_on|node|financing_option|form';
  $field_group->group_name = 'group_show_this_on';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'financing_option';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_inactive_fields';
  $field_group->data = array(
    'label' => 'Add this content to these pages',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Add this content to these pages',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-show-this-on field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_show_this_on|node|financing_option|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add this content to these pages');
  t('CTA Form');
  t('Edit Content');
  t('General');
  t('Inactive Fields');

  return $field_groups;
}
