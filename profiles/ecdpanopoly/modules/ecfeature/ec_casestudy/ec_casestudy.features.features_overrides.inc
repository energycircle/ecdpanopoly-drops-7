<?php
/**
 * @file
 * ec_casestudy.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_casestudy_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:case_study:default:default.display|title_pane"] = 'new-b84ebfba-7d4c-40cb-b4dc-488daad43ae6';

  // Exported overrides for: roles_permissions
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node case_study breadcrumbs"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node case_study context"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node case_study defaults"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node case_study overview"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|administer panelizer node case_study settings"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|delete own case_study content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|edit own case_study content"] = TRUE;
  $overrides["roles_permissions.EC Platinum editor.permissions|administer panelizer node case_study content"]["DELETED"] = TRUE;

 return $overrides;
}
