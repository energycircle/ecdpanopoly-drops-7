<?php
/**
 * @file
 * ec_testimonials_demo_content.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_testimonials_demo_content_defaultconfig_features() {
  return array(
    'ec_testimonials_demo_content' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_testimonials_demo_content_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_author_testimonial';
  $strongarm->value = 0;
  $export['node_export_reset_author_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_book_mlid_testimonial';
  $strongarm->value = FALSE;
  $export['node_export_reset_book_mlid_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_testimonial';
  $strongarm->value = 1;
  $export['node_export_reset_changed_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_created_testimonial';
  $strongarm->value = 1;
  $export['node_export_reset_created_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_last_comment_timestamp_testimonial';
  $strongarm->value = 1;
  $export['node_export_reset_last_comment_timestamp_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_menu_testimonial';
  $strongarm->value = 1;
  $export['node_export_reset_menu_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_path_testimonial';
  $strongarm->value = 1;
  $export['node_export_reset_path_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_promote_testimonial';
  $strongarm->value = 0;
  $export['node_export_reset_promote_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_revision_timestamp_testimonial';
  $strongarm->value = 1;
  $export['node_export_reset_revision_timestamp_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_status_testimonial';
  $strongarm->value = 0;
  $export['node_export_reset_status_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_sticky_testimonial';
  $strongarm->value = 0;
  $export['node_export_reset_sticky_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_node_testimonial';
  $strongarm->value = 'testimonial';
  $export['uuid_features_entity_node_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_node_testimonial';
  $strongarm->value = 'testimonial';
  $export['uuid_features_file_node_testimonial'] = $strongarm;

  return $export;
}
