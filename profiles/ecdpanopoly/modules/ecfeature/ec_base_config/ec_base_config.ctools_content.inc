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
  $content->name = 'copyright';
  $content->admin_title = 'Copyright';
  $content->admin_description = '';
  $content->category = 'site-assets';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>© [date:custom:Y] | All Right Reserved.&nbsp;</p>',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => 1,
  );
  $export['copyright'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'phone_number';
  $content->admin_title = 'Phone Number';
  $content->admin_description = '';
  $content->category = 'Site Assets';
  $content->settings = array(
    'admin_title' => 'Phone Number',
    'title' => '',
    'body' => '<p>[custom:phone-number]</p>',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => 1,
  );
  $export['phone_number'] = $content;

  return $export;
}
