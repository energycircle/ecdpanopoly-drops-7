<?php
/**
 * @file
 * ec_promotions_demo_content.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_promotions_demo_content_defaultconfig_features() {
  return array(
    'ec_promotions_demo_content' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_promotions_demo_content_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_author_promotion';
  $strongarm->value = 0;
  $export['node_export_reset_author_promotion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_book_mlid_promotion';
  $strongarm->value = FALSE;
  $export['node_export_reset_book_mlid_promotion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_promotion';
  $strongarm->value = 1;
  $export['node_export_reset_changed_promotion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_created_promotion';
  $strongarm->value = 1;
  $export['node_export_reset_created_promotion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_last_comment_timestamp_promotion';
  $strongarm->value = 1;
  $export['node_export_reset_last_comment_timestamp_promotion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_menu_promotion';
  $strongarm->value = 1;
  $export['node_export_reset_menu_promotion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_path_promotion';
  $strongarm->value = 1;
  $export['node_export_reset_path_promotion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_promote_promotion';
  $strongarm->value = 0;
  $export['node_export_reset_promote_promotion'] = $strongarm;

  return $export;
}
