<?php
/**
 * @file
 * ec_base_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ec_base_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_cache_client';
  $strongarm->value = 1;
  $export['admin_menu_cache_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_components';
  $strongarm->value = array(
    'admin_menu.icon' => TRUE,
    'admin_menu.menu' => TRUE,
    'admin_menu.account' => TRUE,
    'admin_menu.search' => FALSE,
    'admin_menu.users' => FALSE,
  );
  $export['admin_menu_components'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_margin_top';
  $strongarm->value = 1;
  $export['admin_menu_margin_top'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_position_fixed';
  $strongarm->value = 1;
  $export['admin_menu_position_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_modules';
  $strongarm->value = 0;
  $export['admin_menu_tweak_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_permissions';
  $strongarm->value = 0;
  $export['admin_menu_tweak_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_tabs';
  $strongarm->value = 0;
  $export['admin_menu_tweak_tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'ec_admin';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_admin_theme_batch';
  $strongarm->value = 1;
  $export['admin_theme_admin_theme_batch'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_path';
  $strongarm->value = 'entityform/*';
  $export['admin_theme_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_path_disallow';
  $strongarm->value = '';
  $export['admin_theme_path_disallow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_toolbar';
  $strongarm->value = array(
    'layout' => 'vertical',
    'position' => 'nw',
    'behavior' => 'ah',
    'blocks' => array(
      'admin-create' => -1,
      'admin-menu' => 1,
    ),
  );
  $export['admin_toolbar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced__active_tab';
  $strongarm->value = 'edit-tweaks';
  $export['advanced__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apps_allow_voting';
  $strongarm->value = 0;
  $export['apps_allow_voting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apps_client_id';
  $strongarm->value = '9238538cc680df52a0.67259162';
  $export['apps_client_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'at_browscap_detect';
  $strongarm->value = FALSE;
  $export['at_browscap_detect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'at_detection';
  $strongarm->value = FALSE;
  $export['at_detection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'at_mobile_detect';
  $strongarm->value = FALSE;
  $export['at_mobile_detect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_class_cache_ctools_css';
  $strongarm->value = 'CToolsCssCache';
  $export['cache_class_cache_ctools_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'compact_forms_descriptions';
  $strongarm->value = 1;
  $export['compact_forms_descriptions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'compact_forms_field_size';
  $strongarm->value = '';
  $export['compact_forms_field_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'compact_forms_ids';
  $strongarm->value = 'user-login-form
search-form
search-form--2
schedule-service-entityform-edit-form
promotion-entityform-edit-form
contact-us-entityform-edit-form
join-our-team-entityform-edit-form
campaign-form-entityform-edit-form';
  $export['compact_forms_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'compact_forms_stars';
  $strongarm->value = '1';
  $export['compact_forms_stars'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityform_block_types';
  $strongarm->value = array(
    0 => 'contact',
    2 => 'promotion',
    3 => 'special_promotion',
    5 => 'give',
    6 => 'subscribe',
  );
  $export['entityform_block_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityreference:base-tables';
  $strongarm->value = array(
    'node' => array(
      0 => 'node',
      1 => 'nid',
    ),
    'taxonomy_term' => array(
      0 => 'taxonomy_term_data',
      1 => 'tid',
    ),
    'cer' => array(
      0 => 'cer_preset',
      1 => 'pid',
    ),
    'entityform' => array(
      0 => 'entityform',
      1 => 'entityform_id',
    ),
    'entityform_type' => array(
      0 => 'entityform_type',
      1 => 'id',
    ),
    'entity_rule_setting' => array(
      0 => 'entity_rule_setting',
      1 => 'id',
    ),
    'fieldable_panels_pane' => array(
      0 => 'fieldable_panels_panes',
      1 => 'fpid',
    ),
    'field_collection_item' => array(
      0 => 'field_collection_item',
      1 => 'item_id',
    ),
    'redirect' => array(
      0 => 'redirect',
      1 => 'rid',
    ),
    'file' => array(
      0 => 'file_managed',
      1 => 'fid',
    ),
    'taxonomy_vocabulary' => array(
      0 => 'taxonomy_vocabulary',
      1 => 'vid',
    ),
    'user' => array(
      0 => 'users',
      1 => 'uid',
    ),
    'wysiwyg_profile' => array(
      0 => 'wysiwyg',
      1 => 'format',
    ),
    'rules_config' => array(
      0 => 'rules_config',
      1 => 'id',
    ),
    'menu_link' => array(
      0 => 'menu_links',
      1 => 'mlid',
    ),
  );
  $export['entityreference:base-tables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'node' => array(
      'show_this_block' => array(
        'label' => 'Show This block',
        'custom settings' => 1,
      ),
      'grouped_teaser' => array(
        'label' => 'Grouped Teaser',
        'custom settings' => 1,
      ),
    ),
    'field_collection_item' => array(
      'grouped_teaser' => array(
        'label' => 'Grouped Teaser',
        'custom settings' => 1,
      ),
    ),
    'redhen_org' => array(
      'grouped_teaser' => array(
        'label' => 'Grouped Teaser',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_menu_links_menus';
  $strongarm->value = array(
    'menu-auxiliary-menu' => 'menu-auxiliary-menu',
    'devel' => 'devel',
    'features' => 'features',
    'main-menu' => 'main-menu',
    'management' => 'management',
    'navigation' => 'navigation',
    'user-menu' => 'user-menu',
  );
  $export['features_admin_menu_links_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_breakpoints';
  $strongarm->value = 1;
  $export['features_admin_show_component_breakpoints'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_breakpoint_group';
  $strongarm->value = 1;
  $export['features_admin_show_component_breakpoint_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_cer';
  $strongarm->value = 1;
  $export['features_admin_show_component_cer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_content';
  $strongarm->value = 1;
  $export['features_admin_show_component_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_content_menu_links';
  $strongarm->value = 1;
  $export['features_admin_show_component_content_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ctools';
  $strongarm->value = 1;
  $export['features_admin_show_component_ctools'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ctools_custom_content';
  $strongarm->value = 1;
  $export['features_admin_show_component_ctools_custom_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_defaultconfig';
  $strongarm->value = 1;
  $export['features_admin_show_component_defaultconfig'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_defaultconfig_optionals';
  $strongarm->value = 1;
  $export['features_admin_show_component_defaultconfig_optionals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_dependencies';
  $strongarm->value = 1;
  $export['features_admin_show_component_dependencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_entityform_type';
  $strongarm->value = 1;
  $export['features_admin_show_component_entityform_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_entity_rule_setting';
  $strongarm->value = 1;
  $export['features_admin_show_component_entity_rule_setting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_facetapi';
  $strongarm->value = 1;
  $export['features_admin_show_component_facetapi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_features_overrides';
  $strongarm->value = 1;
  $export['features_admin_show_component_features_overrides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_features_override_items';
  $strongarm->value = 1;
  $export['features_admin_show_component_features_override_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_fieldable_panels_pane_type';
  $strongarm->value = 1;
  $export['features_admin_show_component_fieldable_panels_pane_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_base';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_base'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_group';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_instance';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_validation_rule';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_validation_rule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_file_display';
  $strongarm->value = 1;
  $export['features_admin_show_component_file_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_file_type';
  $strongarm->value = 1;
  $export['features_admin_show_component_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_filter';
  $strongarm->value = 1;
  $export['features_admin_show_component_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_flexslider_optionset';
  $strongarm->value = 1;
  $export['features_admin_show_component_flexslider_optionset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_image';
  $strongarm->value = 1;
  $export['features_admin_show_component_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_linkit_profiles';
  $strongarm->value = 1;
  $export['features_admin_show_component_linkit_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_menu_custom';
  $strongarm->value = 1;
  $export['features_admin_show_component_menu_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_menu_links';
  $strongarm->value = 1;
  $export['features_admin_show_component_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_metatag';
  $strongarm->value = 1;
  $export['features_admin_show_component_metatag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_node';
  $strongarm->value = 1;
  $export['features_admin_show_component_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_page_manager_existing_pages';
  $strongarm->value = 1;
  $export['features_admin_show_component_page_manager_existing_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_page_manager_handlers';
  $strongarm->value = 1;
  $export['features_admin_show_component_page_manager_handlers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_page_manager_pages';
  $strongarm->value = 1;
  $export['features_admin_show_component_page_manager_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_panelizer_defaults';
  $strongarm->value = 1;
  $export['features_admin_show_component_panelizer_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_panels_layout';
  $strongarm->value = 1;
  $export['features_admin_show_component_panels_layout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_panels_mini';
  $strongarm->value = 1;
  $export['features_admin_show_component_panels_mini'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_panels_renderer_pipeline';
  $strongarm->value = 1;
  $export['features_admin_show_component_panels_renderer_pipeline'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_roles_permissions';
  $strongarm->value = 1;
  $export['features_admin_show_component_roles_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_rules_config';
  $strongarm->value = 1;
  $export['features_admin_show_component_rules_config'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_schemaorg';
  $strongarm->value = 1;
  $export['features_admin_show_component_schemaorg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_taxonomy';
  $strongarm->value = 1;
  $export['features_admin_show_component_taxonomy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_token_custom_features';
  $strongarm->value = 1;
  $export['features_admin_show_component_token_custom_features'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_user_permission';
  $strongarm->value = 1;
  $export['features_admin_show_component_user_permission'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_user_role';
  $strongarm->value = 1;
  $export['features_admin_show_component_user_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_entities';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_entities'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_field_collection';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_field_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_fpp';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_fpp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_node';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_nodequeue_item';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_nodequeue_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_panelizer';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_panelizer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_term';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_user';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_variable';
  $strongarm->value = 1;
  $export['features_admin_show_component_variable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_views_view';
  $strongarm->value = 1;
  $export['features_admin_show_component_views_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_weight';
  $strongarm->value = 1;
  $export['features_admin_show_component_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_wysiwyg';
  $strongarm->value = 1;
  $export['features_admin_show_component_wysiwyg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'ec_custom_tokens' => array(
      'token_custom_features' => '82b40ed868731b5f20b715aae3287926',
      'dependencies' => 'e3a9349cf1d718ab362356115fc78702',
    ),
    'ec_mail_settings' => array(
      'defaultconfig' => '8817d552953b62bfc79c4feda243d793',
      'user_permission' => '69b3932ff13bb378678b6e272192c952',
      'variable' => '04217a238cd83099ca823bb1524156c3',
      'dependencies' => '370c918c9ce452203f5d43e904b6cebe',
    ),
    'panopoly_admin' => array(
      'defaultconfig' => '758d59bfbe01e8ef13123c5be22511e9',
      'dependencies' => 'daf7b2c6b83f03e8662fbb88d5886b9d',
      'page_manager_handlers' => '4ae545ae86750469adf1493af31639e8',
      'page_manager_pages' => 'cd6b2745aaf2afec17cdf00e6d8d018f',
    ),
    'panopoly_wysiwyg' => array(
      'variable' => '95abef9e7c4b89068ed9a9e7dafe986a',
      'defaultconfig' => 'e9719801f934a8817bb9fb267171a917',
      'filter' => 'ecf98b43a29ff2b9bc3091195c425308',
      'wysiwyg' => '494b037b00a619ee62a167ac057c1870',
      'dependencies' => '6f56f849d54bb6552f12b955c48dd889',
      'linkit_profiles' => '35a1226e4fbeb9e8fabba642280aa9b3',
    ),
    'ec_base_config' => array(
      'breakpoints' => 'b780eebaa82042a30ce982db6f937f90',
      'ctools_custom_content' => 'a5d796e407958281537a49de8aa1f3f3',
      'defaultconfig' => '3074f333922c079342461df144022d62',
      'entityform_type' => '8ac0c648f9026740d431c36662b6f0d5',
      'field_base' => '983b24a454742abef92c1b3485f4eb43',
      'field_instance' => '7adf8f5d1804d65037c624298998c677',
      'field_validation_rule' => '67fc133ba688956197a1bd88a95640e0',
      'filter' => 'a70be116297419d97c3fd17dfbe017e7',
      'menu_custom' => '6dd6850f6e008c23813c78f0ae1484ce',
      'metatag' => FALSE,
      'panels_mini' => 'f82e630b580cd13d03abebedff902447',
      'roles_permissions' => '45c233b033b2227a47571c3bdb5ac16b',
      'user_permission' => '0678cd9b4e7072228b372439dac12af9',
      'user_role' => 'd8f4839388dc4e56678018fd5da54553',
      'variable' => '0531575933394199dc5b37ff145fc174',
      'dependencies' => 'd1a9dea8073e4a6e983b5b5a274a7be0',
    ),
    'panopoly_core' => array(
      'variable' => 'd74822ba8111c9809ba29fe14720ab3d',
      'defaultconfig' => 'b8f5440232af412909f6fc5402226015',
      'field_base' => 'b998023e7fd4c375db5717778beb0f1c',
      'field_instance' => '0bf4951f1df9231beeee058b331efaf9',
      'taxonomy' => 'd2f15459d669c4a745941066712ba7d5',
      'dependencies' => 'ab3760d922aced148758cf80f511c6be',
      'panelizer_defaults' => 'ebc312f4e8da4c4768f2036310f6558d',
      'views_view' => '9610a80e0b2b6831cf648f85ef3af04c',
    ),
    'panopoly_pages' => array(
      'node' => 'c97e6b7cff8d0f412dbe54b006c74aa6',
      'variable' => 'a92d87cbb2b6e833aa4f56b39a9b64a2',
      'defaultconfig' => 'f7f2bad35b0f80cbaf4afd2dac1f4f48',
      'field_base' => 'f369eac38ebf698eb055113520d0b8c3',
      'field_instance' => '81b5a5bfbbe441e3bf113d956b16a111',
      'page_manager_handlers' => '28bf2aa48fbb1303250226fbabb41df4',
      'panelizer_defaults' => 'df6bb5f6a06344ce27facbd85884b5ee',
      'dependencies' => '588424d2e4b69a69827c012cb33a6917',
    ),
    'panopoly_images' => array(
      'defaultconfig' => 'e1b0c1e81f6c28972e62d7317227757c',
      'dependencies' => 'dbf42a7c8bdfa119b59a6a37cda2007f',
      'file_display' => '5a8e885c23a5a0b40819ced428a013b6',
      'image' => 'ef141f8cf2fde5dd254b5a197b06cb32',
    ),
    'ec_panopoly_page_overrides' => array(
      'variable' => '852dc73f34576de06ca855f4cdb6cf3a',
      'defaultconfig' => '40cfef5b06bd42837052a2ce550dd665',
      'field_instance' => 'd941b28cf816130c2934c01ed75735a4',
      'schemaorg' => 'cadc92c6edc4ff4aff4b2bf1e15f6c4b',
      'user_permission' => 'df654288fa1c6635d0213519665aae3e',
      'weight' => 'e8dfd29f5fce8d8e2bcf39633ea32f90',
      'dependencies' => '19bbde6a516ffd3227f0baa89ee6f958',
      'field_group' => '1f02d2e7ccdbaa60dd1c6ad69e631a65',
      'panelizer_defaults' => 'a9a4cd6a714c44a642252d63fb8b00e5',
      'views_view' => '7a90814ef49ff615b6deebab33834c52',
      'features_override_items' => FALSE,
      'features_overrides' => '0029aa6d7e534f4e4b08d8a43267f330',
    ),
    'ec_foundation_image_styles' => array(
      'image' => '42e1e78c3cc02a9c3925d48fc7c6e3d4',
      'dependencies' => 'b5cc61d4a303d79dab8a8515c295c0c2',
    ),
    'panopoly_users' => array(
      'variable' => '694a292d0433839a076ab0562393f0ea',
      'defaultconfig' => 'deb8f81351875160425e191864e5ccfe',
      'field_base' => '0ac5a2945bc48a0c513f1e539d8a2d39',
      'field_instance' => 'e5e9dc5d3f8ab6f9d9185a150f387ea6',
      'dependencies' => '89f97b695e85523cf8af0bf2ba959f5c',
      'field_group' => 'caf9f26793a9f1c8218d8ee9c8ba1e68',
      'page_manager_existing_pages' => '4a486d2f76812300ec729d95e709a1cc',
      'page_manager_handlers' => '1989386a3b769f162b342ef75baf4762',
      'panelizer_defaults' => '6aa41bdf6e095c6a33da081779140588',
    ),
    'panopoly_seo' => array(
      'variable' => '7ef351ccb91c0de2d4a9de43b7737e77',
      'defaultconfig' => '6b71c7adfe69c5f1c98a2bd2bf87b15e',
      'field_base' => '534ff3e852f77e2553fb19c9e45c1e93',
      'field_instance' => '56a57bcf63221e6b8cf9f31a3a8e9c78',
      'metatag' => 'e19a7e97e05fe553dbe85d2f5cb01e69',
      'dependencies' => 'c5b57ac5d33c871c382b4e41036026e0',
    ),
    'panopoly_config' => array(
      'dependencies' => '1c03d7449c2b72666ec8b40c79582d36',
    ),
    'panopoly_magic' => array(
      'dependencies' => 'ff25fdc6d874677b62f2a5ecfc6fa5bc',
    ),
    'panopoly_theme' => array(
      'dependencies' => '443a6d05716673c57728fa32c5bc45c5',
    ),
    'ec_administrative_dashboard' => array(
      'user_permission' => '3d28e439785659a3faa73b3af3d70782',
      'variable' => 'a4790f3b6d72f3214f7690ce0c68c1e0',
      'dependencies' => 'b6986c5f02980394c6af4ec4bc47ba47',
    ),
    'ec_article' => array(
      'defaultconfig' => '4a369798ec23f590a033b866a3666b90',
      'field_base' => 'b00cbf94247da3ef15b1a0b3ab293fb4',
      'field_group' => 'b5738e3672a8da449168725310c13105',
      'field_instance' => '586e9891b4d52f8b40b18a02b09a7052',
      'node' => 'd97ee4d754f7104c6d5905292a17c964',
      'panelizer_defaults' => '574db5960cfe9b6da11292d694689c63',
      'schemaorg' => '1623d8afbc7cbb815e6f868e86c20539',
      'taxonomy' => 'e2e0087c1ba08e365e69877b4b766ebc',
      'user_permission' => '785b5ddd80e47748d5a3c79897c2fa1a',
      'uuid_term' => '5bb50289aae53f651fcd8490b5dc4557',
      'variable' => '1d8bbdcb2a9c58a15980dc0afe311e2d',
      'views_view' => '1a6fdf36a1f8bf9764f1ade473a06790',
      'weight' => '58f47f4d9c3963e90ab4358cce82953b',
      'rdf_mappings' => '1623d8afbc7cbb815e6f868e86c20539',
      'dependencies' => '08e734bb89384e7046046cab24eef9e8',
    ),
    'ec_awards' => array(
      'defaultconfig' => '77b774dc3d041da6d08ca373951e1228',
      'entityform_type' => 'c0546f0419b253c0e3bbc80bc66c5228',
      'field_base' => '199cc008a39f92af143b040a333a6e34',
      'field_group' => '472f8ad53c460885723066e6119540a9',
      'field_instance' => '071e2e2d807911e78c98e2a3201b60f7',
      'node' => '75eeb02ea159defe1688981c4fd4d571',
      'panelizer_defaults' => 'bdde43310afd72a97b832afc46006514',
      'rdf_mappings' => '5ecd6d227ec6671784d32e38c80048de',
      'schemaorg' => '5ecd6d227ec6671784d32e38c80048de',
      'taxonomy' => '8af4fc171c3ed75463192ff32855945b',
      'user_permission' => 'e170f083cb4b01925447b3234922ba33',
      'uuid_term' => '29d0993faa4c3b38638a2a3639487a08',
      'variable' => '3ab16d8b3f8e932d7e28a0494b9e7a68',
      'views_view' => '47a2b6b68d6e7be71b6536b6117c308c',
      'weight' => '24191bd9bbcb54c8d25686f28b4ac5c1',
      'dependencies' => 'ed9f4c0f5868ff660816429204f59d34',
    ),
    'ec_blog_post' => array(
      'defaultconfig' => '7ae32f0800af95c4a422c9003a757e44',
      'field_base' => 'e26ce0d82af5ba15b3184e7e34f6f2b1',
      'field_group' => '9c1a2cd6e36f9b1806993b651f9113c7',
      'field_instance' => 'a06d7a4e0acc889f703f87a1c54a7a3f',
      'node' => 'fd3f29e7424757d0cffe62965427689d',
      'panelizer_defaults' => '88e0b26b774d78f6c1db1c58c5a0be94',
      'schemaorg' => '39a0bda0eeb2126e47a73619d7a1fa24',
      'taxonomy' => '590beb0f005afe99ea83e43bcd707405',
      'user_permission' => 'ee37345a2b5917c96a2be337207bca07',
      'uuid_term' => '06ad36f39986b771af28e5d768de7a03',
      'variable' => '9fdc3b9d92621590c3c0f8546aca64e9',
      'views_view' => 'e8a886a3739ae18e670734e625bdfbb2',
      'weight' => '3107bd06feb7fb6167eff2be17668733',
      'dependencies' => '64b6582c4aa109d19289b326a902d61f',
    ),
    'ec_campaign_page' => array(
      'defaultconfig' => '907917148fb414a0e396f90807dd22ca',
      'entityform_type' => 'e55e5b6d7cca40f544389446b579ba9f',
      'field_group' => 'ba4f3a28b08d0e6c487ef409a8149b44',
      'field_instance' => '4f567fb6540169b2c363ed4801ee995b',
      'field_validation_rule' => '3adbd1d35c99122da58c22772f340554',
      'node' => '987a9a78dd9ab1ee2081aa4206705e1e',
      'panelizer_defaults' => '2d919b8e1ffb130f4779f1bdca0d8e69',
      'schemaorg' => '1e1155eeaee080e538f29374c53ce066',
      'user_permission' => '7c9b1ee7ea7f878d7f732497912522a9',
      'variable' => '0aa0b0b193f30aa96f76a15f452db6bf',
      'views_view' => '2fcfa93934468f37221a9b90ba1626e0',
      'weight' => '397acef976576da61b4bd2a997d46d1d',
      'dependencies' => 'dc683a14e4caa6b90d1cdc2c9c562415',
    ),
    'ec_casestudy' => array(
      'defaultconfig' => '37b9c487f5e854978f16948c04cc09f4',
      'field_base' => '9027ed022051226cf98dc3b6d5dbc57b',
      'field_group' => '5e3ab9a565436862e9bd65eaf3f104b4',
      'field_instance' => '24ab8aaf9ec6c8096feea56780d8059b',
      'node' => 'a1ea8fb5e4382ad60d4b8fcd6fc559bf',
      'panelizer_defaults' => '34ae086620288deefebed82f41591f2b',
      'schemaorg' => 'e49317909b7c0a7bf7255d189a909a63',
      'user_permission' => '737843309f9eba27f15c24370e5561ea',
      'variable' => 'a7cd7eafa1bdc5312b1f00ac3f58824d',
      'views_view' => '78f6f558c87921f843c11e16be9532d3',
      'weight' => '90277400113747cc0b1a6976e1a9b0f1',
      'dependencies' => '7d59860d823b52fdfe70f764461867ff',
    ),
    'ec_citypages' => array(
      'defaultconfig' => 'c64e3648b281bc6c6503c23820120aad',
      'field_base' => '2c82ec4ad56646c083389073c51bb7ca',
      'field_group' => '241d5cd9f584c972ed2b34f885f98f93',
      'field_instance' => '01bab14d715d1d4a333a18d57cfbb289',
      'node' => '0dfcd5cdb6a6ecaa208b1651c4052b0d',
      'panelizer_defaults' => '6921a9bece5ba3031225e81704e50075',
      'schemaorg' => '01c3a3859ea5f3f4a7f5e053da81b11e',
      'user_permission' => 'd9e94574480f35fa998bd914cbb36c54',
      'variable' => '5742bb6dde8ffa444462bcd102b68ecd',
      'views_view' => 'c5cfff93ffca9f94275053ac1ab6047b',
      'weight' => '2e9e7ea552b5cc7968938b9f6ad5e588',
      'dependencies' => '96789b37fe4a6babcf02422a2a9b08d3',
    ),
    'ec_customer_referral' => array(
      'variable' => '50c9609a59f11c06f93479f0ee73c5b6',
      'defaultconfig' => '40130eff9cdf1540c5135be0e0bc9813',
      'field_base' => '39a1365f266a32536976c3c0e194b53d',
      'field_instance' => '62fc6d93672061a7365f6d1b1b132c63',
      'schemaorg' => 'fed1d2aa4ab9cd28dd771492a3bc2f97',
      'dependencies' => '060abb90adc6b0180db5b15f0884583c',
      'entityform_type' => '188e626f9c5c2e48bcee414b6e45d151',
      'field_group' => '0c15b0da001fdc7c44577c32d3fd07b1',
    ),
    'ec_distinction' => array(
      'defaultconfig' => '7274218f28e481cc36b974b2fa3ea6f7',
      'field_base' => 'b63f547c6e672263e3bd84f667a84d15',
      'field_instance' => 'c560787f71be405ff170276d67db2411',
      'node' => '32ce783c99cf7eaa82953c8fd3403a04',
      'panelizer_defaults' => '271da149a15967179ae2f8ebaf10d927',
      'rdf_mappings' => 'b96093d8b70a49fa228d108b1e86b749',
      'schemaorg' => 'b96093d8b70a49fa228d108b1e86b749',
      'taxonomy' => '8188c1e588bbe63a3b1f0ac28ab2bc8a',
      'user_permission' => '7e26086fb31801c8854c123af3d3afdd',
      'uuid_term' => 'e36a600800ca2a245d0c1ae067ee4749',
      'variable' => '9292659bf22ea868144fe9f85bc9644c',
      'views_view' => 'dcb33814cbe4ccddbf22ce36c371a4e0',
      'weight' => '8a5c6914a5c2e0f6b4ee2a9559c15017',
      'dependencies' => 'fdbd0e1bee91f8c0b3dcf88de8b9a0af',
    ),
    'ec_distributor' => array(
      'defaultconfig' => 'fb0c0aaeae334ec7045fac437d1e0ea7',
      'field_base' => '8dbe315c704ad51855177665b0ecd853',
      'field_instance' => 'a2b466603078ad956c15a0180b29626a',
      'node' => '5ccf61e70332960b9b3e4232646bb52f',
      'panelizer_defaults' => '9f45bfa9c5d59c2d9b809efe9eb4bf6c',
      'rdf_mappings' => 'e7010965ff74be0ffe9aa2707382cf22',
      'schemaorg' => 'e7010965ff74be0ffe9aa2707382cf22',
      'user_permission' => '79b986ac58e0355e4f78217d7c7fda89',
      'variable' => '6a12fdce27b11fedc6638e7b98b70f34',
      'views_view' => '12fad338891b68b6c0400a1c2bfd698b',
      'weight' => '87777bf83067dbef05ee8e99055774ea',
      'dependencies' => '79f267d5e51286dfd30a2614a8e075fa',
    ),
    'ec_service_stack' => array(
      'defaultconfig' => 'adb175c90ec2c2f639f16474c6b9f0e8',
      'entityform_type' => '795a3da2d3dfd59da961f2277f167b80',
      'field_base' => '4982ee6606adc816708a108eef45dba6',
      'field_group' => 'f3adfc72dd9441651f311be3f3de6a17',
      'field_instance' => '67d4b0f3bd22cd323118ac1807b3a023',
      'field_validation_rule' => 'df854498d2decfbd709cbefe474c8890',
      'node' => '92e4dddb113a186a8e77e381b6fdf7a5',
      'panelizer_defaults' => '158926b583e0d67a42f80df51140429f',
      'rules_config' => 'c5cfc3ad474e8b30782bce870dbde391',
      'schemaorg' => 'e2a53bd84ed957d7e9cfb851dc9854c5',
      'user_permission' => '1e5b73590808963f32ec77db01a0113f',
      'variable' => '7e1cdf856118f96f90d0c0934e1fa6e8',
      'views_view' => '137737c797dbd8ce2bbede9b61062b86',
      'weight' => '139a7daeb9601423a3da901af69671d5',
      'dependencies' => '857897dae91de1256ca04283adcf04a5',
      'rdf_mappings' => 'e2a53bd84ed957d7e9cfb851dc9854c5',
      'menu_links' => 'e9f674ec18be706ef2af7c5394b59fc4',
    ),
    'ec_download_file_gate' => array(
      'content_menu_links' => '2932c16e3d7a45e358e5b791a1e5d757',
      'defaultconfig' => 'a23755cf9a06fe5226107443ce5030ae',
      'field_base' => 'baaf5abaec6fa9088e1f1a11272bf4d3',
      'field_instance' => '255310b9a5ceb4c80152efac6a8b09e4',
      'menu_custom' => '5c98c8cc588b7d76c728553f4e4b8409',
      'menu_links' => 'c7d83264f35686164503f3cecfeac25d',
      'node' => '1b7409dbe4fd756e9971411fc8e8eae0',
      'panelizer_defaults' => '88ae4130af2774eb690bf866ce68e015',
      'schemaorg' => '0dda4355670ffa259d7abbc8398df7f2',
      'user_permission' => '4316513df9aba0cf58642bf5899786d1',
      'variable' => '37641b2f4b90732a6aa6e8dc8419cd78',
      'views_view' => '3dec0f1dfdd723c015addd3df0642738',
      'weight' => '2ee0e13427815e1ec721b67716365862',
      'dependencies' => '50abc1f8ff1e9ec23082ab056c3c3ed2',
    ),
    'ec_external_video' => array(
      'defaultconfig' => 'ebdd307467c848f1b55d852736542532',
      'field_base' => 'ac4c540eea93ff18a00e17b966d81685',
      'field_instance' => '87b628563a19a0f2a0ac901db49c4b0d',
      'node' => '8d01eb0dce6323e5e9577a1388e363d4',
      'schemaorg' => '64ed075588bb808d1f359c5e2ee03746',
      'user_permission' => '9ecd581f9b8469ea1422c91bf6e11301',
      'variable' => '9aac42511724070f7e63bf42794e6730',
      'views_view' => '0162971328553a22efd8a94c237078ec',
      'dependencies' => '02110d14448408204044c7177c9d1899',
    ),
    'ec_faq' => array(
      'defaultconfig' => '2f776eb97d1efe9a72dd2fa27de0a041',
      'field_base' => '13fbb4bcfdc553658c7b2a90fd281d6d',
      'field_group' => 'cf631d02371fe14cbe90616fa9e80a04',
      'field_instance' => 'a75386875fef72516b5d8f96f45d9f41',
      'node' => '171d48bfee78b7289932b3971e886b1d',
      'panelizer_defaults' => '590d8f968d09d397d63afbff1165a8d1',
      'rdf_mappings' => '2f18db6b3b49d5ca3c987d3155d338f7',
      'schemaorg' => '2f18db6b3b49d5ca3c987d3155d338f7',
      'user_permission' => 'c0be0e13435f6f0281c9a53a080af3d7',
      'variable' => '364d8e309471ab155c91c7db76b4ce44',
      'views_view' => '25e91b2e8291cef8a8899da21d71836c',
      'weight' => 'bb819d6be50d83a7a9a52b5b2f6de283',
      'dependencies' => '9c48848317239b6289e0777e8bbfa512',
    ),
    'ec_financing_option' => array(
      'defaultconfig' => '8ca1f30f2039ac041af0dcbf32ec2e57',
      'field_base' => '28cfdae8fe3dccc2e14b3c046e922b45',
      'field_group' => '4de892dade1898ef7425b39633b8f6eb',
      'field_instance' => '43c1d8fe0e4e555581d769a82ad28246',
      'node' => '1a886a90ca8beb969376c2937931df69',
      'panelizer_defaults' => 'f4f566b1fcaca56f53562c95328d3447',
      'schemaorg' => 'f0dfd77ac8355d832794ff94d932997e',
      'user_permission' => '2842a0d1244d3031030450826111ff96',
      'variable' => '86baecfdb62e1549fb062d065dec45e9',
      'views_view' => 'c43a6f39ecc8828b77c7928a4edeaf41',
      'weight' => 'a21b2dfe8f51e33dcfc8058a4fe769e9',
      'dependencies' => 'f726af6a9d784c7bce6df8a08c60448b',
    ),
    'ec_gallery' => array(
      'defaultconfig' => '7e7aaff188f92d1db11e01a077e780c5',
      'field_base' => 'fa3c26fbf5c1e381cfd7fecd13f8c153',
      'field_group' => '9843892e552ca1ab6922bc2f9334ae1c',
      'field_instance' => 'd2ead31f652d624f96e045cac6093128',
      'node' => '836d5eba560b2169d052d029d6766b68',
      'panelizer_defaults' => '65ee461821ce169072f442e861ccc89a',
      'rdf_mappings' => '9f14aa27df9aad82e63a80777c10a20b',
      'schemaorg' => '9f14aa27df9aad82e63a80777c10a20b',
      'user_permission' => '2532ad8994b2506a07779ac40d931c0c',
      'variable' => 'bdcedf706500fddbbc7267145b84aac4',
      'views_view' => '312c5180ce42f1ca79a47950a3de4df4',
      'weight' => '00b9992a425fbba4f25527a996361649',
      'dependencies' => 'd65a216f9aacf8f1cee8a3219bc9da28',
    ),
    'ec_product_page_lite' => array(
      'defaultconfig' => '693d337a9de5ee58ae0405501edfdc03',
      'field_base' => '18a19a20543c89bf2217dece7a533959',
      'field_group' => '65dedd60174867b4712746300c1f7315',
      'field_instance' => '07b054cb97a372e06e1740ed80304f9f',
      'node' => '85c8341dadac074bdbb698e3f36c7b91',
      'panelizer_defaults' => 'bc1dcba82b4f4718a3963d7d10e97032',
      'user_permission' => '52e597a72a7fdb65ac0c49b04b067531',
      'variable' => '57c9051dbf073b4959947f344274b539',
      'views_view' => 'a468bc8e5d315bf3be9238fc793d4da8',
      'weight' => '1be31083a32dd1018b3f1eeb40d0f7c6',
      'dependencies' => '76ec8b1dad52eccef3ade447f7a4a5d5',
    ),
    'ec_product_page_category' => array(
      'defaultconfig' => '34d3f4b8cfda70099bd7b35b6d471135',
      'field_base' => 'a2fa0699d7849635dbe0f795e6e35c39',
      'field_group' => '0e482daba7bea9235d6a55b0666d3e16',
      'field_instance' => '831f37b3021452e5eb81e8b61716fe75',
      'node' => '2ff48cd7dd9c046dc8a6402db3e231d3',
      'panelizer_defaults' => 'b51b529c8ddedc160896c30e0841dd7c',
      'user_permission' => 'fe3f65a620038cfd396507e80dc45295',
      'variable' => '782f64cca9f92a0ad99cc8b52880f3cd',
      'weight' => '74d351ad48cd26568147a4bf75095bde',
      'dependencies' => '95eb7f05086a2f2688316b0312d79d0e',
    ),
    'ec_promotions' => array(
      'defaultconfig' => '3b2d1ffbf72d3514c646a3d8ef406aeb',
      'field_base' => 'da8dcb91a56e7710fd384c1c1865109e',
      'field_group' => '016e7724c3dea510d8d58bf35df585cc',
      'field_instance' => 'e234228f94c4296eb8ede32bd524f5eb',
      'field_validation_rule' => 'c50678755df928cc58a25dfc4bfdaa19',
      'node' => '7d57ac70c1037a7a88a2c97b98ccef44',
      'panelizer_defaults' => '1576984680fa8ab27ffe97d90051a066',
      'rdf_mappings' => '0dc2d73445054e2325bd4d0fcba9dd3b',
      'rules_config' => 'd99687373901fdd911ca1f5b46176046',
      'schemaorg' => '0dc2d73445054e2325bd4d0fcba9dd3b',
      'user_permission' => '1d6d1eefc744e024d9e00c503dded6a7',
      'variable' => 'c612591f9c04f05b49300ee67fb7e53b',
      'views_view' => 'aa8d6927b70cbe3c0363a2b9fa569f26',
      'weight' => '08a30cf594cd5593f097751de511b73b',
      'dependencies' => 'a478c0558d25f64d8d5d1a9bdfb998bf',
    ),
    'ec_service_review_system' => array(
      'node' => 'be5d97b6769b487662c59a6f5fe49aed',
      'variable' => 'bf5ec90f514de12acf027c1fb32ca3ef',
      'uuid_term' => 'fba3611c0c209d8ed33b65951bcb44c7',
      'defaultconfig' => '3d905224996d3862b126115608908e44',
      'field_base' => '38bc6871ed37289883240da6d3cf8034',
      'field_instance' => '28089990cb60bbe9c868fb14118f86fa',
      'schemaorg' => '6ef840752218ee3bd82d2dfb7e568a98',
      'taxonomy' => '58d0e33239479636c5b482abd04a7c60',
      'user_permission' => 'ee06b606a817bcab51161c99cd0324fe',
      'weight' => FALSE,
      'dependencies' => '67dc79d47e97123bb728f5affaa20758',
      'entityform_type' => '717ac097bdbf31e3c64cb6d67e232561',
      'field_group' => '4cb77ca8928e21c3bb2cfb14f2cf9bb4',
      'rules_config' => '490d7101ece48092d20ef661baf6fe13',
      'views_view' => '2fcb4edf8ccb4d0323ef4e8a0c0b88d7',
    ),
    'ec_slide' => array(
      'defaultconfig' => '9830031189d01fbdf4902d1ea4f0cd3b',
      'features_override_items' => FALSE,
      'features_overrides' => 'fbb2ffb8fef719b21779b5677ca1b541',
      'field_base' => 'f8d57b45a30451569a9389c379c4500b',
      'field_instance' => '28297e0a5e0c936122c5d4650b0bfc4b',
      'flexslider_optionset' => '82ef060bfd44fc1c5cbb855c1a176603',
      'node' => '7a0c829be7bd072d3727ec1e79723dd7',
      'panelizer_defaults' => '7989d1b06ddf86249a05a3826b3caaf5',
      'rdf_mappings' => '597adcf155d4742ae394203e0da3ef40',
      'schemaorg' => '597adcf155d4742ae394203e0da3ef40',
      'taxonomy' => 'd8eae7dc681ac1731879af1186c06f55',
      'user_permission' => 'd4e101677faec96707e2e8e657de667a',
      'variable' => 'cca5ef46687ad81666c835d4ec323ab8',
      'views_view' => 'ab42a3af99e481800ffc3c06aa63c2bf',
      'weight' => '088ddfe949b05b349a224085e387c803',
      'dependencies' => '5f9c8275481c5fe4011e6ee364607856',
    ),
    'ec_staff' => array(
      'defaultconfig' => '8aa8df96af350659167ea6ac2cead4ca',
      'entityform_type' => '9c9e314231b92f10c6ce6129469684ad',
      'field_base' => 'abcd7ec800332a4c65b47ac6d8aea179',
      'field_instance' => 'b32301f5a286343e90e8d519183f8bb3',
      'node' => 'a33d686ae51451421ac068a6892c9c5a',
      'panelizer_defaults' => '7ec765b3eceb3b1f15c820e81ee7382c',
      'rdf_mappings' => 'e618d3f1a1f9c98d605a535be567dd92',
      'rules_config' => '650c05903a3579051a7a45740c187651',
      'schemaorg' => 'e618d3f1a1f9c98d605a535be567dd92',
      'taxonomy' => '9fc13fb091672cf81a77c4a35e8f93a7',
      'user_permission' => '7f7cc857209f929145f60f50ab74b9cb',
      'uuid_term' => 'a9f98a45ba28a5db37ab8bf1b4d6ffbf',
      'variable' => 'e19e08ae251762a14d5bc64a82008335',
      'views_view' => '516a8a11a02cb55d38fdbccb762fd5e7',
      'weight' => '11e92505e48bb039bf4a66a297d9f951',
      'dependencies' => 'c5e5484cc1a689db3b198bd7f946f5eb',
    ),
    'ec_testimonial' => array(
      'defaultconfig' => '8dcd6d06dcbd7f921d1f31be74c3bec7',
      'field_base' => '490ee4e35ead01d8f81579d1cd27e869',
      'field_group' => '69e313731f140acb9cfa60bf8f07f3d7',
      'field_instance' => '2be98f2af50ee06a705d5e63afca79b4',
      'flexslider_optionset' => 'f4be40d908e01745ac4fda9dfaa9408b',
      'node' => '8d9c12233d950fa1bf0e0365e70fc5fa',
      'panelizer_defaults' => 'f9b8510e08b15353b2c7a94f08282a34',
      'rdf_mappings' => '2e2853ba0bb0ae6ecb8581b0c06b3246',
      'schemaorg' => '2e2853ba0bb0ae6ecb8581b0c06b3246',
      'user_permission' => '1adccc9522c00f83a5665e3eedfa7010',
      'variable' => 'b4c03ff78697f3cb3ed86acc929cd6f7',
      'views_view' => '95629b95b11cfa7f78b9029d19de52b8',
      'weight' => '4ba37acaac2322a6431fd983adccd79b',
      'dependencies' => 'b01f786af7944ba183d46295118f75c6',
    ),
    'ec_a_b_testing_setup' => array(
      'defaultconfig' => 'b638631964764de7c0da5f421bc03ce5',
      'field_base' => 'a4cde2bce75ea743fde2c012dd98e29f',
      'field_instance' => '5042eca59cc0a220900eee9f44819207',
      'user_permission' => 'b7fb786e4b3c4b7485644c3be1fe2dae',
      'variable' => '92e09a8a5fd0c19ecbbc03c6c5f40ebf',
      'views_view' => '1055a380f0ef12608f572c12e80304d6',
      'dependencies' => '2f9d81ca9e2b4ff186050c1d48b75f08',
    ),
    'ec_development' => array(
      'content_menu_links' => '288a5602a9ec119571de5a458f783fae',
      'user_permission' => 'c8482674cb13b90e27823f18356dbf79',
      'dependencies' => '72936be8658d0bc8ad8fce726adcee1e',
    ),
    'ec_base_content' => array(
      'uuid_node' => '47ad6be32ab3498e201da7a080ed22f7',
      'variable' => '30a147f8f1c689935c48d9590bff80f0',
      'dependencies' => '78410cbd1faaaab441725b3100f181d4',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_breakpoints';
  $strongarm->value = 0;
  $export['features_component_locked_breakpoints'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_breakpoint_group';
  $strongarm->value = 0;
  $export['features_component_locked_breakpoint_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_cer';
  $strongarm->value = 0;
  $export['features_component_locked_cer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_content';
  $strongarm->value = 0;
  $export['features_component_locked_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_content_menu_links';
  $strongarm->value = 0;
  $export['features_component_locked_content_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ctools_custom_content';
  $strongarm->value = 0;
  $export['features_component_locked_ctools_custom_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_defaultconfig';
  $strongarm->value = 0;
  $export['features_component_locked_defaultconfig'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_defaultconfig_optionals';
  $strongarm->value = 0;
  $export['features_component_locked_defaultconfig_optionals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_dependencies';
  $strongarm->value = 0;
  $export['features_component_locked_dependencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_entityform_type';
  $strongarm->value = 0;
  $export['features_component_locked_entityform_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_entity_rule_setting';
  $strongarm->value = 0;
  $export['features_component_locked_entity_rule_setting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_facetapi';
  $strongarm->value = 0;
  $export['features_component_locked_facetapi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_features_overrides';
  $strongarm->value = 0;
  $export['features_component_locked_features_overrides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_features_override_items';
  $strongarm->value = 0;
  $export['features_component_locked_features_override_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_fieldable_panels_pane_type';
  $strongarm->value = 0;
  $export['features_component_locked_fieldable_panels_pane_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_field_base';
  $strongarm->value = 0;
  $export['features_component_locked_field_base'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_field_group';
  $strongarm->value = 0;
  $export['features_component_locked_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_field_instance';
  $strongarm->value = 0;
  $export['features_component_locked_field_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_field_validation_rule';
  $strongarm->value = 0;
  $export['features_component_locked_field_validation_rule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_file_display';
  $strongarm->value = 0;
  $export['features_component_locked_file_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_file_type';
  $strongarm->value = 0;
  $export['features_component_locked_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_filter';
  $strongarm->value = 0;
  $export['features_component_locked_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_flexslider_optionset';
  $strongarm->value = 0;
  $export['features_component_locked_flexslider_optionset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_image';
  $strongarm->value = 0;
  $export['features_component_locked_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_linkit_profiles';
  $strongarm->value = 0;
  $export['features_component_locked_linkit_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_menu_custom';
  $strongarm->value = 0;
  $export['features_component_locked_menu_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_menu_links';
  $strongarm->value = 0;
  $export['features_component_locked_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_metatag';
  $strongarm->value = 0;
  $export['features_component_locked_metatag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_node';
  $strongarm->value = 0;
  $export['features_component_locked_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_page_manager_existing_pages';
  $strongarm->value = 0;
  $export['features_component_locked_page_manager_existing_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_page_manager_handlers';
  $strongarm->value = 0;
  $export['features_component_locked_page_manager_handlers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_page_manager_pages';
  $strongarm->value = 0;
  $export['features_component_locked_page_manager_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_panelizer_defaults';
  $strongarm->value = 0;
  $export['features_component_locked_panelizer_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_panels_layout';
  $strongarm->value = 0;
  $export['features_component_locked_panels_layout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_panels_mini';
  $strongarm->value = 0;
  $export['features_component_locked_panels_mini'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_panels_renderer_pipeline';
  $strongarm->value = 0;
  $export['features_component_locked_panels_renderer_pipeline'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_roles_permissions';
  $strongarm->value = 0;
  $export['features_component_locked_roles_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_rules_config';
  $strongarm->value = 0;
  $export['features_component_locked_rules_config'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_schemaorg';
  $strongarm->value = 0;
  $export['features_component_locked_schemaorg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_taxonomy';
  $strongarm->value = 0;
  $export['features_component_locked_taxonomy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_token_custom_features';
  $strongarm->value = 0;
  $export['features_component_locked_token_custom_features'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_user_permission';
  $strongarm->value = 0;
  $export['features_component_locked_user_permission'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_user_role';
  $strongarm->value = 0;
  $export['features_component_locked_user_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_entities';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_entities'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_field_collection';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_field_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_fpp';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_fpp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_node';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_nodequeue_item';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_nodequeue_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_panelizer';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_panelizer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_term';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_user';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_variable';
  $strongarm->value = 0;
  $export['features_component_locked_variable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_views_view';
  $strongarm->value = 0;
  $export['features_component_locked_views_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_weight';
  $strongarm->value = 0;
  $export['features_component_locked_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_wysiwyg';
  $strongarm->value = 0;
  $export['features_component_locked_wysiwyg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_default_export_path';
  $strongarm->value = 'sites/all/modules';
  $export['features_default_export_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_lock_mode';
  $strongarm->value = 'all';
  $export['features_lock_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_modules_changed';
  $strongarm->value = FALSE;
  $export['features_modules_changed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_rebuild_modules_page';
  $strongarm->value = 0;
  $export['features_rebuild_modules_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_rebuild_on_flush';
  $strongarm->value = 0;
  $export['features_rebuild_on_flush'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ftools_disable_features_page_js';
  $strongarm->value = 0;
  $export['ftools_disable_features_page_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_amw_1';
  $strongarm->value = 0;
  $export['superfish_amw_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_arrow_1';
  $strongarm->value = 1;
  $export['superfish_arrow_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_bgf_1';
  $strongarm->value = 0;
  $export['superfish_bgf_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_clone_parent_1';
  $strongarm->value = 0;
  $export['superfish_clone_parent_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_delay_1';
  $strongarm->value = '800';
  $export['superfish_delay_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_depth_1';
  $strongarm->value = '-1';
  $export['superfish_depth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_dfirstlast_1';
  $strongarm->value = 0;
  $export['superfish_dfirstlast_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_dzebra_1';
  $strongarm->value = 0;
  $export['superfish_dzebra_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_expanded_1';
  $strongarm->value = 0;
  $export['superfish_expanded_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_firstlast_1';
  $strongarm->value = 1;
  $export['superfish_firstlast_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hhldescription_1';
  $strongarm->value = 0;
  $export['superfish_hhldescription_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hid_1';
  $strongarm->value = 1;
  $export['superfish_hid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hlclass_1';
  $strongarm->value = '';
  $export['superfish_hlclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldescription_1';
  $strongarm->value = 0;
  $export['superfish_hldescription_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldexclude_1';
  $strongarm->value = '';
  $export['superfish_hldexclude_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldmenus_1';
  $strongarm->value = '';
  $export['superfish_hldmenus_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemcounter_1';
  $strongarm->value = 1;
  $export['superfish_itemcounter_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemcount_1';
  $strongarm->value = 1;
  $export['superfish_itemcount_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemdepth_1';
  $strongarm->value = 1;
  $export['superfish_itemdepth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_liclass_1';
  $strongarm->value = '';
  $export['superfish_liclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_maxwidth_1';
  $strongarm->value = '27';
  $export['superfish_maxwidth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mcdepth_1';
  $strongarm->value = '1';
  $export['superfish_mcdepth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mcexclude_1';
  $strongarm->value = '';
  $export['superfish_mcexclude_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mclevels_1';
  $strongarm->value = '1';
  $export['superfish_mclevels_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_menu_1';
  $strongarm->value = 'main-menu:0';
  $export['superfish_menu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_minwidth_1';
  $strongarm->value = '12';
  $export['superfish_minwidth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_multicolumn_1';
  $strongarm->value = 0;
  $export['superfish_multicolumn_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_name_1';
  $strongarm->value = 'Superfish 1';
  $export['superfish_name_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathclass_1';
  $strongarm->value = 'active-trail';
  $export['superfish_pathclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathcss_1';
  $strongarm->value = '';
  $export['superfish_pathcss_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathlevels_1';
  $strongarm->value = '1';
  $export['superfish_pathlevels_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_shadow_1';
  $strongarm->value = 1;
  $export['superfish_shadow_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_slide_1';
  $strongarm->value = 'vertical';
  $export['superfish_slide_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallabt_1';
  $strongarm->value = '1';
  $export['superfish_smallabt_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallact_1';
  $strongarm->value = '1';
  $export['superfish_smallact_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallamt_1';
  $strongarm->value = '';
  $export['superfish_smallamt_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallasa_1';
  $strongarm->value = 0;
  $export['superfish_smallasa_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallbpu_1';
  $strongarm->value = 'px';
  $export['superfish_smallbpu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallbp_1';
  $strongarm->value = '768';
  $export['superfish_smallbp_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallchc_1';
  $strongarm->value = 0;
  $export['superfish_smallchc_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallcmc_1';
  $strongarm->value = 0;
  $export['superfish_smallcmc_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallech_1';
  $strongarm->value = '';
  $export['superfish_smallech_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallecm_1';
  $strongarm->value = '';
  $export['superfish_smallecm_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallich_1';
  $strongarm->value = '';
  $export['superfish_smallich_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallicm_1';
  $strongarm->value = '';
  $export['superfish_smallicm_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallset_1';
  $strongarm->value = '';
  $export['superfish_smallset_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallual_1';
  $strongarm->value = '';
  $export['superfish_smallual_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smalluam_1';
  $strongarm->value = '0';
  $export['superfish_smalluam_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallua_1';
  $strongarm->value = '0';
  $export['superfish_smallua_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_small_1';
  $strongarm->value = '2';
  $export['superfish_small_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_speed_1';
  $strongarm->value = 'fast';
  $export['superfish_speed_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_spp_1';
  $strongarm->value = 1;
  $export['superfish_spp_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_style_1';
  $strongarm->value = 'default';
  $export['superfish_style_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_supersubs_1';
  $strongarm->value = 1;
  $export['superfish_supersubs_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_supersubs_emm_1';
  $strongarm->value = 0;
  $export['superfish_supersubs_emm_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchbh_1';
  $strongarm->value = '2';
  $export['superfish_touchbh_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchbpu_1';
  $strongarm->value = 'px';
  $export['superfish_touchbpu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchbp_1';
  $strongarm->value = '768';
  $export['superfish_touchbp_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchdh_1';
  $strongarm->value = 0;
  $export['superfish_touchdh_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchual_1';
  $strongarm->value = '';
  $export['superfish_touchual_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchuam_1';
  $strongarm->value = '0';
  $export['superfish_touchuam_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchua_1';
  $strongarm->value = '0';
  $export['superfish_touchua_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touch_1';
  $strongarm->value = '0';
  $export['superfish_touch_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_type_1';
  $strongarm->value = 'horizontal';
  $export['superfish_type_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_ulclass_1';
  $strongarm->value = '';
  $export['superfish_ulclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_use_item_theme_1';
  $strongarm->value = 1;
  $export['superfish_use_item_theme_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_use_link_theme_1';
  $strongarm->value = 1;
  $export['superfish_use_link_theme_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wraphlt_1';
  $strongarm->value = '';
  $export['superfish_wraphlt_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wraphl_1';
  $strongarm->value = '';
  $export['superfish_wraphl_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wrapmul_1';
  $strongarm->value = '';
  $export['superfish_wrapmul_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wrapul_1';
  $strongarm->value = '';
  $export['superfish_wrapul_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_zebra_1';
  $strongarm->value = 1;
  $export['superfish_zebra_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_tree_recursion_limit';
  $strongarm->value = '2';
  $export['token_tree_recursion_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_frontpage';
  $strongarm->value = 0;
  $export['weight_frontpage'] = $strongarm;

  return $export;
}
