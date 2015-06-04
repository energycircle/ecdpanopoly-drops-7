<?php

/**
 * @file
 * Specify common apps components to be created by apps_compatible.
 */

/**
 * Implements hook_apps_compatible_info().
 */
function ec_blog_post_apps_compatible_info() {
  return array(
    // Ensure a set of roles is created.
    'role' => array(
      'administrator' => array(
        'machine name' => 'administrator',
      ),
      'EC Platinum admin' => array(
        'machine name' => 'ec_platinum_admin',
      ),
      'EC Platinum editor' => array(
        'machine name' => 'ec_platinum_editor',
      ),
    ),
  );
}

