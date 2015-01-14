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
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node distributor breadcrumbs"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node distributor content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node distributor context"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node distributor defaults"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node distributor layout"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node distributor overview"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node distributor settings"] = TRUE;

  // Exported overrides for: user_permission
  $overrides["user_permission.administer panelizer node distributor breadcrumbs.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node distributor breadcrumbs.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node distributor content.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node distributor content.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node distributor context.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node distributor context.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node distributor defaults.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node distributor defaults.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node distributor layout.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node distributor layout.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node distributor overview.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node distributor overview.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node distributor settings.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node distributor settings.roles|administrator"] = 'administrator';
  $overrides["user_permission.create distributor content.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.create distributor content.roles|administrator"] = 'administrator';
  $overrides["user_permission.delete any distributor content.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any distributor content.roles|administrator"] = 'administrator';
  $overrides["user_permission.delete own distributor content.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own distributor content.roles|administrator"] = 'administrator';
  $overrides["user_permission.edit any distributor content.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any distributor content.roles|administrator"] = 'administrator';
  $overrides["user_permission.edit own distributor content.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own distributor content.roles|administrator"] = 'administrator';

 return $overrides;
}
