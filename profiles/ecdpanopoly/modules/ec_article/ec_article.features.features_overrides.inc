<?php
/**
 * @file
 * ec_article.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_article_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_group
  $overrides["field_group.group_shown_on_this_page|node|article|form.data|children|3"] = 'field_ref_article_blog';
  $overrides["field_group.group_shown_on_this_page|node|article|form.data|children|4"] = 'field_ref_article_promo';

  // Exported overrides for: field_instance
  $overrides["field_instance.node-article-field_ref_article_blog.widget|weight"] = 17;
  $overrides["field_instance.node-article-field_ref_article_promo.widget|weight"] = 18;
  $overrides["field_instance.node-article-field_ref_article_testimonial.widget|weight"] = 16;

 return $overrides;
}
