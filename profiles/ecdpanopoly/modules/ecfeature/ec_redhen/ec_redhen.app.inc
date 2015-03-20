<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function ec_redhen_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show redhen',
    //'demo content module' => 'ec_redhen_demo',
    'permissions' => array(
      'create redhen content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'delete any redhen content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'delete own redhen content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'edit any redhen content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'edit own redhen content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
    ),
  );
}
