<?php
/**
 * @file
 * ec_base_config.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ec_base_config_default_panels_mini() {
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
  $pane->pid = 'new-75e62c7b-1a71-4633-89c3-c91c6fc2a3a5';
  $pane->panel = 'two_50_bottom';
  $pane->type = 'menu_tree';
  $pane->subtype = 'main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => 'main-menu',
    'parent_mlid' => 0,
    'parent' => 'main-menu:0',
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
  $pane->uuid = '75e62c7b-1a71-4633-89c3-c91c6fc2a3a5';
  $display->content['new-75e62c7b-1a71-4633-89c3-c91c6fc2a3a5'] = $pane;
  $display->panels['two_50_bottom'][0] = 'new-75e62c7b-1a71-4633-89c3-c91c6fc2a3a5';
  $pane = new stdClass();
  $pane->pid = 'new-aa35bdc7-4725-4670-b757-6bc754e595cb';
  $pane->panel = 'two_50_bottom';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'aa35bdc7-4725-4670-b757-6bc754e595cb';
  $display->content['new-aa35bdc7-4725-4670-b757-6bc754e595cb'] = $pane;
  $display->panels['two_50_bottom'][1] = 'new-aa35bdc7-4725-4670-b757-6bc754e595cb';
  $pane = new stdClass();
  $pane->pid = 'new-990d30bc-4ac2-44ee-82b1-cd9d6b7a936a';
  $pane->panel = 'two_50_top';
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
  $display->panels['two_50_top'][0] = 'new-990d30bc-4ac2-44ee-82b1-cd9d6b7a936a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header';
  $mini->category = 'minipane';
  $mini->admin_title = 'Header';
  $mini->admin_description = 'Used on every page';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'three_25_25_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_25_25_50_top' => NULL,
      'three_25_25_50_first' => NULL,
      'three_25_25_50_second' => NULL,
      'three_25_25_50_third' => NULL,
      'three_25_25_50_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '05f14956-b2cf-4bbc-9bbf-4709d94029b1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3290653b-0769-430c-9897-7f86f1d38620';
  $pane->panel = 'three_25_25_50_top';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-auxiliary-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3290653b-0769-430c-9897-7f86f1d38620';
  $display->content['new-3290653b-0769-430c-9897-7f86f1d38620'] = $pane;
  $display->panels['three_25_25_50_top'][0] = 'new-3290653b-0769-430c-9897-7f86f1d38620';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['header'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'hero';
  $mini->category = 'minipane';
  $mini->admin_title = 'Hero';
  $mini->admin_description = 'Used for homepage slideshow';
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
  $display->uuid = '2d179f21-0d5f-4dd9-a991-74247a49277a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-057d042d-68b1-469b-8717-7adfd60e0d7d';
  $pane->panel = 'one_main';
  $pane->type = 'views_panes';
  $pane->subtype = 'slides_home-panel_pane_1';
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
  $pane->uuid = '057d042d-68b1-469b-8717-7adfd60e0d7d';
  $display->content['new-057d042d-68b1-469b-8717-7adfd60e0d7d'] = $pane;
  $display->panels['one_main'][0] = 'new-057d042d-68b1-469b-8717-7adfd60e0d7d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-057d042d-68b1-469b-8717-7adfd60e0d7d';
  $mini->display = $display;
  $export['hero'] = $mini;

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
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
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

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'secondary_menu_tree';
  $mini->category = 'minipane';
  $mini->admin_title = 'Secondary Menu Tree';
  $mini->admin_description = 'Used to display secondary menu links';
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
  $display->uuid = '11c09654-f37d-466f-9ebf-7e98e45073d0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-062dac20-ac64-49e0-af9f-30d949f1d43b';
  $pane->panel = 'one_main';
  $pane->type = 'menu_tree';
  $pane->subtype = 'main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'main-menu:0',
    'title_link' => 1,
    'admin_title' => '',
    'level' => '2',
    'follow' => 0,
    'depth' => '2',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'main-menu',
    'parent_mlid' => '0',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '062dac20-ac64-49e0-af9f-30d949f1d43b';
  $display->content['new-062dac20-ac64-49e0-af9f-30d949f1d43b'] = $pane;
  $display->panels['one_main'][0] = 'new-062dac20-ac64-49e0-af9f-30d949f1d43b';
  $pane = new stdClass();
  $pane->pid = 'new-e675444d-0d3e-4899-b272-c32ca7b70009';
  $pane->panel = 'one_main';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-auxiliary-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-auxiliary-menu:0',
    'title_link' => 1,
    'admin_title' => '',
    'level' => '2',
    'follow' => 0,
    'depth' => '2',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-auxiliary-menu',
    'parent_mlid' => '0',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e675444d-0d3e-4899-b272-c32ca7b70009';
  $display->content['new-e675444d-0d3e-4899-b272-c32ca7b70009'] = $pane;
  $display->panels['one_main'][1] = 'new-e675444d-0d3e-4899-b272-c32ca7b70009';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e675444d-0d3e-4899-b272-c32ca7b70009';
  $mini->display = $display;
  $export['secondary_menu_tree'] = $mini;

  return $export;
}
