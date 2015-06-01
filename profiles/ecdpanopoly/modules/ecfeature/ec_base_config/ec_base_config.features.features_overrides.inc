<?php
/**
 * @file
 * ec_base_config.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_base_config_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: linkit_profiles
  $overrides["linkit_profiles.content_editors.data|attribute_plugins|target|enabled"] = 1;
  $overrides["linkit_profiles.content_editors.data|entity:file|url_type"] = 'entity';
  $overrides["linkit_profiles.content_editors.data|entity:menu_link"] = array(
    'result_description' => '',
    'bundles' => array(
      'menu-auxiliary-menu' => 0,
      'features' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'group_by_bundle' => 0,
  );
  $overrides["linkit_profiles.content_editors.data|entity:node|bundles"] = array(
    'article' => 0,
    'award' => 0,
    'blog_post' => 0,
    'campaign_page' => 0,
    'case_study' => 0,
    'panopoly_page' => 0,
    'distinction' => 0,
    'distributor' => 0,
    'faq' => 0,
    'gallery' => 0,
    'help_documentation' => 0,
    'panopoly_landing_page' => 0,
    'product_category' => 0,
    'product_page' => 0,
    'promotion' => 0,
    'service' => 0,
    'service_category' => 0,
    'service_group' => 0,
    'slide' => 0,
    'staff' => 0,
    'testimonial' => 0,
  );
  $overrides["linkit_profiles.content_editors.data|entity:node|group_by_bundle"] = 0;
  $overrides["linkit_profiles.content_editors.data|entity:search_api_index|include_unpublished"]["DELETED"] = TRUE;
  $overrides["linkit_profiles.content_editors.data|entity:search_api_server|include_unpublished"]["DELETED"] = TRUE;
  $overrides["linkit_profiles.content_editors.data|entity:taxonomy_term|bundles"] = array(
    'panopoly_categories' => 0,
    'article_types' => 0,
    'award_types' => 0,
    'blog_categories' => 0,
    'help_document_type' => 0,
    'slide_set' => 0,
    'departments' => 0,
    'distinction_types' => 0,
  );
  $overrides["linkit_profiles.content_editors.data|entity:taxonomy_term|group_by_bundle"] = 0;
  $overrides["linkit_profiles.content_editors.data|search_plugins|entity:menu_link"] = array(
    'enabled' => 0,
    'weight' => -10,
  );
  $overrides["linkit_profiles.content_editors.data|text_formats|iframe"] = 0;

  // Exported overrides for: variable
  $overrides["variable.user_admin_role.value"] = 5;

 return $overrides;
}
