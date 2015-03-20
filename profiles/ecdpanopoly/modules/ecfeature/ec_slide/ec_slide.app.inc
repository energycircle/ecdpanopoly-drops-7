<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function ec_slide_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show slide',
    //'demo content module' => 'ec_slide_demo',
    'permissions' => array(
      'create Slide content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'delete any Slide content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'delete own Slide content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'edit any Slide content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'edit own Slide content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
    ),
  );
}
