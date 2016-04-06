<?php
/**
 * @file
 * ec_download_file_gate.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_download_file_gate_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ec_guide_download_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'EC Guide Download Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'changed' => 'changed',
    'field_req_res_name' => 'field_req_res_name',
    'field_req_res_email' => 'field_req_res_email',
    'field_req_res_file' => 'field_req_res_file',
    'field_req_res_request_times' => 'field_req_res_request_times',
    'field_req_res_dl_times' => 'field_req_res_dl_times',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_req_res_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_req_res_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_req_res_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_req_res_request_times' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_req_res_dl_times' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Date';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'panopoly_time';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_req_res_name']['id'] = 'field_req_res_name';
  $handler->display->display_options['fields']['field_req_res_name']['table'] = 'field_data_field_req_res_name';
  $handler->display->display_options['fields']['field_req_res_name']['field'] = 'field_req_res_name';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_req_res_email']['id'] = 'field_req_res_email';
  $handler->display->display_options['fields']['field_req_res_email']['table'] = 'field_data_field_req_res_email';
  $handler->display->display_options['fields']['field_req_res_email']['field'] = 'field_req_res_email';
  $handler->display->display_options['fields']['field_req_res_email']['type'] = 'email_plain';
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_req_res_file']['id'] = 'field_req_res_file';
  $handler->display->display_options['fields']['field_req_res_file']['table'] = 'field_data_field_req_res_file';
  $handler->display->display_options['fields']['field_req_res_file']['field'] = 'field_req_res_file';
  $handler->display->display_options['fields']['field_req_res_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_req_res_file']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  /* Field: Content: Request Times */
  $handler->display->display_options['fields']['field_req_res_request_times']['id'] = 'field_req_res_request_times';
  $handler->display->display_options['fields']['field_req_res_request_times']['table'] = 'field_data_field_req_res_request_times';
  $handler->display->display_options['fields']['field_req_res_request_times']['field'] = 'field_req_res_request_times';
  $handler->display->display_options['fields']['field_req_res_request_times']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Download Times */
  $handler->display->display_options['fields']['field_req_res_dl_times']['id'] = 'field_req_res_dl_times';
  $handler->display->display_options['fields']['field_req_res_dl_times']['table'] = 'field_data_field_req_res_dl_times';
  $handler->display->display_options['fields']['field_req_res_dl_times']['field'] = 'field_req_res_dl_times';
  $handler->display->display_options['fields']['field_req_res_dl_times']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'request_restricted' => 'request_restricted',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'admin/export-guide-downloads';
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
  );
  $export['ec_guide_download_report'] = $view;

  $view = new view();
  $view->name = 'restrict_thumbnail';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Restricted Download Thumbnail';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Restricted Download File */
  $handler->display->display_options['fields']['field_restricted_download_file']['id'] = 'field_restricted_download_file';
  $handler->display->display_options['fields']['field_restricted_download_file']['table'] = 'field_data_field_restricted_download_file';
  $handler->display->display_options['fields']['field_restricted_download_file']['field'] = 'field_restricted_download_file';
  $handler->display->display_options['fields']['field_restricted_download_file']['label'] = '';
  $handler->display->display_options['fields']['field_restricted_download_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_restricted_download_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_restricted_download_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_restricted_download_file']['settings'] = array(
    'text' => 'Download [file:name]',
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

  /* Display: Restricted Download Thumbnail */
  $handler = $view->new_display('panel_pane', 'Restricted Download Thumbnail', 'panel_pane_1');
  $export['restrict_thumbnail'] = $view;

  $view = new view();
  $view->name = 'restricted_download_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Restricted Download Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Tracked Downloads';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'changed' => 'changed',
    'field_req_res_name' => 'field_req_res_name',
    'field_req_res_email' => 'field_req_res_email',
    'field_req_res_file' => 'field_req_res_file',
    'field_req_res_request_times' => 'field_req_res_request_times',
    'field_req_res_dl_times' => 'field_req_res_dl_times',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_req_res_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_req_res_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_req_res_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_req_res_request_times' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_req_res_dl_times' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Date';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'panopoly_time';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_req_res_name']['id'] = 'field_req_res_name';
  $handler->display->display_options['fields']['field_req_res_name']['table'] = 'field_data_field_req_res_name';
  $handler->display->display_options['fields']['field_req_res_name']['field'] = 'field_req_res_name';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_req_res_email']['id'] = 'field_req_res_email';
  $handler->display->display_options['fields']['field_req_res_email']['table'] = 'field_data_field_req_res_email';
  $handler->display->display_options['fields']['field_req_res_email']['field'] = 'field_req_res_email';
  $handler->display->display_options['fields']['field_req_res_email']['type'] = 'email_plain';
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_req_res_file']['id'] = 'field_req_res_file';
  $handler->display->display_options['fields']['field_req_res_file']['table'] = 'field_data_field_req_res_file';
  $handler->display->display_options['fields']['field_req_res_file']['field'] = 'field_req_res_file';
  $handler->display->display_options['fields']['field_req_res_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_req_res_file']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  /* Field: Content: Request Times */
  $handler->display->display_options['fields']['field_req_res_request_times']['id'] = 'field_req_res_request_times';
  $handler->display->display_options['fields']['field_req_res_request_times']['table'] = 'field_data_field_req_res_request_times';
  $handler->display->display_options['fields']['field_req_res_request_times']['field'] = 'field_req_res_request_times';
  $handler->display->display_options['fields']['field_req_res_request_times']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Download Times */
  $handler->display->display_options['fields']['field_req_res_dl_times']['id'] = 'field_req_res_dl_times';
  $handler->display->display_options['fields']['field_req_res_dl_times']['table'] = 'field_data_field_req_res_dl_times';
  $handler->display->display_options['fields']['field_req_res_dl_times']['field'] = 'field_req_res_dl_times';
  $handler->display->display_options['fields']['field_req_res_dl_times']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'request_restricted' => 'request_restricted',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'admin/export-guide-downloads';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_1' => 0,
  );

  /* Display: Manage Downloads */
  $handler = $view->new_display('page', 'Manage Downloads', 'page_1');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['path'] = 'admin/reports/downloads';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tracked downloads';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['restricted_download_report'] = $view;

  $view = new view();
  $view->name = 'restricted_file_check';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Restricted File Check';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Restricted Download File (field_restricted_download_file:fid) */
  $handler->display->display_options['relationships']['field_restricted_download_file_fid']['id'] = 'field_restricted_download_file_fid';
  $handler->display->display_options['relationships']['field_restricted_download_file_fid']['table'] = 'field_data_field_restricted_download_file';
  $handler->display->display_options['relationships']['field_restricted_download_file_fid']['field'] = 'field_restricted_download_file_fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['relationship'] = 'field_req_res_file_fid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Restricted Download File (field_restricted_download_file:fid) */
  $handler->display->display_options['arguments']['field_restricted_download_file_fid']['id'] = 'field_restricted_download_file_fid';
  $handler->display->display_options['arguments']['field_restricted_download_file_fid']['table'] = 'field_data_field_restricted_download_file';
  $handler->display->display_options['arguments']['field_restricted_download_file_fid']['field'] = 'field_restricted_download_file_fid';
  $handler->display->display_options['arguments']['field_restricted_download_file_fid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_restricted_download_file_fid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_restricted_download_file_fid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_restricted_download_file_fid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_restricted_download_file_fid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: File: Restricted (field_file_restricted) */
  $handler->display->display_options['filters']['field_file_restricted_value']['id'] = 'field_file_restricted_value';
  $handler->display->display_options['filters']['field_file_restricted_value']['table'] = 'field_data_field_file_restricted';
  $handler->display->display_options['filters']['field_file_restricted_value']['field'] = 'field_file_restricted_value';
  $handler->display->display_options['filters']['field_file_restricted_value']['relationship'] = 'field_restricted_download_file_fid';
  $handler->display->display_options['filters']['field_file_restricted_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_file_restricted_value']['group'] = 1;
  $export['restricted_file_check'] = $view;

  $view = new view();
  $view->name = 'restricted_request_check';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Restricted Request Check';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: File (field_req_res_file:fid) */
  $handler->display->display_options['relationships']['field_req_res_file_fid']['id'] = 'field_req_res_file_fid';
  $handler->display->display_options['relationships']['field_req_res_file_fid']['table'] = 'field_data_field_req_res_file';
  $handler->display->display_options['relationships']['field_req_res_file_fid']['field'] = 'field_req_res_file_fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['relationship'] = 'field_req_res_file_fid';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_req_res_email']['id'] = 'field_req_res_email';
  $handler->display->display_options['fields']['field_req_res_email']['table'] = 'field_data_field_req_res_email';
  $handler->display->display_options['fields']['field_req_res_email']['field'] = 'field_req_res_email';
  /* Contextual filter: Content: File (field_req_res_file:fid) */
  $handler->display->display_options['arguments']['field_req_res_file_fid']['id'] = 'field_req_res_file_fid';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['table'] = 'field_data_field_req_res_file';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['field'] = 'field_req_res_file_fid';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Email (field_req_res_email) */
  $handler->display->display_options['arguments']['field_req_res_email_email']['id'] = 'field_req_res_email_email';
  $handler->display->display_options['arguments']['field_req_res_email_email']['table'] = 'field_data_field_req_res_email';
  $handler->display->display_options['arguments']['field_req_res_email_email']['field'] = 'field_req_res_email_email';
  $handler->display->display_options['arguments']['field_req_res_email_email']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_req_res_email_email']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_req_res_email_email']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_req_res_email_email']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_req_res_email_email']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_req_res_email_email']['limit'] = '0';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'request_restricted' => 'request_restricted',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['restricted_request_check'] = $view;

  $view = new view();
  $view->name = 'restricted_request_key_check';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Restricted Request Key Check';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: File (field_req_res_file:fid) */
  $handler->display->display_options['relationships']['field_req_res_file_fid']['id'] = 'field_req_res_file_fid';
  $handler->display->display_options['relationships']['field_req_res_file_fid']['table'] = 'field_data_field_req_res_file';
  $handler->display->display_options['relationships']['field_req_res_file_fid']['field'] = 'field_req_res_file_fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['relationship'] = 'field_req_res_file_fid';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_req_res_email']['id'] = 'field_req_res_email';
  $handler->display->display_options['fields']['field_req_res_email']['table'] = 'field_data_field_req_res_email';
  $handler->display->display_options['fields']['field_req_res_email']['field'] = 'field_req_res_email';
  /* Contextual filter: Content: File (field_req_res_file:fid) */
  $handler->display->display_options['arguments']['field_req_res_file_fid']['id'] = 'field_req_res_file_fid';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['table'] = 'field_data_field_req_res_file';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['field'] = 'field_req_res_file_fid';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_req_res_file_fid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Key (field_req_res_key) */
  $handler->display->display_options['arguments']['field_req_res_key_value']['id'] = 'field_req_res_key_value';
  $handler->display->display_options['arguments']['field_req_res_key_value']['table'] = 'field_data_field_req_res_key';
  $handler->display->display_options['arguments']['field_req_res_key_value']['field'] = 'field_req_res_key_value';
  $handler->display->display_options['arguments']['field_req_res_key_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_req_res_key_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_req_res_key_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_req_res_key_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_req_res_key_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_req_res_key_value']['limit'] = '0';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'request_restricted' => 'request_restricted',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-1 day';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['changed']['group'] = 1;
  $export['restricted_request_key_check'] = $view;

  return $export;
}
