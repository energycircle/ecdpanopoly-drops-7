<?php
/**
 * @file
 * ec_base_config.features.uuid_user.inc
 */

/**
 * Implements hook_uuid_features_default_users().
 */
function ec_base_config_uuid_features_default_users() {
  $users = array();

  $users[] = array(
  'name' => 'Jeremy',
  'mail' => 'jeremy@energycircle.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'panopoly_wysiwyg_text',
  'created' => 1415048737,
  'access' => 1415826025,
  'login' => 1415723659,
  'status' => 1,
  'timezone' => 'America/New_York',
  'language' => '',
  'picture' => NULL,
  'init' => 'jeremy@energycircle.com',
  'data' => FALSE,
  'uuid' => '8f1f73e3-5a53-4c4c-aa56-7eea2d7570b8',
  'roles' => array(
    2 => 'authenticated user',
    4 => 'EC Platinum editor',
  ),
  'field_user_about' => array(),
  'field_user_picture' => array(),
  'field_google_url' => array(),
  'metatags' => array(),
  'date' => '2014-11-03 16:05:37 -0500',
);
  $users[] = array(
  'name' => 'lisa',
  'mail' => 'lisa@energycircle.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'panopoly_wysiwyg_text',
  'created' => 1415048888,
  'access' => 1416259864,
  'login' => 1416237469,
  'status' => 1,
  'timezone' => 'America/New_York',
  'language' => '',
  'picture' => NULL,
  'init' => 'lisa@energycircle.com',
  'data' => FALSE,
  'uuid' => '97b4c9b4-0592-48b5-83f5-2fdcbb5e0786',
  'roles' => array(
    2 => 'authenticated user',
    4 => 'EC Platinum editor',
  ),
  'field_user_about' => array(),
  'field_user_picture' => array(),
  'field_google_url' => array(),
  'metatags' => array(),
  'date' => '2014-11-03 16:08:08 -0500',
);
  $users[] = array(
  'name' => 'jack',
  'mail' => 'jack@energycircle.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'panopoly_wysiwyg_text',
  'created' => 1415048699,
  'access' => 1416256920,
  'login' => 1416250888,
  'status' => 1,
  'timezone' => 'America/New_York',
  'language' => '',
  'picture' => NULL,
  'init' => 'jack@energycircle.com',
  'data' => FALSE,
  'uuid' => '9983ad1a-9394-4766-94c6-7ed0c0df1b4b',
  'roles' => array(
    2 => 'authenticated user',
    4 => 'EC Platinum editor',
  ),
  'field_user_about' => array(),
  'field_user_picture' => array(),
  'field_google_url' => array(),
  'metatags' => array(),
  'date' => '2014-11-03 16:04:59 -0500',
);
  return $users;
}
