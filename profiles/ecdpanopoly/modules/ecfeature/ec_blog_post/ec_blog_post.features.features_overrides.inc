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

  // Exported overrides for: user_permission
  $overrides["user_permission.create blog_post content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.create blog_post content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any blog_post content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.delete terms in blog_categories.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any blog_post content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any blog_post content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.edit terms in blog_categories.roles|EC Platinum admin"]["DELETED"] = TRUE;

 return $overrides;
}
