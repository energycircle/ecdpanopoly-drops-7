<?php
/**
 * @file
 * ec_faq.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_faq_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edit_content|node|faq|form';
  $field_group->group_name = 'group_edit_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_general',
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
  $field_groups['group_edit_content|node|faq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|faq|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '3',
    'children' => array(
      0 => 'body',
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
  $field_groups['group_general|node|faq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inactive_fields|node|faq|form';
  $field_group->group_name = 'group_inactive_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inactive Fields',
    'weight' => '2',
    'children' => array(
      0 => 'field_ref_faq_content_page',
      1 => 'field_ref_faq_serv',
      2 => 'field_ref_faq_servcat',
      3 => 'field_ref_faq_servgroup',
      4 => 'metatags',
      5 => 'path',
      6 => 'redirect',
      7 => 'xmlsitemap',
      8 => 'group_shown_on_this_page',
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
  $field_groups['group_inactive_fields|node|faq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shown_on_this_page|node|faq|form';
  $field_group->group_name = 'group_shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_inactive_fields';
  $field_group->data = array(
    'label' => 'Add this content to these pages',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Add this content to these pages',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-shown-on-this-page field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_shown_on_this_page|node|faq|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add this content to these pages');
  t('Edit Content');
  t('General');
  t('Inactive Fields');

  return $field_groups;
}
