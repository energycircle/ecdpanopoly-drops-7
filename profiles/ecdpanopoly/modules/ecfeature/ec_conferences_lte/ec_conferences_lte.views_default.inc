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
  $view->name = 'admin_conference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ADMIN - Conference';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ADMIN - Conference';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_conference_tracks_ref' => 'field_conference_tracks_ref',
    'field_ref_track_session' => 'field_ref_track_session',
    'field_ref_conference_details' => 'field_ref_conference_details',
    'field_event_sponsors_ref' => 'field_event_sponsors_ref',
    'field_ref_conference_venue' => 'field_ref_conference_venue',
    'field_conf_exhibitors' => 'field_conf_exhibitors',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conference_tracks_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_track_session' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_conference_details' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_sponsors_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_conference_venue' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conf_exhibitors' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['id'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['table'] = 'field_data_field_ref_track_conference';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['field'] = 'field_ref_track_conference_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_track_conference_node']['id'] = 'reverse_field_ref_track_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_track_conference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_track_conference_node']['field'] = 'reverse_field_ref_track_conference_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Conferences';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Conference Tracks */
  $handler->display->display_options['fields']['field_conference_tracks_ref']['id'] = 'field_conference_tracks_ref';
  $handler->display->display_options['fields']['field_conference_tracks_ref']['table'] = 'field_data_field_conference_tracks_ref';
  $handler->display->display_options['fields']['field_conference_tracks_ref']['field'] = 'field_conference_tracks_ref';
  $handler->display->display_options['fields']['field_conference_tracks_ref']['label'] = 'Tracks';
  $handler->display->display_options['fields']['field_conference_tracks_ref']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_conference_tracks_ref']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_conference_tracks_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_conference_tracks_ref']['multi_type'] = 'ul';
  /* Field: Content: Sessions */
  $handler->display->display_options['fields']['field_ref_track_session']['id'] = 'field_ref_track_session';
  $handler->display->display_options['fields']['field_ref_track_session']['table'] = 'field_data_field_ref_track_session';
  $handler->display->display_options['fields']['field_ref_track_session']['field'] = 'field_ref_track_session';
  $handler->display->display_options['fields']['field_ref_track_session']['relationship'] = 'reverse_field_ref_track_conference_node';
  $handler->display->display_options['fields']['field_ref_track_session']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_track_session']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ref_track_session']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_track_session']['multi_type'] = 'ul';
  /* Field: Content: Detail Pages */
  $handler->display->display_options['fields']['field_ref_conference_details']['id'] = 'field_ref_conference_details';
  $handler->display->display_options['fields']['field_ref_conference_details']['table'] = 'field_data_field_ref_conference_details';
  $handler->display->display_options['fields']['field_ref_conference_details']['field'] = 'field_ref_conference_details';
  $handler->display->display_options['fields']['field_ref_conference_details']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_conference_details']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_conference_details']['multi_type'] = 'ul';
  /* Field: Content: Event Sponsors */
  $handler->display->display_options['fields']['field_event_sponsors_ref']['id'] = 'field_event_sponsors_ref';
  $handler->display->display_options['fields']['field_event_sponsors_ref']['table'] = 'field_data_field_event_sponsors_ref';
  $handler->display->display_options['fields']['field_event_sponsors_ref']['field'] = 'field_event_sponsors_ref';
  $handler->display->display_options['fields']['field_event_sponsors_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_sponsors_ref']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_event_sponsors_ref']['settings'] = array(
    'view_mode' => 'grouped_teaser',
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_event_sponsors_ref']['delta_offset'] = '0';
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_ref_conference_venue']['id'] = 'field_ref_conference_venue';
  $handler->display->display_options['fields']['field_ref_conference_venue']['table'] = 'field_data_field_ref_conference_venue';
  $handler->display->display_options['fields']['field_ref_conference_venue']['field'] = 'field_ref_conference_venue';
  $handler->display->display_options['fields']['field_ref_conference_venue']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Exhibitors */
  $handler->display->display_options['fields']['field_conf_exhibitors']['id'] = 'field_conf_exhibitors';
  $handler->display->display_options['fields']['field_conf_exhibitors']['table'] = 'field_data_field_conf_exhibitors';
  $handler->display->display_options['fields']['field_conf_exhibitors']['field'] = 'field_conf_exhibitors';
  $handler->display->display_options['fields']['field_conf_exhibitors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conf_exhibitors']['settings'] = array(
    'link' => 0,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_conf_exhibitors']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/conference';
  $export['admin_conference'] = $view;

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
  $view->name = 'conference_documents';
  $view->description = 'Display a list of conference documents (File entities) on conference detail pages.';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Conference Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_file_conference_target_id']['id'] = 'field_ref_file_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_file_conference_target_id']['table'] = 'field_data_field_ref_file_conference';
  $handler->display->display_options['relationships']['field_ref_file_conference_target_id']['field'] = 'field_ref_file_conference_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_details_conference_node']['id'] = 'reverse_field_ref_details_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_details_conference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_details_conference_node']['field'] = 'reverse_field_ref_details_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_details_conference_node']['relationship'] = 'field_ref_file_conference_target_id';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filename']['link_to_file'] = FALSE;
  /* Field: File: File Description */
  $handler->display->display_options['fields']['field_file_description']['id'] = 'field_file_description';
  $handler->display->display_options['fields']['field_file_description']['table'] = 'field_data_field_file_description';
  $handler->display->display_options['fields']['field_file_description']['field'] = 'field_file_description';
  $handler->display->display_options['fields']['field_file_description']['label'] = '';
  $handler->display->display_options['fields']['field_file_description']['element_label_colon'] = FALSE;
  /* Field: File: Download link */
  $handler->display->display_options['fields']['download']['id'] = 'download';
  $handler->display->display_options['fields']['download']['table'] = 'file_managed';
  $handler->display->display_options['fields']['download']['field'] = 'download';
  $handler->display->display_options['fields']['download']['label'] = '';
  $handler->display->display_options['fields']['download']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['download']['alter']['text'] = '[filename]';
  $handler->display->display_options['fields']['download']['element_label_colon'] = FALSE;
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Content-This Conference';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['conference_documents'] = $view;

  $view = new view();
  $view->name = 'conference_files';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Conference Files';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_ref_file_conference',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_file_conference_target_id']['id'] = 'field_ref_file_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_file_conference_target_id']['table'] = 'field_data_field_ref_file_conference';
  $handler->display->display_options['relationships']['field_ref_file_conference_target_id']['field'] = 'field_ref_file_conference_target_id';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['filename']['element_type'] = '0';
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filename']['link_to_file'] = FALSE;
  /* Field: File: Conference document for */
  $handler->display->display_options['fields']['field_ref_file_conference']['id'] = 'field_ref_file_conference';
  $handler->display->display_options['fields']['field_ref_file_conference']['table'] = 'field_data_field_ref_file_conference';
  $handler->display->display_options['fields']['field_ref_file_conference']['field'] = 'field_ref_file_conference';
  $handler->display->display_options['fields']['field_ref_file_conference']['label'] = '';
  $handler->display->display_options['fields']['field_ref_file_conference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ref_file_conference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_file_conference']['settings'] = array(
    'link' => 0,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_file_conference']['delta_offset'] = '0';
  /* Field: File: Download link */
  $handler->display->display_options['fields']['download']['id'] = 'download';
  $handler->display->display_options['fields']['download']['table'] = 'file_managed';
  $handler->display->display_options['fields']['download']['field'] = 'download';
  $handler->display->display_options['fields']['download']['label'] = '';
  $handler->display->display_options['fields']['download']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['download']['alter']['text'] = '[filename] ';
  $handler->display->display_options['fields']['download']['element_label_colon'] = FALSE;
  /* Sort criterion: File: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['type']['field'] = 'type';

  /* Display: Conference Documents */
  $handler = $view->new_display('panel_pane', 'Conference Documents', 'panel_pane_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Conference End Date (field_conference_end_date) */
  $handler->display->display_options['filters']['field_conference_end_date_value']['id'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['filters']['field_conference_end_date_value']['field'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['relationship'] = 'field_ref_file_conference_target_id';
  $handler->display->display_options['filters']['field_conference_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_conference_end_date_value']['default_date'] = 'now -5 days';
  $handler->display->display_options['pane_category']['name'] = 'Content-This Conference';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['conference_files'] = $view;

  $view = new view();
  $view->name = 'conference_home_upcomming_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference - Home Upcoming Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[field_conference_type]';
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'conference' => 'conference',
  );

  /* Display: Upcoming Conferences */
  $handler = $view->new_display('panel_pane', 'Upcoming Conferences', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Conference End Date */
  $handler->display->display_options['fields']['field_conference_end_date']['id'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['field'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['alter']['text'] = 'to [field_conference_end_date]';
  $handler->display->display_options['fields']['field_conference_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_end_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Conference Start Date */
  $handler->display->display_options['fields']['field_conference_start_date']['id'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['field'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_start_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_start_date']['alter']['text'] = '[field_conference_start_date] [field_conference_end_date]';
  $handler->display->display_options['fields']['field_conference_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_start_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Conference Type */
  $handler->display->display_options['fields']['field_conference_type']['id'] = 'field_conference_type';
  $handler->display->display_options['fields']['field_conference_type']['table'] = 'field_data_field_conference_type';
  $handler->display->display_options['fields']['field_conference_type']['field'] = 'field_conference_type';
  $handler->display->display_options['fields']['field_conference_type']['label'] = '';
  $handler->display->display_options['fields']['field_conference_type']['alter']['text'] = ' | [field_conference_type]';
  $handler->display->display_options['fields']['field_conference_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Conference Type (field_conference_type) */
  $handler->display->display_options['sorts']['field_conference_type_tid']['id'] = 'field_conference_type_tid';
  $handler->display->display_options['sorts']['field_conference_type_tid']['table'] = 'field_data_field_conference_type';
  $handler->display->display_options['sorts']['field_conference_type_tid']['field'] = 'field_conference_type_tid';
  $handler->display->display_options['sorts']['field_conference_type_tid']['order'] = 'DESC';
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
  /* Filter criterion: Content: Conference End Date (field_conference_end_date) */
  $handler->display->display_options['filters']['field_conference_end_date_value']['id'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['filters']['field_conference_end_date_value']['field'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_conference_end_date_value']['default_date'] = 'now';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Upcoming Exhibitor Opportunities */
  $handler = $view->new_display('panel_pane', 'Upcoming Exhibitor Opportunities', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Exhibitor Opportunities';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Conference End Date */
  $handler->display->display_options['fields']['field_conference_end_date']['id'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['field'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['alter']['text'] = 'to [field_conference_end_date]';
  $handler->display->display_options['fields']['field_conference_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_end_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Conference Start Date */
  $handler->display->display_options['fields']['field_conference_start_date']['id'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['field'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_start_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_start_date']['alter']['text'] = '[field_conference_start_date] [field_conference_end_date]';
  $handler->display->display_options['fields']['field_conference_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_start_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Conference Type */
  $handler->display->display_options['fields']['field_conference_type']['id'] = 'field_conference_type';
  $handler->display->display_options['fields']['field_conference_type']['table'] = 'field_data_field_conference_type';
  $handler->display->display_options['fields']['field_conference_type']['field'] = 'field_conference_type';
  $handler->display->display_options['fields']['field_conference_type']['label'] = '';
  $handler->display->display_options['fields']['field_conference_type']['alter']['text'] = ' | [field_conference_type]';
  $handler->display->display_options['fields']['field_conference_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Conference Type (field_conference_type) */
  $handler->display->display_options['sorts']['field_conference_type_tid']['id'] = 'field_conference_type_tid';
  $handler->display->display_options['sorts']['field_conference_type_tid']['table'] = 'field_data_field_conference_type';
  $handler->display->display_options['sorts']['field_conference_type_tid']['field'] = 'field_conference_type_tid';
  $handler->display->display_options['sorts']['field_conference_type_tid']['order'] = 'DESC';
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
  /* Filter criterion: Content: Conference End Date (field_conference_end_date) */
  $handler->display->display_options['filters']['field_conference_end_date_value']['id'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['filters']['field_conference_end_date_value']['field'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_conference_end_date_value']['default_date'] = 'now';
  $export['conference_home_upcomming_events'] = $view;

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
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
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
  /* Field: Content: Conference End Date */
  $handler->display->display_options['fields']['field_conference_end_date']['id'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['field'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['alter']['text'] = 'to [field_conference_end_date]';
  $handler->display->display_options['fields']['field_conference_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_end_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Conference Start Date */
  $handler->display->display_options['fields']['field_conference_start_date']['id'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['field'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_start_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_start_date']['alter']['text'] = '[field_conference_start_date] [field_conference_end_date]';
  $handler->display->display_options['fields']['field_conference_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_start_date']['settings'] = array(
    'format_type' => 'panopoly_day',
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
  /* Sort criterion: Content: Conference Start Date (field_conference_start_date) */
  $handler->display->display_options['sorts']['field_conference_start_date_value']['id'] = 'field_conference_start_date_value';
  $handler->display->display_options['sorts']['field_conference_start_date_value']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['sorts']['field_conference_start_date_value']['field'] = 'field_conference_start_date_value';
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
  /* Filter criterion: Content: Conference End Date (field_conference_end_date) */
  $handler->display->display_options['filters']['field_conference_end_date_value']['id'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['filters']['field_conference_end_date_value']['field'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_conference_end_date_value']['default_date'] = 'now -1 day';

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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_conference_date_value2']['id'] = 'field_conference_date_value2';
  $handler->display->display_options['filters']['field_conference_date_value2']['table'] = 'field_data_field_conference_date';
  $handler->display->display_options['filters']['field_conference_date_value2']['field'] = 'field_conference_date_value2';
  $handler->display->display_options['filters']['field_conference_date_value2']['operator'] = '>=';
  $export['conference_navigation'] = $view;

  $view = new view();
  $view->name = 'conference_past';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference - Past';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_conference_type',
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Conference Type */
  $handler->display->display_options['fields']['field_conference_type']['id'] = 'field_conference_type';
  $handler->display->display_options['fields']['field_conference_type']['table'] = 'field_data_field_conference_type';
  $handler->display->display_options['fields']['field_conference_type']['field'] = 'field_conference_type';
  $handler->display->display_options['fields']['field_conference_type']['label'] = '';
  $handler->display->display_options['fields']['field_conference_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_type']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Conference Type (field_conference_type) */
  $handler->display->display_options['sorts']['field_conference_type_tid']['id'] = 'field_conference_type_tid';
  $handler->display->display_options['sorts']['field_conference_type_tid']['table'] = 'field_data_field_conference_type';
  $handler->display->display_options['sorts']['field_conference_type_tid']['field'] = 'field_conference_type_tid';
  $handler->display->display_options['sorts']['field_conference_type_tid']['order'] = 'DESC';
  /* Sort criterion: Content: Conference Start Date (field_conference_start_date) */
  $handler->display->display_options['sorts']['field_conference_start_date_value']['id'] = 'field_conference_start_date_value';
  $handler->display->display_options['sorts']['field_conference_start_date_value']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['sorts']['field_conference_start_date_value']['field'] = 'field_conference_start_date_value';
  $handler->display->display_options['sorts']['field_conference_start_date_value']['order'] = 'DESC';
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
  /* Filter criterion: Content: Conference End Date (field_conference_end_date) */
  $handler->display->display_options['filters']['field_conference_end_date_value']['id'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['filters']['field_conference_end_date_value']['field'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_conference_end_date_value']['default_date'] = 'now';

  /* Display: Past Conferences */
  $handler = $view->new_display('panel_pane', 'Past Conferences', 'panel_pane_1');
  $export['conference_past'] = $view;

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
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
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

  $view = new view();
  $view->name = 'exhibitors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_org';
  $view->human_name = 'Exhibitors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Exhibitors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_conf_exhibitors_node']['id'] = 'reverse_field_conf_exhibitors_node';
  $handler->display->display_options['relationships']['reverse_field_conf_exhibitors_node']['table'] = 'redhen_org';
  $handler->display->display_options['relationships']['reverse_field_conf_exhibitors_node']['field'] = 'reverse_field_conf_exhibitors_node';
  /* Field: Organization Revisions: Organization Name */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'redhen_org_revision';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['element_type'] = 'div';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Sort criterion: Organization: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_conf_exhibitors_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Conf Exhibitors */
  $handler = $view->new_display('panel_pane', 'Conf Exhibitors', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'label' => 'label',
    'field_website' => 'field_website',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = 'Visit us at';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = '<a href="[field_website-url]" target="_blank">[field_website-url]</a>';
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  /* Field: Content: Exhibitors */
  $handler->display->display_options['fields']['field_conf_exhibitors']['id'] = 'field_conf_exhibitors';
  $handler->display->display_options['fields']['field_conf_exhibitors']['table'] = 'field_data_field_conf_exhibitors';
  $handler->display->display_options['fields']['field_conf_exhibitors']['field'] = 'field_conf_exhibitors';
  $handler->display->display_options['fields']['field_conf_exhibitors']['relationship'] = 'reverse_field_conf_exhibitors_node';
  $handler->display->display_options['fields']['field_conf_exhibitors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conf_exhibitors']['settings'] = array(
    'link' => 0,
    'field_multiple_limit' => '1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_conf_exhibitors']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_conf_exhibitors']['delta_offset'] = '0';

  /* Display: Exhibitors List with Website */
  $handler = $view->new_display('panel_pane', 'Exhibitors List with Website', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'label' => 'label',
    'field_website' => 'field_website',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_exhibitors_at_target_id']['id'] = 'field_exhibitors_at_target_id';
  $handler->display->display_options['relationships']['field_exhibitors_at_target_id']['table'] = 'field_data_field_exhibitors_at';
  $handler->display->display_options['relationships']['field_exhibitors_at_target_id']['field'] = 'field_exhibitors_at_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_details_conference_node']['id'] = 'reverse_field_ref_details_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_details_conference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_details_conference_node']['field'] = 'reverse_field_ref_details_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_details_conference_node']['relationship'] = 'field_exhibitors_at_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Organization Revisions: Organization Name */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'redhen_org_revision';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = 'Exhibitor';
  $handler->display->display_options['fields']['label']['element_type'] = 'div';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = 'Visit us at';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = '<a href="[field_website-url]" target="_blank">[field_website-url]</a>';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Organization Revisions: Organization Name */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'redhen_org_revision';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
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
  $export['exhibitors'] = $view;

  $view = new view();
  $view->name = 'sponsors_by_term';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Sponsors by Term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['optionset'] = 'sidebar_slides';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Field collection item using Sponsor Type */
  $handler->display->display_options['relationships']['reverse_field_conf_sponsor_type_field_collection_item']['id'] = 'reverse_field_conf_sponsor_type_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_conf_sponsor_type_field_collection_item']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_conf_sponsor_type_field_collection_item']['field'] = 'reverse_field_conf_sponsor_type_field_collection_item';
  /* Relationship: Field collection item: Entity with the Event Sponsors (field_event_sponsors_ref) */
  $handler->display->display_options['relationships']['field_event_sponsors_ref_node']['id'] = 'field_event_sponsors_ref_node';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_node']['field'] = 'field_event_sponsors_ref_node';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_node']['relationship'] = 'reverse_field_conf_sponsor_type_field_collection_item';
  /* Relationship: Content: Event Sponsors (field_event_sponsors_ref) */
  $handler->display->display_options['relationships']['field_event_sponsors_ref_value']['id'] = 'field_event_sponsors_ref_value';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_value']['table'] = 'field_data_field_event_sponsors_ref';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_value']['field'] = 'field_event_sponsors_ref_value';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_value']['relationship'] = 'field_event_sponsors_ref_node';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_conf_sponsor_target_id']['id'] = 'field_conf_sponsor_target_id';
  $handler->display->display_options['relationships']['field_conf_sponsor_target_id']['table'] = 'field_data_field_conf_sponsor';
  $handler->display->display_options['relationships']['field_conf_sponsor_target_id']['field'] = 'field_conf_sponsor_target_id';
  $handler->display->display_options['relationships']['field_conf_sponsor_target_id']['relationship'] = 'reverse_field_conf_sponsor_type_field_collection_item';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['relationship'] = 'field_conf_sponsor_target_id';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  /* Field: Field: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['relationship'] = 'field_conf_sponsor_target_id';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '<a target="_blank" href="[field_website]">[field_logo]</a>';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 's_300',
    'image_link' => '',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_event_sponsors_ref_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'sponsor_types' => 'sponsor_types',
  );

  /* Display: Sponsors - Slides */
  $handler = $view->new_display('panel_pane', 'Sponsors - Slides', 'panel_pane_1');
  $export['sponsors_by_term'] = $view;

  $view = new view();
  $view->name = 'sponsors_by_term_grouped';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Sponsors by Term - Grouped';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Field collection item using Sponsor Type */
  $handler->display->display_options['relationships']['reverse_field_conf_sponsor_type_field_collection_item']['id'] = 'reverse_field_conf_sponsor_type_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_conf_sponsor_type_field_collection_item']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_conf_sponsor_type_field_collection_item']['field'] = 'reverse_field_conf_sponsor_type_field_collection_item';
  /* Relationship: Field collection item: Entity with the Event Sponsors (field_event_sponsors_ref) */
  $handler->display->display_options['relationships']['field_event_sponsors_ref_node']['id'] = 'field_event_sponsors_ref_node';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_node']['field'] = 'field_event_sponsors_ref_node';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_node']['relationship'] = 'reverse_field_conf_sponsor_type_field_collection_item';
  /* Relationship: Content: Event Sponsors (field_event_sponsors_ref) */
  $handler->display->display_options['relationships']['field_event_sponsors_ref_value']['id'] = 'field_event_sponsors_ref_value';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_value']['table'] = 'field_data_field_event_sponsors_ref';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_value']['field'] = 'field_event_sponsors_ref_value';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_value']['relationship'] = 'field_event_sponsors_ref_node';
  $handler->display->display_options['relationships']['field_event_sponsors_ref_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_conf_sponsor_target_id']['id'] = 'field_conf_sponsor_target_id';
  $handler->display->display_options['relationships']['field_conf_sponsor_target_id']['table'] = 'field_data_field_conf_sponsor';
  $handler->display->display_options['relationships']['field_conf_sponsor_target_id']['field'] = 'field_conf_sponsor_target_id';
  $handler->display->display_options['relationships']['field_conf_sponsor_target_id']['relationship'] = 'reverse_field_conf_sponsor_type_field_collection_item';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['relationship'] = 'field_conf_sponsor_target_id';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  /* Field: Field: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['relationship'] = 'field_conf_sponsor_target_id';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '<a class="sponsor-[name]" target="_blank" href="[field_website]">[field_logo]</a>';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 's_300',
    'image_link' => '',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_event_sponsors_ref_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'sponsor_types' => 'sponsor_types',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['value'] = 'Host Sponsor';
  $handler->display->display_options['filters']['name']['group'] = 2;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['value'] = 'Platinum Sponsors';
  $handler->display->display_options['filters']['name_1']['group'] = 2;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['value'] = 'Gold Sponsors';
  $handler->display->display_options['filters']['name_2']['group'] = 2;

  /* Display: Sponsors - Host/Gold/Platinum - Slides */
  $handler = $view->new_display('panel_pane', 'Sponsors - Host/Gold/Platinum - Slides', 'panel_pane_1');

  /* Display: Sponsors - Listing Only */
  $handler = $view->new_display('panel_pane', 'Sponsors - Listing Only', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Organization: Organization Name */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'redhen_org';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'field_conf_sponsor_target_id';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['relationship'] = 'field_conf_sponsor_target_id';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = '<a class="sponsor-[name]" target="_blank" href="[field_website]">[label]</a>';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  /* Field: Field: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['relationship'] = 'field_conf_sponsor_target_id';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '<a class="sponsor-[name]" target="_blank" href="[field_website]">[field_logo]</a>';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 's_300',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'sponsor_types' => 'sponsor_types',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = '!=';
  $handler->display->display_options['filters']['name']['value'] = 'Host Sponsor';
  $handler->display->display_options['filters']['name']['group'] = 2;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['operator'] = '!=';
  $handler->display->display_options['filters']['name_1']['value'] = 'Platinum Sponsor';
  $handler->display->display_options['filters']['name_1']['group'] = 2;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['operator'] = '!=';
  $handler->display->display_options['filters']['name_2']['value'] = 'Gold Sponsor';
  $handler->display->display_options['filters']['name_2']['group'] = 2;
  $export['sponsors_by_term_grouped'] = $view;

  $view = new view();
  $view->name = 'sponsors_partners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_org';
  $view->human_name = 'Sponsors & Partners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = '';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Draggableviews: Organization */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'redhen_org';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  /* Field: Field: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 's_140x140',
    'image_link' => 'content',
  );
  /* Field: Organization: Organization Name */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'redhen_org';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Filter criterion: Organization: Partner (field_partner) */
  $handler->display->display_options['filters']['field_partner_value']['id'] = 'field_partner_value';
  $handler->display->display_options['filters']['field_partner_value']['table'] = 'field_data_field_partner';
  $handler->display->display_options['filters']['field_partner_value']['field'] = 'field_partner_value';
  $handler->display->display_options['filters']['field_partner_value']['value'] = array(
    'sustainingpartner' => 'sustainingpartner',
  );

  /* Display: Sustaining Partners Strip */
  $handler = $view->new_display('panel_pane', 'Sustaining Partners Strip', 'panel_pane_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'ecdefault';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 's_140',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'sponsors_partners:panel_pane_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;

  /* Display: Order Sustaining Partners */
  $handler = $view->new_display('panel_pane', 'Order Sustaining Partners', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_logo' => 'field_logo',
    'label' => 'label',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_logo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Home Who We Are Logos */
  $handler = $view->new_display('panel_pane', 'Home Who We Are Logos', 'panel_pane_3');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Field: Contact Bio */
  $handler->display->display_options['fields']['field_contact_bio']['id'] = 'field_contact_bio';
  $handler->display->display_options['fields']['field_contact_bio']['table'] = 'field_data_field_contact_bio';
  $handler->display->display_options['fields']['field_contact_bio']['field'] = 'field_contact_bio';
  $handler->display->display_options['fields']['field_contact_bio']['label'] = '';
  $handler->display->display_options['fields']['field_contact_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Organization: Organization Name */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'redhen_org';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Organization: Organization ID */
  $handler->display->display_options['filters']['org_id']['id'] = 'org_id';
  $handler->display->display_options['filters']['org_id']['table'] = 'redhen_org';
  $handler->display->display_options['filters']['org_id']['field'] = 'org_id';
  $handler->display->display_options['filters']['org_id']['value']['value'] = '170';
  $handler->display->display_options['filters']['org_id']['group'] = 1;
  /* Filter criterion: Organization: Organization ID */
  $handler->display->display_options['filters']['org_id_1']['id'] = 'org_id_1';
  $handler->display->display_options['filters']['org_id_1']['table'] = 'redhen_org';
  $handler->display->display_options['filters']['org_id_1']['field'] = 'org_id';
  $handler->display->display_options['filters']['org_id_1']['value']['value'] = '5';
  $handler->display->display_options['filters']['org_id_1']['group'] = 1;

  /* Display: Content pane 4 */
  $handler = $view->new_display('panel_pane', 'Content pane 4', 'panel_pane_4');

  /* Display: Sustaining Partners Grid */
  $handler = $view->new_display('panel_pane', 'Sustaining Partners Grid', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Thank You, Sustaining Partners';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'ecdefault';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '5';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 's_140',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'sponsors_partners:panel_pane_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $export['sponsors_partners'] = $view;

  $view = new view();
  $view->name = 'upcoming_conferences_teasers';
  $view->description = 'Sidebar navigation for major conferences';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming Conferences Teasers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_conference_date']['id'] = 'field_conference_date';
  $handler->display->display_options['fields']['field_conference_date']['table'] = 'field_data_field_conference_date';
  $handler->display->display_options['fields']['field_conference_date']['field'] = 'field_conference_date';
  $handler->display->display_options['fields']['field_conference_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_date']['element_label_colon'] = FALSE;
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
  /* Sort criterion: Content: Conference Start Date (field_conference_start_date) */
  $handler->display->display_options['sorts']['field_conference_start_date_value']['id'] = 'field_conference_start_date_value';
  $handler->display->display_options['sorts']['field_conference_start_date_value']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['sorts']['field_conference_start_date_value']['field'] = 'field_conference_start_date_value';
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
  /* Filter criterion: Content: Conference Type (field_conference_type) */
  $handler->display->display_options['filters']['field_conference_type_tid']['id'] = 'field_conference_type_tid';
  $handler->display->display_options['filters']['field_conference_type_tid']['table'] = 'field_data_field_conference_type';
  $handler->display->display_options['filters']['field_conference_type_tid']['field'] = 'field_conference_type_tid';
  $handler->display->display_options['filters']['field_conference_type_tid']['value'] = array(
    47 => '47',
  );
  $handler->display->display_options['filters']['field_conference_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_conference_type_tid']['vocabulary'] = 'conferences_types';
  /* Filter criterion: Content: Conference End Date (field_conference_end_date) */
  $handler->display->display_options['filters']['field_conference_end_date_value']['id'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['filters']['field_conference_end_date_value']['field'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_conference_end_date_value']['default_date'] = 'now';

  /* Display: Upcoming National Conferences */
  $handler = $view->new_display('panel_pane', 'Upcoming National Conferences', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming National Conference';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['id'] = 'field_ref_conference_venue_target_id';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['table'] = 'field_data_field_ref_conference_venue';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['field'] = 'field_ref_conference_venue_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Conference End Date */
  $handler->display->display_options['fields']['field_conference_end_date']['id'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['field'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['alter']['text'] = 'to [field_conference_end_date]';
  $handler->display->display_options['fields']['field_conference_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_end_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Conference Start Date */
  $handler->display->display_options['fields']['field_conference_start_date']['id'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['field'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_start_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_start_date']['alter']['text'] = '[field_conference_start_date] [field_conference_end_date]';
  $handler->display->display_options['fields']['field_conference_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_start_date']['settings'] = array(
    'format_type' => 'panopoly_day',
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
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'button';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';

  /* Display: Upcoming Regional Conferences */
  $handler = $view->new_display('panel_pane', 'Upcoming Regional Conferences', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Regional Conferences';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['id'] = 'field_ref_conference_venue_target_id';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['table'] = 'field_data_field_ref_conference_venue';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['field'] = 'field_ref_conference_venue_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Conference End Date */
  $handler->display->display_options['fields']['field_conference_end_date']['id'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['field'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['alter']['text'] = 'to [field_conference_end_date]';
  $handler->display->display_options['fields']['field_conference_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_end_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Conference Start Date */
  $handler->display->display_options['fields']['field_conference_start_date']['id'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['field'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_start_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_start_date']['alter']['text'] = '[field_conference_start_date] [field_conference_end_date]';
  $handler->display->display_options['fields']['field_conference_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_start_date']['settings'] = array(
    'format_type' => 'panopoly_day',
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
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'button';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
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
  /* Filter criterion: Content: Conference Type (field_conference_type) */
  $handler->display->display_options['filters']['field_conference_type_tid']['id'] = 'field_conference_type_tid';
  $handler->display->display_options['filters']['field_conference_type_tid']['table'] = 'field_data_field_conference_type';
  $handler->display->display_options['filters']['field_conference_type_tid']['field'] = 'field_conference_type_tid';
  $handler->display->display_options['filters']['field_conference_type_tid']['value'] = array(
    46 => '46',
  );
  $handler->display->display_options['filters']['field_conference_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_conference_type_tid']['vocabulary'] = 'conferences_types';
  /* Filter criterion: Content: Conference End Date (field_conference_end_date) */
  $handler->display->display_options['filters']['field_conference_end_date_value']['id'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['filters']['field_conference_end_date_value']['field'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_conference_end_date_value']['default_date'] = 'now';

  /* Display: Featured on Home Page */
  $handler = $view->new_display('panel_pane', 'Featured on Home Page', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['id'] = 'field_ref_conference_venue_target_id';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['table'] = 'field_data_field_ref_conference_venue';
  $handler->display->display_options['relationships']['field_ref_conference_venue_target_id']['field'] = 'field_ref_conference_venue_target_id';
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
  /* Field: Content: Conference End Date */
  $handler->display->display_options['fields']['field_conference_end_date']['id'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['field'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['alter']['text'] = 'to [field_conference_end_date]';
  $handler->display->display_options['fields']['field_conference_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_end_date']['settings'] = array(
    'format_type' => 'month_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Conference Start Date */
  $handler->display->display_options['fields']['field_conference_start_date']['id'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['field'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_conference_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_start_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_start_date']['alter']['text'] = '[field_conference_start_date] [field_conference_end_date]';
  $handler->display->display_options['fields']['field_conference_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_start_date']['settings'] = array(
    'format_type' => 'month_day',
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
  $handler->display->display_options['fields']['field_ref_conference_venue']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_venue_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_venue_address_locality']['alter']['text'] = '[field_venue_address_locality]';
  $handler->display->display_options['fields']['field_venue_address_locality']['element_label_colon'] = FALSE;
  /* Field: Content: External Registration Link */
  $handler->display->display_options['fields']['field_event_registration_link']['id'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['table'] = 'field_data_field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['field'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_registration_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_registration_link']['alter']['text'] = '[title]<br>
[field_conference_start_date] | [field_ref_conference_venue] <br>
<p class="button"><a class="register" target="_blank" href="[field_event_registration_link-url]">Register Now</a></p>';
  $handler->display->display_options['fields']['field_event_registration_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_registration_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_registration_link']['type'] = 'link_plain';
  /* Field: Content: Homepage Slide for this Conference */
  $handler->display->display_options['fields']['field_conference_slides']['id'] = 'field_conference_slides';
  $handler->display->display_options['fields']['field_conference_slides']['table'] = 'field_data_field_conference_slides';
  $handler->display->display_options['fields']['field_conference_slides']['field'] = 'field_conference_slides';
  $handler->display->display_options['fields']['field_conference_slides']['label'] = '';
  $handler->display->display_options['fields']['field_conference_slides']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_slides']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_conference_slides']['settings'] = array(
    'image_style' => 'sc_1180x590',
    'image_link' => '',
    'field_multiple_limit' => '1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_conference_slides']['delta_offset'] = '0';
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
  /* Filter criterion: Content: Conference End Date (field_conference_end_date) */
  $handler->display->display_options['filters']['field_conference_end_date_value']['id'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['filters']['field_conference_end_date_value']['field'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_conference_end_date_value']['default_date'] = 'now';
  $export['upcoming_conferences_teasers'] = $view;

  $view = new view();
  $view->name = 'venue';
  $view->description = 'Show the venue for a conference or event';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Venue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_venue_conference_target_id']['id'] = 'field_ref_venue_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_venue_conference_target_id']['table'] = 'field_data_field_ref_venue_conference';
  $handler->display->display_options['relationships']['field_ref_venue_conference_target_id']['field'] = 'field_ref_venue_conference_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Venue Address */
  $handler->display->display_options['fields']['field_venue_address']['id'] = 'field_venue_address';
  $handler->display->display_options['fields']['field_venue_address']['table'] = 'field_data_field_venue_address';
  $handler->display->display_options['fields']['field_venue_address']['field'] = 'field_venue_address';
  $handler->display->display_options['fields']['field_venue_address']['label'] = '';
  $handler->display->display_options['fields']['field_venue_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_venue_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_venue_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ref_venue_conference_target_id';
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
    'venue' => 'venue',
  );

  /* Display: Venue */
  $handler = $view->new_display('panel_pane', 'Venue', 'panel_pane_1');
  $export['venue'] = $view;

  return $export;
}
