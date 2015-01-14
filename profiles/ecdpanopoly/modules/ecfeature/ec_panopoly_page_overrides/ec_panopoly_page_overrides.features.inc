<?php
/**
 * @file
 * ec_panopoly_page_overrides.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_panopoly_page_overrides_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function ec_panopoly_page_overrides_field_default_field_instances_alter(&$data) {
  if (isset($data['node-panopoly_page-body'])) {
    $data['node-panopoly_page-body']['display']['default']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['default']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['featured']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['featured']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-body']['display']['search_result']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['search_result']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['show_this_block'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-body']['display']['teaser']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-body']['display']['teaser']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
  }
  if (isset($data['node-panopoly_page-field_featured_categories'])) {
    $data['node-panopoly_page-field_featured_categories']['display']['default']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-field_featured_categories']['display']['default']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_categories']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_categories']['display']['show_this_block'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-panopoly_page-field_featured_image'])) {
    $data['node-panopoly_page-field_featured_image']['display']['default']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['default']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['featured']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['featured']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['search_result']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['search_result']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['show_this_block'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['teaser']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['display']['teaser']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
  }
  if (isset($data['node-panopoly_page-field_featured_status'])) {
    $data['node-panopoly_page-field_featured_status']['display']['default']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-panopoly_page-field_featured_status']['display']['default']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-panopoly_page-field_featured_status']['display']['grouped_teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_status']['display']['show_this_block'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['taxonomy_term-panopoly_categories-field_featured_image'])) {
    $data['taxonomy_term-panopoly_categories-field_featured_image']['display']['default']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['taxonomy_term-panopoly_categories-field_featured_image']['display']['default']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function ec_panopoly_page_overrides_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:panopoly_page:default:default'])) {
    $data['node:panopoly_page:default:default']->display->content['new-2ed1fba1-1bcb-4d1c-b6ac-d287a6c83f39'] = (object) array(
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-74f82699-93ba-4b15-8bcf-e3bfa1894d40']->panel = 'two_66_33_first'; /* WAS: 'contentmain' */
    $data['node:panopoly_page:default:default']->display->content['new-e0d93093-20b4-42cd-bf23-6f2f487240a6']->panel = 'two_66_33_first'; /* WAS: 'contentmain' */
    $data['node:panopoly_page:default:default']->display->layout = 'two_66_33'; /* WAS: 'boxton' */
    $data['node:panopoly_page:default:default']->display->panel_settings['style_settings']['two_66_33_bottom'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panel_settings['style_settings']['two_66_33_first'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panel_settings['style_settings']['two_66_33_second'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panel_settings['style_settings']['two_66_33_top'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panels['two_66_33_first'] = array(
      0 => 'new-e0d93093-20b4-42cd-bf23-6f2f487240a6',
      1 => 'new-74f82699-93ba-4b15-8bcf-e3bfa1894d40',
    ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panels['two_66_33_second'] = array(
      0 => 'new-2ed1fba1-1bcb-4d1c-b6ac-d287a6c83f39',
    ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->pipeline = 'ipe'; /* WAS: 'standard' */
    unset($data['node:panopoly_page:default:default']->display->content['new-96fb1bf5-7ac2-4566-9dae-876a363c71c9']);
    unset($data['node:panopoly_page:default:default']->display->content['new-ade8f2e7-1173-418b-8f94-0a2d8f4cdb9d']);
    unset($data['node:panopoly_page:default:default']->display->panels['contentmain']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function ec_panopoly_page_overrides_strongarm_alter(&$data) {
  if (isset($data['additional_settings__active_tab_panopoly_page'])) {
    $data['additional_settings__active_tab_panopoly_page']->value = 'edit-panelizer'; /* WAS: 'edit-submission' */
  }
  if (isset($data['panelizer_defaults_node_panopoly_page'])) {
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['default']['choice'] = 1; /* WAS: 0 */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['featured']['status'] = 0; /* WAS: 1 */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['grouped_teaser'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['page_manager']['status'] = 0; /* WAS: 1 */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['show_this_block'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['teaser']['status'] = 0; /* WAS: 1 */
  }
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ec_panopoly_page_overrides_weight_features_default_settings() {
  $settings = array();

  $settings['panopoly_page'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
