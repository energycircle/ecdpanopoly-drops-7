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
  $overrides["variable.user_admin_role.value"] = 5;

 return $overrides;
}
