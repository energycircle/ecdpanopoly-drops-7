<?php
/**
 * @file
 * ec_product_page_category.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_product_page_category_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: roles_permissions
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_category breadcrumbs"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_category content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_category context"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_category defaults"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_category layout"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_category overview"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node product_category settings"] = TRUE;

  // Exported overrides for: user_permission
  $overrides["user_permission.administer panelizer node product_category breadcrumbs.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node product_category breadcrumbs.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node product_category content.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node product_category content.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node product_category context.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node product_category context.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node product_category defaults.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node product_category defaults.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node product_category layout.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node product_category layout.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node product_category overview.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node product_category overview.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node product_category settings.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node product_category settings.roles|administrator"] = 'administrator';
  $overrides["user_permission.create product_category content.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.create product_category content.roles|administrator"] = 'administrator';
  $overrides["user_permission.delete any product_category content.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any product_category content.roles|administrator"] = 'administrator';
  $overrides["user_permission.delete own product_category content.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own product_category content.roles|administrator"] = 'administrator';
  $overrides["user_permission.edit any product_category content.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any product_category content.roles|administrator"] = 'administrator';
  $overrides["user_permission.edit own product_category content.roles|EC SuperAdmin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own product_category content.roles|administrator"] = 'administrator';

 return $overrides;
}
