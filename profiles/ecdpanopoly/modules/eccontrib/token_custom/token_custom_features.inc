<?php
/*
 * @file 
 * Implementing custom hooks and helper functions 
 */


/**
 * Implementation of hook_features_export_options. [component_hook]
 *
 * This hook will alert features of which specific items of this component may
 * be exported. For instances, in this case, we want to make available all the
 * existing items.  If there are no items to be exported, this component will
 * not be made available in the features export page.
 *
 * @return array
 *   A keyed array of items, suitable for use with a FormAPI select or
 *   checkboxes element.
 */
function token_custom_features_features_export_options() {
  $options = array();
  $data = token_custom_features_config_get_tokend();

  foreach ($data as $key) {
    $options[$key->machine_name] = $key->machine_name;
  }
  return $options;
}

/**
 * Implementation of hook_features_export [component hook]
 *
 * This is a component hook, rather then a module hook, therefore this is the
 * callback from hook_features_api which relates to the specific component we
 * are looking to export.  When a specific instance of the component we are
 * looking to export is selected, this will include the necessariy item, plus
 * any dependencies into our export array.
 *
 * @param array $data
 *   this is the machine name for the component in question
 * @param array &$export
 *   array of all components to be exported
 * @param string $module_name
 *   The name of the feature module to be generated.
 * @return array
 *   The pipe array of further processors that should be called
 */
function token_custom_features_features_export($data, &$export, $module_name) {
  //we have module dependencies in order for this module to function properly
  //so we'll add them here
  $export['dependencies']['token_custom'] = 'token_custom';
  // The following is the simplest implementation of a straight object export
  // with no further export processors called.



  foreach ($data as $component) {
    $export['features']['token_custom_features'][$component] = $component;
  }
  return array();
}

/**
 * Implementation of hook_features_export_render. [component hook]
 *
 * This hook will be invoked in order to export
 * Component hook. The hook should be implemented using the name ot the
 * component, not the module, eg. [component]_features_export() rather than
 * [module]_features_export().
 *
 * Render one or more component objects to code.
 *
 * @param string $module_name
 *   The name of the feature module to be exported.
 * @param array $data
 *   An array of machine name identifiers for the objects to be rendered.
 * @param array $export
 *   The full export array of the current feature being exported. This is only
 *   passed when hook_features_export_render() is invoked for an actual feature
 *   update or recreate, not during state checks or other operations.
 * @return array
 *   An associative array of rendered PHP code where the key is the name of the
 *   hook that should wrap the PHP code. The hook should not include the name
 *   of the module, e.g. the key for `hook_example` should simply be `example`.
 */
function token_custom_features_features_export_render($module_name, $data, $export = NULL) {
  $code = array();
  $i = 0;
  foreach ($data as $component) {
    //here 11it is just a variable_get, in other cases, it could be a query!
    $token_obj = token_custom_features_config_get_machinename($component);
    foreach ($token_obj as $key => $value) {
      $code[$i][$key] = $value;
    }
    $i++;
  }


  $code = "  return " . features_var_export($code, '  ') . ";";
  return array('token_custom_features_config_features_default_settings' => $code);
}

/**
 * Implements hook_features_revert(). [component_hook]
 */
function token_custom_features_features_revert($module) {
  token_custom_features_features_rebuild($module);
}

/**
 * Implements hook_features_rebuild(). [component_hook]
 */
function token_custom_features_features_rebuild($module) {

  $items = module_invoke($module, 'token_custom_features_config_features_default_settings');
  
  foreach ($items as $value) {
    try {
      $result = token_custom_features_config_get_machinename($value);
      if (!is_array($result)) {
        $new = TRUE;
      }

      drupal_write_record('token_custom', $value, $new ? array() : 'machine_name');
    } catch (Exception $e) {
      watchdog("Erroor in updating", $e->getMessage(), array(), WATCHDOG_ERROR);
    }
  }
}

/*
 * Get machine name of all custom tokens 
 * @return array of machine name 
 * @return
 *   An associative array, or FALSE if there is no next row.
 */

function token_custom_features_config_get_tokend() {

  $codes = db_select('token_custom', 'tc')
    ->fields('tc', array())
    ->execute();
  return $codes->fetchAll();
}

/*
 * Get machine name specific data 
 * @param name of the primery key from token_custom table
 * @return
 *   An associative array, or FALSE if there is no next row.
 */

function token_custom_features_config_get_machinename($name) {

  $codes = db_select('token_custom', 'tc')
    ->fields('tc', array())
    ->condition('machine_name', $name)
    ->execute();
  return $codes->fetchAssoc();
}
