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

  // Exported overrides for: field_instance
  $overrides["field_instance.node-distributor-field_address.widget|settings|default_country"] = '';

  // Exported overrides for: user_permission
  $overrides["user_permission.create distributor content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any distributor content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own distributor content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any distributor content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own distributor content.roles|EC Platinum admin"]["DELETED"] = TRUE;

 return $overrides;
}
