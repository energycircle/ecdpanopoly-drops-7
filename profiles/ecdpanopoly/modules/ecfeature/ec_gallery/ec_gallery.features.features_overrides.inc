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
  $overrides["field_instance.node-gallery-body.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-gallery-field_gallery_image.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-gallery-field_ref_gallery_case_study.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );

  // Exported overrides for: roles_permissions
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery breadcrumbs"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery context"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery defaults"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery overview"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node gallery settings"] = TRUE;

  // Exported overrides for: user_permission
  $overrides["user_permission.administer panelizer node gallery breadcrumbs.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node gallery content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node gallery content.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node gallery context.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node gallery defaults.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node gallery layout.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node gallery layout.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node gallery overview.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node gallery settings.roles|administrator"] = 'administrator';

 return $overrides;
}
