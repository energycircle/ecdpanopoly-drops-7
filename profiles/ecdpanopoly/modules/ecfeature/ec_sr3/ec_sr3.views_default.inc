<?php
/**
 * @file
 * ec_sr3.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_sr3_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sr3_manage_reviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SR3 - Manage Reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SR3 - Manage Customer Reviews';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'break_row';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_sr3_name' => 'field_sr3_name',
    'created' => 'created',
    'field_sr3_city' => 'field_sr3_city',
    'field_sr3_zipcode' => 'field_sr3_zipcode',
    'field_sr3_recommendation' => 'field_sr3_recommendation',
    'field_sr3_rating_value' => 'field_sr3_rating_value',
    'field_sr3_service_feedback' => 'field_sr3_service_feedback',
    'field_sr3_service_review' => 'field_sr3_service_review',
    'status' => 'status',
    'field_sr3_response_time' => 'field_sr3_response_time',
    'field_sr3_employee_courtesy' => 'field_sr3_employee_courtesy',
    'field_sr3_overall_experience' => 'field_sr3_overall_experience',
    'field_sr3_quality_of_work' => 'field_sr3_quality_of_work',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'field_sr3_name',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_zipcode' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'field_sr3_name',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_recommendation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_rating_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_service_feedback' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_service_review' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_response_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'created',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_employee_courtesy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'created',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_overall_experience' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'created',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_sr3_quality_of_work' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'created',
      'separator2' => '',
      'colspan' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'views_bulk_operations',
      'separator2' => '',
      'colspan' => '',
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: SR3 Name */
  $handler->display->display_options['fields']['field_sr3_name']['id'] = 'field_sr3_name';
  $handler->display->display_options['fields']['field_sr3_name']['table'] = 'field_data_field_sr3_name';
  $handler->display->display_options['fields']['field_sr3_name']['field'] = 'field_sr3_name';
  $handler->display->display_options['fields']['field_sr3_name']['label'] = 'Name';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'panopoly_time';
  /* Field: Content: SR3 City */
  $handler->display->display_options['fields']['field_sr3_city']['id'] = 'field_sr3_city';
  $handler->display->display_options['fields']['field_sr3_city']['table'] = 'field_data_field_sr3_city';
  $handler->display->display_options['fields']['field_sr3_city']['field'] = 'field_sr3_city';
  $handler->display->display_options['fields']['field_sr3_city']['label'] = 'City';
  $handler->display->display_options['fields']['field_sr3_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_city']['alter']['text'] = '[field_sr3_city]<br />';
  /* Field: Content: SR3 Zipcode */
  $handler->display->display_options['fields']['field_sr3_zipcode']['id'] = 'field_sr3_zipcode';
  $handler->display->display_options['fields']['field_sr3_zipcode']['table'] = 'field_data_field_sr3_zipcode';
  $handler->display->display_options['fields']['field_sr3_zipcode']['field'] = 'field_sr3_zipcode';
  $handler->display->display_options['fields']['field_sr3_zipcode']['label'] = 'Zipcode';
  /* Field: Content: SR3 recommendation */
  $handler->display->display_options['fields']['field_sr3_recommendation']['id'] = 'field_sr3_recommendation';
  $handler->display->display_options['fields']['field_sr3_recommendation']['table'] = 'field_data_field_sr3_recommendation';
  $handler->display->display_options['fields']['field_sr3_recommendation']['field'] = 'field_sr3_recommendation';
  $handler->display->display_options['fields']['field_sr3_recommendation']['label'] = '0-10 Score';
  /* Field: Content: Please rate the quality of our service */
  $handler->display->display_options['fields']['field_sr3_rating_value']['id'] = 'field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['table'] = 'field_data_field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['field'] = 'field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['label'] = '1-5 Score';
  /* Field: Content: Please leave your feedback */
  $handler->display->display_options['fields']['field_sr3_service_feedback']['id'] = 'field_sr3_service_feedback';
  $handler->display->display_options['fields']['field_sr3_service_feedback']['table'] = 'field_data_field_sr3_service_feedback';
  $handler->display->display_options['fields']['field_sr3_service_feedback']['field'] = 'field_sr3_service_feedback';
  $handler->display->display_options['fields']['field_sr3_service_feedback']['label'] = 'Feedback';
  /* Field: Content: Please leave your review */
  $handler->display->display_options['fields']['field_sr3_service_review']['id'] = 'field_sr3_service_review';
  $handler->display->display_options['fields']['field_sr3_service_review']['table'] = 'field_data_field_sr3_service_review';
  $handler->display->display_options['fields']['field_sr3_service_review']['field'] = 'field_sr3_service_review';
  $handler->display->display_options['fields']['field_sr3_service_review']['label'] = 'Review';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published to Reviews page';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Response Time */
  $handler->display->display_options['fields']['field_sr3_response_time']['id'] = 'field_sr3_response_time';
  $handler->display->display_options['fields']['field_sr3_response_time']['table'] = 'field_data_field_sr3_response_time';
  $handler->display->display_options['fields']['field_sr3_response_time']['field'] = 'field_sr3_response_time';
  $handler->display->display_options['fields']['field_sr3_response_time']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_response_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_response_time']['alter']['text'] = 'Response Time: [field_sr3_response_time]<br />';
  $handler->display->display_options['fields']['field_sr3_response_time']['element_label_colon'] = FALSE;
  /* Field: Content: SR3 Employee Courtesy */
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['id'] = 'field_sr3_employee_courtesy';
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['table'] = 'field_data_field_sr3_employee_courtesy';
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['field'] = 'field_sr3_employee_courtesy';
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['alter']['text'] = 'Employee Courtesy: [field_sr3_employee_courtesy] <br />';
  $handler->display->display_options['fields']['field_sr3_employee_courtesy']['element_label_colon'] = FALSE;
  /* Field: Content: SR3 Overall Experience */
  $handler->display->display_options['fields']['field_sr3_overall_experience']['id'] = 'field_sr3_overall_experience';
  $handler->display->display_options['fields']['field_sr3_overall_experience']['table'] = 'field_data_field_sr3_overall_experience';
  $handler->display->display_options['fields']['field_sr3_overall_experience']['field'] = 'field_sr3_overall_experience';
  $handler->display->display_options['fields']['field_sr3_overall_experience']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_overall_experience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_overall_experience']['alter']['text'] = 'Overall Experience: [field_sr3_overall_experience]<br />';
  $handler->display->display_options['fields']['field_sr3_overall_experience']['element_label_colon'] = FALSE;
  /* Field: Content: SR3 Quality of Work */
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['id'] = 'field_sr3_quality_of_work';
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['table'] = 'field_data_field_sr3_quality_of_work';
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['field'] = 'field_sr3_quality_of_work';
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['alter']['text'] = 'Quality of Work: [field_sr3_quality_of_work]<br />';
  $handler->display->display_options['fields']['field_sr3_quality_of_work']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Placeholder 1';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '&nbsp;';
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
    'sr3_service_review' => 'sr3_service_review',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/manage-reviews';
  $export['sr3_manage_reviews'] = $view;

  $view = new view();
  $view->name = 'sr3_review_sites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SR3 Review Sites';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Review Page Link */
  $handler->display->display_options['fields']['field_review_site_url']['id'] = 'field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['table'] = 'field_data_field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['field'] = 'field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_site_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_review_site_url']['type'] = 'link_plain';
  /* Field: Content: Review Site Logo */
  $handler->display->display_options['fields']['field_review_site_logo']['id'] = 'field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['table'] = 'field_data_field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['field'] = 'field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_logo']['alter']['text'] = '<p class="review-site"><a class="review-site-logo" href="[field_review_site_url]">[field_review_site_logo]</a></p>';
  $handler->display->display_options['fields']['field_review_site_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_site_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_review_site_logo']['settings'] = array(
    'image_style' => 's_140',
    'image_link' => '',
  );
  /* Field: Content: Review CTA */
  $handler->display->display_options['fields']['field_review_site_cta']['id'] = 'field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['table'] = 'field_data_field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['field'] = 'field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_cta']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_cta']['alter']['text'] = '<p class="review-site"><a class="review-site-cta" href="[field_review_site_url]">[field_review_site_cta]</a></p>';
  $handler->display->display_options['fields']['field_review_site_cta']['element_label_colon'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'sr3_review_sites:panel_pane_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'review_site' => 'review_site',
  );
  /* Filter criterion: Content: Show in SR3 Review Sites list (field_review_site_show) */
  $handler->display->display_options['filters']['field_review_site_show_value']['id'] = 'field_review_site_show_value';
  $handler->display->display_options['filters']['field_review_site_show_value']['table'] = 'field_data_field_review_site_show';
  $handler->display->display_options['filters']['field_review_site_show_value']['field'] = 'field_review_site_show_value';
  $handler->display->display_options['filters']['field_review_site_show_value']['value'] = array(
    1 => '1',
  );

  /* Display: Review Sites */
  $handler = $view->new_display('panel_pane', 'Review Sites', 'panel_pane_1');

  /* Display: Rearrange Review Sites */
  $handler = $view->new_display('panel_pane', 'Rearrange Review Sites', 'panel_pane_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_review_site_url' => 'field_review_site_url',
    'field_review_site_logo' => 'field_review_site_logo',
    'field_review_site_cta' => 'field_review_site_cta',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_review_site_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_review_site_logo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_review_site_cta' => array(
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
  /* Field: Content: Review Page Link */
  $handler->display->display_options['fields']['field_review_site_url']['id'] = 'field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['table'] = 'field_data_field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['field'] = 'field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_site_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_review_site_url']['type'] = 'link_plain';
  /* Field: Content: Review Site Logo */
  $handler->display->display_options['fields']['field_review_site_logo']['id'] = 'field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['table'] = 'field_data_field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['field'] = 'field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_logo']['alter']['text'] = '<p class="review-site"><a class="review-site-logo" href="[field_review_site_url]">[field_review_site_logo]</a></p>';
  $handler->display->display_options['fields']['field_review_site_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_site_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_review_site_logo']['settings'] = array(
    'image_style' => 's_140',
    'image_link' => '',
  );
  /* Field: Content: Review CTA */
  $handler->display->display_options['fields']['field_review_site_cta']['id'] = 'field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['table'] = 'field_data_field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['field'] = 'field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_cta']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_cta']['alter']['text'] = '<p class="review-site"><a class="review-site-cta" href="[field_review_site_url]">[field_review_site_cta]</a></p>';
  $handler->display->display_options['fields']['field_review_site_cta']['element_label_colon'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = 'Rearrange';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $export['sr3_review_sites'] = $view;

  $view = new view();
  $view->name = 'sr3_service_review';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SR3 Service Reviews';
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
  /* Field: Content: Please rate the quality of our service */
  $handler->display->display_options['fields']['field_sr3_rating_value']['id'] = 'field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['table'] = 'field_data_field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['field'] = 'field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_rating_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sr3_rating_value']['type'] = 'list_key';
  /* Field: Content: Please leave your review */
  $handler->display->display_options['fields']['field_sr3_service_review']['id'] = 'field_sr3_service_review';
  $handler->display->display_options['fields']['field_sr3_service_review']['table'] = 'field_data_field_sr3_service_review';
  $handler->display->display_options['fields']['field_sr3_service_review']['field'] = 'field_sr3_service_review';
  $handler->display->display_options['fields']['field_sr3_service_review']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_service_review']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'panopoly_day';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'panopoly_time';
  /* Field: Content: SR3 City */
  $handler->display->display_options['fields']['field_sr3_city']['id'] = 'field_sr3_city';
  $handler->display->display_options['fields']['field_sr3_city']['table'] = 'field_data_field_sr3_city';
  $handler->display->display_options['fields']['field_sr3_city']['field'] = 'field_sr3_city';
  $handler->display->display_options['fields']['field_sr3_city']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_city']['alter']['text'] = ', [field_sr3_city]';
  $handler->display->display_options['fields']['field_sr3_city']['element_label_colon'] = FALSE;
  /* Field: Content: SR3 Name */
  $handler->display->display_options['fields']['field_sr3_name']['id'] = 'field_sr3_name';
  $handler->display->display_options['fields']['field_sr3_name']['table'] = 'field_data_field_sr3_name';
  $handler->display->display_options['fields']['field_sr3_name']['field'] = 'field_sr3_name';
  $handler->display->display_options['fields']['field_sr3_name']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_name']['alter']['text'] = '[field_sr3_name][field_sr3_city]';
  $handler->display->display_options['fields']['field_sr3_name']['element_label_colon'] = FALSE;
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
    'sr3_service_review' => 'sr3_service_review',
  );

  /* Display: Reviews */
  $handler = $view->new_display('panel_pane', 'Reviews', 'panel_pane_1');
  $export['sr3_service_review'] = $view;

  $view = new view();
  $view->name = 'sr3_service_review_average';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SR3 Service Review Average';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Average Rating';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: AVG(Content: Please rate the quality of our service) */
  $handler->display->display_options['fields']['field_sr3_rating_value']['id'] = 'field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['table'] = 'field_data_field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['field'] = 'field_sr3_rating_value';
  $handler->display->display_options['fields']['field_sr3_rating_value']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_sr3_rating_value']['label'] = '';
  $handler->display->display_options['fields']['field_sr3_rating_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sr3_rating_value']['alter']['text'] = '<span class="rating-[field_sr3_rating_value]">[field_sr3_rating_value]</span>';
  $handler->display->display_options['fields']['field_sr3_rating_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sr3_rating_value']['type'] = 'list_key';
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
    'sr3_service_review' => 'sr3_service_review',
  );

  /* Display: Average Rating */
  $handler = $view->new_display('panel_pane', 'Average Rating', 'panel_pane_1');
  $export['sr3_service_review_average'] = $view;

  return $export;
}
