<?php
/**
 * @file
 * ec_foundation_types.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ec_foundation_types_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-37514233-b892-4c8e-8b1a-bd5f942fcac4"] = (object) array(
      'pid' => 'new-37514233-b892-4c8e-8b1a-bd5f942fcac4',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_ref_page_promotions',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'entityreference_entity_view',
        'delta_limit' => 3,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(
          'view_mode' => 'featured',
          'links' => 1,
        ),
        'context' => array(),
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '37514233-b892-4c8e-8b1a-bd5f942fcac4',
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-37c3a953-a846-4094-8759-06b0876986ec"] = (object) array(
      'pid' => 'new-37c3a953-a846-4094-8759-06b0876986ec',
      'panel' => 'two_66_33_second',
      'type' => 'views_panes',
      'subtype' => 'service_request-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'teaser',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '37c3a953-a846-4094-8759-06b0876986ec',
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-74f82699-93ba-4b15-8bcf-e3bfa1894d40|panel"] = 'two_66_33_first';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-96fb1bf5-7ac2-4566-9dae-876a363c71c9"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-a15a9a3f-1919-4904-8de9-2de5f097c91a"] = (object) array(
      'pid' => 'new-a15a9a3f-1919-4904-8de9-2de5f097c91a',
      'panel' => 'two_66_33_second',
      'type' => 'menu_tree',
      'subtype' => 'menu-auxiliary-menu',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'menu_name' => 'menu-auxiliary-menu',
        'parent_mlid' => 0,
        'parent' => 'menu-auxiliary-menu:0',
        'title_link' => 0,
        'admin_title' => '',
        'level' => 2,
        'follow' => 0,
        'depth' => 0,
        'expanded' => 0,
        'sort' => 0,
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'a15a9a3f-1919-4904-8de9-2de5f097c91a',
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-ade8f2e7-1173-418b-8f94-0a2d8f4cdb9d"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-e0d93093-20b4-42cd-bf23-6f2f487240a6|configuration|formatter_settings|image_style"] = 'sc_460x230';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-e0d93093-20b4-42cd-bf23-6f2f487240a6|configuration|override_title"] = 0;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-e0d93093-20b4-42cd-bf23-6f2f487240a6|panel"] = 'two_66_33_first';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|layout"] = 'two_66_33';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panel_settings|style_settings|two_66_33_bottom"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panel_settings|style_settings|two_66_33_first"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panel_settings|style_settings|two_66_33_second"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panel_settings|style_settings|two_66_33_top"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|contentmain"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|two_66_33_first"] = array(
    0 => 'new-e0d93093-20b4-42cd-bf23-6f2f487240a6',
    1 => 'new-74f82699-93ba-4b15-8bcf-e3bfa1894d40',
  );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|two_66_33_second"] = array(
    0 => 'new-a15a9a3f-1919-4904-8de9-2de5f097c91a',
    1 => 'new-37c3a953-a846-4094-8759-06b0876986ec',
    2 => 'new-37514233-b892-4c8e-8b1a-bd5f942fcac4',
  );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.pipeline"] = 'ipe';

  // Exported overrides for: variable
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|default"] = array(
    'status' => 1,
    'default' => 1,
    'choice' => 1,
  );
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|page_manager|status"] = 0;
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|search_result"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );
  $overrides["variable.panelizer_node:panopoly_page_allowed_types_default.value"] = 0;

 return $overrides;
}
