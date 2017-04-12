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
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|1"] = 'new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|2"] = 'new-51126c95-cf51-4ad6-a27a-11e4260d8023';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|3"] = 'new-99f6c0bd-36fd-411b-9833-c0be0fab7548';

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
    'weight' => 100,
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|extra_fields|form|redirect"] = array(
    'weight' => 30,
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|extra_fields|form|xmlsitemap"] = array(
    'weight' => 30,
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

 return $overrides;
}
