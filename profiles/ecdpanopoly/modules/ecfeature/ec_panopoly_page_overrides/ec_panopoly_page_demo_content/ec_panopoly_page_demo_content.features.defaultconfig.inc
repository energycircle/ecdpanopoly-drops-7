<?php
/**
 * @file
 * ec_panopoly_page_demo_content.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_panopoly_page_demo_content_defaultconfig_features() {
  return array(
    'ec_panopoly_page_demo_content' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_panopoly_page_demo_content_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_panopoly_page';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_panopoly_page';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_panopoly_page';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_author_panopoly_page';
  $strongarm->value = 0;
  $export['node_export_reset_author_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_book_mlid_panopoly_page';
  $strongarm->value = FALSE;
  $export['node_export_reset_book_mlid_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_panopoly_page';
  $strongarm->value = 1;
  $export['node_export_reset_changed_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_created_panopoly_page';
  $strongarm->value = 1;
  $export['node_export_reset_created_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_last_comment_timestamp_panopoly_page';
  $strongarm->value = 1;
  $export['node_export_reset_last_comment_timestamp_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_menu_panopoly_page';
  $strongarm->value = 1;
  $export['node_export_reset_menu_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_path_panopoly_page';
  $strongarm->value = 1;
  $export['node_export_reset_path_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_promote_panopoly_page';
  $strongarm->value = 0;
  $export['node_export_reset_promote_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_revision_timestamp_panopoly_page';
  $strongarm->value = 1;
  $export['node_export_reset_revision_timestamp_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_status_panopoly_page';
  $strongarm->value = 0;
  $export['node_export_reset_status_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_sticky_panopoly_page';
  $strongarm->value = 0;
  $export['node_export_reset_sticky_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_node_panopoly_page';
  $strongarm->value = 'panopoly_page';
  $export['uuid_features_entity_node_panopoly_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_node_panopoly_page';
  $strongarm->value = 'panopoly_page';
  $export['uuid_features_file_node_panopoly_page'] = $strongarm;

  return $export;
}
