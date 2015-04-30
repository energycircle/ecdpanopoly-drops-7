<?php
/**
 * @file
 * ec_help_documentation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ec_help_documentation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_help_documentation';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_menutitle_help_documentation';
  $strongarm->value = 0;
  $export['auto_menutitle_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clear_all_help_documentation';
  $strongarm->value = 0;
  $export['clear_all_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_cancel_help_documentation';
  $strongarm->value = '0';
  $export['content_type_extras_cancel_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_preview_button_help_documentation';
  $strongarm->value = 'Preview';
  $export['content_type_extras_preview_button_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_button_help_documentation';
  $strongarm->value = 'Save and Edit';
  $export['content_type_extras_save_and_edit_button_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_help_documentation';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_edit_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_button_help_documentation';
  $strongarm->value = 'Save and New';
  $export['content_type_extras_save_and_new_button_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_help_documentation';
  $strongarm->value = '1';
  $export['content_type_extras_save_and_new_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_title_hide_help_documentation';
  $strongarm->value = 0;
  $export['content_type_extras_title_hide_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_help_documentation';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_help_documentation';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_help_documentation';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_help_documentation';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_help_documentation';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_help_documentation';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_term_node_listings_help_document_type';
  $strongarm->value = 'hide_listing';
  $export['disable_term_node_listings_help_document_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__help_documentation';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '5',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '3',
        ),
        'xmlsitemap' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_help_documentation';
  $strongarm->value = array();
  $export['menu_options_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_help_documentation';
  $strongarm->value = 'menu-help-documentation:0';
  $export['menu_parent_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_help_documentation';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_help_documentation';
  $strongarm->value = '0';
  $export['node_preview_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_help_documentation';
  $strongarm->value = 1;
  $export['node_submitted_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_help_documentation';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'show_this_block' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'grouped_teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_help_document_type';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'diff_standard' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_help_document_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:help_documentation_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:33:"panelizer_node:help_documentation";s:23:"allowed_layout_settings";a:85:{s:8:"flexible";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:6:"twocol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:14:"twocol_stacked";b:1;s:6:"onecol";b:1;s:17:"threecol_33_34_33";b:1;s:17:"threecol_25_50_25";b:1;s:13:"twocol_bricks";b:1;s:13:"selby_flipped";b:1;s:6:"taylor";b:1;s:6:"harris";b:1;s:4:"burr";b:1;s:17:"sanderson_flipped";b:1;s:7:"brenham";b:1;s:15:"hewston_flipped";b:1;s:5:"rolph";b:1;s:9:"sanderson";b:1;s:4:"webb";b:1;s:15:"brenham_flipped";b:1;s:8:"bartlett";b:1;s:7:"hewston";b:1;s:12:"webb_flipped";b:1;s:5:"geary";b:1;s:4:"pond";b:1;s:15:"moscone_flipped";b:1;s:6:"bryant";b:1;s:6:"phelan";b:1;s:12:"burr_flipped";b:1;s:5:"selby";b:1;s:6:"boxton";b:1;s:8:"mccoppin";b:1;s:5:"sutro";b:1;s:22:"bryant_flipped_flipped";b:1;s:16:"bartlett_flipped";b:1;s:14:"taylor_flipped";b:1;s:7:"moscone";b:1;s:6:"whelan";b:1;s:5:"brown";b:1;s:12:"sutro_double";b:1;s:19:"radix_selby_flipped";b:1;s:12:"radix_harris";b:1;s:11:"radix_sutro";b:1;s:10:"radix_burr";b:1;s:13:"radix_hewston";b:1;s:13:"radix_brenham";b:1;s:18:"radix_burr_flipped";b:1;s:20:"radix_taylor_flipped";b:1;s:12:"radix_taylor";b:1;s:10:"radix_pond";b:1;s:11:"radix_brown";b:1;s:22:"radix_bartlett_flipped";b:1;s:12:"radix_whelan";b:1;s:14:"radix_mccoppin";b:1;s:21:"radix_moscone_flipped";b:1;s:20:"radix_bryant_flipped";b:1;s:23:"radix_sanderson_flipped";b:1;s:15:"radix_sanderson";b:1;s:12:"radix_phelan";b:1;s:21:"radix_brenham_flipped";b:1;s:11:"radix_geary";b:1;s:10:"radix_webb";b:1;s:12:"radix_bryant";b:1;s:11:"radix_rolph";b:1;s:12:"radix_boxton";b:1;s:21:"radix_hewston_flipped";b:1;s:18:"radix_webb_flipped";b:1;s:18:"radix_sutro_double";b:1;s:14:"radix_bartlett";b:1;s:13:"radix_moscone";b:1;s:11:"radix_selby";b:1;s:9:"two_66_33";b:1;s:6:"two_50";b:1;s:14:"three_25_50_25";b:1;s:9:"five_5x20";b:1;s:9:"two_33_66";b:1;s:16:"three_inset_left";b:1;s:3:"one";b:1;s:9:"four_4x25";b:1;s:8:"six_6x16";b:1;s:10:"three_3x33";b:1;s:14:"three_50_25_25";b:1;s:17:"three_inset_right";b:1;s:9:"two_brick";b:1;s:14:"three_25_25_50";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:help_documentation_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:help_documentation_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_node:help_documentation_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:help_documentation_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_node:help_documentation_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:help_documentation_default';
  $strongarm->value = array(
    'entity_field' => 'entity_field',
    'custom' => 'custom',
    'entity_field_extra' => 'entity_field_extra',
    'block' => 'block',
    'entity_form_field' => 'entity_form_field',
    'token' => 'token',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'panels_mini' => 'panels_mini',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:help_documentation_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_help_documentation_pattern';
  $strongarm->value = 'help-documentation/[node:title]';
  $export['pathauto_node_help_documentation_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_help_documentation';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sync_translations_help_documentation';
  $strongarm->value = '0';
  $export['sync_translations_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_permissions_help_documentation';
  $strongarm->value = array(
    0 => 'create_roles',
    1 => 'edit_roles',
    2 => 'delete_roles',
  );
  $export['user_permissions_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_default_help_documentation';
  $strongarm->value = '0';
  $export['weight_default_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_enabled_help_documentation';
  $strongarm->value = '0';
  $export['weight_enabled_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_menu_help_documentation';
  $strongarm->value = '0';
  $export['weight_menu_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_range_help_documentation';
  $strongarm->value = '20';
  $export['weight_range_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_help_documentation';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_help_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_help_document_type';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_help_document_type'] = $strongarm;

  return $export;
}
