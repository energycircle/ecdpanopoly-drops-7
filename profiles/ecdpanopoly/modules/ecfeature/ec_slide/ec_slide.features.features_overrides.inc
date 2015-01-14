<?php
/**
 * @file
 * ec_slide.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_slide_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-slide-body.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-slide-field_content_link.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-slide-field_content_link.settings|absolute_url"] = 1;
  $overrides["field_instance.node-slide-field_content_link.settings|title_label_use_field_label"] = FALSE;
  $overrides["field_instance.node-slide-field_display_subtitle.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-slide-field_display_title.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-slide-field_slide_image.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );

  // Exported overrides for: user_permission
  $overrides["user_permission.administer panelizer node slide content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node slide layout.roles|EC Platinum admin"]["DELETED"] = TRUE;

  // Exported overrides for: variable
  $overrides["variable.content_type_extras_cancel_slide.content_type_extras_cancel_slide"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_preview_button_slide.content_type_extras_preview_button_slide"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_save_and_edit_button_slide.content_type_extras_save_and_edit_button_slide"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_save_and_edit_slide.content_type_extras_save_and_edit_slide"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_save_and_new_button_slide.content_type_extras_save_and_new_button_slide"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_save_and_new_slide.content_type_extras_save_and_new_slide"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_title_hide_slide.content_type_extras_title_hide_slide"]["DELETED"] = TRUE;

 return $overrides;
}
