<?php
/**
 * @file
 * ec_mobile_changes.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function ec_mobile_changes_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = TRUE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'anchor_link_schedule_service_pageform';
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
  $export['anchor_link_schedule_service_pageform'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'mobile_header_buttons';
  $content->admin_title = 'Mobile Header Buttons';
  $content->admin_description = '';
  $content->category = 'mobile';
  $content->settings = array(
    'admin_title' => 'Mobile Header Buttons',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="button phone">[custom:phone---no-link]</div><div class="button email">[site:site-email]</div>',
    'format' => 'panopoly_html_text',
    'substitute' => 1,
  );
  $export['mobile_header_buttons'] = $content;

  return $export;
}
