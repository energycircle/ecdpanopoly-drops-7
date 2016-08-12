<?php
/**
 * @file
 * ec_citypages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_citypages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'city_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City Pages';
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
  /* Field: Content: Description Local Experience */
  $handler->display->display_options['fields']['field_citypages_local_experience']['id'] = 'field_citypages_local_experience';
  $handler->display->display_options['fields']['field_citypages_local_experience']['table'] = 'field_data_field_citypages_local_experience';
  $handler->display->display_options['fields']['field_citypages_local_experience']['field'] = 'field_citypages_local_experience';
  $handler->display->display_options['fields']['field_citypages_local_experience']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_local_experience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_local_experience']['element_label_colon'] = FALSE;
  /* Field: Content: Description Example */
  $handler->display->display_options['fields']['field_citypages_example']['id'] = 'field_citypages_example';
  $handler->display->display_options['fields']['field_citypages_example']['table'] = 'field_data_field_citypages_example';
  $handler->display->display_options['fields']['field_citypages_example']['field'] = 'field_citypages_example';
  $handler->display->display_options['fields']['field_citypages_example']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_example']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_example']['element_label_colon'] = FALSE;
  /* Field: Content: Local/Seasonal Services -- or -- Other Local Notes */
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['id'] = 'field_citypages_other_descriptio';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['table'] = 'field_data_field_citypages_other_descriptio';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['field'] = 'field_citypages_other_descriptio';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['element_label_colon'] = FALSE;
  /* Field: Content: Description Place Names */
  $handler->display->display_options['fields']['field_citypages_placenames']['id'] = 'field_citypages_placenames';
  $handler->display->display_options['fields']['field_citypages_placenames']['table'] = 'field_data_field_citypages_placenames';
  $handler->display->display_options['fields']['field_citypages_placenames']['field'] = 'field_citypages_placenames';
  $handler->display->display_options['fields']['field_citypages_placenames']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_placenames']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_placenames']['alter']['text'] = '[field_citypages_placenames]
[field_citypages_local_experience]
[field_citypages_example]
[field_citypages_other_descriptio]';
  $handler->display->display_options['fields']['field_citypages_placenames']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'city_page' => 'city_page',
  );

  /* Display: City Page - Description */
  $handler = $view->new_display('panel_pane', 'City Page - Description', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Description Local Experience */
  $handler->display->display_options['fields']['field_citypages_local_experience']['id'] = 'field_citypages_local_experience';
  $handler->display->display_options['fields']['field_citypages_local_experience']['table'] = 'field_data_field_citypages_local_experience';
  $handler->display->display_options['fields']['field_citypages_local_experience']['field'] = 'field_citypages_local_experience';
  $handler->display->display_options['fields']['field_citypages_local_experience']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_local_experience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_local_experience']['element_label_colon'] = FALSE;
  /* Field: Content: Description Example */
  $handler->display->display_options['fields']['field_citypages_example']['id'] = 'field_citypages_example';
  $handler->display->display_options['fields']['field_citypages_example']['table'] = 'field_data_field_citypages_example';
  $handler->display->display_options['fields']['field_citypages_example']['field'] = 'field_citypages_example';
  $handler->display->display_options['fields']['field_citypages_example']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_example']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_example']['element_label_colon'] = FALSE;
  /* Field: Content: Local/Seasonal Services -- or -- Other Local Notes */
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['id'] = 'field_citypages_other_descriptio';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['table'] = 'field_data_field_citypages_other_descriptio';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['field'] = 'field_citypages_other_descriptio';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['element_label_colon'] = FALSE;
  /* Field: Content: Description Place Names */
  $handler->display->display_options['fields']['field_citypages_placenames']['id'] = 'field_citypages_placenames';
  $handler->display->display_options['fields']['field_citypages_placenames']['table'] = 'field_data_field_citypages_placenames';
  $handler->display->display_options['fields']['field_citypages_placenames']['field'] = 'field_citypages_placenames';
  $handler->display->display_options['fields']['field_citypages_placenames']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_placenames']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_placenames']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[field_citypages_placenames]
