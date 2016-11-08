<?php
/**
 * @file
 * ec_marketing_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_marketing_dashboard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'analytics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Analytics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access google analytics reports';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'sessions' => 'sessions',
    'date' => 'date',
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'sessions' => '#2f7ed8',
    'date' => '#0d233a',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['xaxis_title'] = 'Date';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  $handler->display->display_options['style_options']['yaxis_title'] = 'Sessions';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  /* Field: Session: Sessions */
  $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['precision'] = '0';
  /* Filter criterion: Google Analytics: Start date of report */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['value']['value'] = '-31 day';
  $handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['start_date']['group'] = 1;
  $handler->display->display_options['filters']['start_date']['expose']['operator'] = FALSE;
  /* Filter criterion: Google Analytics: End date of report */
  $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['value']['value'] = '-1 day';
  $handler->display->display_options['filters']['end_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['end_date']['group'] = 1;
  $handler->display->display_options['filters']['end_date']['expose']['operator'] = FALSE;

  /* Display: Sessions Per Day */
  $handler = $view->new_display('panel_pane', 'Sessions Per Day', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sessions Per Day';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'sessions' => 'sessions',
    'date' => 'date',
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'sessions' => '#333333',
    'date' => '#0d233a',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['xaxis_title'] = 'Date';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  $handler->display->display_options['style_options']['yaxis_title'] = 'Sessions';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Session: Sessions */
  $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['element_type'] = 'div';
  $handler->display->display_options['fields']['sessions']['element_class'] = 'chart-label';
  $handler->display->display_options['fields']['sessions']['precision'] = '0';
  /* Field: Time: Date */
  $handler->display->display_options['fields']['date']['id'] = 'date';
  $handler->display->display_options['fields']['date']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['date']['field'] = 'date';
  $handler->display->display_options['fields']['date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['date']['custom_date_format'] = 'j M';
  $handler->display->display_options['fields']['date']['second_date_format'] = 'panopoly_time';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Time: Date */
  $handler->display->display_options['sorts']['date']['id'] = 'date';
  $handler->display->display_options['sorts']['date']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['date']['field'] = 'date';

  /* Display: Goals By Medium */
  $handler = $view->new_display('panel_pane', 'Goals By Medium', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Goal Completions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'medium';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'goalCompletionsAll' => 'goalCompletionsAll',
    'medium' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'goalCompletionsAll' => '#8bbc21',
    'medium' => '#910000',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['xaxis_title'] = 'Date';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  $handler->display->display_options['style_options']['yaxis_title'] = 'Sessions';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Goal Conversions: Goal Completions */
  $handler->display->display_options['fields']['goalCompletionsAll']['id'] = 'goalCompletionsAll';
  $handler->display->display_options['fields']['goalCompletionsAll']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['goalCompletionsAll']['field'] = 'goalCompletionsAll';
  $handler->display->display_options['fields']['goalCompletionsAll']['precision'] = '0';
  /* Field: Traffic Sources: Medium */
  $handler->display->display_options['fields']['medium']['id'] = 'medium';
  $handler->display->display_options['fields']['medium']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['medium']['field'] = 'medium';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Traffic Sources: Medium */
  $handler->display->display_options['sorts']['medium']['id'] = 'medium';
  $handler->display->display_options['sorts']['medium']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['medium']['field'] = 'medium';

  /* Display: Top Pages */
  $handler = $view->new_display('panel_pane', 'Top Pages', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Pages';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Page Tracking: Page Title */
  $handler->display->display_options['fields']['pageTitle']['id'] = 'pageTitle';
  $handler->display->display_options['fields']['pageTitle']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageTitle']['field'] = 'pageTitle';
  $handler->display->display_options['fields']['pageTitle']['label'] = '';
  $handler->display->display_options['fields']['pageTitle']['element_label_colon'] = FALSE;
  /* Field: Session: Sessions */
  $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['precision'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Session: Sessions */
  $handler->display->display_options['sorts']['sessions']['id'] = 'sessions';
  $handler->display->display_options['sorts']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['sessions']['field'] = 'sessions';
  $handler->display->display_options['sorts']['sessions']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Google Analytics: Start date of report */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['value']['value'] = '-31 day';
  $handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['start_date']['group'] = 1;
  $handler->display->display_options['filters']['start_date']['expose']['operator'] = FALSE;
  /* Filter criterion: Google Analytics: End date of report */
  $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['value']['value'] = '-1 day';
  $handler->display->display_options['filters']['end_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['end_date']['group'] = 1;
  $handler->display->display_options['filters']['end_date']['expose']['operator'] = FALSE;
  /* Filter criterion: Page Tracking: Page Title */
  $handler->display->display_options['filters']['pageTitle']['id'] = 'pageTitle';
  $handler->display->display_options['filters']['pageTitle']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['pageTitle']['field'] = 'pageTitle';
  $handler->display->display_options['filters']['pageTitle']['operator'] = '!=';
  $handler->display->display_options['filters']['pageTitle']['value'] = '(not set)';

  /* Display: Traffic Sources */
  $handler = $view->new_display('panel_pane', 'Traffic Sources', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Traffic Sources';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'medium';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'sessions' => 'sessions',
    'medium' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'sessions' => '#2f7ed8',
    'medium' => '#0d233a',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['xaxis_title'] = 'Date';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  $handler->display->display_options['style_options']['yaxis_title'] = 'Sessions';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Session: Sessions */
  $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['precision'] = '0';
  /* Field: Traffic Sources: Medium */
  $handler->display->display_options['fields']['medium']['id'] = 'medium';
  $handler->display->display_options['fields']['medium']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['medium']['field'] = 'medium';
  $handler->display->display_options['fields']['medium']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Traffic Sources: Medium */
  $handler->display->display_options['sorts']['medium']['id'] = 'medium';
  $handler->display->display_options['sorts']['medium']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['medium']['field'] = 'medium';

  /* Display: Goals by Medium - Table */
  $handler = $view->new_display('panel_pane', 'Goals by Medium - Table', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Goal Completions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'medium' => 'medium',
    'goalCompletionsAll' => 'goalCompletionsAll',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'medium' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'goalCompletionsAll' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view_1']['id'] = 'view_1';
  $handler->display->display_options['header']['view_1']['table'] = 'views';
  $handler->display->display_options['header']['view_1']['field'] = 'view';
  $handler->display->display_options['header']['view_1']['view_to_insert'] = 'analytics:panel_pane_8';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'analytics:panel_pane_2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Traffic Sources: Medium */
  $handler->display->display_options['fields']['medium']['id'] = 'medium';
  $handler->display->display_options['fields']['medium']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['medium']['field'] = 'medium';
  /* Field: Goal Conversions: Goal Completions */
  $handler->display->display_options['fields']['goalCompletionsAll']['id'] = 'goalCompletionsAll';
  $handler->display->display_options['fields']['goalCompletionsAll']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['goalCompletionsAll']['field'] = 'goalCompletionsAll';
  $handler->display->display_options['fields']['goalCompletionsAll']['precision'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Goal Conversions: Goal Completions */
  $handler->display->display_options['sorts']['goalCompletionsAll']['id'] = 'goalCompletionsAll';
  $handler->display->display_options['sorts']['goalCompletionsAll']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['goalCompletionsAll']['field'] = 'goalCompletionsAll';
  $handler->display->display_options['sorts']['goalCompletionsAll']['order'] = 'DESC';

  /* Display: Traffic Sources - Table */
  $handler = $view->new_display('panel_pane', 'Traffic Sources - Table', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Traffic';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'sessions' => 'sessions',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'sessions' => array(
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view_1']['id'] = 'view_1';
  $handler->display->display_options['header']['view_1']['table'] = 'views';
  $handler->display->display_options['header']['view_1']['field'] = 'view';
  $handler->display->display_options['header']['view_1']['view_to_insert'] = 'analytics:panel_pane_7';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'analytics:panel_pane_4';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Traffic Sources: Medium */
  $handler->display->display_options['fields']['medium']['id'] = 'medium';
  $handler->display->display_options['fields']['medium']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['medium']['field'] = 'medium';
  /* Field: Session: Sessions */
  $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['precision'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Session: Sessions */
  $handler->display->display_options['sorts']['sessions']['id'] = 'sessions';
  $handler->display->display_options['sorts']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['sessions']['field'] = 'sessions';
  $handler->display->display_options['sorts']['sessions']['order'] = 'DESC';

  /* Display: Sessions Total */
  $handler = $view->new_display('panel_pane', 'Sessions Total', 'panel_pane_7');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'overall';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Session: Sessions */
  $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['label'] = '';
  $handler->display->display_options['fields']['sessions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sessions']['precision'] = '0';

  /* Display: Overall Goals */
  $handler = $view->new_display('panel_pane', 'Overall Goals', 'panel_pane_8');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'overall';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Goal Conversions: Goal Completions */
  $handler->display->display_options['fields']['goalCompletionsAll']['id'] = 'goalCompletionsAll';
  $handler->display->display_options['fields']['goalCompletionsAll']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['goalCompletionsAll']['field'] = 'goalCompletionsAll';
  $handler->display->display_options['fields']['goalCompletionsAll']['label'] = '';
  $handler->display->display_options['fields']['goalCompletionsAll']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['goalCompletionsAll']['precision'] = '0';
  $export['analytics'] = $view;

  return $export;
}
