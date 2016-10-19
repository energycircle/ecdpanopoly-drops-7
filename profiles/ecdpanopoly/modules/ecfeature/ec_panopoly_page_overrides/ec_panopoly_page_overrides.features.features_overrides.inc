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
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-bcc6c8e4-04cb-4637-a941-703d8659139a"] = (object) array(
      'pid' => 'new-bcc6c8e4-04cb-4637-a941-703d8659139a',
      'panel' => 'two_66_33_second',
      'type' => 'views_panes',
      'subtype' => 'testimonials-panel_pane_2',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'teaser',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => 'bcc6c8e4-04cb-4637-a941-703d8659139a',
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-bd56e09b-f7d2-4fc8-b3a0-d74b62df2293"] = (object) array(
      'pid' => 'new-bd56e09b-f7d2-4fc8-b3a0-d74b62df2293',
      'panel' => 'two_66_33_second',
      'type' => 'views_panes',
      'subtype' => 'service_request-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'full',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'bd56e09b-f7d2-4fc8-b3a0-d74b62df2293',
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-d1f269e2-19ca-4eb5-a8a8-a108276a7706"] = (object) array(
      'pid' => 'new-d1f269e2-19ca-4eb5-a8a8-a108276a7706',
      'panel' => 'two_66_33_second',
      'type' => 'views_panes',
      'subtype' => 'blog_listing-panel_pane_3',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'teaser',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => 'd1f269e2-19ca-4eb5-a8a8-a108276a7706',
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-e0d93093-20b4-42cd-bf23-6f2f487240a6|panel"] = 'two_66_33_first';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-eb9d8405-655f-490f-834d-27b0c4e638dc"] = (object) array(
      'pid' => 'new-eb9d8405-655f-490f-834d-27b0c4e638dc',
      'panel' => 'two_66_33_second',
      'type' => 'views_panes',
      'subtype' => 'promotions-panel_pane_1',
      'shown' => FALSE,
      'access' => array(),
      'configuration' => array(
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'teaser',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'eb9d8405-655f-490f-834d-27b0c4e638dc',
    );
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
    0 => 'new-bd56e09b-f7d2-4fc8-b3a0-d74b62df2293',
    1 => 'new-eb9d8405-655f-490f-834d-27b0c4e638dc',
    2 => 'new-d1f269e2-19ca-4eb5-a8a8-a108276a7706',
    3 => 'new-bcc6c8e4-04cb-4637-a941-703d8659139a',
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
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|search_result|substitute"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|show_this_block"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|teaser|status"] = 0;

 return $overrides;
}
