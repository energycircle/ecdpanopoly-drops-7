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
  $overrides["field_instance.node-panopoly_page-body.display|default|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-body.display|default|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-body.display|featured|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-body.display|featured|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-body.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-panopoly_page-body.display|search_result|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-body.display|search_result|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-body.display|show_this_block"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-panopoly_page-body.display|teaser|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-body.display|teaser|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_categories.display|default|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-field_featured_categories.display|default|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_categories.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_categories.display|show_this_block"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|default|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|default|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|featured|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|featured|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|grouped_teaser"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|search_result|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|search_result|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|show_this_block"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|teaser|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-field_featured_image.display|teaser|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|module"] = 'media';
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|allowed_schemes"] = array(
    0 => 'private',
    1 => 'public',
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|allowed_types"] = array(
    0 => 'image',
  );
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|settings|browser_plugins"] = array();
  $overrides["field_instance.node-panopoly_page-field_featured_image.widget|type"] = 'media_generic';
  $overrides["field_instance.node-panopoly_page-field_featured_status.display|default|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-panopoly_page-field_featured_status.display|default|settings|field_multiple_limit_offset"] = 0;
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
    'weight' => 0,
  );
  $overrides["field_instance.taxonomy_term-panopoly_categories-field_featured_image.display|default|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.taxonomy_term-panopoly_categories-field_featured_image.display|default|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.taxonomy_term-panopoly_categories-field_featured_image.widget|module"] = 'media';
  $overrides["field_instance.taxonomy_term-panopoly_categories-field_featured_image.widget|settings|allowed_schemes"] = array(
    0 => 'private',
    1 => 'public',
  );
  $overrides["field_instance.taxonomy_term-panopoly_categories-field_featured_image.widget|settings|allowed_types"] = array(
    0 => 'image',
  );
  $overrides["field_instance.taxonomy_term-panopoly_categories-field_featured_image.widget|settings|browser_plugins"] = array();
  $overrides["field_instance.taxonomy_term-panopoly_categories-field_featured_image.widget|type"] = 'media_generic';

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-2ed1fba1-1bcb-4d1c-b6ac-d287a6c83f39"] = (object) array(
      'pid' => 'new-2ed1fba1-1bcb-4d1c-b6ac-d287a6c83f39',
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
        'level' => 1,
        'follow' => 0,
        'depth' => 0,
        'expanded' => 0,
        'sort' => 0,
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '2ed1fba1-1bcb-4d1c-b6ac-d287a6c83f39',
    );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-74f82699-93ba-4b15-8bcf-e3bfa1894d40|panel"] = 'two_66_33_first';
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-96fb1bf5-7ac2-4566-9dae-876a363c71c9"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:panopoly_page:default:default.display|content|new-ade8f2e7-1173-418b-8f94-0a2d8f4cdb9d"]["DELETED"] = TRUE;
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
    0 => 'new-2ed1fba1-1bcb-4d1c-b6ac-d287a6c83f39',
  );
  $overrides["panelizer_defaults.node:panopoly_page:default:default.pipeline"] = 'ipe';

  // Exported overrides for: variable
  $overrides["variable.additional_settings__active_tab_panopoly_page.value"] = 'edit-panelizer';
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

 return $overrides;
}
