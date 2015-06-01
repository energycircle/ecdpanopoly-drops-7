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

  // Exported overrides for: user_permission
  $overrides["user_permission.create service content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.create service content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.create service_category content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.create service_category content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.create service_group content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.create service_group content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any service content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any service content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any service_category content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any service_category content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any service_group content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any service_group content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own service content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own service_category content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own service_group content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any service content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any service content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any service_category content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any service_category content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any service_group content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any service_group content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own service content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own service_category content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own service_group content.roles|EC Platinum admin"]["DELETED"] = TRUE;

 return $overrides;
}
