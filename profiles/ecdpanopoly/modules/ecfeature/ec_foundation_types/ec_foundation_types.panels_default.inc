<?php
/**
 * @file
 * ec_foundation_types.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ec_foundation_types_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = 'minipane';
  $mini->admin_title = 'footer';
  $mini->admin_description = 'Content to display in the site footer on all pages';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'two_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '555457cf-6d82-42f4-8afa-e3413c3de894';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-990d30bc-4ac2-44ee-82b1-cd9d6b7a936a';
    $pane->panel = 'two_50_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'distinctions-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '990d30bc-4ac2-44ee-82b1-cd9d6b7a936a';
    $display->content['new-990d30bc-4ac2-44ee-82b1-cd9d6b7a936a'] = $pane;
    $display->panels['two_50_first'][0] = 'new-990d30bc-4ac2-44ee-82b1-cd9d6b7a936a';
    $pane = new stdClass();
    $pane->pid = 'new-aa35bdc7-4725-4670-b757-6bc754e595cb';
    $pane->panel = 'two_50_second';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-auxiliary-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'menu-auxiliary-menu',
      'parent_mlid' => 0,
      'parent' => 'menu-auxiliary-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '2',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aa35bdc7-4725-4670-b757-6bc754e595cb';
    $display->content['new-aa35bdc7-4725-4670-b757-6bc754e595cb'] = $pane;
    $display->panels['two_50_second'][0] = 'new-aa35bdc7-4725-4670-b757-6bc754e595cb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'main_menu_superfish';
  $mini->category = 'minipane';
  $mini->admin_title = 'Main Menu - Superfish';
  $mini->admin_description = 'Superfish version of main menu';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '93ad03af-d6a8-40e3-8db3-4ef0c4020bda';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ef7c012b-70d2-4690-a7ce-bc681dd3a114';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'superfish-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'primary-menu',
      'css_class' => 'primary',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ef7c012b-70d2-4690-a7ce-bc681dd3a114';
    $display->content['new-ef7c012b-70d2-4690-a7ce-bc681dd3a114'] = $pane;
    $display->panels['one_main'][0] = 'new-ef7c012b-70d2-4690-a7ce-bc681dd3a114';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['main_menu_superfish'] = $mini;

  return $export;
}
