<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function ec_blog_post_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show blogs',
    //'demo content module' => 'ec_blog_post_demo',
    'permissions' => array(
      'create blog_post content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'delete any blog_post content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'delete own blog_post content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'edit any blog_post content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'edit own blog_post content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
    ),
  );
}
