<?php
/**
 * @file
 * ec_base_config.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function ec_base_config_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'phone_number';
  $content->admin_title = 'Phone Number';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Phone Number',
    'title' => '',
    'body' => '<p>1 (555) 555-5555</p>',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => TRUE,
  );
  $export['phone_number'] = $content;

  return $export;
}
