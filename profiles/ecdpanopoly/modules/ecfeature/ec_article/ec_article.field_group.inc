<?php
/**
 * @file
 * ec_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_article_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edit_content|node|article|form';
  $field_group->group_name = 'group_edit_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_general',
      1 => 'group_shown_on_this_page',
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
  $field_groups['group_edit_content|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|article|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '14',
    'children' => array(
      0 => 'body',
      1 => 'field_article_image',
      2 => 'field_display_date',
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
  $field_groups['group_general|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inactive_fields|node|article|form';
  $field_group->group_name = 'group_inactive_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inactive Fields',
    'weight' => '7',
    'children' => array(
      0 => 'field_ref_article_testimonial',
      1 => 'field_ref_article_promo',
      2 => 'field_article_author',
      3 => 'field_article_source',
      4 => 'field_article_type',
      5 => 'field_ref_article_blog',
      6 => 'field_ref_article_case_study',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Inactive Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-inactive-fields field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_inactive_fields|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shown_on_this_page|node|article|form';
  $field_group->group_name = 'group_shown_on_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'Add other content to this page',
    'weight' => '15',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Add other content to this page',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_shown_on_this_page|node|article|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add other content to this page');
  t('Edit Content');
  t('General');
  t('Inactive Fields');

  return $field_groups;
}
