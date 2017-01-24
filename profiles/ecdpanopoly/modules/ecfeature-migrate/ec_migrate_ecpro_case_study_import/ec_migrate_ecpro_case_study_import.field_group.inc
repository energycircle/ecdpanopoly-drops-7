<?php
/**
 * @file
 * ec_migrate_ecpro_case_study_import.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ec_migrate_ecpro_case_study_import_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_migration|node|case_study|form';
  $field_group->group_name = 'group_migration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration',
    'weight' => '6',
    'children' => array(
      0 => 'field_migrate_guid',
      1 => 'field_migrate_author',
      2 => 'field_migrate_previous_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-migration field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_migration|node|case_study|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Migration');

  return $field_groups;
}
