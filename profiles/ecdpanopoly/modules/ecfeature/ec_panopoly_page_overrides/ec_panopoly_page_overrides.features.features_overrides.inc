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
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-373bd769-1e08-4ec5-85b6-0a1d2fc759fd|position"] = 1;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-51126c95-cf51-4ad6-a27a-11e4260d8023|position"] = 2;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-6e4a98d8-3738-41b9-8c33-4b4c905c6834|position"] = 6;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-9176b962-e64f-44a6-8ebe-e03ebf0f6c3d|position"] = 5;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-99f6c0bd-36fd-411b-9833-c0be0fab7548|position"] = 3;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-c0926cca-059c-4bb1-bccd-2838ec7a93f2|position"] = 7;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c|position"] = 4;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52|position"] = 1;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|contentmain|1"] = 'new-fb4920fb-24fa-425e-b6fc-958b5ccd2d52';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|contentmain|2"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|0"] = 'new-17fa67de-e033-46f2-bdd8-a138e91da0e4';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|1"] = 'new-373bd769-1e08-4ec5-85b6-0a1d2fc759fd';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|2"] = 'new-51126c95-cf51-4ad6-a27a-11e4260d8023';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|3"] = 'new-99f6c0bd-36fd-411b-9833-c0be0fab7548';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|4"] = 'new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|5"] = 'new-9176b962-e64f-44a6-8ebe-e03ebf0f6c3d';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|6"] = 'new-6e4a98d8-3738-41b9-8c33-4b4c905c6834';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|7"] = 'new-c0926cca-059c-4bb1-bccd-2838ec7a93f2';

  // Exported overrides for: variable
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
