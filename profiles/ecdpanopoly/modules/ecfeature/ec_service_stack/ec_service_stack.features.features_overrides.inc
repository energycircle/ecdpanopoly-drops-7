<?php
/**
 * @file
 * ec_service_stack.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_service_stack_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: roles_permissions
  $overrides["roles_permissions.EC Platinum editor.permissions|delete own service_category content"] = TRUE;
  $overrides["roles_permissions.EC Platinum editor.permissions|edit own service_category content"] = TRUE;

 return $overrides;
}
