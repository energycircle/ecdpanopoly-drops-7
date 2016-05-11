<?php
/**
 * @file
 * ec_awards.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_awards_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'award_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Award Lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
    'realname' => 'title_1',
    'field_award_win_user_co' => 'title_1',
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
    'realname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_award_win_user_co' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_ref_award_win_user_target_id']['id'] = 'field_ref_award_win_user_target_id';
  $handler->display->display_options['relationships']['field_ref_award_win_user_target_id']['table'] = 'field_data_field_ref_award_win_user';
  $handler->display->display_options['relationships']['field_ref_award_win_user_target_id']['field'] = 'field_ref_award_win_user_target_id';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_award_year']['id'] = 'field_award_year';
  $handler->display->display_options['fields']['field_award_year']['table'] = 'field_data_field_award_year';
  $handler->display->display_options['fields']['field_award_year']['field'] = 'field_award_year';
  $handler->display->display_options['fields']['field_award_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['full_name']['id'] = 'full_name';
  $handler->display->display_options['fields']['full_name']['table'] = 'views_entity_redhen_contact';
  $handler->display->display_options['fields']['full_name']['field'] = 'full_name';
  $handler->display->display_options['fields']['full_name']['relationship'] = 'field_ref_award_win_user_target_id';
  $handler->display->display_options['fields']['full_name']['label'] = 'Name';
  /* Field: Content: Winner Description */
  $handler->display->display_options['fields']['field_award_winner_description']['id'] = 'field_award_winner_description';
  $handler->display->display_options['fields']['field_award_winner_description']['table'] = 'field_data_field_award_winner_description';
  $handler->display->display_options['fields']['field_award_winner_description']['field'] = 'field_award_winner_description';
  $handler->display->display_options['fields']['field_award_winner_description']['label'] = 'Description';
  /* Sort criterion: Content: Year (field_award_year) */
  $handler->display->display_options['sorts']['field_award_year_value']['id'] = 'field_award_year_value';
  $handler->display->display_options['sorts']['field_award_year_value']['table'] = 'field_data_field_award_year';
  $handler->display->display_options['sorts']['field_award_year_value']['field'] = 'field_award_year_value';
  $handler->display->display_options['sorts']['field_award_year_value']['order'] = 'DESC';
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
    'award' => 'award',
  );
  /* Filter criterion: Content: Award Category (field_award_type) */
  $handler->display->display_options['filters']['field_award_type_tid']['id'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['table'] = 'field_data_field_award_type';
  $handler->display->display_options['filters']['field_award_type_tid']['field'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['value'] = array(
    44 => '44',
  );
  $handler->display->display_options['filters']['field_award_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_award_type_tid']['vocabulary'] = 'award_types';
  $handler->display->display_options['filters']['field_award_type_tid']['hierarchy'] = 1;

  /* Display: Linda Wigington Leadership Award  */
  $handler = $view->new_display('panel_pane', 'Linda Wigington Leadership Award ', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Linda Wigington Leadership Award';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Woman of the Year Award */
  $handler = $view->new_display('panel_pane', 'Woman of the Year Award', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Woman of the Year Award';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'award' => 'award',
  );
  /* Filter criterion: Content: Award Category (field_award_type) */
  $handler->display->display_options['filters']['field_award_type_tid']['id'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['table'] = 'field_data_field_award_type';
  $handler->display->display_options['filters']['field_award_type_tid']['field'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['value'] = array(
    45 => '45',
  );
  $handler->display->display_options['filters']['field_award_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_award_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_award_type_tid']['vocabulary'] = 'award_types';
  $handler->display->display_options['filters']['field_award_type_tid']['hierarchy'] = 1;

  /* Display: Annual Award - LW Leadership */
  $handler = $view->new_display('panel_pane', 'Annual Award - LW Leadership', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Linda Wigington Leadership Award';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="/aci-conferences-events/annual-awards/linda-wigington-leadership-award">View all the past winners of the Linda Wigington Leadership Award.</a>';
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
    'award' => 'award',
  );
  /* Filter criterion: Content: Award Category (field_award_type) */
  $handler->display->display_options['filters']['field_award_type_tid']['id'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['table'] = 'field_data_field_award_type';
  $handler->display->display_options['filters']['field_award_type_tid']['field'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['value'] = array(
    44 => '44',
  );
  $handler->display->display_options['filters']['field_award_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_award_type_tid']['vocabulary'] = 'award_types';
  $handler->display->display_options['filters']['field_award_type_tid']['hierarchy'] = 1;

  /* Display: Annual Award - Woman of the Year */
  $handler = $view->new_display('panel_pane', 'Annual Award - Woman of the Year', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Woman of the Year Award';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="/aci-conferences-events/annual-awards/women-of-the-year">View all the past winners of the Women of the Year Award.</a>';
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
    'award' => 'award',
  );
  /* Filter criterion: Content: Award Category (field_award_type) */
  $handler->display->display_options['filters']['field_award_type_tid']['id'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['table'] = 'field_data_field_award_type';
  $handler->display->display_options['filters']['field_award_type_tid']['field'] = 'field_award_type_tid';
  $handler->display->display_options['filters']['field_award_type_tid']['value'] = array(
    45 => '45',
  );
  $handler->display->display_options['filters']['field_award_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_award_type_tid']['vocabulary'] = 'award_types';
  $handler->display->display_options['filters']['field_award_type_tid']['hierarchy'] = 1;
  $export['award_lists'] = $view;

  $view = new view();
  $view->name = 'award_nomination_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Award Nomination Block';
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
  $handler->display->display_options['relationships']['field_award_nomination_form_target_id']['id'] = 'field_award_nomination_form_target_id';
  $handler->display->display_options['relationships']['field_award_nomination_form_target_id']['table'] = 'field_data_field_award_nomination_form';
  $handler->display->display_options['relationships']['field_award_nomination_form_target_id']['field'] = 'field_award_nomination_form_target_id';
  /* Field: Content: Nomination Deadline */
  $handler->display->display_options['fields']['field_award_nomination_deadline']['id'] = 'field_award_nomination_deadline';
  $handler->display->display_options['fields']['field_award_nomination_deadline']['table'] = 'field_data_field_award_nomination_deadline';
  $handler->display->display_options['fields']['field_award_nomination_deadline']['field'] = 'field_award_nomination_deadline';
  $handler->display->display_options['fields']['field_award_nomination_deadline']['settings'] = array(
    'format_type' => 'short_month_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Entityform Type: Submit Link */
  $handler->display->display_options['fields']['submit_entityform_type']['id'] = 'submit_entityform_type';
  $handler->display->display_options['fields']['submit_entityform_type']['table'] = 'entityform_type';
  $handler->display->display_options['fields']['submit_entityform_type']['field'] = 'submit_entityform_type';
  $handler->display->display_options['fields']['submit_entityform_type']['relationship'] = 'field_award_nomination_form_target_id';
  $handler->display->display_options['fields']['submit_entityform_type']['label'] = '';
  $handler->display->display_options['fields']['submit_entityform_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['submit_entityform_type']['text'] = 'Submit a Nomination';
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
    'award' => 'award',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['award_nomination_block'] = $view;

  $view = new view();
  $view->name = 'award_nomination_list';
  $view->description = 'A list of awards open for nominations, based on deadline date';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Award Nomination List';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'award' => 'award',
  );
  /* Filter criterion: Content: Nomination Deadline (field_award_nomination_deadline) */
  $handler->display->display_options['filters']['field_award_nomination_deadline_value']['id'] = 'field_award_nomination_deadline_value';
  $handler->display->display_options['filters']['field_award_nomination_deadline_value']['table'] = 'field_data_field_award_nomination_deadline';
  $handler->display->display_options['filters']['field_award_nomination_deadline_value']['field'] = 'field_award_nomination_deadline_value';
  $handler->display->display_options['filters']['field_award_nomination_deadline_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_award_nomination_deadline_value']['default_date'] = 'now +1 day';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['award_nomination_list'] = $view;

  return $export;
}
