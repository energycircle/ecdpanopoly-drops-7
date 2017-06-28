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

  // Exported overrides for: field_instance
  $overrides["field_instance.user-user-field_user_about.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.user-user-field_user_about.display|default|type"] = 'hidden';
  $overrides["field_instance.user-user-field_user_about.display|default|weight"] = 0;
  $overrides["field_instance.user-user-field_user_picture.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.user-user-field_user_picture.display|default|settings|image_link"]["DELETED"] = TRUE;
  $overrides["field_instance.user-user-field_user_picture.display|default|settings|image_style"]["DELETED"] = TRUE;
  $overrides["field_instance.user-user-field_user_picture.display|default|type"] = 'hidden';
  $overrides["field_instance.user-user-field_user_picture.display|default|weight"] = 1;

  // Exported overrides for: file_display
  $overrides["file_display.video__default__file_field_file_video.settings|muted"] = 0;
  $overrides["file_display.video__default__file_field_file_video.settings|preload"] = '';
  $overrides["file_display.video__default__file_field_file_video.weight"] = -40;
  $overrides["file_display.video__default__media_vimeo_video.weight"] = -47;
  $overrides["file_display.video__default__media_youtube_video.settings|captions"] = FALSE;
  $overrides["file_display.video__default__media_youtube_video.weight"] = -49;

  // Exported overrides for: file_type
  $overrides["file_type.video.disabled"] = FALSE;
  $overrides["file_type.video.mimetypes|1"] = 'video/vimeo';
  $overrides["file_type.video.mimetypes|2"] = 'video/youtube';

  // Exported overrides for: filter
  $overrides["filter.panopoly_html_text.cache"] = 0;
  $overrides["filter.panopoly_html_text.filters|filter_tokens"] = array(
    'settings' => array(),
    'status' => 1,
    'weight' => 0,
  );
  $overrides["filter.panopoly_html_text.filters|wysiwyg"]["DELETED"] = TRUE;
  $overrides["filter.panopoly_wysiwyg_text.cache"] = 0;
  $overrides["filter.panopoly_wysiwyg_text.filters|filter_tokens"] = array(
    'settings' => array(),
    'status' => 1,
    'weight' => 0,
  );

  // Exported overrides for: image
  $overrides["image.linkit_thumb.label"] = 'linkit_thumb';

  // Exported overrides for: linkit_profiles
  $overrides["linkit_profiles.content_editors.data|entity:entityform_type"] = array(
    'result_description' => '',
  );
  $overrides["linkit_profiles.content_editors.data|entity:fieldable_panels_pane"] = array(
    'result_description' => '',
  );
  $overrides["linkit_profiles.content_editors.data|entity:file|url_type"] = 'entity';
  $overrides["linkit_profiles.content_editors.data|entity:menu_link"] = array(
    'result_description' => '',
    'bundles' => array(
      'menu-auxiliary-menu' => 0,
      'devel' => 0,
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
    'audience' => 0,
    'blog_post' => 0,
    'campaign_page' => 0,
    'case_study' => 0,
    'city_page' => 0,
    'panopoly_page' => 0,
    'distinction' => 0,
    'distributor' => 0,
    'external_form' => 0,
    'external_video' => 0,
    'faq' => 0,
    'financing_option' => 0,
    'gallery' => 0,
    'panopoly_landing_page' => 0,
    'product_category' => 0,
    'product_page' => 0,
    'promotion' => 0,
    'review_site' => 0,
    'service' => 0,
    'service_category' => 0,
    'service_group' => 0,
    'slide' => 0,
    'staff' => 0,
    'testimonial' => 0,
  );
  $overrides["linkit_profiles.content_editors.data|entity:node|group_by_bundle"] = 0;
  $overrides["linkit_profiles.content_editors.data|entity:search_api_index"]["DELETED"] = TRUE;
  $overrides["linkit_profiles.content_editors.data|entity:search_api_server"]["DELETED"] = TRUE;
  $overrides["linkit_profiles.content_editors.data|entity:taxonomy_term|bundles"] = array(
    'article_types' => 0,
    'blog_categories' => 0,
    'distinction_types' => 0,
    'review_site_tags' => 0,
    'slide_set' => 0,
    'departments' => 0,
    'panopoly_categories' => 0,
  );
  $overrides["linkit_profiles.content_editors.data|entity:taxonomy_term|group_by_bundle"] = 0;
  $overrides["linkit_profiles.content_editors.data|insert_plugin|url_method"] = 3;
  $overrides["linkit_profiles.content_editors.data|search_plugins|entity:entityform_type"] = array(
    'enabled' => 0,
    'weight' => -10,
  );
  $overrides["linkit_profiles.content_editors.data|search_plugins|entity:fieldable_panels_pane"] = array(
    'enabled' => 0,
    'weight' => -10,
  );
  $overrides["linkit_profiles.content_editors.data|search_plugins|entity:menu_link"] = array(
    'enabled' => 0,
    'weight' => -10,
  );
  $overrides["linkit_profiles.content_editors.data|search_plugins|entity:search_api_index"]["DELETED"] = TRUE;
  $overrides["linkit_profiles.content_editors.data|search_plugins|entity:search_api_server"]["DELETED"] = TRUE;
  $overrides["linkit_profiles.content_editors.data|text_formats|iframe"] = 0;

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.panopoly_html_text.preferences|add_to_summaries"] = FALSE;
  $overrides["wysiwyg.panopoly_html_text.rdf_mapping"] = array();
  $overrides["wysiwyg.panopoly_html_text.settings|theme"]["DELETED"] = TRUE;
  $overrides["wysiwyg.panopoly_wysiwyg_text.rdf_mapping"] = array();

 return $overrides;
}
