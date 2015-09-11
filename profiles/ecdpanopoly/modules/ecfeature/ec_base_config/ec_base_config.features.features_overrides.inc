<?php
/**
 * @file
 * ec_base_config.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_base_config_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.media_wysiwyg_wysiwyg_browser_plugins.value|2"]["DELETED"] = TRUE;

 return $overrides;
}
