<?php
/**
 * @file
 * ec_service_stack.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function ec_service_stack_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'anchor_link_to_schedule_service_form';
  $content->admin_title = 'Anchor link to Schedule Service Form';
  $content->admin_description = '';
  $content->category = 'mobile';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<a name="scheduleform"></a>',
    'format' => 'panopoly_html_text',
    'substitute' => 1,
  );
  $export['anchor_link_to_schedule_service_form'] = $content;

  return $export;
}
