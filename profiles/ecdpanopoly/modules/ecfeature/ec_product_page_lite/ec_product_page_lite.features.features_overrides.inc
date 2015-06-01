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

  // Exported overrides for: user_permission
  $overrides["user_permission.create product_page content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any product_page content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own product_page content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any product_page content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own product_page content.roles|EC Platinum admin"]["DELETED"] = TRUE;

 return $overrides;
}
