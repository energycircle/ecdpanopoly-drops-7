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
  $overrides["roles_permissions.EC Platinum admin.permissions|create product_page content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|delete any product_page content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|delete own product_page content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|edit any product_page content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|edit own product_page content"] = TRUE;
  $overrides["roles_permissions.EC Platinum editor.permissions|create product_page content"] = TRUE;
  $overrides["roles_permissions.EC Platinum editor.permissions|delete own product_page content"] = TRUE;
  $overrides["roles_permissions.EC Platinum editor.permissions|edit any product_page content"] = TRUE;
  $overrides["roles_permissions.EC Platinum editor.permissions|edit own product_page content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|create product_page content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|delete any product_page content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|delete own product_page content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|edit any product_page content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|edit own product_page content"] = TRUE;

 return $overrides;
}
