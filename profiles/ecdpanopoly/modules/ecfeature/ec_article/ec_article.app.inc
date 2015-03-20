<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function ec_article_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show article',
    //'demo content module' => 'ec_article_demo',
    'permissions' => array(
      'create article content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'delete any article content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'delete own article content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'edit any article content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'edit own article content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
    ),
  );
}
