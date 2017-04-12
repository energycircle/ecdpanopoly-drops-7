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
  $overrides["field_instance.node-panopoly_page-field_featured_image.default_value"] = array();
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|default|settings|image_link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|default|settings|image_style"]["DELETED"] = TRUE;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|default|type"] = 'hidden';
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|default|weight"] = 3;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|featured|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|featured|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|featured|settings|field_multiple_limit_order"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|search_result|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|search_result|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|search_result|settings|field_multiple_limit_order"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|show_this_block"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 12,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|teaser|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|teaser|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|teaser|settings|field_multiple_limit_order"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|module"] = 'media';
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|allowed_schemes"] = array(
    'public' => 'public',
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|allowed_types"] = array(
    'image' => 'image',
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|browser_plugins"] = array();
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|type"] = 'media_generic';
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|weight"] = 3;

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

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.panopoly_html_text.rdf_mapping"] = array();
  $overrides["wysiwyg.panopoly_wysiwyg_text.rdf_mapping"] = array();

 return $overrides;
}
