<?php
/**
 * @file
 * ec_product_page_lite.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_product_page_lite_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: roles_permissions
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_page breadcrumbs"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_page content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_page context"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_page defaults"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_page layout"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_page overview"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_page settings"] = TRUE;

 return $overrides;
}
