<?php
/**
 * @file
 * ec_distinction.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_distinction_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-distinction-field_logo.widget|settings|allowed_schemes|0"]["DELETED"] = TRUE;
  $overrides["field_instance.node-distinction-field_logo.widget|settings|allowed_schemes|1"]["DELETED"] = TRUE;
  $overrides["field_instance.node-distinction-field_logo.widget|settings|allowed_schemes|private"] = 'private';
  $overrides["field_instance.node-distinction-field_logo.widget|settings|allowed_schemes|public"] = 'public';
  $overrides["field_instance.node-distinction-field_logo.widget|settings|allowed_schemes|vimeo"] = 0;
  $overrides["field_instance.node-distinction-field_logo.widget|settings|allowed_schemes|youtube"] = 0;
  $overrides["field_instance.node-distinction-field_logo.widget|settings|allowed_types|0"]["DELETED"] = TRUE;
  $overrides["field_instance.node-distinction-field_logo.widget|settings|allowed_types|audio"] = 0;
  $overrides["field_instance.node-distinction-field_logo.widget|settings|allowed_types|document"] = 0;
  $overrides["field_instance.node-distinction-field_logo.widget|settings|allowed_types|image"] = 'image';
  $overrides["field_instance.node-distinction-field_logo.widget|settings|allowed_types|video"] = 0;
  $overrides["field_instance.node-distinction-field_logo.widget|settings|browser_plugins|media_default--media_browser_1"] = 'media_default--media_browser_1';
  $overrides["field_instance.node-distinction-field_logo.widget|settings|browser_plugins|media_default--media_browser_my_files"] = 0;
  $overrides["field_instance.node-distinction-field_logo.widget|settings|browser_plugins|media_internet"] = 0;
  $overrides["field_instance.node-distinction-field_logo.widget|settings|browser_plugins|upload"] = 'upload';
  $overrides["field_instance.node-distinction-field_logo.widget|settings|manualcrop_instant_crop"] = FALSE;
  $overrides["field_instance.node-distinction-field_logo.widget|settings|preview_image_style"]["DELETED"] = TRUE;
  $overrides["field_instance.node-distinction-field_logo.widget|settings|progress_indicator"]["DELETED"] = TRUE;

 return $overrides;
}
