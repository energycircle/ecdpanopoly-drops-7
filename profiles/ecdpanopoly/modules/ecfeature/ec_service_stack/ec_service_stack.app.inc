<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function ec_service_stack_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show Service Stack',
    //'demo content module' => 'ec_service_stack_demo_content',
    'permissions' => array(
      'create Service content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'delete any Service content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'delete own Service content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'edit any Service content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
      ),
      'edit own Service content' => array(
        'EC Platinum admin' => 'ec_platinum_admin',
        'EC Platinum editor' => 'ec_platinum_editor',
		 ),
		
        'create Service Category content' => array(
          'EC Platinum admin' => 'ec_platinum_admin',
          'EC Platinum editor' => 'ec_platinum_editor',
        ),
        'delete any Service Category content' => array(
          'EC Platinum admin' => 'ec_platinum_admin',
          'EC Platinum editor' => 'ec_platinum_editor',
        ),
        'delete own Service Category content' => array(
          'EC Platinum admin' => 'ec_platinum_admin',
          'EC Platinum editor' => 'ec_platinum_editor',
        ),
        'edit any Service Category content' => array(
          'EC Platinum admin' => 'ec_platinum_admin',
          'EC Platinum editor' => 'ec_platinum_editor',
        ),
        'edit own Service Category content' => array(
          'EC Platinum admin' => 'ec_platinum_admin',
          'EC Platinum editor' => 'ec_platinum_editor',
		   ),
		  
	      'create Service Group content' => array(
	        'EC Platinum admin' => 'ec_platinum_admin',
	        'EC Platinum editor' => 'ec_platinum_editor',
	      ),
	      'delete any Service Group content' => array(
	        'EC Platinum admin' => 'ec_platinum_admin',
	        'EC Platinum editor' => 'ec_platinum_editor',
	      ),
	      'delete own Service Group content' => array(
	        'EC Platinum admin' => 'ec_platinum_admin',
	        'EC Platinum editor' => 'ec_platinum_editor',
	      ),
	      'edit any Service Group content' => array(
	        'EC Platinum admin' => 'ec_platinum_admin',
	        'EC Platinum editor' => 'ec_platinum_editor',
	      ),
	      'edit own Service Group content' => array(
	        'EC Platinum admin' => 'ec_platinum_admin',
	        'EC Platinum editor' => 'ec_platinum_editor',
      ),
    ),
  );
}
