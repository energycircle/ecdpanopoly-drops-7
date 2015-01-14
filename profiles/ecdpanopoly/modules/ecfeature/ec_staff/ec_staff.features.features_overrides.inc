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

  // Exported overrides for: field_instance
  $overrides["field_instance.node-staff-body.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-staff-field_first_name.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-staff-field_last_name.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-staff-field_staff_department.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-staff-field_staff_photo.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-staff-field_staff_title.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );

  // Exported overrides for: user_permission
  $overrides["user_permission.administer panelizer node staff breadcrumbs.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node staff content.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node staff context.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node staff defaults.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node staff layout.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node staff overview.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer panelizer node staff settings.roles|administrator"] = 'administrator';

 return $overrides;
}
