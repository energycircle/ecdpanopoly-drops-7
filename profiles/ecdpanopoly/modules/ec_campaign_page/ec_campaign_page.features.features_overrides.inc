<?php
/**
 * @file
 * ec_campaign_page.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_campaign_page_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-campaign_page-body.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-campaign_page-field_button_text.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-campaign_page-field_call_to_action.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-campaign_page-field_display_subtitle.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-campaign_page-field_display_title.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-campaign_page-field_featured_image.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-campaign_page-field_ref_to_cta_form.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );

  // Exported overrides for: user_permission
  $overrides["user_permission.administer panelizer node campaign_page content.roles|EC Platinum admin"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node campaign_page content.roles|EC Platinum editor"]["DELETED"] = TRUE;
  $overrides["user_permission.administer panelizer node campaign_page layout.roles|EC Platinum admin"]["DELETED"] = TRUE;

  // Exported overrides for: variable
  $overrides["variable.content_type_extras_cancel_campaign_page.content_type_extras_cancel_campaign_page"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_preview_button_campaign_page.content_type_extras_preview_button_campaign_page"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_save_and_edit_button_campaign_page.content_type_extras_save_and_edit_button_campaign_page"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_save_and_edit_campaign_page.content_type_extras_save_and_edit_campaign_page"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_save_and_new_button_campaign_page.content_type_extras_save_and_new_button_campaign_page"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_save_and_new_campaign_page.content_type_extras_save_and_new_campaign_page"]["DELETED"] = TRUE;
  $overrides["variable.content_type_extras_title_hide_campaign_page.content_type_extras_title_hide_campaign_page"]["DELETED"] = TRUE;

 return $overrides;
}
