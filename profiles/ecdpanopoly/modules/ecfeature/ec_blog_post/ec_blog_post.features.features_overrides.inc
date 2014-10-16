<?php
/**
 * @file
 * ec_blog_post.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_blog_post_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: roles_permissions
  $overrides["roles_permissions.administrator.permissions|administer panelizer taxonomy_term blog_categories defaults"]["DELETED"] = TRUE;

  // Exported overrides for: user_permission

 return $overrides;
}
