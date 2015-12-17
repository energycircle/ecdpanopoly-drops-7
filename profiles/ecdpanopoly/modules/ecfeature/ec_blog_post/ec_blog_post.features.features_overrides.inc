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

  // Exported overrides for: field_group
  $overrides["field_group.group_citypages_shown_this_page|node|city_page|form.data|children|1"] = 'field_ref_citypages_case_study';
  $overrides["field_group.group_citypages_shown_this_page|node|city_page|form.data|children|2"] = 'field_ref_citypages_testimonials';

 return $overrides;
}
