<?php
/**
 * @file
 * ec_help_documentation.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_help_documentation_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: roles_permissions
  $overrides["roles_permissions.EC Platinum admin.permissions|create help_documentation content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|delete any help_documentation content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|delete own help_documentation content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|edit any help_documentation content"] = TRUE;
  $overrides["roles_permissions.EC Platinum admin.permissions|edit own help_documentation content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|administer panelizer node help_documentation defaults"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|administer panelizer taxonomy_term help_document_type defaults"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|create help_documentation content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|delete any help_documentation content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|delete own help_documentation content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|edit any help_documentation content"] = TRUE;
  $overrides["roles_permissions.administrator.permissions|edit own help_documentation content"] = TRUE;

 return $overrides;
}
