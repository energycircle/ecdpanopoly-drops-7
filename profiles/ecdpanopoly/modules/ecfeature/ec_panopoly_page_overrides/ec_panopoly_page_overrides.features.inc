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
 * Implements hook_views_api().
 */
function ec_panopoly_page_overrides_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function ec_panopoly_page_overrides_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:panopoly_page:default:default'])) {
    $data['node:panopoly_page:default:default']->display->content['new-74f82699-93ba-4b15-8bcf-e3bfa1894d40']->panel = 'two_66_33_first'; /* WAS: 'contentmain' */
    $data['node:panopoly_page:default:default']->display->content['new-ab6d95ae-008b-48ab-84b4-0b3c475b7fa4'] = (object) array(
          'pid' => 'new-ab6d95ae-008b-48ab-84b4-0b3c475b7fa4',
          'panel' => 'two_66_33_first',
          'type' => 'views_panes',
          'subtype' => 'hero_image_or_video-panel_pane_1',
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
          'position' => 0,
          'locks' => array(),
          'uuid' => 'ab6d95ae-008b-48ab-84b4-0b3c475b7fa4',
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-b92fd697-8377-4b5e-87cc-d81df0e7e61d'] = (object) array(
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
            'title_link' => 1,
            'admin_title' => '',
            'level' => 2,
            'follow' => 0,
            'depth' => 0,
            'expanded' => 0,
            'sort' => 0,
            'override_title' => 0,
            'override_title_text' => '',
            'override_title_heading' => 'h2',
            'depth_relative' => 0,
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
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->layout = 'two_66_33'; /* WAS: 'radix_boxton' */
    $data['node:panopoly_page:default:default']->display->panel_settings['style_settings']['two_66_33_bottom'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panel_settings['style_settings']['two_66_33_first'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panel_settings['style_settings']['two_66_33_second'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panel_settings['style_settings']['two_66_33_top'] = NULL; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panels['two_66_33_first'] = array(
      0 => 'new-74f82699-93ba-4b15-8bcf-e3bfa1894d40',
      1 => 'new-ab6d95ae-008b-48ab-84b4-0b3c475b7fa4',
    ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->panels['two_66_33_second'] = array(
      0 => 'new-b92fd697-8377-4b5e-87cc-d81df0e7e61d',
    ); /* WAS: '' */
    unset($data['node:panopoly_page:default:default']->display->content['new-96fb1bf5-7ac2-4566-9dae-876a363c71c9']);
    unset($data['node:panopoly_page:default:default']->display->content['new-ade8f2e7-1173-418b-8f94-0a2d8f4cdb9d']);
    unset($data['node:panopoly_page:default:default']->display->content['new-e0d93093-20b4-42cd-bf23-6f2f487240a6']);
    unset($data['node:panopoly_page:default:default']->display->panels['contentmain']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function ec_panopoly_page_overrides_strongarm_alter(&$data) {
  if (isset($data['panelizer_defaults_node_panopoly_page'])) {
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['default']['choice'] = 1; /* WAS: 0 */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['featured']['status'] = 0; /* WAS: 1 */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['grouped_teaser'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['page_manager']['status'] = 0; /* WAS: 1 */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['search_result'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['show_this_block'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['teaser']['status'] = 0; /* WAS: 1 */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function ec_panopoly_page_overrides_views_default_views_alter(&$data) {
  if (isset($data['frontpage'])) {
    $data['frontpage']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['frontpage']->display['default']->display_options['access']['perm']);
    unset($data['frontpage']->display['default']->display_options['row_options']);
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
