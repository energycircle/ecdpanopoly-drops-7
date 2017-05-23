<?php
/**
 * @file
 * ec_panopoly_page_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_panopoly_page_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-panopoly_page-body.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-panopoly_page-body.display|default|type"] = 'hidden';
  $overrides["field_instance.node-panopoly_page-body.display|default|weight"] = 6;
  $overrides["field_instance.node-panopoly_page-body.display|featured|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-body.display|featured|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-body.display|featured|settings|field_multiple_limit_order"] = 0;
  $overrides["field_instance.node-panopoly_page-body.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-panopoly_page-body.display|search_result|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-body.display|search_result|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-body.display|search_result|settings|field_multiple_limit_order"] = 0;
  $overrides["field_instance.node-panopoly_page-body.display|show_this_block"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 19,
  );
  $overrides["field_instance.node-panopoly_page-body.display|teaser|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-body.display|teaser|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-body.display|teaser|settings|field_multiple_limit_order"] = 0;
  $overrides["field_instance.node-panopoly_page-body.settings|display_summary"] = 1;
  $overrides["field_instance.node-panopoly_page-body.settings|linkit"] = array(
    'button_text' => 'Search',
    'enable' => 0,
    'profile' => '',
  );
  $overrides["field_instance.node-panopoly_page-body.widget|settings|maxlength_js"] = '';
  $overrides["field_instance.node-panopoly_page-body.widget|settings|maxlength_js_enforce"] = 0;
  $overrides["field_instance.node-panopoly_page-body.widget|settings|maxlength_js_label"] = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $overrides["field_instance.node-panopoly_page-body.widget|settings|maxlength_js_label_summary"] = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $overrides["field_instance.node-panopoly_page-body.widget|settings|maxlength_js_summary"] = '';
  $overrides["field_instance.node-panopoly_page-body.widget|settings|maxlength_js_truncate_html"] = 0;
  $overrides["field_instance.node-panopoly_page-body.widget|weight"] = 7;
  $overrides["field_instance.node-panopoly_page-field_featured_categories.node-panopoly_page-field_featured_categories"]["DELETED"] = TRUE;
  $overrides["field_instance.node-panopoly_page-field_featured_image.default_value"] = array();
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|default|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|default|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|default|settings|field_multiple_limit_order"] = 0;
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
    'weight' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|teaser|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|teaser|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|teaser|settings|field_multiple_limit_order"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_status.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-panopoly_page-field_featured_status.display|default|type"] = 'hidden';
  $overrides["field_instance.node-panopoly_page-field_featured_status.display|default|weight"] = 7;
  $overrides["field_instance.node-panopoly_page-field_featured_status.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_status.display|show_this_block"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 11,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_status.widget|weight"] = 6;

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-17fa67de-e033-46f2-bdd8-a138e91da0e4|panel"] = 'sidebar';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-17fa67de-e033-46f2-bdd8-a138e91da0e4|position"] = 0;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-373bd769-1e08-4ec5-85b6-0a1d2fc759fd"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-51126c95-cf51-4ad6-a27a-11e4260d8023|position"] = 2;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-99f6c0bd-36fd-411b-9833-c0be0fab7548|position"] = 3;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c|position"] = 1;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52|position"] = 1;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panel_settings|contentmain"] = array(
    'style' => 0,
  );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panel_settings|sidebar|style"] = 0;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|contentmain|1"] = 'new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|contentmain|2"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|0"] = 'new-17fa67de-e033-46f2-bdd8-a138e91da0e4';

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|extra_fields|display|sharethis"] = array(
    'default' => array(
      'weight' => 2,
      'visible' => FALSE,
    ),
    'show_this_block' => array(
      'weight' => 3,
      'visible' => FALSE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|extra_fields|form|metatags"] = array(
    'weight' => 9,
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|extra_fields|form|path|weight"] = 3;
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|extra_fields|form|redirect"] = array(
    'weight' => 7,
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|extra_fields|form|xmlsitemap"] = array(
    'weight' => 8,
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|view_modes|grouped_teaser"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|view_modes|show_this_block"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|default|choice"] = 1;
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|featured|status"] = 0;
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|grouped_teaser"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|page_manager|status"] = 0;
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|search_result|substitute"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|show_this_block"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|teaser|status"] = 0;
  $overrides["variable.panelizer_taxonomy_term:panopoly_categories:default_selection.panelizer_taxonomy_term:panopoly_categories:default_selection"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_taxonomy_term:panopoly_categories:featured_selection.panelizer_taxonomy_term:panopoly_categories:featured_selection"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_taxonomy_term:panopoly_categories:page_manager_selection.panelizer_taxonomy_term:panopoly_categories:page_manager_selection"]["DELETED"] = TRUE;

 return $overrides;
}
