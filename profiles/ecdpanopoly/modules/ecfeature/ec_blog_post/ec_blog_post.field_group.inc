<?php
/**
 * @file
 * ec_blog_post.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_blog_post_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_this_on|node|blog_post|form';
  $field_group->group_name = 'group_show_this_on';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show This On',
    'weight' => '6',
    'children' => array(
      0 => 'field_ref_blog_page',
      1 => 'field_ref_blog_case_study',
      2 => 'field_ref_blog_serv_cat',
      3 => 'field_ref_blog_serv_group',
      4 => 'field_ref_blog_service',
      5 => 'field_ref_blog_article',
      6 => 'field_ref_blog_citypages',
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
  $export['group_show_this_on|node|blog_post|form'] = $field_group;

  return $export;
}
