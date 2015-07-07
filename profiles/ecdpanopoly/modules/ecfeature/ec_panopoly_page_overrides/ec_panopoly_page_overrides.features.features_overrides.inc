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

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-74f82699-93ba-4b15-8bcf-e3bfa1894d40|panel"] = 'two_66_33_first';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-96fb1bf5-7ac2-4566-9dae-876a363c71c9|panel"] = 'two_66_33_first';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-ade8f2e7-1173-418b-8f94-0a2d8f4cdb9d|panel"] = 'two_66_33_first';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-b92fd697-8377-4b5e-87cc-d81df0e7e61d"] = (object) array(
      'pid' => 'new-b92fd697-8377-4b5e-87cc-d81df0e7e61d',
      'panel' => 'two_66_33_second',
      'type' => 'menu_tree',
      'subtype' => 'main-menu',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'menu_name' => 'main-menu',
        'parent_mlid' => 0,
        'parent' => 'main-menu:0',
        'title_link' => 0,
        'admin_title' => '',
        'level' => 2,
        'follow' => 0,
        'depth' => 0,
        'expanded' => 0,
        'sort' => 0,
        'override_title' => 1,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'b92fd697-8377-4b5e-87cc-d81df0e7e61d',
    );
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
    2 => 'new-96fb1bf5-7ac2-4566-9dae-876a363c71c9',
    3 => 'new-ade8f2e7-1173-418b-8f94-0a2d8f4cdb9d',
  );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|panels|two_66_33_second"] = array(
    0 => 'new-b92fd697-8377-4b5e-87cc-d81df0e7e61d',
    1 => 'new-79745fa9-4e30-40d3-9520-96ab5370483f',
  );
  $overrides["panelizer_defaults.node:panopoly_page:home_default.display|layout"] = 'two_50';
  $overrides["panelizer_defaults.node:panopoly_page:home_default.display|panel_settings|style_settings|two_50_bottom"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:home_default.display|panel_settings|style_settings|two_50_first"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:home_default.display|panel_settings|style_settings|two_50_second"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:home_default.display|panel_settings|style_settings|two_50_top"] = NULL;
  $overrides["panelizer_defaults.node:panopoly_page:home_default.display|panels|contentmain"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:home_default.display|panels|two_50_bottom"] = array(
    0 => 'new-5c743585-bddf-4030-8bb7-6b0a4c8aa30a',
  );
  $overrides["panelizer_defaults.node:panopoly_page:home_default.display|panels|two_50_first"] = array(
    0 => 'new-74f82699-93ba-4b15-8bcf-e3bfa1894d40',
  );
  $overrides["panelizer_defaults.node:panopoly_page:home_default.display|panels|two_50_second"] = array(
    0 => 'new-5b909cec-42bd-45ab-97ce-0f4755482d24',
  );
  $overrides["panelizer_defaults.node:panopoly_page:home_default.display|panels|two_50_top"] = array(
    0 => 'new-e0d93093-20b4-42cd-bf23-6f2f487240a6',
  );

  // Exported overrides for: variable
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|default|choice"] = 1;
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|featured|status"] = 0;
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|grouped_teaser"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|page_manager|status"] = 0;
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|show_this_block"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|teaser|status"] = 0;

  // Exported overrides for: views_view
  $overrides["views_view.frontpage.display|default|display_options|access|perm"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|row_options"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|use_more_always"] = FALSE;

 return $overrides;
}
