<?php
/**
 * @file
 * disable_modules.features.inc
 */

/**
 * Implements hook_features_export().
 * 
 * Set up export data for disabling modules.
 */
function disable_modules_features_export($data, &$export, $module_name) {
  $export['features']['disable_modules'] = $data;

  // Add features_disable_modules to dependencies.
  $export['dependencies']['features_disable_modules'] = 'features_disable_modules';
}

/**
 * Implements hook_features_export_options().
 * 
 * List all modules selected for disabling.
 */
function disable_modules_features_export_options() {
  $options = array();

  $modules = features_get_modules();
  foreach ($modules as $module_name => $info) {
    // Don't list hidden modules.
    if (isset($info->info['hidden']) && $info->info['hidden']) {
      // Skip this module.
      continue;
    }

    // Skip modules required by an enabled module.
    if ($info->required_by) {
      foreach ($info->required_by as $required_by => $required) {
        if ($modules[$required_by]->status) {
          // Skip this module.
          continue 2;
        }
      }
    }

    // Don't show this module in the list.
    if ($module_name == 'features_disable_modules') {
      // Skip this module.
      continue;
    }

    $options[$module_name] = $info->info['name'];
  }
  return $options;
}

/**
 * Implements hook_features_revert().
 * 
 * Ensures that all of a feature's dependencies are disabled.
 */
function disable_modules_features_revert($module) {
  disable_modules_features_rebuild($module);
}

/**
 * Implements hook_features_rebuild().
 * 
 * Ensures that all of a feature's dependencies are disabled.
 */
function disable_modules_features_rebuild($module = NULL) {
  $default = features_get_default('disable_modules', $module);
  // Rebuild all if module is not provided.
  if (!isset($default) || $module == 'disable_modules') {
    $default = features_get_default('disable_modules');
  }
  if ($default) {
    $disable_list = array();
    foreach ($default as $disable_module) {
      // Parse the disable_modules string into the module name and version
      // information.
      $parsed_module = drupal_parse_dependency($disable_module);
      $disable_module = $parsed_module['name'];
      if (module_exists($disable_module)) {
        $disable_list[] = $disable_module;
      }
    }
    if (!empty($disable_list)) {
      watchdog('features', 'Disabling modules: ' . implode(', ', $disable_list));
      module_disable($disable_list);
      // Purge features & system static caches.
      module_list(TRUE);
      features_get_modules(NULL, TRUE);
    }
  }
}

/**
 * Implements hook_features_export_render().
 * 
 * Render a list of selected modules marked for disabling.
 */
function disable_modules_features_export_render($module_name, $data, $export = NULL) {
  $code = array();
  $code[] = '  $disable_modules = array();';
  foreach ($data as $name) {
    // @TODO load or bypass?
    $code[] = "  \$disable_modules['{$name}'] = " . features_var_export($name) . ";";
  }
  $code[] = "  return \$disable_modules;";
  $code = implode("\n", $code);
  return array('disable_modules_defaults' => $code);
}
