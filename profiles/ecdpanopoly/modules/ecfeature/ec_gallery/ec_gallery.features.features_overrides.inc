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

  // Exported overrides for: user_permission
  $overrides["user_permission.create gallery content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.create gallery content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any gallery content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own gallery content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any gallery content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any gallery content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own gallery content.roles|EC Platinum admin"]["DELETED"] = TRUE;

 return $overrides;
}
