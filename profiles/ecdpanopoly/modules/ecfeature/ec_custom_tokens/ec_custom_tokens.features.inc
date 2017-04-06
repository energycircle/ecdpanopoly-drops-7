<?php
/**
 * @file
 * ec_custom_tokens.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_custom_tokens_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_token_custom_features_config_features_default_settings().
 */
function ec_custom_tokens_token_custom_features_config_features_default_settings() {
  return array(
    0 => array(
      'machine_name' => 'facebook',
      'name' => 'facebook',
      'description' => 'fb',
      'type' => 'social',
      'content' => '<a href="http://facebook.com">Facebook</a>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    1 => array(
      'machine_name' => 'google',
      'name' => 'google',
      'description' => 'google plus',
      'type' => 'social',
      'content' => '<a href="http://google.com">google plus</a>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    2 => array(
      'machine_name' => 'phone---no-link',
      'name' => 'Phone - No Link',
      'description' => 'Used to constantly display the company phone number not as a link',
      'type' => 'custom',
      'content' => '<a href="tel:15555555555">Call Us</a>',
      'format' => 'panopoly_html_text',
    ),
    3 => array(
      'machine_name' => 'phone-number',
      'name' => 'Phone Number',
      'description' => 'Used to constantly display the company phone number',
      'type' => 'custom',
      'content' => '<a href="tel:15555555555">1 (555) 555-5555</a>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    4 => array(
      'machine_name' => 'site-email',
      'name' => 'Site Email',
      'description' => 'Link to /schedule-service page',
      'type' => 'site',
      'content' => '<a href="/schedule-service#scheduleform">Email Us</a>',
      'format' => 'panopoly_html_text',
    ),
    5 => array(
      'machine_name' => 'twitter',
      'name' => 'twitter',
      'description' => 'twitter',
      'type' => 'social',
      'content' => '<a href="http://twitter.com">twitter</a>',
      'format' => 'panopoly_wysiwyg_text',
    ),
  );
}
