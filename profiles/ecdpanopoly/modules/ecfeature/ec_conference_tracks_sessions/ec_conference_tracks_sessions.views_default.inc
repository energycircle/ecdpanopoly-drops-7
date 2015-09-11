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
  $view->name = 'admin_sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ADMIN - Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ADMIN - Sessions';
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
      'field' => 'field_ref_track_conference',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_session_format' => 'field_session_format',
    'field_ref_track_conference' => 'field_ref_track_conference',
    'field_ref_session_track' => 'field_ref_session_track',
    'title' => 'title',
    'field_event_time' => 'field_event_time',
    'field_areas_of_focus' => 'field_areas_of_focus',
    'field_session_ceus' => 'field_session_ceus',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_session_format' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_track_conference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_session_track' => array(
      'sortable' => 0,
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
    'field_event_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_areas_of_focus' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_ceus' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['id'] = 'field_ref_track_session_target_id';
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['table'] = 'field_data_field_ref_track_session';
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['field'] = 'field_ref_track_session_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['id'] = 'field_ref_session_track_target_id';
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['table'] = 'field_data_field_ref_session_track';
  $handler->display->display_options['relationships']['field_ref_session_track_target_id']['field'] = 'field_ref_session_track_target_id';
  /* Field: Content: Session Format */
  $handler->display->display_options['fields']['field_session_format']['id'] = 'field_session_format';
  $handler->display->display_options['fields']['field_session_format']['table'] = 'field_data_field_session_format';
  $handler->display->display_options['fields']['field_session_format']['field'] = 'field_session_format';
  /* Field: Content: Conference */
  $handler->display->display_options['fields']['field_ref_track_conference']['id'] = 'field_ref_track_conference';
  $handler->display->display_options['fields']['field_ref_track_conference']['table'] = 'field_data_field_ref_track_conference';
  $handler->display->display_options['fields']['field_ref_track_conference']['field'] = 'field_ref_track_conference';
  $handler->display->display_options['fields']['field_ref_track_conference']['relationship'] = 'field_ref_session_track_target_id';
  $handler->display->display_options['fields']['field_ref_track_conference']['settings'] = array(
    'link' => 0,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_track_conference']['delta_offset'] = '0';
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_ref_session_track']['id'] = 'field_ref_session_track';
  $handler->display->display_options['fields']['field_ref_session_track']['table'] = 'field_data_field_ref_session_track';
  $handler->display->display_options['fields']['field_ref_session_track']['field'] = 'field_ref_session_track';
  $handler->display->display_options['fields']['field_ref_session_track']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['type'] = 'editable';
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'date_default',
    'fallback_settings' => array(
      'format_type' => 'long',
      'fromto' => 'both',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
    ),
  );
  /* Field: Content: Areas of Focus */
  $handler->display->display_options['fields']['field_areas_of_focus']['id'] = 'field_areas_of_focus';
  $handler->display->display_options['fields']['field_areas_of_focus']['table'] = 'field_data_field_areas_of_focus';
  $handler->display->display_options['fields']['field_areas_of_focus']['field'] = 'field_areas_of_focus';
  $handler->display->display_options['fields']['field_areas_of_focus']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_areas_of_focus']['delta_offset'] = '0';
  /* Field: Content: CEUs Available */
  $handler->display->display_options['fields']['field_session_ceus']['id'] = 'field_session_ceus';
  $handler->display->display_options['fields']['field_session_ceus']['table'] = 'field_data_field_session_ceus';
  $handler->display->display_options['fields']['field_session_ceus']['field'] = 'field_session_ceus';
  $handler->display->display_options['fields']['field_session_ceus']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_session_ceus']['delta_offset'] = '0';
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
    'session' => 'session',
  );

  /* Display: Initial Import */
  $handler = $view->new_display('page', 'Initial Import', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Conference */
  $handler->display->display_options['fields']['field_ref_track_conference']['id'] = 'field_ref_track_conference';
  $handler->display->display_options['fields']['field_ref_track_conference']['table'] = 'field_data_field_ref_track_conference';
  $handler->display->display_options['fields']['field_ref_track_conference']['field'] = 'field_ref_track_conference';
  $handler->display->display_options['fields']['field_ref_track_conference']['relationship'] = 'field_ref_session_track_target_id';
  $handler->display->display_options['fields']['field_ref_track_conference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ref_track_conference']['settings'] = array(
    'link' => 0,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_track_conference']['delta_offset'] = '0';
  /* Field: Content: Session Format */
  $handler->display->display_options['fields']['field_session_format']['id'] = 'field_session_format';
  $handler->display->display_options['fields']['field_session_format']['table'] = 'field_data_field_session_format';
  $handler->display->display_options['fields']['field_session_format']['field'] = 'field_session_format';
  $handler->display->display_options['fields']['field_session_format']['exclude'] = TRUE;
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_ref_session_track']['id'] = 'field_ref_session_track';
  $handler->display->display_options['fields']['field_ref_session_track']['table'] = 'field_data_field_ref_session_track';
  $handler->display->display_options['fields']['field_ref_session_track']['field'] = 'field_ref_session_track';
  $handler->display->display_options['fields']['field_ref_session_track']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['type'] = 'editable';
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'date_default',
    'fallback_settings' => array(
      'format_type' => 'long',
      'fromto' => 'both',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
    ),
  );
  /* Field: Content: Areas of Focus */
  $handler->display->display_options['fields']['field_areas_of_focus']['id'] = 'field_areas_of_focus';
  $handler->display->display_options['fields']['field_areas_of_focus']['table'] = 'field_data_field_areas_of_focus';
  $handler->display->display_options['fields']['field_areas_of_focus']['field'] = 'field_areas_of_focus';
  $handler->display->display_options['fields']['field_areas_of_focus']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_areas_of_focus']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_areas_of_focus']['delta_offset'] = '0';
  /* Field: Content: CEUs Available */
  $handler->display->display_options['fields']['field_session_ceus']['id'] = 'field_session_ceus';
  $handler->display->display_options['fields']['field_session_ceus']['table'] = 'field_data_field_session_ceus';
  $handler->display->display_options['fields']['field_session_ceus']['field'] = 'field_session_ceus';
  $handler->display->display_options['fields']['field_session_ceus']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_ceus']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_session_ceus']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['path'] = 'admin/content/sessions';

  /* Display: Participant Import */
  $handler = $view->new_display('page', 'Participant Import', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['id'] = 'field_ref_track_session_target_id';
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['table'] = 'field_data_field_ref_track_session';
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['field'] = 'field_ref_track_session_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['id'] = 'field_session_speakers_target_id';
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['relationships']['field_session_speakers_target_id']['field'] = 'field_session_speakers_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_conf_event_user_target_id']['id'] = 'field_ref_conf_event_user_target_id';
  $handler->display->display_options['relationships']['field_ref_conf_event_user_target_id']['table'] = 'field_data_field_ref_conf_event_user';
  $handler->display->display_options['relationships']['field_ref_conf_event_user_target_id']['field'] = 'field_ref_conf_event_user_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_session_chairs_target_id']['id'] = 'field_session_chairs_target_id';
  $handler->display->display_options['relationships']['field_session_chairs_target_id']['table'] = 'field_data_field_session_chairs';
  $handler->display->display_options['relationships']['field_session_chairs_target_id']['field'] = 'field_session_chairs_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Contact: Full name */
  $handler->display->display_options['fields']['full_name']['id'] = 'full_name';
  $handler->display->display_options['fields']['full_name']['table'] = 'views_entity_redhen_contact';
  $handler->display->display_options['fields']['full_name']['field'] = 'full_name';
  $handler->display->display_options['fields']['full_name']['relationship'] = 'field_session_speakers_target_id';
  $handler->display->display_options['fields']['full_name']['label'] = 'Speaker';
  $handler->display->display_options['fields']['full_name']['link_to_entity'] = 0;
  /* Field: Contact: Full name */
  $handler->display->display_options['fields']['full_name_1']['id'] = 'full_name_1';
  $handler->display->display_options['fields']['full_name_1']['table'] = 'views_entity_redhen_contact';
  $handler->display->display_options['fields']['full_name_1']['field'] = 'full_name';
  $handler->display->display_options['fields']['full_name_1']['relationship'] = 'field_session_chairs_target_id';
  $handler->display->display_options['fields']['full_name_1']['label'] = 'Session Chair';
  $handler->display->display_options['fields']['full_name_1']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'admin/content/sessions';
  $export['admin_sessions'] = $view;

  $view = new view();
  $view->name = 'admin_tracks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ADMIN - Tracks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ADMIN - Tracks';
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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ref_track_conference' => 'field_ref_track_conference',
    'title' => 'title',
    'field_ref_track_session' => 'field_ref_track_session',
    'edit_node' => 'edit_node',
    'field_event_time' => 'field_event_time',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ref_track_conference' => array(
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
    'field_ref_track_session' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
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
  );
  /* Field: Content: Conference */
  $handler->display->display_options['fields']['field_ref_track_conference']['id'] = 'field_ref_track_conference';
  $handler->display->display_options['fields']['field_ref_track_conference']['table'] = 'field_data_field_ref_track_conference';
  $handler->display->display_options['fields']['field_ref_track_conference']['field'] = 'field_ref_track_conference';
  $handler->display->display_options['fields']['field_ref_track_conference']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_track_conference']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Track';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Sessions */
  $handler->display->display_options['fields']['field_ref_track_session']['id'] = 'field_ref_track_session';
  $handler->display->display_options['fields']['field_ref_track_session']['table'] = 'field_data_field_ref_track_session';
  $handler->display->display_options['fields']['field_ref_track_session']['field'] = 'field_ref_track_session';
  $handler->display->display_options['fields']['field_ref_track_session']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_track_session']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_track_session']['multi_type'] = 'ul';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
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
    'track' => 'track',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['id'] = 'field_ref_track_session_target_id';
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['table'] = 'field_data_field_ref_track_session';
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['field'] = 'field_ref_track_session_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_track_session_node']['id'] = 'reverse_field_ref_track_session_node';
  $handler->display->display_options['relationships']['reverse_field_ref_track_session_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_track_session_node']['field'] = 'reverse_field_ref_track_session_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Conference */
  $handler->display->display_options['fields']['field_ref_track_conference']['id'] = 'field_ref_track_conference';
  $handler->display->display_options['fields']['field_ref_track_conference']['table'] = 'field_data_field_ref_track_conference';
  $handler->display->display_options['fields']['field_ref_track_conference']['field'] = 'field_ref_track_conference';
  $handler->display->display_options['fields']['field_ref_track_conference']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_track_conference']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_track_conference']['multi_type'] = 'ul';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Track';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Sessions */
  $handler->display->display_options['fields']['field_ref_track_session']['id'] = 'field_ref_track_session';
  $handler->display->display_options['fields']['field_ref_track_session']['table'] = 'field_data_field_ref_track_session';
  $handler->display->display_options['fields']['field_ref_track_session']['field'] = 'field_ref_track_session';
  $handler->display->display_options['fields']['field_ref_track_session']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_track_session']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_track_session']['multi_type'] = 'ul';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Conference (field_ref_track_conference) */
  $handler->display->display_options['sorts']['field_ref_track_conference_target_id']['id'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['sorts']['field_ref_track_conference_target_id']['table'] = 'field_data_field_ref_track_conference';
  $handler->display->display_options['sorts']['field_ref_track_conference_target_id']['field'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['path'] = 'admin/content/tracks';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['id'] = 'field_ref_track_session_target_id';
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['table'] = 'field_data_field_ref_track_session';
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['field'] = 'field_ref_track_session_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_track_session_node']['id'] = 'reverse_field_ref_track_session_node';
  $handler->display->display_options['relationships']['reverse_field_ref_track_session_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_track_session_node']['field'] = 'reverse_field_ref_track_session_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Track';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Track Abbreviation */
  $handler->display->display_options['fields']['field_track_abreviation']['id'] = 'field_track_abreviation';
  $handler->display->display_options['fields']['field_track_abreviation']['table'] = 'field_data_field_track_abreviation';
  $handler->display->display_options['fields']['field_track_abreviation']['field'] = 'field_track_abreviation';
  $handler->display->display_options['fields']['field_track_abreviation']['type'] = 'editable';
  $handler->display->display_options['fields']['field_track_abreviation']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Field: External Identifier */
  $handler->display->display_options['fields']['field_external_identifier']['id'] = 'field_external_identifier';
  $handler->display->display_options['fields']['field_external_identifier']['table'] = 'field_data_field_external_identifier';
  $handler->display->display_options['fields']['field_external_identifier']['field'] = 'field_external_identifier';
  $handler->display->display_options['fields']['field_external_identifier']['type'] = 'editable';
  $handler->display->display_options['fields']['field_external_identifier']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Conference (field_ref_track_conference) */
  $handler->display->display_options['sorts']['field_ref_track_conference_target_id']['id'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['sorts']['field_ref_track_conference_target_id']['table'] = 'field_data_field_ref_track_conference';
  $handler->display->display_options['sorts']['field_ref_track_conference_target_id']['field'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['path'] = 'admin/content/tracks-abv';
  $export['admin_tracks'] = $view;

  $view = new view();
  $view->name = 'conference_banner_ads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference Banner Ads';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_banner_conference_target_id']['id'] = 'field_ref_banner_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_banner_conference_target_id']['table'] = 'field_data_field_ref_banner_conference';
  $handler->display->display_options['relationships']['field_ref_banner_conference_target_id']['field'] = 'field_ref_banner_conference_target_id';
  /* Field: Content: Banner Link */
  $handler->display->display_options['fields']['field_banner_link']['id'] = 'field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['table'] = 'field_data_field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['field'] = 'field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['label'] = '';
  $handler->display->display_options['fields']['field_banner_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_banner_link']['type'] = 'link_plain';
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['alter']['text'] = '<a href="[field_banner_link]" target="_blank">[field_banner_image]</a>';
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => 'sc_728x90',
    'image_link' => '',
  );
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ref_banner_conference_target_id';
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
    'banner_ad' => 'banner_ad',
  );

  /* Display: Conference Banner Ads */
  $handler = $view->new_display('panel_pane', 'Conference Banner Ads', 'panel_pane_1');
  $export['conference_banner_ads'] = $view;

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
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
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
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '60';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_time_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_event_time',
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
    'field_conference_start_date' => 'field_conference_start_date',
    'field_conference_end_date' => 'field_conference_end_date',
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
    'field_conference_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conference_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  /* Sort criterion: Content: Conference (field_ref_schedule_conference) */
  $handler->display->display_options['sorts']['field_ref_schedule_conference_target_id']['id'] = 'field_ref_schedule_conference_target_id';
  $handler->display->display_options['sorts']['field_ref_schedule_conference_target_id']['table'] = 'field_data_field_ref_schedule_conference';
  $handler->display->display_options['sorts']['field_ref_schedule_conference_target_id']['field'] = 'field_ref_schedule_conference_target_id';
  $handler->display->display_options['sorts']['field_ref_schedule_conference_target_id']['relationship'] = 'reverse_field_ref_schedule_conference_node';
  /* Sort criterion: Content: Sort Order (field_track_sort_order) */
  $handler->display->display_options['sorts']['field_track_sort_order_value']['id'] = 'field_track_sort_order_value';
  $handler->display->display_options['sorts']['field_track_sort_order_value']['table'] = 'field_data_field_track_sort_order';
  $handler->display->display_options['sorts']['field_track_sort_order_value']['field'] = 'field_track_sort_order_value';
  $handler->display->display_options['sorts']['field_track_sort_order_value']['relationship'] = 'field_ref_session_track_target_id';
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
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['operator'] = '>=';
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_conference_start_date';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_event_time_1';
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['operator'] = '<=';
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'field_conference_end_date';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'field_event_time_1';

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
    'tags' => 0,
    'areas_of_focus' => 0,
    'award_types' => 0,
    'conference_detail_page_types' => 0,
    'document_types' => 0,
  );
  /* Field: Content: Conference Start Date */
  $handler->display->display_options['fields']['field_conference_start_date']['id'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['field'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Conference End Date */
  $handler->display->display_options['fields']['field_conference_end_date']['id'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['field'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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

  /* Display: Sessions - Upcoming Conference */
  $handler = $view->new_display('panel_pane', 'Sessions - Upcoming Conference', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_time_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_event_time',
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
    'field_conference_start_date' => 'field_conference_start_date',
    'field_conference_end_date' => 'field_conference_end_date',
    'field_track_sort_order' => 'field_track_sort_order',
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
    'field_conference_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conference_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_track_sort_order' => array(
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
  $handler->display->display_options['exposed_block'] = TRUE;
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
    'format_type' => 'panopoly_day',
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'panopoly_time',
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
  $handler->display->display_options['fields']['field_session_chairs']['alter']['text'] = '<a href="/user/[field_session_chairs-target_id]/presenter">[field_session_chairs] </a>';
  $handler->display->display_options['fields']['field_session_chairs']['settings'] = array(
    'link' => 0,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_session_chairs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_chairs']['separator'] = '<br />';
  /* Field: Content: Session Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['alter']['text'] = '<a href="/user/[field_session_speakers-target_id]/presenter">[field_session_speakers] </a>';
  $handler->display->display_options['fields']['field_session_speakers']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_speakers']['separator'] = '<br />';
  /* Field: Content: Room / Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  /* Field: Content: Track Chair(s) */
  $handler->display->display_options['fields']['field_track_chairs']['id'] = 'field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['table'] = 'field_data_field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['field'] = 'field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_track_chairs']['settings'] = array(
    'link' => 0,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_track_chairs']['delta_offset'] = '0';
  /* Field: Content: Conference Start Date */
  $handler->display->display_options['fields']['field_conference_start_date']['id'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['field'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['fields']['field_conference_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Conference End Date */
  $handler->display->display_options['fields']['field_conference_end_date']['id'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['field'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['fields']['field_conference_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Sort Order */
  $handler->display->display_options['fields']['field_track_sort_order']['id'] = 'field_track_sort_order';
  $handler->display->display_options['fields']['field_track_sort_order']['table'] = 'field_data_field_track_sort_order';
  $handler->display->display_options['fields']['field_track_sort_order']['field'] = 'field_track_sort_order';
  $handler->display->display_options['fields']['field_track_sort_order']['relationship'] = 'field_ref_session_track_target_id';
  $handler->display->display_options['fields']['field_track_sort_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_track_sort_order']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
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
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['operator'] = '>=';
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_conference_start_date';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_event_time_1';
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['operator'] = '<=';
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'field_conference_end_date';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'field_event_time_1';
  /* Filter criterion: Content: Conference End Date (field_conference_end_date) */
  $handler->display->display_options['filters']['field_conference_end_date_value']['id'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['filters']['field_conference_end_date_value']['field'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['filters']['field_conference_end_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_conference_end_date_value']['default_date'] = 'now -7 days';

  /* Display: Sessions - Past Conference */
  $handler = $view->new_display('panel_pane', 'Sessions - Past Conference', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Sessions for a conference without session times.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_ref_session_track',
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
    'field_conference_start_date' => 'field_conference_start_date',
    'field_conference_end_date' => 'field_conference_end_date',
    'field_track_sort_order' => 'field_track_sort_order',
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
    'field_conference_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conference_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_track_sort_order' => array(
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
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
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
    'format_type' => 'panopoly_day',
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_ref_session_track']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_session_track']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'panopoly_time',
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
  $handler->display->display_options['fields']['field_session_chairs']['alter']['text'] = '<a href="/user/[field_session_chairs-target_id]/presenter">[field_session_chairs] </a>';
  $handler->display->display_options['fields']['field_session_chairs']['settings'] = array(
    'link' => 0,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_session_chairs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_chairs']['separator'] = '<br />';
  /* Field: Content: Session Speaker(s) */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['alter']['text'] = '<a href="/user/[field_session_speakers-target_id]/presenter">[field_session_speakers] </a>';
  $handler->display->display_options['fields']['field_session_speakers']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_speakers']['separator'] = '<br />';
  /* Field: Content: Room / Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  /* Field: Content: Track Chair(s) */
  $handler->display->display_options['fields']['field_track_chairs']['id'] = 'field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['table'] = 'field_data_field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['field'] = 'field_track_chairs';
  $handler->display->display_options['fields']['field_track_chairs']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_track_chairs']['settings'] = array(
    'link' => 0,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_track_chairs']['delta_offset'] = '0';
  /* Field: Content: Conference Start Date */
  $handler->display->display_options['fields']['field_conference_start_date']['id'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['field'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['fields']['field_conference_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Conference End Date */
  $handler->display->display_options['fields']['field_conference_end_date']['id'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['field'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['fields']['field_conference_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Sort Order */
  $handler->display->display_options['fields']['field_track_sort_order']['id'] = 'field_track_sort_order';
  $handler->display->display_options['fields']['field_track_sort_order']['table'] = 'field_data_field_track_sort_order';
  $handler->display->display_options['fields']['field_track_sort_order']['field'] = 'field_track_sort_order';
  $handler->display->display_options['fields']['field_track_sort_order']['relationship'] = 'field_ref_session_track_target_id';
  $handler->display->display_options['fields']['field_track_sort_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_track_sort_order']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['operator'] = '>=';
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_conference_start_date';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_event_time_1';
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['operator'] = '<=';
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'field_conference_end_date';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'field_event_time_1';
  /* Filter criterion: Content: Conference End Date (field_conference_end_date) */
  $handler->display->display_options['filters']['field_conference_end_date_value']['id'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['filters']['field_conference_end_date_value']['field'] = 'field_conference_end_date_value';
  $handler->display->display_options['filters']['field_conference_end_date_value']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['filters']['field_conference_end_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_conference_end_date_value']['default_date'] = 'now -7 days';
  $export['conference_schedule_filter_sessions'] = $view;

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
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
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
  /* Sort criterion: Content: Conference (field_ref_schedule_conference) */
  $handler->display->display_options['sorts']['field_ref_schedule_conference_target_id']['id'] = 'field_ref_schedule_conference_target_id';
  $handler->display->display_options['sorts']['field_ref_schedule_conference_target_id']['table'] = 'field_data_field_ref_schedule_conference';
  $handler->display->display_options['sorts']['field_ref_schedule_conference_target_id']['field'] = 'field_ref_schedule_conference_target_id';
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
  /* Field: Content: Conference Start Date */
  $handler->display->display_options['fields']['field_conference_start_date']['id'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['field'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['fields']['field_conference_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Conference End Date */
  $handler->display->display_options['fields']['field_conference_end_date']['id'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['field'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['fields']['field_conference_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
    'session' => 'session',
  );
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['operator'] = '<=';
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'field_conference_end_date';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'field_event_time_1';
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['operator'] = '>=';
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_conference_start_date';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_event_time_1';
  $export['conference_schedule_sessions'] = $view;

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
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
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
  $view->description = 'Links for a conference.';
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
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'conference' => 'conference',
  );

  /* Display: Current Conf. Links */
  $handler = $view->new_display('panel_pane', 'Current Conf. Links', 'panel_pane_5');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: External Registration Link */
  $handler->display->display_options['fields']['field_event_registration_link']['id'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['table'] = 'field_data_field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['field'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_registration_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_registration_link']['click_sort_column'] = 'url';
  /* Field: Content: Sponsors Page */
  $handler->display->display_options['fields']['field_conference_sponsors_page']['id'] = 'field_conference_sponsors_page';
  $handler->display->display_options['fields']['field_conference_sponsors_page']['table'] = 'field_data_field_conference_sponsors_page';
  $handler->display->display_options['fields']['field_conference_sponsors_page']['field'] = 'field_conference_sponsors_page';
  $handler->display->display_options['fields']['field_conference_sponsors_page']['label'] = '';
  $handler->display->display_options['fields']['field_conference_sponsors_page']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_sponsors_page']['alter']['text'] = '<a href="/node/[field_conference_sponsors_page-target_id]">Become a Sponsor</a>';
  $handler->display->display_options['fields']['field_conference_sponsors_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_sponsors_page']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_conference_sponsors_page']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  /* Field: Content: Exhibitors Page */
  $handler->display->display_options['fields']['field_conference_exhibitors_page']['id'] = 'field_conference_exhibitors_page';
  $handler->display->display_options['fields']['field_conference_exhibitors_page']['table'] = 'field_data_field_conference_exhibitors_page';
  $handler->display->display_options['fields']['field_conference_exhibitors_page']['field'] = 'field_conference_exhibitors_page';
  $handler->display->display_options['fields']['field_conference_exhibitors_page']['label'] = '';
  $handler->display->display_options['fields']['field_conference_exhibitors_page']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_conference_exhibitors_page']['alter']['text'] = '<a href="/node/[field_conference_exhibitors_page-target_id]">Become an Exhibitor</a>';
  $handler->display->display_options['fields']['field_conference_exhibitors_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_exhibitors_page']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_conference_exhibitors_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: sponsor */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'sponsor';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/aci-conferences-events/get-involved/sponsor">Become A Sponsor</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: exhibitor */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'exhibitor';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/aci-conferences-events/get-involved/exhibit">Become An Exhibitor</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'panopoly_image_full',
    'image_link' => '',
  );

  /* Display: Register Now */
  $handler = $view->new_display('panel_pane', 'Register Now', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_conference_details_target_id']['id'] = 'field_ref_conference_details_target_id';
  $handler->display->display_options['relationships']['field_ref_conference_details_target_id']['table'] = 'field_data_field_ref_conference_details';
  $handler->display->display_options['relationships']['field_ref_conference_details_target_id']['field'] = 'field_ref_conference_details_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: External Registration Link */
  $handler->display->display_options['fields']['field_event_registration_link']['id'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['table'] = 'field_data_field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['field'] = 'field_event_registration_link';
  $handler->display->display_options['fields']['field_event_registration_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_registration_link']['element_class'] = 'button';
  $handler->display->display_options['fields']['field_event_registration_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_registration_link']['click_sort_column'] = 'url';
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
  $export['session_conference_link'] = $view;

  $view = new view();
  $view->name = 'session_links';
  $view->description = 'Links for a session';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Session Links';
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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_conference_tracks_ref_target_id']['id'] = 'field_conference_tracks_ref_target_id';
  $handler->display->display_options['relationships']['field_conference_tracks_ref_target_id']['table'] = 'field_data_field_conference_tracks_ref';
  $handler->display->display_options['relationships']['field_conference_tracks_ref_target_id']['field'] = 'field_conference_tracks_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['id'] = 'field_ref_track_session_target_id';
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['table'] = 'field_data_field_ref_track_session';
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['field'] = 'field_ref_track_session_target_id';
  $handler->display->display_options['relationships']['field_ref_track_session_target_id']['relationship'] = 'field_conference_tracks_ref_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Visit the Conference Page';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'link-label';
  /* Field: Content: Sessions Schedule Page */
  $handler->display->display_options['fields']['field_conference_sessions_page']['id'] = 'field_conference_sessions_page';
  $handler->display->display_options['fields']['field_conference_sessions_page']['table'] = 'field_data_field_conference_sessions_page';
  $handler->display->display_options['fields']['field_conference_sessions_page']['field'] = 'field_conference_sessions_page';
  $handler->display->display_options['fields']['field_conference_sessions_page']['label'] = 'View the Conference Sessions Page';
  $handler->display->display_options['fields']['field_conference_sessions_page']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_conference_sessions_page']['element_class'] = 'link-label';
  $handler->display->display_options['fields']['field_conference_sessions_page']['settings'] = array(
    'link' => 1,
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ref_track_session_target_id';
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

  /* Display: Session Page Links */
  $handler = $view->new_display('panel_pane', 'Session Page Links', 'panel_pane_1');

  /* Display: Session - Special Fields - Upcoming */
  $handler = $view->new_display('panel_pane', 'Session - Special Fields - Upcoming', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['relationship'] = 'field_ref_track_session_target_id';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[field_event_time] | <span class="conference-name">[title_1]</span>';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'link-label';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
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
  /* Filter criterion: Content: Event Time -  start date (field_event_time) */
  $handler->display->display_options['filters']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['filters']['field_event_time_value']['field'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['relationship'] = 'field_ref_track_session_target_id';
  $handler->display->display_options['filters']['field_event_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_time_value']['default_date'] = 'now -7 days';

  /* Display: Session - Special Fields - Past */
  $handler = $view->new_display('panel_pane', 'Session - Special Fields - Past', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_time']['id'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['fields']['field_event_time']['field'] = 'field_event_time';
  $handler->display->display_options['fields']['field_event_time']['relationship'] = 'field_ref_track_session_target_id';
  $handler->display->display_options['fields']['field_event_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<span class="conference-name">[title_1]</span>';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'link-label';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
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
  /* Filter criterion: Content: Event Time -  start date (field_event_time) */
  $handler->display->display_options['filters']['field_event_time_value']['id'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['table'] = 'field_data_field_event_time';
  $handler->display->display_options['filters']['field_event_time_value']['field'] = 'field_event_time_value';
  $handler->display->display_options['filters']['field_event_time_value']['relationship'] = 'field_ref_track_session_target_id';
  $handler->display->display_options['filters']['field_event_time_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_event_time_value']['default_date'] = 'now -7 days';
  $export['session_links'] = $view;

  $view = new view();
  $view->name = 'temp_list_conference_sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TEMP - List Conference Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
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
  /* Sort criterion: Content: Conference (field_ref_schedule_conference) */
  $handler->display->display_options['sorts']['field_ref_schedule_conference_target_id']['id'] = 'field_ref_schedule_conference_target_id';
  $handler->display->display_options['sorts']['field_ref_schedule_conference_target_id']['table'] = 'field_data_field_ref_schedule_conference';
  $handler->display->display_options['sorts']['field_ref_schedule_conference_target_id']['field'] = 'field_ref_schedule_conference_target_id';
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
  /* Field: Content: Conference Start Date */
  $handler->display->display_options['fields']['field_conference_start_date']['id'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['field'] = 'field_conference_start_date';
  $handler->display->display_options['fields']['field_conference_start_date']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['fields']['field_conference_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Conference End Date */
  $handler->display->display_options['fields']['field_conference_end_date']['id'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['table'] = 'field_data_field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['field'] = 'field_conference_end_date';
  $handler->display->display_options['fields']['field_conference_end_date']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['fields']['field_conference_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_conference_end_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
    'session' => 'session',
  );
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['operator'] = '<=';
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'field_conference_end_date';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'field_event_time_1';
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['operator'] = '>=';
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_conference_start_date';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_event_time_1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/sessions-list-temp';
  $export['temp_list_conference_sessions'] = $view;

  $view = new view();
  $view->name = 'test_session_attachments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TEST session attachments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TEST session attachments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_session_documents',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_session_documents' => 'field_session_documents',
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
    'field_session_documents' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
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
    'session' => 'session',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'test-session-attachments';
  $export['test_session_attachments'] = $view;

  $view = new view();
  $view->name = 'tracks_set_order';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tracks - Set Order';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tracks - Set Order';
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
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
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['id'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['table'] = 'field_data_field_ref_track_conference';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['field'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['relationships']['field_ref_track_conference_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Conference';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Track';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = 'Track Order';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['handler'] = 'draggableviews_handler_fieldapi';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['draggableviews_handler_fieldapi'] = array(
    'field' => 'field_data_field_track_sort_order:field_track_sort_order_value',
  );
  /* Sort criterion: Content: Sort Order (field_track_sort_order) */
  $handler->display->display_options['sorts']['field_track_sort_order_value']['id'] = 'field_track_sort_order_value';
  $handler->display->display_options['sorts']['field_track_sort_order_value']['table'] = 'field_data_field_track_sort_order';
  $handler->display->display_options['sorts']['field_track_sort_order_value']['field'] = 'field_track_sort_order_value';
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
  /* Filter criterion: Content: Conference Start Date (field_conference_start_date) */
  $handler->display->display_options['filters']['field_conference_start_date_value']['id'] = 'field_conference_start_date_value';
  $handler->display->display_options['filters']['field_conference_start_date_value']['table'] = 'field_data_field_conference_start_date';
  $handler->display->display_options['filters']['field_conference_start_date_value']['field'] = 'field_conference_start_date_value';
  $handler->display->display_options['filters']['field_conference_start_date_value']['relationship'] = 'field_ref_track_conference_target_id';
  $handler->display->display_options['filters']['field_conference_start_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_conference_start_date_value']['value']['value'] = '2014-06-09';
  $handler->display->display_options['filters']['field_conference_start_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_conference_start_date_value']['expose']['operator_id'] = 'field_conference_start_date_value_op';
  $handler->display->display_options['filters']['field_conference_start_date_value']['expose']['label'] = 'Limit by conference start/end dates';
  $handler->display->display_options['filters']['field_conference_start_date_value']['expose']['operator'] = 'field_conference_start_date_value_op';
  $handler->display->display_options['filters']['field_conference_start_date_value']['expose']['identifier'] = 'starts';
  $handler->display->display_options['filters']['field_conference_start_date_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_conference_start_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/track-order';
  $export['tracks_set_order'] = $view;

  return $export;
}
