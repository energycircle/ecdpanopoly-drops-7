<?php
/**
 * @file
 * ec_migrate_wp_xml_import_to_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_migrate_wp_xml_import_to_blog_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wp_import|node|blog_post|form';
  $field_group->group_name = 'group_wp_import';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_content';
  $field_group->data = array(
    'label' => 'WP Import',
    'weight' => '5',
    'children' => array(
      0 => 'field_old_post_id',
      1 => 'field_old_permalink',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wp-import field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_wp_import|node|blog_post|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('WP Import');

  return $field_groups;
}
