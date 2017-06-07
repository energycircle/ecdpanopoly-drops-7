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

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.panopoly_html_text.rdf_mapping"] = array();
  $overrides["wysiwyg.panopoly_wysiwyg_text.rdf_mapping"] = array();

 return $overrides;
}
