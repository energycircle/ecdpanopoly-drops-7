<?php
/**
 * @file
 * ec_distributor.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_distributor_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: roles_permissions
  $overrides["roles_permissions.EC Platinum admin.permissions|create distributor content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|delete any distributor content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|delete own distributor content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|edit any distributor content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|edit own distributor content"] = TRUE;
  $overrides["roles_permissions.EC Platinum editor.permissions|create distributor content"] = TRUE;
  $overrides["roles_permissions.EC Platinum editor.permissions|delete own distributor content"] = TRUE;
  $overrides["roles_permissions.EC Platinum editor.permissions|edit any distributor content"] = TRUE;
  $overrides["roles_permissions.EC Platinum editor.permissions|edit own distributor content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|create distributor content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|delete any distributor content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|delete own distributor content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|edit any distributor content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|edit own distributor content"] = TRUE;

 return $overrides;
}
