<?php

/**
 * Set up base config
 */
function ecdpanopoly_configure() {
  // Set default Pantheon variables
  variable_set('cache', 1);
  variable_set('block_cache', 1);
  variable_set('cache_lifetime', '0');
  variable_set('page_cache_maximum_age', '900');
  variable_set('page_compression', 0);
  variable_set('preprocess_css', 1);
  variable_set('preprocess_js', 1);
  $search_active_modules = array(
    'apachesolr_search' => 'apachesolr_search',
    'user' => 'user',
    'node' => 0
  );
  variable_set('search_active_modules', $search_active_modules);
  variable_set('search_default_module', 'apachesolr_search');
  drupal_set_message(t('Pantheon defaults configured.'));
}


/**
 * Implements hook_install_tasks()
 */
function ecdpanopoly_install_tasks(&$install_state) {

  $tasks = array();

  // Add our custom CSS file for the installation process
  drupal_add_css(drupal_get_path('profile', 'ecdpanopoly') . '/install.css');

  // Add a configuration task.
  //$tasks['configure_profile'] = array(
  //  'display_name' => st('Configure profile'),
  //  'type' => 'form',
  //);

  // Add the ECDPanopoly app selection to the installation process
  $panopoly_server = array(
    'machine name' => 'ecfeatures',
    'default apps' => array('ecfeatures'),
    'default content callback' => 'ecfeatures_default_content',
  );
  require_once(drupal_get_path('module', 'apps') . '/apps.profile.inc');
  $tasks = $tasks + apps_profile_install_tasks($install_state, $panopoly_server);

  // Add the Panopoly theme selection to the installation process
  require_once(drupal_get_path('module', 'panopoly_theme') . '/panopoly_theme.profile.inc');
  $tasks = $tasks + panopoly_theme_profile_theme_selection_install_task($install_state);



  return $tasks;
}

    /**
     * Callback for configure profile.

  *  function configure_profile($form, &$form_state, &$install_state) {
  *    module_load_include('inc', 'panopoly_config', 'panopoly_config.profile');
  *    $form += panopoly_config_get_profile_form();*
  *    return $form;
  *  }

*/

/**
 * Implements hook_install_tasks_alter()
 */
function ecdpanopoly_install_tasks_alter(&$tasks, $install_state) {

  // Magically go one level deeper in solving years of dependency problems
  require_once(drupal_get_path('module', 'panopoly_core') . '/panopoly_core.profile.inc');
  $tasks['install_load_profile']['function'] = 'panopoly_core_install_load_profile';

  // If we only offer one language, define a callback to set this
  require_once(drupal_get_path('module', 'panopoly_core') . '/panopoly_core.profile.inc');
  if (!(count(install_find_locales($install_state['parameters']['profile'])) > 1)) {
    $tasks['install_select_locale']['function'] = 'panopoly_core_install_locale_selection';
  }
}



/**
 * Implements hook_form_FORM_ID_alter()
 */
function ecdpanopoly_form_install_configure_form_alter(&$form, $form_state) {

  // Hide some messages from various modules that are just too chatty.
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // Set reasonable defaults for site configuration form
  $form['site_information']['site_name']['#default_value'] = 'EC Panopoly Distribution';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/New_York'; // Eastcoast ROCKS!

  // Define a default email address if we can guess a valid one
  if (valid_email_address('digital@energycircle.com')) {
    $form['site_information']['site_mail']['#default_value'] = 'digital@energycircle.com';
    $form['admin_account']['account']['mail']['#default_value'] = 'digital@energycircle.com';
  }
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function ecdpanopoly_form_apps_profile_apps_select_form_alter(&$form, $form_state) {

  // For some things there are no need
  $form['apps_message']['#access'] = FALSE;
  $form['apps_fieldset']['apps']['#title'] = NULL;

  // Improve style of apps selection form
  if (isset($form['apps_fieldset'])) {
    $manifest = apps_manifest(apps_servers('ecfeatures'));
    foreach ($manifest['apps'] as $name => $app) {
      if ($name != '#theme') {
        $form['apps_fieldset']['apps']['#options'][$name] = '<strong>' . $app['name'] . '</strong><p><div class="admin-options"><div class="form-item">' . theme('image', array('path' => $app['logo']['path'], 'height' => '32', 'width' => '32')) . '</div>' . $app['description'] . '</div></p>';
      }
    }
  }

  // Remove the demo content selection option since this is handled through the Panopoly demo module.
  $form['default_content_fieldset']['#access'] = FALSE;

 // Disable the 'receive email notifications' check box.
  $form['update_notifications']['update_status_module']['#default_value'][1] = 0;
  }

  /**
   * Apps installer default content callback.
   */
  function ecdpanopoly_default_content(&$modules) {
    // TODO: It would be better to figure out which apps have demo content
    // modules by looking at the app manifest. Unfortunately, this doesn't qute
    // work because the manifest doesn't know about the default content module
    // until the app has actually been enabled, since that data only comes in
    // from hook_apps_app_info().
    //
    // apps_include('manifest');
    // $apps = apps_apps('panopoly');
    // foreach ($modules as $module) {
    //   if (!empty($apps[$module]['demo content module'])) {
    //     $modules[] = $apps[$module]['demo content module'];
    //   }
    // }
    //
    // This workaround assumes a pattern MYMODULE_demo.
    $files = system_rebuild_module_data();
    foreach($modules as $module) {
      if (isset($files[$module . '_demo'])) {
        $modules[] = $module . '_demo';
      }
    }
  }
