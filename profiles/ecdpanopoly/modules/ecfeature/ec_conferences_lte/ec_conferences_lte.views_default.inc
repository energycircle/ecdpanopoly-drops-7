<?php
/**
 * @file
 * ec_conferences_lte.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_conferences_lte_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'conference_detail_page';
  $view->description = 'Select a conference detail page to show in teaser format in a pane';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference Detail Page Pane';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'conference_details' => 'conference_details',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Page Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['conference_detail_page'] = $view;

  $view = new view();
  $view->name = 'conference_detail_teasers';
  $view->description = 'Conference landing page teaser blocks for conference detail pages.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference - Detail Teasers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Travel & Accommodations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_details_conference_target_id']['id'] = 'field_ref_details_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_details_conference_target_id']['table'] = 'field_data_field_ref_details_conference';
  $handler->display->display_options['relationships']['field_ref_details_conference_target_id']['field'] = 'field_ref_details_conference_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_conf_detail_teaser_content']['id'] = 'field_conf_detail_teaser_content';
  $handler->display->display_options['fields']['field_conf_detail_teaser_content']['table'] = 'field_data_field_conf_detail_teaser_content';
  $handler->display->display_options['fields']['field_conf_detail_teaser_content']['field'] = 'field_conf_detail_teaser_content';
  $handler->display->display_options['fields']['field_conf_detail_teaser_content']['label'] = '';
  $handler->display->display_options['fields']['field_conf_detail_teaser_content']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Details';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ref_details_conference_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'conference_details' => 'conference_details',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '42',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'conference_detail_page_types';

  /* Display: Travel */
  $handler = $view->new_display('panel_pane', 'Travel', 'panel_pane_1');

  /* Display: Attend */
  $handler = $view->new_display('panel_pane', 'Attend', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Who Should Attend?';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'conference_details' => 'conference_details',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '43',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'conference_detail_page_types';
  $export['conference_detail_teasers'] = $view;

  $view = new view();
  $view->name = 'conference_navigation';
  $view->description = 'Sidebar navigation for major conferences';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference Navigation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['id'] = 'field_ref_conference_venue_target_id';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['table'] = 'field_data_field_ref_conference_venue';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['field'] = 'field_ref_conference_venue_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_conference_details_target_id']['id'] = 'field_ref_conference_details_target_id';
  $handler->display->display_options['relationships']['field_ref_conference_details_target_id']['table'] = 'field_data_field_ref_conference_details';
  $handler->display->display_options['relationships']['field_ref_conference_details_target_id']['field'] = 'field_ref_conference_details_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_conference_date']['id'] = 'field_conference_date';
  $handler->display->display_options['fields']['field_conference_date']['table'] = 'field_data_field_conference_date';
  $handler->display->display_options['fields']['field_conference_date']['field'] = 'field_conference_date';
  $handler->display->display_options['fields']['field_conference_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_ref_conference_venue']['id'] = 'field_ref_conference_venue';
  $handler->display->display_options['fields']['field_ref_conference_venue']['table'] = 'field_data_field_ref_conference_venue';
  $handler->display->display_options['fields']['field_ref_conference_venue']['field'] = 'field_ref_conference_venue';
  $handler->display->display_options['fields']['field_ref_conference_venue']['label'] = '';
  $handler->display->display_options['fields']['field_ref_conference_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_conference_venue']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Venue Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_venue_address_locality']['id'] = 'field_venue_address_locality';
  $handler->display->display_options['fields']['field_venue_address_locality']['table'] = 'field_data_field_venue_address';
  $handler->display->display_options['fields']['field_venue_address_locality']['field'] = 'field_venue_address_locality';
  $handler->display->display_options['fields']['field_venue_address_locality']['relationship'] = 'field_ref_conference_venue_target_id';
  $handler->display->display_options['fields']['field_venue_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_venue_address_locality']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_conference_date) */
  $handler->display->display_options['sorts']['field_conference_date_value']['id'] = 'field_conference_date_value';
  $handler->display->display_options['sorts']['field_conference_date_value']['table'] = 'field_data_field_conference_date';
  $handler->display->display_options['sorts']['field_conference_date_value']['field'] = 'field_conference_date_value';
  $handler->display->display_options['sorts']['field_conference_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'conference' => 'conference',
  );
  /* Filter criterion: Content: Date - end date (field_conference_date:value2) */
  $handler->display->display_options['filters']['field_conference_date_value2']['id'] = 'field_conference_date_value2';
  $handler->display->display_options['filters']['field_conference_date_value2']['table'] = 'field_data_field_conference_date';
  $handler->display->display_options['filters']['field_conference_date_value2']['field'] = 'field_conference_date_value2';
  $handler->display->display_options['filters']['field_conference_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_conference_date_value2']['default_date'] = 'now -1 day';

  /* Display: Active conference sidebar */
  $handler = $view->new_display('panel_pane', 'Active conference sidebar', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['id'] = 'field_ref_conference_venue_target_id';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['table'] = 'field_data_field_ref_conference_venue';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['field'] = 'field_ref_conference_venue_target_id';

  /* Display: Additional conferences sidebar */
  $handler = $view->new_display('panel_pane', 'Additional conferences sidebar', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other upcoming conferences:';
  $handler->display->display_options['display_description'] = 'All but the active conference';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['id'] = 'field_ref_conference_venue_target_id';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['table'] = 'field_data_field_ref_conference_venue';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['field'] = 'field_ref_conference_venue_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;

  /* Display: Detail Page - Active conference sidebar */
  $handler = $view->new_display('panel_pane', 'Detail Page - Active conference sidebar', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'NOT USED';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['id'] = 'field_ref_conference_venue_target_id';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['table'] = 'field_data_field_ref_conference_venue';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['field'] = 'field_ref_conference_venue_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_conference_details_target_id']['id'] = 'field_ref_conference_details_target_id';
  $handler->display->display_options['relationships']['field_ref_conference_details_target_id']['table'] = 'field_data_field_ref_conference_details';
  $handler->display->display_options['relationships']['field_ref_conference_details_target_id']['field'] = 'field_ref_conference_details_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ref_conference_details_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Detail Page - Additional conferences sidebar */
  $handler = $view->new_display('panel_pane', 'Detail Page - Additional conferences sidebar', 'panel_pane_4');
  $handler->display->display_options['display_description'] = 'All but the active conference';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['id'] = 'field_ref_conference_venue_target_id';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['table'] = 'field_data_field_ref_conference_venue';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['field'] = 'field_ref_conference_venue_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Detail Pages (field_ref_conference_details) */
  $handler->display->display_options['arguments']['field_ref_conference_details_target_id']['id'] = 'field_ref_conference_details_target_id';
  $handler->display->display_options['arguments']['field_ref_conference_details_target_id']['table'] = 'field_data_field_ref_conference_details';
  $handler->display->display_options['arguments']['field_ref_conference_details_target_id']['field'] = 'field_ref_conference_details_target_id';
  $handler->display->display_options['arguments']['field_ref_conference_details_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ref_conference_details_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ref_conference_details_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ref_conference_details_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ref_conference_details_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ref_conference_details_target_id']['not'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'conference' => 'conference',
  );
  /* Filter criterion: Content: Date - end date (field_conference_date:value2) */
  $handler->display->display_options['filters']['field_conference_date_value2']['id'] = 'field_conference_date_value2';
  $handler->display->display_options['filters']['field_conference_date_value2']['table'] = 'field_data_field_conference_date';
  $handler->display->display_options['filters']['field_conference_date_value2']['field'] = 'field_conference_date_value2';
  $handler->display->display_options['filters']['field_conference_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_conference_date_value2']['default_date'] = 'now -1 day';
  $export['conference_navigation'] = $view;

  $view = new view();
  $view->name = 'conference_speakers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference Speakers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_session_speakers',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list session-speaker';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No sessions found.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['id'] = 'field_ref_session_track_target_id';
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['table'] = 'field_data_field_ref_session_track';
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['field'] = 'field_ref_session_track_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['id'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['table'] = 'field_data_field_ref_track_conference';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['field'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['relationship'] = 'field_ref_session_track_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_details_conference_node']['id'] = 'reverse_field_ref_details_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_details_conference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_details_conference_node']['field'] = 'reverse_field_ref_details_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_details_conference_node']['relationship'] = 'field_ref_track_conference_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['id'] = 'field_session_speakers_target_id';
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['field'] = 'field_session_speakers_target_id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time_1']['id'] = 'field_event_time_1';
  $handler->display->display_options['fields']['field_event_time_1']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_1']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['field_event_time_1']['settings'] = array(
    'format_type' => 'long_weekday_month_day_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Session Description';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Full Description';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_ref_session_track']['id'] = 'field_ref_session_track';
  $handler->display->display_options['fields']['field_ref_session_track']['table'] = 'field_data_field_ref_session_track';
  $handler->display->display_options['fields']['field_ref_session_track']['field'] = 'field_ref_session_track';
  $handler->display->display_options['fields']['field_ref_session_track']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_session_track']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['label'] = 'Time';
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'time_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Session Chair(s) */
  $handler->display->display_options['fields']['field_session_chairs']['id'] = 'field_session_chairs';
  $handler->display->display_options['fields']['field_session_chairs']['table'] = 'field_data_field_session_chairs';
  $handler->display->display_options['fields']['field_session_chairs']['field'] = 'field_session_chairs';
  $handler->display->display_options['fields']['field_session_chairs']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_chairs']['alter']['text'] = '<a href="/user/[field_session_chairs-target_id]/presenter">[field_session_chairs] </a>';
  $handler->display->display_options['fields']['field_session_chairs']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_chairs']['delta_offset'] = '0';
  /* Field: Content: Session Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_speakers']['alter']['text'] = '<a href="/user/[field_session_speakers-target_id]/presenter">[field_session_speakers] </a>';
  $handler->display->display_options['fields']['field_session_speakers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  /* Field: Content: Room / Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  /* Field: Content: Track Chair(s) */
  $handler->display->display_options['fields']['field_track_chairs']['id'] = 'field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['table'] = 'field_data_field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['field'] = 'field_track_chairs';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'session' => 'session',
  );
  /* Filter criterion: Content: Session Speaker(s) (field_session_speakers) */
  $handler->display->display_options['filters']['field_session_speakers_target_id']['id'] = 'field_session_speakers_target_id';
  $handler->display->display_options['filters']['field_session_speakers_target_id']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['filters']['field_session_speakers_target_id']['field'] = 'field_session_speakers_target_id';
  $handler->display->display_options['filters']['field_session_speakers_target_id']['operator'] = 'not empty';

  /* Display: Speakers */
  $handler = $view->new_display('panel_pane', 'Speakers', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_session_speakers_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_session_speakers_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '<a href="/user/[uid]/presenter">[picture] </a>';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'sc_140x140';
  /* Field: Content: Session Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_session_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_speakers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_speakers']['alter']['text'] = '<a href="/user/[field_session_speakers-target_id]/presenter">[picture]</a><a href="/user/[field_session_speakers-target_id]/presenter">[field_session_speakers] </a>';
  $handler->display->display_options['fields']['field_session_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_speakers']['element_wrapper_class'] = 'session-speaker';
  $handler->display->display_options['fields']['field_session_speakers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_speakers']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_speakers']['multi_type'] = 'ul';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_ref_session_track']['id'] = 'field_ref_session_track';
  $handler->display->display_options['fields']['field_ref_session_track']['table'] = 'field_data_field_ref_session_track';
  $handler->display->display_options['fields']['field_ref_session_track']['field'] = 'field_ref_session_track';
  $handler->display->display_options['fields']['field_ref_session_track']['label'] = '';
  $handler->display->display_options['fields']['field_ref_session_track']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ref_session_track']['alter']['text'] = '<span class="track-name">[field_ref_session_track]</span> <span class="track-chairs-label">Track Chair(s):</span>';
  $handler->display->display_options['fields']['field_ref_session_track']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_session_track']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time_1']['id'] = 'field_event_time_1';
  $handler->display->display_options['fields']['field_event_time_1']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Full Description';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_details_conference_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Speakers- Teaser */
  $handler = $view->new_display('panel_pane', 'Speakers- Teaser', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Speakers';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'session-speaker';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['id'] = 'field_ref_session_track_target_id';
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['table'] = 'field_data_field_ref_session_track';
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['field'] = 'field_ref_session_track_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['id'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['table'] = 'field_data_field_ref_track_conference';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['field'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['relationship'] = 'field_ref_session_track_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['id'] = 'field_session_speakers_target_id';
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['field'] = 'field_session_speakers_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['fields']['path_1']['label'] = 'Path to conference';
  $handler->display->display_options['fields']['path_1']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_session_speakers_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_session_speakers_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '<a href="/user/[uid]/presenter">[picture]</a>';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Field: Content: Session Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_session_speakers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_speakers']['alter']['text'] = '<a href="/user/[field_session_speakers-target_id]/presenter">[field_session_speakers]</a>';
  $handler->display->display_options['fields']['field_session_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_speakers']['element_wrapper_class'] = 'session-speaker';
  $handler->display->display_options['fields']['field_session_speakers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_speakers']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_session_speakers']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_speakers']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['conference_speakers'] = $view;

  $view = new view();
  $view->name = 'conference_teaser_blocks';
  $view->description = 'Conference landing page teaser blocks for tracks, workshops, etc.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference - Teaser Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tracks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['id'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['field'] = 'reverse_field_ref_schedule_conference_node';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_conference_workshops_page_target_id']['id'] = 'field_conference_workshops_page_target_id';
  $handler->display->display_options['relationships']['field_conference_workshops_page_target_id']['table'] = 'field_data_field_conference_workshops_page';
  $handler->display->display_options['relationships']['field_conference_workshops_page_target_id']['field'] = 'field_conference_workshops_page_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ref_conference_track']['id'] = 'field_ref_conference_track';
  $handler->display->display_options['fields']['field_ref_conference_track']['table'] = 'field_data_field_ref_conference_track';
  $handler->display->display_options['fields']['field_ref_conference_track']['field'] = 'field_ref_conference_track';
  $handler->display->display_options['fields']['field_ref_conference_track']['label'] = '';
  $handler->display->display_options['fields']['field_ref_conference_track']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<p><a class="view-schedule" href="[path]#session-schedule ">View All Tracks</a></p>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'conference' => 'conference',
  );

  /* Display: Conference Tracks Teaser */
  $handler = $view->new_display('panel_pane', 'Conference Tracks Teaser', 'panel_pane_1');

  /* Display: Conference Workshops Teaser */
  $handler = $view->new_display('panel_pane', 'Conference Workshops Teaser', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Workshops';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ref_conference_workshop']['id'] = 'field_ref_conference_workshop';
  $handler->display->display_options['fields']['field_ref_conference_workshop']['table'] = 'field_data_field_ref_conference_workshop';
  $handler->display->display_options['fields']['field_ref_conference_workshop']['field'] = 'field_ref_conference_workshop';
  $handler->display->display_options['fields']['field_ref_conference_workshop']['label'] = '';
  $handler->display->display_options['fields']['field_ref_conference_workshop']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_conference_workshops_page_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<p><a class="view-schedule" href="[path]">View All Workshops</a></p>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $export['conference_teaser_blocks'] = $view;

  return $export;
}
