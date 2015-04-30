<?php
/**
 * @file
 * ec_staff.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_staff_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: user_permission
  $overrides["user_permission.create staff content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.create staff content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any staff content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own staff content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any staff content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any staff content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own staff content.roles|EC Platinum admin"]["DELETED"] = TRUE;

 return $overrides;
}
