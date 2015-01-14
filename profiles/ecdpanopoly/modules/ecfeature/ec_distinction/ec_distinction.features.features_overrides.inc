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
  $overrides["field_instance.node-distinction-body.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-distinction-field_content_link.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-distinction-field_content_link.settings|absolute_url"] = 1;
  $overrides["field_instance.node-distinction-field_content_link.settings|title_label_use_field_label"] = FALSE;
  $overrides["field_instance.node-distinction-field_distinction_type.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-distinction-field_logo.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );

  // Exported overrides for: user_permission
  $overrides["user_permission.administer panelizer node distinction content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node distinction layout.roles|EC Platinum admin"]["DELETED"] = TRUE;

  // Exported overrides for: variable
  $overrides["variable.content_type_extras_cancel_distinction.content_type_extras_cancel_distinction"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_preview_button_distinction.content_type_extras_preview_button_distinction"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_save_and_edit_button_distinction.content_type_extras_save_and_edit_button_distinction"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_save_and_edit_distinction.content_type_extras_save_and_edit_distinction"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_save_and_new_button_distinction.content_type_extras_save_and_new_button_distinction"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_save_and_new_distinction.content_type_extras_save_and_new_distinction"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_title_hide_distinction.content_type_extras_title_hide_distinction"]["DELETED"] = TRUE;

 return $overrides;
}
