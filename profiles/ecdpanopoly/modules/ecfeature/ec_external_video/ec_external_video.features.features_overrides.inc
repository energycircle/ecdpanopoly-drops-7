<?php
/**
 * @file
 * ec_external_video.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_external_video_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: roles_permissions
  $overrides["roles_permissions.EC Platinum admin.permissions|create external_video content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|delete own external_video content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|edit any external_video content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|edit own external_video content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|create external_video content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|delete any external_video content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|delete own external_video content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|edit any external_video content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|edit own external_video content"] = TRUE;

  // Exported overrides for: user_permission
  $overrides["user_permission.administer panelizer node external_video defaults.module"]["DELETED"] = TRUE;

 return $overrides;
}
