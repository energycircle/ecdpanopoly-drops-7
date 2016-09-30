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
  $strongarm->value = 'ec_at_admin';
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
  $strongarm->name = 'content_type_extras_default_settings';
  $strongarm->value = array(
    'title_label' => 'Title',
    'node_preview' => '0',
    'content_type_extras_preview_button' => 'Preview',
    'content_type_extras_save_and_new' => '1',
    'content_type_extras_save_and_new_button' => 'Save and New',
    'content_type_extras_save_and_edit' => '0',
    'content_type_extras_save_and_edit_button' => 'Save and Edit',
    'content_type_extras_cancel' => '0',
    'node_options' => array(
      'status' => 'status',
      'promote' => 0,
      'sticky' => 0,
      'revision' => 0,
    ),
    'node_submitted' => 1,
    'user_permissions' => array(
      'create_roles' => array(
        5 => '5',
        3 => '3',
        4 => '4',
        1 => 0,
        2 => 0,
      ),
      'edit_roles' => array(
        5 => '5',
        3 => '3',
        4 => '4',
        1 => 0,
        2 => 0,
      ),
      'delete_roles' => array(
        5 => '5',
        3 => '3',
        1 => 0,
        2 => 0,
        4 => 0,
      ),
    ),
    'content_type_extras_descriptions_required' => 0,
    'content_type_extras_remove_body' => 0,
    'content_type_extras_title_hide' => 0,
    'content_type_extras_title_hide_css' => 0,
    'content_type_extras_title_hide_front' => 0,
    'content_type_extras_top_buttons' => array(
      'manage_fields' => 0,
      'node_edit' => 0,
    ),
    'content_type_extras_excluded_node_forms' => array(
      0 => '',
    ),
    'xmlsitemap_settings' => array(
      'status' => '1',
      'priority' => '0.5',
    ),
    'content_type_extras__active_tab' => 'edit-configuration',
  );
  $export['content_type_extras_default_settings'] = $strongarm;

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
      'dependencies' => 'a0e11d5ce9436370299b5ac3df9e4526',
      'user_permission' => '4f72ff66f0c9043d7248eea47a287874',
    ),
    'ec_mail_settings' => array(
      'defaultconfig' => '8817d552953b62bfc79c4feda243d793',
      'user_permission' => '78b5b9a41444c5a3a6200e4d79ef3442',
      'variable' => '04217a238cd83099ca823bb1524156c3',
      'dependencies' => '370c918c9ce452203f5d43e904b6cebe',
    ),
    'panopoly_admin' => array(
      'defaultconfig' => '758d59bfbe01e8ef13123c5be22511e9',
      'dependencies' => 'daf7b2c6b83f03e8662fbb88d5886b9d',
      'page_manager_handlers' => '2e3ef02f35864de1b57724519708797c',
      'page_manager_pages' => '3f3ca2027abcb511d5158db7f1167074',
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
      'panels_mini' => '99b092c600c3c7d107a1335ffaca1f66',
      'roles_permissions' => '15abbb20e7ee7e5e7e036a07840cb1d6',
      'user_permission' => '6768bf707d1a419b2637dde114b5a2a5',
      'user_role' => 'd8f4839388dc4e56678018fd5da54553',
      'variable' => '037847964f5b17b83677b33b6534212f',
      'dependencies' => 'cc97dd51bf0db2caeb4a49312739d843',
    ),
    'panopoly_core' => array(
      'variable' => 'cc2cdfa66cdc9a07e5c32fb6bd7bfac5',
      'defaultconfig' => 'b8f5440232af412909f6fc5402226015',
      'field_base' => 'b998023e7fd4c375db5717778beb0f1c',
      'field_instance' => '0bf4951f1df9231beeee058b331efaf9',
      'taxonomy' => 'd2f15459d669c4a745941066712ba7d5',
      'dependencies' => 'ab3760d922aced148758cf80f511c6be',
      'panelizer_defaults' => '130672e2501881f989cdfb5855d815cb',
      'views_view' => '9610a80e0b2b6831cf648f85ef3af04c',
    ),
    'panopoly_pages' => array(
      'node' => 'c97e6b7cff8d0f412dbe54b006c74aa6',
      'variable' => 'f6beb20316b9192dd913028f8e50f096',
      'defaultconfig' => 'f7f2bad35b0f80cbaf4afd2dac1f4f48',
      'field_base' => 'f369eac38ebf698eb055113520d0b8c3',
      'field_instance' => '81b5a5bfbbe441e3bf113d956b16a111',
      'page_manager_handlers' => 'e9755a605e5e1dd2037ae44bfda815e4',
      'panelizer_defaults' => 'fbf82356010068d968090fbec1c8fdff',
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
      'defaultconfig' => '94ab92dc94edf08b1fc681a30984b89b',
      'field_instance' => 'c63e2b6befca7883f66b2d79460c87d4',
      'schemaorg' => '0c9f738fac68bf8dba41e298304e5082',
      'user_permission' => '1aeddd30fa3082c3d234d63651c06bb1',
      'weight' => 'e8dfd29f5fce8d8e2bcf39633ea32f90',
      'dependencies' => '873dc205903d5e12d540309af1b684a4',
      'field_group' => '1f02d2e7ccdbaa60dd1c6ad69e631a65',
      'panelizer_defaults' => '3facbbebfaa054a6649aeb49e6bdb2b2',
      'views_view' => '7a90814ef49ff615b6deebab33834c52',
      'features_override_items' => FALSE,
      'features_overrides' => '2f01358dcd16bb46b0032e40f6d8355f',
    ),
    'ec_foundation_image_styles' => array(
      'image' => 'c4e8836c701a34ffed6fb307eca53ee1',
      'dependencies' => 'b5cc61d4a303d79dab8a8515c295c0c2',
    ),
    'panopoly_users' => array(
      'variable' => 'ea16cca29397afe9e662c56696322956',
      'defaultconfig' => 'deb8f81351875160425e191864e5ccfe',
      'field_base' => '0ac5a2945bc48a0c513f1e539d8a2d39',
      'field_instance' => 'e5e9dc5d3f8ab6f9d9185a150f387ea6',
      'dependencies' => '89f97b695e85523cf8af0bf2ba959f5c',
      'field_group' => 'caf9f26793a9f1c8218d8ee9c8ba1e68',
      'page_manager_existing_pages' => '4a486d2f76812300ec729d95e709a1cc',
      'page_manager_handlers' => 'fce91492b452f3310171b0b800784b59',
      'panelizer_defaults' => '09297d5a5444df61f0d593f18ecf869a',
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
      'field_instance' => '7de4b45adde26faf07b3a517d6e2e167',
      'node' => 'd97ee4d754f7104c6d5905292a17c964',
      'panelizer_defaults' => '079a48b2780dcf8cf3c87ecacdad1201',
      'schemaorg' => '1623d8afbc7cbb815e6f868e86c20539',
      'taxonomy' => 'e2e0087c1ba08e365e69877b4b766ebc',
      'user_permission' => 'e17f5fa37e26fa588924771d9a320343',
      'uuid_term' => '5bb50289aae53f651fcd8490b5dc4557',
      'variable' => 'e3429ed882e783c2ed07dbff823956bf',
      'views_view' => '1a6fdf36a1f8bf9764f1ade473a06790',
      'weight' => '58f47f4d9c3963e90ab4358cce82953b',
      'rdf_mappings' => '1623d8afbc7cbb815e6f868e86c20539',
      'dependencies' => 'baff4702a87474ec7a2e0d34b129ef39',
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
      'defaultconfig' => 'af4c375bab7b53b83548156efac8f2b4',
      'field_base' => 'e26ce0d82af5ba15b3184e7e34f6f2b1',
      'field_group' => '9c1a2cd6e36f9b1806993b651f9113c7',
      'field_instance' => 'cecbe507920767ea80a4e47b2bb00018',
      'node' => 'fd3f29e7424757d0cffe62965427689d',
      'panelizer_defaults' => '138147e580da93389d149e2a32030407',
      'schemaorg' => '39a0bda0eeb2126e47a73619d7a1fa24',
      'taxonomy' => '590beb0f005afe99ea83e43bcd707405',
      'user_permission' => '254cbaa333a331db34de9aa47f9e9e20',
      'uuid_term' => '06ad36f39986b771af28e5d768de7a03',
      'variable' => '723476eb75f926387eb7757cdf5aa785',
      'views_view' => 'e8a886a3739ae18e670734e625bdfbb2',
      'weight' => '3107bd06feb7fb6167eff2be17668733',
      'dependencies' => '9fefc7772a71b133b637888c3a1c0d90',
      'rdf_mappings' => '39a0bda0eeb2126e47a73619d7a1fa24',
    ),
    'ec_campaign_page' => array(
      'defaultconfig' => '907917148fb414a0e396f90807dd22ca',
      'entityform_type' => 'e55e5b6d7cca40f544389446b579ba9f',
      'field_group' => 'ba4f3a28b08d0e6c487ef409a8149b44',
      'field_instance' => '3079529059a928a0a3f3c5de76b02637',
      'field_validation_rule' => '3adbd1d35c99122da58c22772f340554',
      'node' => '987a9a78dd9ab1ee2081aa4206705e1e',
      'panelizer_defaults' => '27621201b9b1c7b75092a9e60a20a710',
      'schemaorg' => 'f36e389ac14e69d06fc9462715d2e574',
      'user_permission' => 'c88c3dc3be8c104c90b9647c3186bb9b',
      'variable' => '20b4cdf53aa23c6ca8ffc2814b31e30d',
      'views_view' => '2fcfa93934468f37221a9b90ba1626e0',
      'weight' => '397acef976576da61b4bd2a997d46d1d',
      'dependencies' => 'c9b51e925ef656c57cb106f504308e44',
      'rdf_mappings' => 'f36e389ac14e69d06fc9462715d2e574',
      'field_base' => '580209d0b6f035294f3bf753fd1502ce',
    ),
    'ec_casestudy' => array(
      'defaultconfig' => '37b9c487f5e854978f16948c04cc09f4',
      'field_base' => '9027ed022051226cf98dc3b6d5dbc57b',
      'field_group' => 'f6096537a71ee30d65540e3962e3e477',
      'field_instance' => 'b6c9208ebf49b19ac5103d3f22cc18ff',
      'node' => 'a1ea8fb5e4382ad60d4b8fcd6fc559bf',
      'panelizer_defaults' => 'c257f717ec5b6e65e0af0ff59d02adb5',
      'schemaorg' => 'e49317909b7c0a7bf7255d189a909a63',
      'user_permission' => '86ae90dc6cc7dbb28f358514604a509d',
      'variable' => 'f779047e38f1ea4d6f9f73a3f3acc54b',
      'views_view' => '78f6f558c87921f843c11e16be9532d3',
      'weight' => '90277400113747cc0b1a6976e1a9b0f1',
      'dependencies' => 'db62918fa0f457751cc573b00f707d18',
      'rdf_mappings' => 'e49317909b7c0a7bf7255d189a909a63',
    ),
    'ec_citypages' => array(
      'defaultconfig' => 'c64e3648b281bc6c6503c23820120aad',
      'field_base' => '2c82ec4ad56646c083389073c51bb7ca',
      'field_group' => '241d5cd9f584c972ed2b34f885f98f93',
      'field_instance' => '0bacd75e67b4718b3c8e99f6975a4c57',
      'node' => '0dfcd5cdb6a6ecaa208b1651c4052b0d',
      'panelizer_defaults' => 'add2434596a01e750426d840294e44a3',
      'schemaorg' => '01c3a3859ea5f3f4a7f5e053da81b11e',
      'user_permission' => 'd9e94574480f35fa998bd914cbb36c54',
      'variable' => '1fb136772abe58e7077864ebce515201',
      'views_view' => '44415403648c7e7504228d84140e49d9',
      'weight' => '2e9e7ea552b5cc7968938b9f6ad5e588',
      'dependencies' => 'bed4fd46caae3dc80d61e4ee9c991a65',
      'rdf_mappings' => '01c3a3859ea5f3f4a7f5e053da81b11e',
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
      'field_instance' => '5b1b27923fd759dfe99398ac6fe4147f',
      'node' => '32ce783c99cf7eaa82953c8fd3403a04',
      'panelizer_defaults' => '95f66f1edd8ec605e622c356a5a9f102',
      'rdf_mappings' => 'b96093d8b70a49fa228d108b1e86b749',
      'schemaorg' => 'b96093d8b70a49fa228d108b1e86b749',
      'taxonomy' => '8188c1e588bbe63a3b1f0ac28ab2bc8a',
      'user_permission' => 'f8e4ac5d28d15cd53460aeeb59159535',
      'uuid_term' => 'e36a600800ca2a245d0c1ae067ee4749',
      'variable' => '552fcfe8522f64330a5c2b949b64bf05',
      'views_view' => 'dcb33814cbe4ccddbf22ce36c371a4e0',
      'weight' => '8a5c6914a5c2e0f6b4ee2a9559c15017',
      'dependencies' => 'f694207850ede5ae1c7d0ba62f20a3ce',
    ),
    'ec_distributor' => array(
      'defaultconfig' => 'fb0c0aaeae334ec7045fac437d1e0ea7',
      'field_base' => '8dbe315c704ad51855177665b0ecd853',
      'field_instance' => 'd7d937739b1654d6288702f099276ac2',
      'node' => '5ccf61e70332960b9b3e4232646bb52f',
      'panelizer_defaults' => 'cc98b14803dc5ec96429fdc0e15c778a',
      'rdf_mappings' => 'e7010965ff74be0ffe9aa2707382cf22',
      'schemaorg' => 'e7010965ff74be0ffe9aa2707382cf22',
      'user_permission' => '79b986ac58e0355e4f78217d7c7fda89',
      'variable' => '6a12fdce27b11fedc6638e7b98b70f34',
      'views_view' => '12fad338891b68b6c0400a1c2bfd698b',
      'weight' => '87777bf83067dbef05ee8e99055774ea',
      'dependencies' => '3643989eeafa0aaeebe1bb1f4ee17664',
    ),
    'ec_service_stack' => array(
      'defaultconfig' => 'adb175c90ec2c2f639f16474c6b9f0e8',
      'entityform_type' => '795a3da2d3dfd59da961f2277f167b80',
      'field_base' => '4982ee6606adc816708a108eef45dba6',
      'field_group' => 'f3adfc72dd9441651f311be3f3de6a17',
      'field_instance' => '868a0e128af8b2c63dca8733e8f2a4f6',
      'field_validation_rule' => 'df854498d2decfbd709cbefe474c8890',
      'node' => '92e4dddb113a186a8e77e381b6fdf7a5',
      'panelizer_defaults' => 'a9d4dfa6ee400196c3779dded7d9c275',
      'rules_config' => 'c5cfc3ad474e8b30782bce870dbde391',
      'schemaorg' => 'e2a53bd84ed957d7e9cfb851dc9854c5',
      'user_permission' => '15e782d760164206290b6ce1881d43f8',
      'variable' => '61ef6db56828df09f5cdb1369c97da92',
      'views_view' => '137737c797dbd8ce2bbede9b61062b86',
      'weight' => '139a7daeb9601423a3da901af69671d5',
      'dependencies' => '25617a42db53f5316c40d551fd0c81ea',
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
      'dependencies' => '4fdbc8db9062e80c094fcccb24bcf331',
    ),
    'ec_faq' => array(
      'defaultconfig' => '2f776eb97d1efe9a72dd2fa27de0a041',
      'field_base' => '13fbb4bcfdc553658c7b2a90fd281d6d',
      'field_group' => '1fae103a636188fdce034c435135aa8e',
      'field_instance' => '44ecdc7a8a02dbdc0ad542eacf0cfbe4',
      'node' => '3d5fc569e70a0e2f8c06e7433e27d8e5',
      'panelizer_defaults' => '45c032da9152519a49c5fb8265cb0b11',
      'rdf_mappings' => '2f18db6b3b49d5ca3c987d3155d338f7',
      'schemaorg' => '2f18db6b3b49d5ca3c987d3155d338f7',
      'user_permission' => 'ee7e2b7cb7c707a61234aa21dfee3f05',
      'variable' => '76d7db6e6b2de0eb0c09033d1cd901aa',
      'views_view' => '25e91b2e8291cef8a8899da21d71836c',
      'weight' => 'bb819d6be50d83a7a9a52b5b2f6de283',
      'dependencies' => 'c5a3cb121e9e1289d807a775af2f36a3',
    ),
    'ec_financing_option' => array(
      'defaultconfig' => '8ca1f30f2039ac041af0dcbf32ec2e57',
      'field_base' => '28cfdae8fe3dccc2e14b3c046e922b45',
      'field_group' => '4de892dade1898ef7425b39633b8f6eb',
      'field_instance' => '6a7ce962cbd8b16358738bb09fb9272a',
      'node' => '1a886a90ca8beb969376c2937931df69',
      'panelizer_defaults' => 'fbf11ce5a4e8dadb5cdc24ba18dc36c1',
      'schemaorg' => '1339a1e42897b309bbd2363d21307e1d',
      'user_permission' => '1fb479435f66404d36a8bdcfb6495dcc',
      'variable' => '8e5a858f86e64c5d6518823edc7992f2',
      'views_view' => 'c43a6f39ecc8828b77c7928a4edeaf41',
      'weight' => 'a21b2dfe8f51e33dcfc8058a4fe769e9',
      'dependencies' => 'f726af6a9d784c7bce6df8a08c60448b',
    ),
    'ec_gallery' => array(
      'defaultconfig' => '99e55b2feb3aed286e2023a983bbc3cf',
      'field_base' => 'fa3c26fbf5c1e381cfd7fecd13f8c153',
      'field_group' => '9843892e552ca1ab6922bc2f9334ae1c',
      'field_instance' => '0532716924ca78967f5d6229fe8a9bf7',
      'node' => '836d5eba560b2169d052d029d6766b68',
      'panelizer_defaults' => '50364e5616b5178834b98072a6d12a56',
      'rdf_mappings' => '9f14aa27df9aad82e63a80777c10a20b',
      'schemaorg' => '9f14aa27df9aad82e63a80777c10a20b',
      'user_permission' => '77e95caa457c7908f45332b8d6ce1bce',
      'variable' => '1c9bc52157f5dc2581b53b90e09ea663',
      'views_view' => '98e1ba708714f300ed75d9d624ae709b',
      'weight' => '00b9992a425fbba4f25527a996361649',
      'dependencies' => 'b9f26a156184cc2b8cfbd977b7040d68',
    ),
    'ec_product_page_lite' => array(
      'defaultconfig' => '693d337a9de5ee58ae0405501edfdc03',
      'field_base' => '18a19a20543c89bf2217dece7a533959',
      'field_group' => '65dedd60174867b4712746300c1f7315',
      'field_instance' => '9096786b64486e055d231eaf77e65da6',
      'node' => '85c8341dadac074bdbb698e3f36c7b91',
      'panelizer_defaults' => '391fcce7e4e98ed4d74dbd0342c8469e',
      'user_permission' => 'de870917c45bc1337ec9ac8f18ff26f0',
      'variable' => '85b0149bca4e7b66ac36ab6c3572a370',
      'views_view' => 'a468bc8e5d315bf3be9238fc793d4da8',
      'weight' => '1be31083a32dd1018b3f1eeb40d0f7c6',
      'dependencies' => 'f486d9490b7e4fa05db8d56026e43768',
    ),
    'ec_product_page_category' => array(
      'defaultconfig' => '34d3f4b8cfda70099bd7b35b6d471135',
      'field_base' => 'a2fa0699d7849635dbe0f795e6e35c39',
      'field_group' => '0e482daba7bea9235d6a55b0666d3e16',
      'field_instance' => '065b4598ba54b782b9be51d2c180da03',
      'node' => '2ff48cd7dd9c046dc8a6402db3e231d3',
      'panelizer_defaults' => 'ed9f2489cfeb00b81631e1982890b473',
      'user_permission' => '224f1848cf0a8d28a966d996ef9fc7dc',
      'variable' => '81a3c41e62b28b983dc9078d379b0dc7',
      'weight' => '74d351ad48cd26568147a4bf75095bde',
      'dependencies' => '9d875670216d17a906d2af4f06b7b29a',
    ),
    'ec_promotions' => array(
      'defaultconfig' => '3b2d1ffbf72d3514c646a3d8ef406aeb',
      'field_base' => 'da8dcb91a56e7710fd384c1c1865109e',
      'field_group' => '016e7724c3dea510d8d58bf35df585cc',
      'field_instance' => 'd5d217b81d7e259abb4e6765562dc443',
      'field_validation_rule' => 'c50678755df928cc58a25dfc4bfdaa19',
      'node' => '7d57ac70c1037a7a88a2c97b98ccef44',
      'panelizer_defaults' => '21e3b4adad0e6766536dc6bf3f71ee01',
      'rdf_mappings' => '0dc2d73445054e2325bd4d0fcba9dd3b',
      'rules_config' => 'd99687373901fdd911ca1f5b46176046',
      'schemaorg' => '074cca50ae990f1b8223c8bde760b791',
      'user_permission' => 'ba1c20a4569051b2cea5863f61d28368',
      'variable' => '3aba580b22ef3fba45d91683d7992e36',
      'views_view' => 'aa8d6927b70cbe3c0363a2b9fa569f26',
      'weight' => FALSE,
      'dependencies' => 'b35a0aa92228a5e823b779939c77bb72',
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
      'defaultconfig' => '23735df5f8e48e26aa6000129c298c71',
      'features_override_items' => FALSE,
      'features_overrides' => 'fbb2ffb8fef719b21779b5677ca1b541',
      'field_base' => 'f8d57b45a30451569a9389c379c4500b',
      'field_instance' => '76ead4a65f15cc7b3bebe773c13858a2',
      'flexslider_optionset' => '82ef060bfd44fc1c5cbb855c1a176603',
      'node' => '7a0c829be7bd072d3727ec1e79723dd7',
      'panelizer_defaults' => '5735de4ffc32185f5a8af7fdba736fa9',
      'rdf_mappings' => '597adcf155d4742ae394203e0da3ef40',
      'schemaorg' => '597adcf155d4742ae394203e0da3ef40',
      'taxonomy' => 'd8eae7dc681ac1731879af1186c06f55',
      'user_permission' => 'db999c768f7028ea5c5b273cf9cd43f5',
      'variable' => '8483a1673604681d1bd05dd3f39e1f48',
      'views_view' => 'c44ed70b684e2fa00eac51c40692fed0',
      'weight' => '088ddfe949b05b349a224085e387c803',
      'dependencies' => '83d0e39ac322e2b427d1c8b485ff41ab',
    ),
    'ec_staff' => array(
      'defaultconfig' => '5bfe39a047ce3e61d1107468efeb58aa',
      'entityform_type' => '9c9e314231b92f10c6ce6129469684ad',
      'field_base' => 'abcd7ec800332a4c65b47ac6d8aea179',
      'field_instance' => '7ab71f729eaa818f86fca6d6e885a4e6',
      'node' => 'a33d686ae51451421ac068a6892c9c5a',
      'panelizer_defaults' => 'fe938b1c1b24d37ec23c65bc2c74a42a',
      'rdf_mappings' => 'e618d3f1a1f9c98d605a535be567dd92',
      'rules_config' => '650c05903a3579051a7a45740c187651',
      'schemaorg' => 'e618d3f1a1f9c98d605a535be567dd92',
      'taxonomy' => '9fc13fb091672cf81a77c4a35e8f93a7',
      'user_permission' => 'c3e97baca82781176cb40708dee67783',
      'uuid_term' => 'a9f98a45ba28a5db37ab8bf1b4d6ffbf',
      'variable' => 'ef8b3301ce6fbf0ef623b78f9977c71f',
      'views_view' => '516a8a11a02cb55d38fdbccb762fd5e7',
      'weight' => '11e92505e48bb039bf4a66a297d9f951',
      'dependencies' => 'f694207850ede5ae1c7d0ba62f20a3ce',
    ),
    'ec_testimonial' => array(
      'defaultconfig' => '0065de8350b5965256cb51f954d50431',
      'field_base' => '9abe9b090d377a1ae006313aa80e6616',
      'field_group' => '2163cd2df871fabf0d5fc096b1f727ad',
      'field_instance' => '68a237482934a6cf001044353c6dc723',
      'flexslider_optionset' => 'f4be40d908e01745ac4fda9dfaa9408b',
      'node' => '8d9c12233d950fa1bf0e0365e70fc5fa',
      'panelizer_defaults' => '5ed6397d75dc0f9b419fa4fe0b70a246',
      'rdf_mappings' => '2e2853ba0bb0ae6ecb8581b0c06b3246',
      'schemaorg' => '2e2853ba0bb0ae6ecb8581b0c06b3246',
      'user_permission' => '500901bcd987f98718c2bb49545a5c42',
      'variable' => '1ba8f55efd1cee27dba9c110edc09f32',
      'views_view' => '88a2f9cd7965032c35a725029495fcf4',
      'weight' => '4ba37acaac2322a6431fd983adccd79b',
      'dependencies' => '7cb7e35bdb0f74365c48766b7e91d56d',
      'uuid_term' => '262f6275df255036f6ac61f9e557ac7e',
    ),
    'ec_a_b_testing_setup' => array(
      'defaultconfig' => 'b638631964764de7c0da5f421bc03ce5',
      'field_base' => 'a4cde2bce75ea743fde2c012dd98e29f',
      'field_instance' => '88b8069c3098358943ec760ce06281c9',
      'user_permission' => 'b7fb786e4b3c4b7485644c3be1fe2dae',
      'variable' => 'ca51d227a3eb4120d95d47212389c0fa',
      'views_view' => '1055a380f0ef12608f572c12e80304d6',
      'dependencies' => '2f9d81ca9e2b4ff186050c1d48b75f08',
    ),
    'ec_development' => array(
      'content_menu_links' => '288a5602a9ec119571de5a458f783fae',
      'user_permission' => 'c8482674cb13b90e27823f18356dbf79',
      'dependencies' => '9bd1b14c73b541d1652414f57b57ccaf',
    ),
    'ec_base_content' => array(
      'uuid_node' => '47ad6be32ab3498e201da7a080ed22f7',
      'variable' => '30a147f8f1c689935c48d9590bff80f0',
      'dependencies' => '78410cbd1faaaab441725b3100f181d4',
      'node_export_features' => 'ede0369686d08b1670267f4e91ffabe8',
    ),
    'ec_review_sites' => array(
      'node' => 'c65c65f0c6579b4103ad2276b1dd8d31',
      'variable' => 'dfd77ccdf76eb199325390ec8ce83217',
      'defaultconfig' => 'a3d9b910ed7f0ed3342d70522e8cb0d1',
      'content_menu_links' => '936a541c86719520d405786d18e90c15',
      'field_base' => '825ac783a06c0f182ab7c89d2a11ef18',
      'field_instance' => 'b30f3470b330a59155c8d1a61be7fd6a',
      'taxonomy' => 'f949de47d826b77dfd1c71e009002d8b',
      'weight' => 'e5963c576114d9c61dbacf043a0d1c26',
      'dependencies' => '734374e6cd3c140d5548562ad308011b',
      'views_view' => '83f0d456e405e63106fe13ac4a8a66a2',
      'user_permission' => 'dcae77e694c327bb08e56e990d5d9a68',
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
  $strongarm->value = 'rebuild';
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
  $strongarm->value = 1;
  $export['features_rebuild_modules_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_rebuild_on_flush';
  $strongarm->value = 1;
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
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.7';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'manualcrop_file_entity_settings_image';
  $strongarm->value = array(
    'manualcrop_enable' => 1,
    'manualcrop_keyboard' => 1,
    'manualcrop_thumblist' => 0,
    'manualcrop_inline_crop' => 0,
    'manualcrop_crop_info' => 1,
    'manualcrop_instant_preview' => 1,
    'manualcrop_instant_crop' => 0,
    'manualcrop_default_crop_area' => 0,
    'manualcrop_maximize_default_crop_area' => 0,
    'manualcrop_styles_mode' => 'include',
    'manualcrop_styles_list' => array(
      'panopoly_image_full' => 'panopoly_image_full',
    ),
    'manualcrop_require_cropping' => array(),
  );
  $export['manualcrop_file_entity_settings_image'] = $strongarm;

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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_menu-auxiliary-menu';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_menu_link_menu-auxiliary-menu'] = $strongarm;

  return $export;
}
