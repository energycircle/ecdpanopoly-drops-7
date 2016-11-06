<?php
/**
 * @file
 * ec_custom_tokens.features.inc
 */

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
      'content' => '<p><a href="http://facebook.com">Facebook</a></p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    1 => array(
      'machine_name' => 'google',
      'name' => 'google',
      'description' => 'google plus',
      'type' => 'social',
      'content' => '<p><a href="http://google.com">google plus</a></p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    2 => array(
      'machine_name' => 'phone-number',
      'name' => 'Phone Number',
      'description' => 'Used to constantly display the company phone number',
      'type' => 'custom',
      'content' => '<p><a href="tel:15555555555">1 (555) 555-5555</a></p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
    3 => array(
      'machine_name' => 'twitter',
      'name' => 'twitter',
      'description' => 'twitter',
      'type' => 'social',
      'content' => '<p><a href="http://twitter.com">twitter</a></p>',
      'format' => 'panopoly_wysiwyg_text',
    ),
  );
}
