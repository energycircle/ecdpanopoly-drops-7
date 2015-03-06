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

  // Exported overrides for: field_instance
  $overrides["field_instance.node-gallery-field_gallery_image.widget|module"] = 'media';
  $overrides["field_instance.node-gallery-field_gallery_image.widget|settings|allowed_schemes"] = array(
    0 => 'private',
    1 => 'public',
  );
  $overrides["field_instance.node-gallery-field_gallery_image.widget|settings|allowed_types"] = array(
    0 => 'image',
  );
  $overrides["field_instance.node-gallery-field_gallery_image.widget|settings|browser_plugins"] = array();
  $overrides["field_instance.node-gallery-field_gallery_image.widget|type"] = 'media_generic';

  // Exported overrides for: roles_permissions
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery breadcrumbs"]["DELETED"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery context"]["DELETED"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery defaults"]["DELETED"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery overview"]["DELETED"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery settings"]["DELETED"] = TRUE;

  // Exported overrides for: user_permission
  $overrides["user_permission.administer panelizer node gallery breadcrumbs.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node gallery context.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node gallery defaults.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node gallery overview.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node gallery settings.roles|EC Platinum admin"]["DELETED"] = TRUE;

 return $overrides;
}
