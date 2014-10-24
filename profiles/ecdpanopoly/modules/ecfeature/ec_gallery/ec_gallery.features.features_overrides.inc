<?php
/**
 * @file
 * ec_gallery.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_gallery_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: roles_permissions
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery breadcrumbs"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery context"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery defaults"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery overview"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery settings"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|delete own gallery content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|edit own gallery content"] = TRUE;

 return $overrides;
}