[field_citypages_local_experience]
[field_citypages_example]
[field_citypages_other_descriptio]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $export['city_pages'] = $view;

  $view = new view();
  $view->name = 'city_pages_featured_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City Pages - Featured Content';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'blog_post' => 'blog_post',
  );

  /* Display: Blog Content */
  $handler = $view->new_display('panel_pane', 'Blog Content', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Blog Article';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_citypages_blog_node']['id'] = 'reverse_field_ref_citypages_blog_node';
  $handler->display->display_options['relationships']['reverse_field_ref_citypages_blog_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_citypages_blog_node']['field'] = 'reverse_field_ref_citypages_blog_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_blog_image']['id'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['table'] = 'field_data_field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['field'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['label'] = '';
  $handler->display->display_options['fields']['field_blog_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_image']['settings'] = array(
    'image_style' => 'sc_300x225',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_citypages_blog_node';
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
    'blog_post' => 'blog_post',
  );

  /* Display: CaseStudy Content */
  $handler = $view->new_display('panel_pane', 'CaseStudy Content', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Case Studies';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_citypages_case_study_node']['id'] = 'reverse_field_ref_citypages_case_study_node';
  $handler->display->display_options['relationships']['reverse_field_ref_citypages_case_study_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_citypages_case_study_node']['field'] = 'reverse_field_ref_citypages_case_study_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ref_case_study_gallery']['id'] = 'field_ref_case_study_gallery';
  $handler->display->display_options['fields']['field_ref_case_study_gallery']['table'] = 'field_data_field_ref_case_study_gallery';
  $handler->display->display_options['fields']['field_ref_case_study_gallery']['field'] = 'field_ref_case_study_gallery';
  $handler->display->display_options['fields']['field_ref_case_study_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_ref_case_study_gallery']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_citypages_case_study_node';
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
    'case_study' => 'case_study',
  );

  /* Display: Testimonial Content */
  $handler = $view->new_display('panel_pane', 'Testimonial Content', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Testimonial';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_citypages_testimonials_node']['id'] = 'reverse_field_ref_citypages_testimonials_node';
  $handler->display->display_options['relationships']['reverse_field_ref_citypages_testimonials_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_citypages_testimonials_node']['field'] = 'reverse_field_ref_citypages_testimonials_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_testimonial_source_target_id']['id'] = 'field_testimonial_source_target_id';
  $handler->display->display_options['relationships']['field_testimonial_source_target_id']['table'] = 'field_data_field_testimonial_source';
  $handler->display->display_options['relationships']['field_testimonial_source_target_id']['field'] = 'field_testimonial_source_target_id';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Testimonial City */
  $handler->display->display_options['fields']['field_testimonial_city']['id'] = 'field_testimonial_city';
  $handler->display->display_options['fields']['field_testimonial_city']['table'] = 'field_data_field_testimonial_city';
  $handler->display->display_options['fields']['field_testimonial_city']['field'] = 'field_testimonial_city';
  $handler->display->display_options['fields']['field_testimonial_city']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_testimonial_city']['element_label_colon'] = FALSE;
  /* Field: Content: Testimonial Image */
  $handler->display->display_options['fields']['field_testimonial_image']['id'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['table'] = 'field_data_field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['field'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_image']['settings'] = array(
    'image_style' => 'sc_300x225',
    'image_link' => '',
    'field_multiple_limit' => '1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_testimonial_image']['delta_offset'] = '0';
  /* Field: Content: Testimonial Name */
  $handler->display->display_options['fields']['field_tetstimonial_name']['id'] = 'field_tetstimonial_name';
  $handler->display->display_options['fields']['field_tetstimonial_name']['table'] = 'field_data_field_tetstimonial_name';
  $handler->display->display_options['fields']['field_tetstimonial_name']['field'] = 'field_tetstimonial_name';
  $handler->display->display_options['fields']['field_tetstimonial_name']['label'] = '';
  $handler->display->display_options['fields']['field_tetstimonial_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tetstimonial_name']['alter']['text'] = '[field_tetstimonial_name] - [field_testimonial_city]';
  $handler->display->display_options['fields']['field_tetstimonial_name']['element_label_colon'] = FALSE;
  /* Field: Content: Review CTA */
  $handler->display->display_options['fields']['field_review_site_cta']['id'] = 'field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['table'] = 'field_data_field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['field'] = 'field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['relationship'] = 'field_testimonial_source_target_id';
  $handler->display->display_options['fields']['field_review_site_cta']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_cta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_cta']['element_label_colon'] = FALSE;
  /* Field: Content: Review Page Link */
  $handler->display->display_options['fields']['field_review_site_url']['id'] = 'field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['table'] = 'field_data_field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['field'] = 'field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['relationship'] = 'field_testimonial_source_target_id';
  $handler->display->display_options['fields']['field_review_site_url']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_site_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_review_site_url']['type'] = 'link_plain';
  /* Field: Content: Review Site Logo */
  $handler->display->display_options['fields']['field_review_site_logo']['id'] = 'field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['table'] = 'field_data_field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['field'] = 'field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['relationship'] = 'field_testimonial_source_target_id';
  $handler->display->display_options['fields']['field_review_site_logo']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_logo']['alter']['text'] = '<a target="_blank" href="[field_review_site_url]">[field_review_site_cta] [field_review_site_logo]</a>';
  $handler->display->display_options['fields']['field_review_site_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_site_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_review_site_logo']['settings'] = array(
    'image_style' => 's_140',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_citypages_testimonials_node';
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
    'testimonial' => 'testimonial',
  );
  $export['city_pages_featured_content'] = $view;

  $view = new view();
  $view->name = 'city_pages_lists';
  $view->description = 'LIstings and administrative views of City Pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City Pages - Lists';
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
  /* Field: Content: Blog Posts */
  $handler->display->display_options['fields']['field_ref_citypages_blog']['id'] = 'field_ref_citypages_blog';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['table'] = 'field_data_field_ref_citypages_blog';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['field'] = 'field_ref_citypages_blog';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_blog']['delta_offset'] = '0';
  /* Field: Content: Testimonials */
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['id'] = 'field_ref_citypages_testimonials';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['table'] = 'field_data_field_ref_citypages_testimonials';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['field'] = 'field_ref_citypages_testimonials';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['delta_offset'] = '0';
  /* Field: Content: Case Studies */
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['id'] = 'field_ref_citypages_case_study';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['table'] = 'field_data_field_ref_citypages_case_study';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['field'] = 'field_ref_citypages_case_study';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'city_page' => 'city_page',
  );

  /* Display: City Page Linked Content */
  $handler = $view->new_display('panel_pane', 'City Page Linked Content', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: City Page Linked Content Simple */
  $handler = $view->new_display('panel_pane', 'City Page Linked Content Simple', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Service Areas We Cover';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Blog Articles list (NID) */
  $handler = $view->new_display('panel_pane', 'Blog Articles list (NID)', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Blog Articles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Blog Posts */
  $handler->display->display_options['fields']['field_ref_citypages_blog']['id'] = 'field_ref_citypages_blog';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['table'] = 'field_data_field_ref_citypages_blog';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['field'] = 'field_ref_citypages_blog';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['label'] = '';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_citypages_blog']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_blog']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Testimonials list (NID) */
  $handler = $view->new_display('panel_pane', 'Testimonials list (NID)', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Testimonials';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Testimonials */
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['id'] = 'field_ref_citypages_testimonials';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['table'] = 'field_data_field_ref_citypages_testimonials';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['field'] = 'field_ref_citypages_testimonials';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['label'] = '';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Casestudies list (NID) */
  $handler = $view->new_display('panel_pane', 'Casestudies list (NID)', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Case Studies';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Case Studies */
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['id'] = 'field_ref_citypages_case_study';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['table'] = 'field_data_field_ref_citypages_case_study';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['field'] = 'field_ref_citypages_case_study';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['label'] = '';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: City Page (field_ref_blog_citypages:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_ref_blog_citypages';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';

  /* Display: City Page Title */
  $handler = $view->new_display('panel_pane', 'City Page Title', 'panel_pane_9');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Primary Services */
  $handler->display->display_options['fields']['field_ref_citypages_services']['id'] = 'field_ref_citypages_services';
  $handler->display->display_options['fields']['field_ref_citypages_services']['table'] = 'field_data_field_ref_citypages_services';
  $handler->display->display_options['fields']['field_ref_citypages_services']['field'] = 'field_ref_citypages_services';
  $handler->display->display_options['fields']['field_ref_citypages_services']['label'] = '';
  $handler->display->display_options['fields']['field_ref_citypages_services']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ref_citypages_services']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_citypages_services']['settings'] = array(
    'link' => 0,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_services']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Offering [field_ref_citypages_services] in the [title] area';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $export['city_pages_lists'] = $view;

  $view = new view();
  $view->name = 'city_pages_service_area_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City Pages - Service Area Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_citypages_area';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'field_citypagesshort_description';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['zoom']['scrollWheelZoom'] = 0;
  $handler->display->display_options['style_options']['vector_display']['stroke_override'] = 1;
  $handler->display->display_options['style_options']['vector_display']['color'] = '#000';
  $handler->display->display_options['style_options']['vector_display']['weight'] = '1';
  $handler->display->display_options['style_options']['vector_display']['opacity'] = '.5';
  $handler->display->display_options['style_options']['vector_display']['fillColor'] = '#000';
  $handler->display->display_options['style_options']['vector_display']['fillOpacity'] = '.2';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Location Area */
  $handler->display->display_options['fields']['field_citypages_area']['id'] = 'field_citypages_area';
  $handler->display->display_options['fields']['field_citypages_area']['table'] = 'field_data_field_citypages_area';
  $handler->display->display_options['fields']['field_citypages_area']['field'] = 'field_citypages_area';
  $handler->display->display_options['fields']['field_citypages_area']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citypages_area']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_citypages_area']['type'] = 'geolocation_googlemaps_dynamic';
  $handler->display->display_options['fields']['field_citypages_area']['settings'] = array(
    'map_width' => '300px',
    'map_height' => '300px',
    'marker_icon' => '',
    'map_scrollwheel' => 0,
    'map_maptype' => 'roadmap',
    'map_zoomlevel' => '7',
  );
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_citypagesshort_description']['id'] = 'field_citypagesshort_description';
  $handler->display->display_options['fields']['field_citypagesshort_description']['table'] = 'field_data_field_citypagesshort_description';
  $handler->display->display_options['fields']['field_citypagesshort_description']['field'] = 'field_citypagesshort_description';
  $handler->display->display_options['fields']['field_citypagesshort_description']['label'] = '';
  $handler->display->display_options['fields']['field_citypagesshort_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'city_pages_service_area_map:panel_pane_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
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
    'city_page' => 'city_page',
  );

  /* Display: Service Area Map */
  $handler = $view->new_display('panel_pane', 'Service Area Map', 'panel_pane_1');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['link_to_view'] = '1';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="city-page-list">Our service area includes:</h2>';
  $handler->display->display_options['header']['area']['format'] = 'panopoly_html_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: City Page Image */
  $handler->display->display_options['fields']['field_citypages_image']['id'] = 'field_citypages_image';
  $handler->display->display_options['fields']['field_citypages_image']['table'] = 'field_data_field_citypages_image';
  $handler->display->display_options['fields']['field_citypages_image']['field'] = 'field_citypages_image';
  $handler->display->display_options['fields']['field_citypages_image']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citypages_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_citypages_image']['settings'] = array(
    'image_style' => 'sc_300x225',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]<br />';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_citypagesshort_description']['id'] = 'field_citypagesshort_description';
  $handler->display->display_options['fields']['field_citypagesshort_description']['table'] = 'field_data_field_citypagesshort_description';
  $handler->display->display_options['fields']['field_citypagesshort_description']['field'] = 'field_citypagesshort_description';
  $handler->display->display_options['fields']['field_citypagesshort_description']['label'] = '';
  $handler->display->display_options['fields']['field_citypagesshort_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'city_pages_service_area_map:panel_pane_3';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Rearrange City Pages Mapping */
  $handler = $view->new_display('panel_pane', 'Rearrange City Pages Mapping', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rearrange City Pages Mapping';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'draggableviews' => 'draggableviews',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
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
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = 'Rearrange';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;

  /* Display: Rearrange City Pages List */
  $handler = $view->new_display('panel_pane', 'Rearrange City Pages List', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rearrange City Pages List';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'draggableviews' => 'draggableviews',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
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
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = 'Rearrange';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $export['city_pages_service_area_map'] = $view;

  $view = new view();
  $view->name = 'city_pages_services';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City Pages - Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View All the Services We Provide:';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_citypages_services_node']['id'] = 'reverse_field_ref_citypages_services_node';
  $handler->display->display_options['relationships']['reverse_field_ref_citypages_services_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_citypages_services_node']['field'] = 'reverse_field_ref_citypages_services_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Services We Provide in [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Primary Services */
  $handler->display->display_options['fields']['field_ref_citypages_services']['id'] = 'field_ref_citypages_services';
  $handler->display->display_options['fields']['field_ref_citypages_services']['table'] = 'field_data_field_ref_citypages_services';
  $handler->display->display_options['fields']['field_ref_citypages_services']['field'] = 'field_ref_citypages_services';
  $handler->display->display_options['fields']['field_ref_citypages_services']['label'] = '';
  $handler->display->display_options['fields']['field_ref_citypages_services']['alter']['text'] = 'Primary Services Provided in %1
[field_ref_citypages_services]';
  $handler->display->display_options['fields']['field_ref_citypages_services']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_citypages_services']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_services']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_citypages_services']['multi_type'] = 'ul';
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
    'city_page' => 'city_page',
  );

  /* Display: Citypage - Services */
  $handler = $view->new_display('panel_pane', 'Citypage - Services', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Primary Services We Provide:';

  /* Display: Citypage - All Services */
  $handler = $view->new_display('panel_pane', 'Citypage - All Services', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Services We Provide in [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Services */
  $handler->display->display_options['fields']['field_ref_serv_cat_services']['id'] = 'field_ref_serv_cat_services';
  $handler->display->display_options['fields']['field_ref_serv_cat_services']['table'] = 'field_data_field_ref_serv_cat_services';
  $handler->display->display_options['fields']['field_ref_serv_cat_services']['field'] = 'field_ref_serv_cat_services';
  $handler->display->display_options['fields']['field_ref_serv_cat_services']['label'] = '';
  $handler->display->display_options['fields']['field_ref_serv_cat_services']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_serv_cat_services']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_serv_cat_services']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_serv_cat_services']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'service_category' => 'service_category',
  );
  $export['city_pages_services'] = $view;

  $view = new view();
  $view->name = 'citypages_image_or_video';
  $view->description = 'Show video if there is one, otherwise image';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CityPages Hero Image or Video';
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
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Featured Video */
  $handler->display->display_options['fields']['field_featured_video']['id'] = 'field_featured_video';
  $handler->display->display_options['fields']['field_featured_video']['table'] = 'field_data_field_featured_video';
  $handler->display->display_options['fields']['field_featured_video']['field'] = 'field_featured_video';
  $handler->display->display_options['fields']['field_featured_video']['label'] = '';
  $handler->display->display_options['fields']['field_featured_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_video']['alter']['text'] = '<iframe width="853" height="480" src="[field_featured_video]" frameborder="0" allowfullscreen></iframe>';
  $handler->display->display_options['fields']['field_featured_video']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'sc_940x470_mc',
    'image_link' => '',
  );
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
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
    'city_page' => 'city_page',
  );

  /* Display: CityPages hero image or video */
  $handler = $view->new_display('panel_pane', 'CityPages hero image or video', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Video */
  $handler->display->display_options['fields']['field_featured_video']['id'] = 'field_featured_video';
  $handler->display->display_options['fields']['field_featured_video']['table'] = 'field_data_field_featured_video';
  $handler->display->display_options['fields']['field_featured_video']['field'] = 'field_featured_video';
  $handler->display->display_options['fields']['field_featured_video']['label'] = '';
  $handler->display->display_options['fields']['field_featured_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_video']['alter']['text'] = '<iframe width="853" height="480" src="[field_featured_video]" frameborder="0" allowfullscreen></iframe>';
  $handler->display->display_options['fields']['field_featured_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_video']['hide_empty'] = TRUE;
  /* Field: Content: City Page Image */
  $handler->display->display_options['fields']['field_citypages_image']['id'] = 'field_citypages_image';
  $handler->display->display_options['fields']['field_citypages_image']['table'] = 'field_data_field_citypages_image';
  $handler->display->display_options['fields']['field_citypages_image']['field'] = 'field_citypages_image';
  $handler->display->display_options['fields']['field_citypages_image']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citypages_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_citypages_image']['settings'] = array(
    'image_style' => 'sc_940x470_mc',
    'image_link' => '',
  );
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_featured_video';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '5';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_citypages_image]';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[field_citypages_image]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  $export['citypages_image_or_video'] = $view;

  return $export;
}
