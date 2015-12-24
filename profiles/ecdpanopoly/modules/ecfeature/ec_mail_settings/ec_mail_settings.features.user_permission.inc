<?php
/**
 * @file
 * ec_mail_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_mail_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'smtp',
  );

  // Exported permission: 'choose htmlmail_plaintext'.
  $permissions['choose htmlmail_plaintext'] = array(
    'name' => 'choose htmlmail_plaintext',
    'roles' => array(),
    'module' => 'htmlmail',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(),
    'module' => 'mimemail',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(),
    'module' => 'mimemail',
  );

  return $permissions;
}
