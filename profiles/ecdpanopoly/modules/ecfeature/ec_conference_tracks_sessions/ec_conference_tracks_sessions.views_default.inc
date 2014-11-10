<?php
/**
 * @file
 * ec_conference_tracks_sessions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_conference_tracks_sessions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'conference_featured_session';
  $view->description = 'Display a session on the conference landing page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference - Featured Session';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Session';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['id'] = 'field_ref_session_track_target_id';
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['table'] = 'field_data_field_ref_session_track';
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['field'] = 'field_ref_session_track_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['id'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['table'] = 'field_data_field_ref_track_conference';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['field'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['relationship'] = 'field_ref_session_track_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Session Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_session_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_speakers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Sessions Schedule Page */
  $handler->display->display_options['fields']['field_conference_sessions_page']['id'] = 'field_conference_sessions_page';
  $handler->display->display_options['fields']['field_conference_sessions_page']['table'] = 'field_data_field_conference_sessions_page';
  $handler->display->display_options['fields']['field_conference_sessions_page']['field'] = 'field_conference_sessions_page';
  $handler->display->display_options['fields']['field_conference_sessions_page']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['fields']['field_conference_sessions_page']['label'] = '';
  $handler->display->display_options['fields']['field_conference_sessions_page']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_sessions_page']['alter']['text'] = '<p><a class="view-schedule" href="/node/[field_conference_sessions_page-target_id]">View All Sessions</a></p>';
  $handler->display->display_options['fields']['field_conference_sessions_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_sessions_page']['settings'] = array(
    'link' => 1,
  );
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
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    11 => 0,
  );

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
  $handler->display->display_options['inherit_panels_path'] = '0';
  $export['conference_featured_session'] = $view;

  $view = new view();
  $view->name = 'conference_schedule_filter_sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference Schedule - Filter Sessions';
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
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_time_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_event_time_1' => 'field_event_time_1',
    'title' => 'title',
    'body' => 'title',
    'field_ref_session_track' => 'field_ref_session_track',
    'field_event_time' => 'field_event_time',
    'field_session_chairs' => 'field_session_chairs',
    'field_session_speakers' => 'field_session_speakers',
    'field_event_location' => 'field_event_location',
    'field_track_chairs' => 'field_session_chairs',
    'term_node_tid' => 'term_node_tid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_time_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_session_track' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_chairs' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_speakers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_track_chairs' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
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
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['id'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['field'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['relationship'] = 'field_ref_track_conference_target_id';
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
  /* Sort criterion: Content: Event Time -  start date (field_event_time) */
  $handler->display->display_options['sorts']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['sorts']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['sorts']['field_event_time_value']['field'] = 'field_event_time_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_ref_session_track_target_id';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_schedule_conference_node';
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
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Filter by Areas of Focus';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'focus';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'areas_of_focus';

  /* Display: Filter Sessions - Results */
  $handler = $view->new_display('panel_pane', 'Filter Sessions - Results', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_ref_session_track']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ref_session_track']['alter']['text'] = '<span class="track-name">[field_ref_session_track]</span> <span class="track-chairs-label">Track Chair(s):</span>';
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
  $handler->display->display_options['fields']['field_session_chairs']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_chairs']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_chairs']['alter']['text'] = '<span class="session-chair-label">Session Chair: </span><a href="/user/[field_session_chairs-target_id]/presenter">[field_session_chairs] </a>';
  $handler->display->display_options['fields']['field_session_chairs']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_chairs']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_chairs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_chairs']['multi_type'] = 'ul';
  /* Field: Content: Session Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_speakers']['alter']['text'] = '<span class="session-speaker-label">Session Speaker: </span><a href="/user/[field_session_speakers-target_id]/presenter">[field_session_speakers] </a>';
  $handler->display->display_options['fields']['field_session_speakers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_speakers']['multi_type'] = 'ul';
  /* Field: Content: Room / Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  /* Field: Content: Track Chair(s) */
  $handler->display->display_options['fields']['field_track_chairs']['id'] = 'field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['table'] = 'field_data_field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['field'] = 'field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['relationship'] = 'field_ref_session_track_target_id';
  $handler->display->display_options['fields']['field_track_chairs']['label'] = '';
  $handler->display->display_options['fields']['field_track_chairs']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_track_chairs']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_track_chairs']['alter']['text'] = 'Track chair: <a href="/user/[field_track_chairs-target_id]/presenter">[field_track_chairs]</a>';
  $handler->display->display_options['fields']['field_track_chairs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_track_chairs']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_track_chairs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_track_chairs']['multi_type'] = 'ul';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Areas of Focus';
  $handler->display->display_options['fields']['term_node_tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '<p class="focus-[term_node_tid-tid]">[term_node_tid-name]</p>';
  $handler->display->display_options['fields']['term_node_tid']['element_type'] = 'p';
  $handler->display->display_options['fields']['term_node_tid']['separator'] = ' ';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'article_types' => 0,
    'board_or_committee_types' => 0,
    'event_types' => 0,
    'forums' => 0,
    'slide_types' => 0,
    'sponsor_types' => 0,
    'tags' => 0,
    'areas_of_focus' => 0,
    'award_types' => 0,
    'conference_detail_page_types' => 0,
    'document_types' => 0,
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:cer.cer_bidirectional',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Filter Sessions - Filter */
  $handler = $view->new_display('panel_pane', 'Filter Sessions - Filter', 'panel_pane_2');
  $handler->display->display_options['exposed_block'] = TRUE;
  $export['conference_schedule_filter_sessions'] = $view;

  $view = new view();
  $view->name = 'conference_schedule_filter_workshops';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference Schedule - Filter Workshops';
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
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_time',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_event_time' => 'field_event_time',
    'title' => 'title',
    'body' => 'title',
    'field_event_time_1' => 'field_event_time_1',
    'field_workshop_presenter' => 'field_workshop_presenter',
    'field_event_location' => 'field_event_location',
    'term_node_tid' => 'term_node_tid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_time_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_workshop_presenter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No workshops found. Try another search.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_ref_workshop_conference_target_id']['id'] = 'field_ref_workshop_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_workshop_conference_target_id']['table'] = 'field_data_field_ref_workshop_conference';
  $handler->display->display_options['relationships']['field_ref_workshop_conference_target_id']['field'] = 'field_ref_workshop_conference_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['id'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['field'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['relationship'] = 'field_ref_workshop_conference_target_id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'long_weekday_month_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Workshop';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Full Description';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time_1']['id'] = 'field_event_time_1';
  $handler->display->display_options['fields']['field_event_time_1']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['label'] = 'Time';
  $handler->display->display_options['fields']['field_event_time_1']['settings'] = array(
    'format_type' => 'time_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_workshop_presenter']['id'] = 'field_workshop_presenter';
  $handler->display->display_options['fields']['field_workshop_presenter']['table'] = 'field_data_field_workshop_presenter';
  $handler->display->display_options['fields']['field_workshop_presenter']['field'] = 'field_workshop_presenter';
  /* Field: Content: Room / Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
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
    'workshop' => 'workshop',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Filter by Areas of Focus';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'focus';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'areas_of_focus';

  /* Display: Schedule - Filter Workshops */
  $handler = $view->new_display('panel_pane', 'Schedule - Filter Workshops', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'long_weekday_month_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Workshop';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Full Description';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time_1']['id'] = 'field_event_time_1';
  $handler->display->display_options['fields']['field_event_time_1']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['label'] = 'Time';
  $handler->display->display_options['fields']['field_event_time_1']['settings'] = array(
    'format_type' => 'time_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_workshop_presenter']['id'] = 'field_workshop_presenter';
  $handler->display->display_options['fields']['field_workshop_presenter']['table'] = 'field_data_field_workshop_presenter';
  $handler->display->display_options['fields']['field_workshop_presenter']['field'] = 'field_workshop_presenter';
  $handler->display->display_options['fields']['field_workshop_presenter']['label'] = 'Workshop Speaker(s)';
  $handler->display->display_options['fields']['field_workshop_presenter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_workshop_presenter']['alter']['text'] = '<span class="workshop-speaker-label">Workshop Speaker: </span><a href="/user/[field_workshop_presenter-target_id]/presenter">[field_workshop_presenter]</a>';
  /* Field: Content: Room / Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Areas of Focus';
  $handler->display->display_options['fields']['term_node_tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '<p class="focus-[term_node_tid-tid]">[term_node_tid-name]</p>';
  $handler->display->display_options['fields']['term_node_tid']['element_type'] = 'p';
  $handler->display->display_options['fields']['term_node_tid']['separator'] = '';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'article_types' => 0,
    'board_or_committee_types' => 0,
    'event_types' => 0,
    'forums' => 0,
    'slide_types' => 0,
    'sponsor_types' => 0,
    'tags' => 0,
    'areas_of_focus' => 0,
    'award_types' => 0,
    'conference_detail_page_types' => 0,
    'document_types' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['conference_schedule_filter_workshops'] = $view;

  $view = new view();
  $view->name = 'conference_schedule_sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference Schedule - Sessions';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_time_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_event_time_1' => 'field_event_time_1',
    'title' => 'title',
    'body' => 'title',
    'field_ref_session_track' => 'field_ref_session_track',
    'field_event_time' => 'field_event_time',
    'field_session_chairs' => 'field_session_chairs',
    'field_session_speakers' => 'field_session_speakers',
    'field_event_location' => 'field_event_location',
    'field_track_chairs' => 'field_ref_session_track',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_time_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_session_track' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_chairs' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_speakers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_track_chairs' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a name="session-schedule"></a>
<h2>Session Schedule</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['id'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['field'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['relationship'] = 'field_ref_track_conference_target_id';
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
  /* Sort criterion: Content: Event Time -  start date (field_event_time) */
  $handler->display->display_options['sorts']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['sorts']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['sorts']['field_event_time_value']['field'] = 'field_event_time_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_ref_session_track_target_id';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_schedule_conference_node';
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_ref_session_track']['alter']['text'] = '<span class="track-name">[field_ref_session_track]</span> <span class="track-chairs-label">Track Chair(s):</span>';
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
  $handler->display->display_options['fields']['field_session_chairs']['alter']['text'] = '<span class="session-chair-label">Session Chair: </span><a href="/user/[field_session_chairs-target_id]/presenter">[field_session_chairs] </a>';
  $handler->display->display_options['fields']['field_session_chairs']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_chairs']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_chairs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_chairs']['multi_type'] = 'ul';
  /* Field: Content: Session Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_speakers']['alter']['text'] = '<span class="session-speaker-label">Session Speaker: </span><a href="/user/[field_session_speakers-target_id]/presenter">[field_session_speakers] </a>';
  $handler->display->display_options['fields']['field_session_speakers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_speakers']['multi_type'] = 'ul';
  /* Field: Content: Room / Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  /* Field: Content: Track Chair(s) */
  $handler->display->display_options['fields']['field_track_chairs']['id'] = 'field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['table'] = 'field_data_field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['field'] = 'field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['relationship'] = 'field_ref_session_track_target_id';
  $handler->display->display_options['fields']['field_track_chairs']['label'] = '';
  $handler->display->display_options['fields']['field_track_chairs']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_track_chairs']['alter']['text'] = 'Track chair: <a href="/user/[field_track_chairs-target_id]/presenter">[field_track_chairs]</a>';
  $handler->display->display_options['fields']['field_track_chairs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_track_chairs']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_track_chairs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_track_chairs']['multi_type'] = 'ul';
  $export['conference_schedule_sessions'] = $view;

  $view = new view();
  $view->name = 'conference_schedule_workshops';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference Schedule - Workshops';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_time',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_event_time' => 'field_event_time',
    'title' => 'title',
    'body' => 'title',
    'field_event_time_1' => 'field_event_time_1',
    'field_workshop_presenter' => 'field_workshop_presenter',
    'field_event_location' => 'field_event_location',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_time_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_workshop_presenter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_ref_workshop_conference_target_id']['id'] = 'field_ref_workshop_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_workshop_conference_target_id']['table'] = 'field_data_field_ref_workshop_conference';
  $handler->display->display_options['relationships']['field_ref_workshop_conference_target_id']['field'] = 'field_ref_workshop_conference_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['id'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['field'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['relationship'] = 'field_ref_workshop_conference_target_id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'long_weekday_month_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Workshop';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Full Description';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time_1']['id'] = 'field_event_time_1';
  $handler->display->display_options['fields']['field_event_time_1']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['label'] = 'Time';
  $handler->display->display_options['fields']['field_event_time_1']['settings'] = array(
    'format_type' => 'time_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_workshop_presenter']['id'] = 'field_workshop_presenter';
  $handler->display->display_options['fields']['field_workshop_presenter']['table'] = 'field_data_field_workshop_presenter';
  $handler->display->display_options['fields']['field_workshop_presenter']['field'] = 'field_workshop_presenter';
  /* Field: Content: Room / Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  /* Sort criterion: Content: Event Time -  start date (field_event_time) */
  $handler->display->display_options['sorts']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['sorts']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['sorts']['field_event_time_value']['field'] = 'field_event_time_value';
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
    'workshop' => 'workshop',
  );

  /* Display: Schedule - Workshops */
  $handler = $view->new_display('panel_pane', 'Schedule - Workshops', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'long_weekday_month_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Workshop';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Full Description';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time_1']['id'] = 'field_event_time_1';
  $handler->display->display_options['fields']['field_event_time_1']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['label'] = 'Time';
  $handler->display->display_options['fields']['field_event_time_1']['settings'] = array(
    'format_type' => 'time_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_workshop_presenter']['id'] = 'field_workshop_presenter';
  $handler->display->display_options['fields']['field_workshop_presenter']['table'] = 'field_data_field_workshop_presenter';
  $handler->display->display_options['fields']['field_workshop_presenter']['field'] = 'field_workshop_presenter';
  $handler->display->display_options['fields']['field_workshop_presenter']['label'] = 'Workshop Speaker(s)';
  $handler->display->display_options['fields']['field_workshop_presenter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_workshop_presenter']['alter']['text'] = '<span class="workshop-speaker-label">Workshop Speaker: </span><a href="/user/[field_workshop_presenter-target_id]/presenter">[field_workshop_presenter]</a>';
  /* Field: Content: Room / Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Schedule - Other Events */
  $handler = $view->new_display('panel_pane', 'Schedule - Other Events', 'panel_pane_2');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rev_conf_event_conference_target_id']['id'] = 'field_rev_conf_event_conference_target_id';
  $handler->display->display_options['relationships']['field_rev_conf_event_conference_target_id']['table'] = 'field_data_field_rev_conf_event_conference';
  $handler->display->display_options['relationships']['field_rev_conf_event_conference_target_id']['field'] = 'field_rev_conf_event_conference_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['id'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['field'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['relationship'] = 'field_rev_conf_event_conference_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'long_weekday_month_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Event';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Full Description';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time_1']['id'] = 'field_event_time_1';
  $handler->display->display_options['fields']['field_event_time_1']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['label'] = 'Time';
  $handler->display->display_options['fields']['field_event_time_1']['settings'] = array(
    'format_type' => 'time_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Presenters */
  $handler->display->display_options['fields']['field_ref_conf_event_user']['id'] = 'field_ref_conf_event_user';
  $handler->display->display_options['fields']['field_ref_conf_event_user']['table'] = 'field_data_field_ref_conf_event_user';
  $handler->display->display_options['fields']['field_ref_conf_event_user']['field'] = 'field_ref_conf_event_user';
  $handler->display->display_options['fields']['field_ref_conf_event_user']['label'] = 'Presenter(s)';
  $handler->display->display_options['fields']['field_ref_conf_event_user']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ref_conf_event_user']['alter']['text'] = '<span class="session-chair-label">Presenter: </span><a href="/user/[field_ref_conf_event_user-target_id]/presenter">[field_ref_conf_event_user]</a>';
  $handler->display->display_options['fields']['field_ref_conf_event_user']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_ref_conf_event_user']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_conf_event_user']['multi_type'] = 'ul';
  /* Field: Content: Room / Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Time -  start date (field_event_time) */
  $handler->display->display_options['sorts']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['sorts']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['sorts']['field_event_time_value']['field'] = 'field_event_time_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'conference_event' => 'conference_event',
    'workshop' => 'workshop',
  );

  /* Display: Schedule - Demonstrations */
  $handler = $view->new_display('panel_pane', 'Schedule - Demonstrations', 'panel_pane_3');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_ref_demo_conference_target_id']['id'] = 'field_ref_demo_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_demo_conference_target_id']['table'] = 'field_data_field_ref_demo_conference';
  $handler->display->display_options['relationships']['field_ref_demo_conference_target_id']['field'] = 'field_ref_demo_conference_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['id'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['field'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['relationships']['reverse_field_ref_schedule_conference_node']['relationship'] = 'field_ref_demo_conference_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'long_weekday_month_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Demonstrations';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Full Description';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time_1']['id'] = 'field_event_time_1';
  $handler->display->display_options['fields']['field_event_time_1']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time_1']['label'] = 'Time';
  $handler->display->display_options['fields']['field_event_time_1']['settings'] = array(
    'format_type' => 'time_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_demo_presenter']['id'] = 'field_demo_presenter';
  $handler->display->display_options['fields']['field_demo_presenter']['table'] = 'field_data_field_demo_presenter';
  $handler->display->display_options['fields']['field_demo_presenter']['field'] = 'field_demo_presenter';
  $handler->display->display_options['fields']['field_demo_presenter']['label'] = 'Demonstration Presenter(s)';
  $handler->display->display_options['fields']['field_demo_presenter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_demo_presenter']['alter']['text'] = '<span class="session-chair-label">Presenter: </span><a href="/user/[field_demo_presenter-target_id]/presenter">[field_demo_presenter]</a>';
  /* Field: Content: Room / Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_schedule_conference_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'demonstration' => 'demonstration',
    'workshop' => 'workshop',
  );
  $export['conference_schedule_workshops'] = $view;

  $view = new view();
  $view->name = 'conference_tracks_teaser';
  $view->description = 'Tracks teaser pane';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference Tracks Teaser';
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
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Contextual filter: Content: Conference (field_ref_track_conference) */
  $handler->display->display_options['arguments']['field_ref_track_conference_target_id']['id'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['arguments']['field_ref_track_conference_target_id']['table'] = 'field_data_field_ref_track_conference';
  $handler->display->display_options['arguments']['field_ref_track_conference_target_id']['field'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['arguments']['field_ref_track_conference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ref_track_conference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ref_track_conference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ref_track_conference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ref_track_conference_target_id']['summary_options']['items_per_page'] = '25';
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
    'track' => 'track',
  );
  $export['conference_tracks_teaser'] = $view;

  $view = new view();
  $view->name = 'session_conference_link';
  $view->description = 'The conference that this sessionor other event is in';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference Link';
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
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['id'] = 'field_ref_session_track_target_id';
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['table'] = 'field_data_field_ref_session_track';
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['field'] = 'field_ref_session_track_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['id'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['table'] = 'field_data_field_ref_track_conference';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['field'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['relationship'] = 'field_ref_session_track_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
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

  /* Display: Conference that this Session is in */
  $handler = $view->new_display('panel_pane', 'Conference that this Session is in', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;

  /* Display: Conference that this Workshop is in */
  $handler = $view->new_display('panel_pane', 'Conference that this Workshop is in', 'panel_pane_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_ref_workshop_conference_target_id']['id'] = 'field_ref_workshop_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_workshop_conference_target_id']['table'] = 'field_data_field_ref_workshop_conference';
  $handler->display->display_options['relationships']['field_ref_workshop_conference_target_id']['field'] = 'field_ref_workshop_conference_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_ref_workshop_conference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
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
    'workshop' => 'workshop',
  );

  /* Display: Conference that this Demo is in */
  $handler = $view->new_display('panel_pane', 'Conference that this Demo is in', 'panel_pane_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_ref_demo_conference_target_id']['id'] = 'field_ref_demo_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_demo_conference_target_id']['table'] = 'field_data_field_ref_demo_conference';
  $handler->display->display_options['relationships']['field_ref_demo_conference_target_id']['field'] = 'field_ref_demo_conference_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_ref_demo_conference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
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
    'demonstration' => 'demonstration',
  );

  /* Display: Conference that this Special Event is in */
  $handler = $view->new_display('panel_pane', 'Conference that this Special Event is in', 'panel_pane_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rev_conf_event_conference_target_id']['id'] = 'field_rev_conf_event_conference_target_id';
  $handler->display->display_options['relationships']['field_rev_conf_event_conference_target_id']['table'] = 'field_data_field_rev_conf_event_conference';
  $handler->display->display_options['relationships']['field_rev_conf_event_conference_target_id']['field'] = 'field_rev_conf_event_conference_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_rev_conf_event_conference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
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
    'conference_event' => 'conference_event',
  );
  $export['session_conference_link'] = $view;

  return $export;
}
