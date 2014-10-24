<?php
/**
 * @file
 * ec_distributor.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_distributor_defaultconfig_features() {
  return array(
    'ec_distributor' => array(
      'field_default_fields' => 'field_default_fields',
      'panelizer_defaults' => 'panelizer_defaults',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
      'views_default_views' => 'views_default_views',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function ec_distributor_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'node-distributor-field_address'.
  $fields['node-distributor-field_address'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'addressfield',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'distributor',
      'default_value' => array(
        0 => array(
          'element_key' => 'node|distributor|field_address|und|0',
          'thoroughfare' => '',
          'premise' => '',
          'locality' => '',
          'administrative_area' => '',
          'postal_code' => '',
          'country' => 'US',
        ),
      ),
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => 2,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'show_this_block' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_address',
      'label' => 'Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(
            'US' => 'US',
          ),
          'format_handlers' => array(
            'address' => 'address',
            'address-hide-country' => 'address-hide-country',
            'organisation' => 0,
            'name-full' => 0,
            'name-oneline' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'node-distributor-field_external_website'.
  $fields['node-distributor-field_external_website'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_external_website',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => 0,
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'distributor',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'link_default',
          'weight' => 1,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'show_this_block' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_external_website',
      'label' => 'Website',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => '_blank',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'rel_remove' => 'default',
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => 2,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Website');

  return $fields;
}

/**
 * Implements hook_defaultconfig_panelizer_defaults().
 */
function ec_distributor_defaultconfig_panelizer_defaults() {
  $export = array();

  return $export;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_distributor_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_distributor';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_menutitle_distributor';
  $strongarm->value = 0;
  $export['auto_menutitle_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clear_all_distributor';
  $strongarm->value = 0;
  $export['clear_all_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_distributor';
  $strongarm->value = 0;
  $export['date_popup_authored_enabled_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_distributor';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_distributor';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_distributor';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_distributor';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_distributor';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__distributor';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'xmlsitemap' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_distributor';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_distributor';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_distributor';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_distributor';
  $strongarm->value = '1';
  $export['node_preview_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_distributor';
  $strongarm->value = 0;
  $export['node_submitted_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_distributor';
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
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_distributor_pattern';
  $strongarm->value = 'distributor/[node:title]';
  $export['pathauto_node_distributor_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_distributor';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sync_translations_distributor';
  $strongarm->value = '0';
  $export['sync_translations_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_default_distributor';
  $strongarm->value = '0';
  $export['weight_default_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_enabled_distributor';
  $strongarm->value = '1';
  $export['weight_enabled_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_menu_distributor';
  $strongarm->value = '0';
  $export['weight_menu_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_range_distributor';
  $strongarm->value = '20';
  $export['weight_range_distributor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_distributor';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_distributor'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function ec_distributor_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node distributor breadcrumbs'.
  $permissions['administer panelizer node distributor breadcrumbs'] = array(
    'name' => 'administer panelizer node distributor breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distributor content'.
  $permissions['administer panelizer node distributor content'] = array(
    'name' => 'administer panelizer node distributor content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distributor context'.
  $permissions['administer panelizer node distributor context'] = array(
    'name' => 'administer panelizer node distributor context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distributor defaults'.
  $permissions['administer panelizer node distributor defaults'] = array(
    'name' => 'administer panelizer node distributor defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distributor layout'.
  $permissions['administer panelizer node distributor layout'] = array(
    'name' => 'administer panelizer node distributor layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distributor overview'.
  $permissions['administer panelizer node distributor overview'] = array(
    'name' => 'administer panelizer node distributor overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node distributor settings'.
  $permissions['administer panelizer node distributor settings'] = array(
    'name' => 'administer panelizer node distributor settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create distributor content'.
  $permissions['create distributor content'] = array(
    'name' => 'create distributor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any distributor content'.
  $permissions['delete any distributor content'] = array(
    'name' => 'delete any distributor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own distributor content'.
  $permissions['delete own distributor content'] = array(
    'name' => 'delete own distributor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any distributor content'.
  $permissions['edit any distributor content'] = array(
    'name' => 'edit any distributor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own distributor content'.
  $permissions['edit own distributor content'] = array(
    'name' => 'edit own distributor content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}

/**
 * Implements hook_defaultconfig_views_default_views().
 */
function ec_distributor_defaultconfig_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'distributors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Distributors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_address_administrative_area',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_external_website']['id'] = 'field_external_website';
  $handler->display->display_options['fields']['field_external_website']['table'] = 'field_data_field_external_website';
  $handler->display->display_options['fields']['field_external_website']['field'] = 'field_external_website';
  $handler->display->display_options['fields']['field_external_website']['label'] = '';
  $handler->display->display_options['fields']['field_external_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_website']['click_sort_column'] = 'url';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'distributor' => 'distributor',
  );
  $export['distributors'] = $view;

  return $export;
}
