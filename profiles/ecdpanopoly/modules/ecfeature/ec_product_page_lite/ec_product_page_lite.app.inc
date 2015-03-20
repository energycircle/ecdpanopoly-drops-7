<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function ec_product_page_lite_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show Product Page',
    //'demo content module' => 'ec_product_page_lite_demo',
    'permissions' => array(
      'create Product Page content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'delete any Product Page content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'delete own Product Page content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'edit any Product Page content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'edit own Product Page content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
    ),
  );
}
