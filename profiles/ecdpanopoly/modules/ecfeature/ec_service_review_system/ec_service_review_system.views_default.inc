<?php
/**
 * @file
 * ec_service_review_system.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_service_review_system_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sreview_manage_reviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Manage Service Reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage New Service Reviews';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'panopoly_wysiwyg_text',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_sreview_tags_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'field_sreview_rating' => 'field_sreview_rating',
    'field_sreview_review' => 'field_sreview_review',
    'field_sreview_name' => 'field_sreview_name',
    'field_sreview_city' => 'field_sreview_name',
    'field_sreview_zipcode' => 'field_sreview_name',
    'field_sreview_email' => 'field_sreview_name',
    'field_sreview_services' => 'field_sreview_name',
    'field_sreview_tags' => 'field_sreview_tags',
    'field_sreview_send_email' => 'created',
    'views_conditional' => 'created',
    'field_sreview_email_sent' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_rating' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_review' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_zipcode' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_services' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_send_email' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_conditional' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sreview_email_sent' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>New = A new review, waiting to be processed. Un-check "New" when the review has been processed.</p>

<p>Show on Reviews Page = Immediately post the review to the live reviews page. (Make any needed edits before selecting this option.)</p>

<p>Other tags are for convenience in managing the reviews.</p>
';
  $handler->display->display_options['header']['area']['format'] = 'panopoly_html_text';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No reviews found. Try using different filter settings.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'panopoly_time';
  /* Field: Entityform Submission: Rating */
  $handler->display->display_options['fields']['field_sreview_rating']['id'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['table'] = 'field_data_field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['field'] = 'field_sreview_rating';
  /* Field: Entityform Submission: Review */
  $handler->display->display_options['fields']['field_sreview_review']['id'] = 'field_sreview_review';
  $handler->display->display_options['fields']['field_sreview_review']['table'] = 'field_data_field_sreview_review';
  $handler->display->display_options['fields']['field_sreview_review']['field'] = 'field_sreview_review';
  /* Field: Entityform Submission: Name */
  $handler->display->display_options['fields']['field_sreview_name']['id'] = 'field_sreview_name';
  $handler->display->display_options['fields']['field_sreview_name']['table'] = 'field_data_field_sreview_name';
  $handler->display->display_options['fields']['field_sreview_name']['field'] = 'field_sreview_name';
  $handler->display->display_options['fields']['field_sreview_name']['label'] = 'Customer';
  $handler->display->display_options['fields']['field_sreview_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_name']['alter']['text'] = '[field_sreview_name]<br />';
  /* Field: Entityform Submission: City */
  $handler->display->display_options['fields']['field_sreview_city']['id'] = 'field_sreview_city';
  $handler->display->display_options['fields']['field_sreview_city']['table'] = 'field_data_field_sreview_city';
  $handler->display->display_options['fields']['field_sreview_city']['field'] = 'field_sreview_city';
  $handler->display->display_options['fields']['field_sreview_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_city']['alter']['text'] = '[field_sreview_city]<br />';
  /* Field: Entityform Submission: Zipcode */
  $handler->display->display_options['fields']['field_sreview_zipcode']['id'] = 'field_sreview_zipcode';
  $handler->display->display_options['fields']['field_sreview_zipcode']['table'] = 'field_data_field_sreview_zipcode';
  $handler->display->display_options['fields']['field_sreview_zipcode']['field'] = 'field_sreview_zipcode';
  $handler->display->display_options['fields']['field_sreview_zipcode']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_zipcode']['alter']['text'] = '[field_sreview_zipcode]<br />';
  /* Field: Entityform Submission: Email */
  $handler->display->display_options['fields']['field_sreview_email']['id'] = 'field_sreview_email';
  $handler->display->display_options['fields']['field_sreview_email']['table'] = 'field_data_field_sreview_email';
  $handler->display->display_options['fields']['field_sreview_email']['field'] = 'field_sreview_email';
  $handler->display->display_options['fields']['field_sreview_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_email']['alter']['text'] = '[field_sreview_email]<br />';
  /* Field: Entityform Submission: Services */
  $handler->display->display_options['fields']['field_sreview_services']['id'] = 'field_sreview_services';
  $handler->display->display_options['fields']['field_sreview_services']['table'] = 'field_data_field_sreview_services';
  $handler->display->display_options['fields']['field_sreview_services']['field'] = 'field_sreview_services';
  $handler->display->display_options['fields']['field_sreview_services']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_services']['alter']['text'] = '[field_sreview_services]<br />';
  $handler->display->display_options['fields']['field_sreview_services']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_sreview_services']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sreview_services']['separator'] = ' | ';
  /* Field: Entityform Submission: Review Tags */
  $handler->display->display_options['fields']['field_sreview_tags']['id'] = 'field_sreview_tags';
  $handler->display->display_options['fields']['field_sreview_tags']['table'] = 'field_data_field_sreview_tags';
  $handler->display->display_options['fields']['field_sreview_tags']['field'] = 'field_sreview_tags';
  $handler->display->display_options['fields']['field_sreview_tags']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sreview_tags']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_plain',
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_sreview_tags']['delta_offset'] = '0';
  /* Field: Entityform Submission: Send High Rating Followup Email */
  $handler->display->display_options['fields']['field_sreview_send_email']['id'] = 'field_sreview_send_email';
  $handler->display->display_options['fields']['field_sreview_send_email']['table'] = 'field_data_field_sreview_send_email';
  $handler->display->display_options['fields']['field_sreview_send_email']['field'] = 'field_sreview_send_email';
  $handler->display->display_options['fields']['field_sreview_send_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_send_email']['type'] = 'editable';
  $handler->display->display_options['fields']['field_sreview_send_email']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_sreview_send_email']['delta_offset'] = '0';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '3';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '8';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_sreview_send_email]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Entityform Submission: High Rating Email Sent */
  $handler->display->display_options['fields']['field_sreview_email_sent']['id'] = 'field_sreview_email_sent';
  $handler->display->display_options['fields']['field_sreview_email_sent']['table'] = 'field_data_field_sreview_email_sent';
  $handler->display->display_options['fields']['field_sreview_email_sent']['field'] = 'field_sreview_email_sent';
  $handler->display->display_options['fields']['field_sreview_email_sent']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_email_sent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sreview_email_sent']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_sreview_email_sent']['delta_offset'] = '0';
  /* Sort criterion: Entityform Submission: Date submitted */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'entityform';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sreview' => 'sreview',
  );
  /* Filter criterion: Entityform Submission: Review Tags (field_sreview_tags) */
  $handler->display->display_options['filters']['field_sreview_tags_tid']['id'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['table'] = 'field_data_field_sreview_tags';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['field'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['value'] = array(
    25 => '25',
  );
  $handler->display->display_options['filters']['field_sreview_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sreview_tags_tid']['expose']['operator_id'] = 'field_sreview_tags_tid_op';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['expose']['label'] = 'Filter Reviews';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['expose']['operator'] = 'field_sreview_tags_tid_op';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['expose']['identifier'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_sreview_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['vocabulary'] = 'service_review_tags';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/service-reviews';
  $export['sreview_manage_reviews'] = $view;

  $view = new view();
  $view->name = 'sreview_sites';
  $view->description = 'External review sites to display in the Review Management System';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Review Sites';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_review_site_url' => 'field_review_site_url',
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
    'field_review_site_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Satisfied with your experience? Please take a minute to share a review of our services on any of the following sites.</h2>';
  $handler->display->display_options['header']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Content: Service Review Page */
  $handler->display->display_options['fields']['field_sreview_page']['id'] = 'field_sreview_page';
  $handler->display->display_options['fields']['field_sreview_page']['table'] = 'field_data_field_sreview_page';
  $handler->display->display_options['fields']['field_sreview_page']['field'] = 'field_sreview_page';
  $handler->display->display_options['fields']['field_sreview_page']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sreview_page']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sreview_page']['type'] = 'link_plain';
  /* Field: Content: Service Review Site Logo */
  $handler->display->display_options['fields']['field_sreview_logo']['id'] = 'field_sreview_logo';
  $handler->display->display_options['fields']['field_sreview_logo']['table'] = 'field_data_field_sreview_logo';
  $handler->display->display_options['fields']['field_sreview_logo']['field'] = 'field_sreview_logo';
  $handler->display->display_options['fields']['field_sreview_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_logo']['alter']['text'] = '<a href="[field_sreview_page]" target="_blank">[field_sreview_logo]</a>';
  $handler->display->display_options['fields']['field_sreview_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sreview_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sreview_logo']['settings'] = array(
    'image_style' => 's_140',
    'image_link' => '',
  );
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'rms_review_sites:page_1';
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
    'sreview_site' => 'sreview_site',
  );

  /* Display: Service Review Sites */
  $handler = $view->new_display('panel_pane', 'Service Review Sites', 'panel_pane_1');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = 'Rearrange';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['path'] = 'admin/service-review-sites';
  $handler->display->display_options['menu']['title'] = 'RMS Review';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['sreview_sites'] = $view;

  $view = new view();
  $view->name = 'sreviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Service Reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Entityform Submission: Rating */
  $handler->display->display_options['fields']['field_sreview_rating']['id'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['table'] = 'field_data_field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['field'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_rating']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_rating']['element_label_colon'] = FALSE;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Scale of 1 to 5';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_sreview_rating]/2';
  /* Field: Entityform Submission: Rating */
  $handler->display->display_options['fields']['field_sreview_rating_1']['id'] = 'field_sreview_rating_1';
  $handler->display->display_options['fields']['field_sreview_rating_1']['table'] = 'field_data_field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating_1']['field'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating_1']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_rating_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_rating_1']['alter']['text'] = '<span class="rating-[expression]">[expression]</span>';
  $handler->display->display_options['fields']['field_sreview_rating_1']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Review */
  $handler->display->display_options['fields']['field_sreview_review']['id'] = 'field_sreview_review';
  $handler->display->display_options['fields']['field_sreview_review']['table'] = 'field_data_field_sreview_review';
  $handler->display->display_options['fields']['field_sreview_review']['field'] = 'field_sreview_review';
  $handler->display->display_options['fields']['field_sreview_review']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_review']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: City */
  $handler->display->display_options['fields']['field_sreview_city']['id'] = 'field_sreview_city';
  $handler->display->display_options['fields']['field_sreview_city']['table'] = 'field_data_field_sreview_city';
  $handler->display->display_options['fields']['field_sreview_city']['field'] = 'field_sreview_city';
  $handler->display->display_options['fields']['field_sreview_city']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_city']['alter']['text'] = ', [field_sreview_city]';
  $handler->display->display_options['fields']['field_sreview_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sreview_city']['hide_empty'] = TRUE;
  /* Field: Entityform Submission: Name */
  $handler->display->display_options['fields']['field_sreview_name']['id'] = 'field_sreview_name';
  $handler->display->display_options['fields']['field_sreview_name']['table'] = 'field_data_field_sreview_name';
  $handler->display->display_options['fields']['field_sreview_name']['field'] = 'field_sreview_name';
  $handler->display->display_options['fields']['field_sreview_name']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_name']['alter']['text'] = '[field_sreview_name][field_sreview_city]';
  $handler->display->display_options['fields']['field_sreview_name']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Services */
  $handler->display->display_options['fields']['field_sreview_services']['id'] = 'field_sreview_services';
  $handler->display->display_options['fields']['field_sreview_services']['table'] = 'field_data_field_sreview_services';
  $handler->display->display_options['fields']['field_sreview_services']['field'] = 'field_sreview_services';
  $handler->display->display_options['fields']['field_sreview_services']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_services']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_services']['alter']['text'] = 'Services: [field_sreview_services]';
  $handler->display->display_options['fields']['field_sreview_services']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sreview_services']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_sreview_services']['delta_offset'] = '0';
  /* Sort criterion: Entityform Submission: Rating (field_sreview_rating) */
  $handler->display->display_options['sorts']['field_sreview_rating_value']['id'] = 'field_sreview_rating_value';
  $handler->display->display_options['sorts']['field_sreview_rating_value']['table'] = 'field_data_field_sreview_rating';
  $handler->display->display_options['sorts']['field_sreview_rating_value']['field'] = 'field_sreview_rating_value';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sreview' => 'sreview',
  );
  /* Filter criterion: Entityform Submission: Review Tags (field_sreview_tags) */
  $handler->display->display_options['filters']['field_sreview_tags_tid']['id'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['table'] = 'field_data_field_sreview_tags';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['field'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['value'] = array(
    22 => '22',
  );
  $handler->display->display_options['filters']['field_sreview_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['vocabulary'] = 'service_review_tags';

  /* Display: Service Reviews */
  $handler = $view->new_display('panel_pane', 'Service Reviews', 'panel_pane_1');
  $export['sreviews'] = $view;

  $view = new view();
  $view->name = 'sreviews_average';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Service Review - Average';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Average Rating';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: AVG(Entityform Submission: Rating) */
  $handler->display->display_options['fields']['field_sreview_rating']['id'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['table'] = 'field_data_field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['field'] = 'field_sreview_rating';
  $handler->display->display_options['fields']['field_sreview_rating']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_sreview_rating']['label'] = '';
  $handler->display->display_options['fields']['field_sreview_rating']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sreview_rating']['alter']['text'] = '<span class="rating-[field_sreview_rating]">[field_sreview_rating]</span>';
  $handler->display->display_options['fields']['field_sreview_rating']['element_label_colon'] = FALSE;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_sreview_rating]/2';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="rating-[expression]">[expression]</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sreview' => 'sreview',
  );
  /* Filter criterion: Entityform Submission: Review Tags (field_sreview_tags) */
  $handler->display->display_options['filters']['field_sreview_tags_tid']['id'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['table'] = 'field_data_field_sreview_tags';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['field'] = 'field_sreview_tags_tid';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['value'] = array(
    22 => '22',
  );
  $handler->display->display_options['filters']['field_sreview_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sreview_tags_tid']['vocabulary'] = 'service_review_tags';

  /* Display: Average rating */
  $handler = $view->new_display('panel_pane', 'Average rating', 'panel_pane_1');
  $export['sreviews_average'] = $view;

  return $export;
}
