<?php
/**
 * @file
 * ec_casestudy.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_casestudy_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'case_studies_list';
  $view->description = 'A listing of case studies for the landing page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Case Studies List';
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
  $handler->display->display_options['relationships']['field_ref_case_study_gallery_target_id']['id'] = 'field_ref_case_study_gallery_target_id';
  $handler->display->display_options['relationships']['field_ref_case_study_gallery_target_id']['table'] = 'field_data_field_ref_case_study_gallery';
  $handler->display->display_options['relationships']['field_ref_case_study_gallery_target_id']['field'] = 'field_ref_case_study_gallery_target_id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Gallery_image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['relationship'] = 'field_ref_case_study_gallery_target_id';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['text'] = '<a href="[path]">[field_gallery_image]</a>';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'sc_300x225',
    'image_link' => '',
    'field_multiple_limit' => '1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_gallery_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['separator'] = '';
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
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
    'case_study' => 'case_study',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Case Studies - All */
  $handler = $view->new_display('panel_pane', 'Case Studies - All', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Gallery_image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['relationship'] = 'field_ref_case_study_gallery_target_id';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['text'] = '<a href="[path]">[field_gallery_image]</a>';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'sc_300x225',
    'image_link' => '',
    'field_multiple_limit' => '1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_gallery_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Display subtitle */
  $handler->display->display_options['fields']['field_display_subtitle']['id'] = 'field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['table'] = 'field_data_field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['field'] = 'field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_display_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['case_studies_list'] = $view;

  $view = new view();
  $view->name = 'case_studies_this_page';
  $view->description = 'Case studies featured on this page - sidebar block';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Case Studies - This Page';
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
  $handler->display->display_options['relationships']['field_ref_case_study_service_target_id']['id'] = 'field_ref_case_study_service_target_id';
  $handler->display->display_options['relationships']['field_ref_case_study_service_target_id']['table'] = 'field_data_field_ref_case_study_service';
  $handler->display->display_options['relationships']['field_ref_case_study_service_target_id']['field'] = 'field_ref_case_study_service_target_id';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ref_case_study_service_target_id';
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
    'case_study' => 'case_study',
  );

  /* Display: Case Study - Service page */
  $handler = $view->new_display('panel_pane', 'Case Study - Service page', 'panel_pane_1');

  /* Display: Case Study - Service category page */
  $handler = $view->new_display('panel_pane', 'Case Study - Service category page', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_case_study_serv_cat_target_id']['id'] = 'field_ref_case_study_serv_cat_target_id';
  $handler->display->display_options['relationships']['field_ref_case_study_serv_cat_target_id']['table'] = 'field_data_field_ref_case_study_serv_cat';
  $handler->display->display_options['relationships']['field_ref_case_study_serv_cat_target_id']['field'] = 'field_ref_case_study_serv_cat_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_case_study_gallery_target_id']['id'] = 'field_ref_case_study_gallery_target_id';
  $handler->display->display_options['relationships']['field_ref_case_study_gallery_target_id']['table'] = 'field_data_field_ref_case_study_gallery';
  $handler->display->display_options['relationships']['field_ref_case_study_gallery_target_id']['field'] = 'field_ref_case_study_gallery_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Gallery_image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['relationship'] = 'field_ref_case_study_gallery_target_id';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['text'] = '<h4 class="block-title">Case Study</h4>
<a href="[path]">[field_gallery_image]</a>';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'sc_300x225',
    'image_link' => '',
    'field_multiple_limit' => '1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_gallery_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['separator'] = '';
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ref_case_study_serv_cat_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Case Study - Service group page */
  $handler = $view->new_display('panel_pane', 'Case Study - Service group page', 'panel_pane_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_serv_group_case_study_node']['id'] = 'reverse_field_ref_serv_group_case_study_node';
  $handler->display->display_options['relationships']['reverse_field_ref_serv_group_case_study_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_serv_group_case_study_node']['field'] = 'reverse_field_ref_serv_group_case_study_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_serv_group_case_study_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Case Study - page */
  $handler = $view->new_display('panel_pane', 'Case Study - page', 'panel_pane_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_page_case_study_node']['id'] = 'reverse_field_ref_page_case_study_node';
  $handler->display->display_options['relationships']['reverse_field_ref_page_case_study_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_page_case_study_node']['field'] = 'reverse_field_ref_page_case_study_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_page_case_study_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['case_studies_this_page'] = $view;

  $view = new view();
  $view->name = 'casestudy_slideshow_carousel';
  $view->description = 'Used as a template for add thumbnail sliders. Make sure to clone and edit.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CaseStudy Slideshow Carousel';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Slide image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
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
    'case_study' => 'case_study',
  );

  /* Display: Gallery */
  $handler = $view->new_display('panel_pane', 'Gallery', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'slideshow_slider';
  $handler->display->display_options['style_options']['captionfield'] = 'field_case_study_image_1';
  $handler->display->display_options['style_options']['id'] = 'flexslider-slider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_case_study_image_1' => 'field_case_study_image_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_case_study_image']['id'] = 'field_case_study_image';
  $handler->display->display_options['fields']['field_case_study_image']['table'] = 'field_data_field_case_study_image';
  $handler->display->display_options['fields']['field_case_study_image']['field'] = 'field_case_study_image';
  $handler->display->display_options['fields']['field_case_study_image']['label'] = '';
  $handler->display->display_options['fields']['field_case_study_image']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_case_study_image_1']['id'] = 'field_case_study_image_1';
  $handler->display->display_options['fields']['field_case_study_image_1']['table'] = 'field_data_field_case_study_image';
  $handler->display->display_options['fields']['field_case_study_image_1']['field'] = 'field_case_study_image';
  $handler->display->display_options['fields']['field_case_study_image_1']['ui_name'] = 'image alt text';
  $handler->display->display_options['fields']['field_case_study_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_case_study_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_case_study_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_study_image_1']['alter']['text'] = '[field_case_study_image_1-alt]';
  $handler->display->display_options['fields']['field_case_study_image_1']['element_label_colon'] = FALSE;

  /* Display: thumbnails */
  $handler = $view->new_display('panel_pane', 'thumbnails', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'slideshow_thumbnails';
  $handler->display->display_options['style_options']['id'] = 'flexslider-thumbnails';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_case_study_image']['id'] = 'field_case_study_image';
  $handler->display->display_options['fields']['field_case_study_image']['table'] = 'field_data_field_case_study_image';
  $handler->display->display_options['fields']['field_case_study_image']['field'] = 'field_case_study_image';
  $handler->display->display_options['fields']['field_case_study_image']['label'] = '';
  $handler->display->display_options['fields']['field_case_study_image']['element_label_colon'] = FALSE;
  $export['casestudy_slideshow_carousel'] = $view;

  $view = new view();
  $view->name = 'home_case_studies';
  $view->description = 'Case studies featured on the home page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home Case Studies';
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
  $handler->display->display_options['relationships']['field_ref_case_study_serv_group_target_id']['id'] = 'field_ref_case_study_serv_group_target_id';
  $handler->display->display_options['relationships']['field_ref_case_study_serv_group_target_id']['table'] = 'field_data_field_ref_case_study_serv_group';
  $handler->display->display_options['relationships']['field_ref_case_study_serv_group_target_id']['field'] = 'field_ref_case_study_serv_group_target_id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_case_study_image']['id'] = 'field_case_study_image';
  $handler->display->display_options['fields']['field_case_study_image']['table'] = 'field_data_field_case_study_image';
  $handler->display->display_options['fields']['field_case_study_image']['field'] = 'field_case_study_image';
  $handler->display->display_options['fields']['field_case_study_image']['label'] = '';
  $handler->display->display_options['fields']['field_case_study_image']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_ref_case_study_serv_group_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'button service-group';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
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
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
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
    'case_study' => 'case_study',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_feature_on_home_value']['id'] = 'field_feature_on_home_value';
  $handler->display->display_options['filters']['field_feature_on_home_value']['table'] = 'field_data_field_feature_on_home';
  $handler->display->display_options['filters']['field_feature_on_home_value']['field'] = 'field_feature_on_home_value';
  $handler->display->display_options['filters']['field_feature_on_home_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Service Group (field_ref_case_study_serv_group) */
  $handler->display->display_options['filters']['field_ref_case_study_serv_group_target_id']['id'] = 'field_ref_case_study_serv_group_target_id';
  $handler->display->display_options['filters']['field_ref_case_study_serv_group_target_id']['table'] = 'field_data_field_ref_case_study_serv_group';
  $handler->display->display_options['filters']['field_ref_case_study_serv_group_target_id']['field'] = 'field_ref_case_study_serv_group_target_id';
  $handler->display->display_options['filters']['field_ref_case_study_serv_group_target_id']['value']['value'] = '2';

  /* Display: Case Studies - Home Performance */
  $handler = $view->new_display('panel_pane', 'Case Studies - Home Performance', 'panel_pane_1');

  /* Display: Case Studies - Contracting and Renovations */
  $handler = $view->new_display('panel_pane', 'Case Studies - Contracting and Renovations', 'panel_pane_2');
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_feature_on_home_value']['id'] = 'field_feature_on_home_value';
  $handler->display->display_options['filters']['field_feature_on_home_value']['table'] = 'field_data_field_feature_on_home';
  $handler->display->display_options['filters']['field_feature_on_home_value']['field'] = 'field_feature_on_home_value';
  $handler->display->display_options['filters']['field_feature_on_home_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Service Group (field_ref_case_study_serv_group) */
  $handler->display->display_options['filters']['field_ref_case_study_serv_group_target_id']['id'] = 'field_ref_case_study_serv_group_target_id';
  $handler->display->display_options['filters']['field_ref_case_study_serv_group_target_id']['table'] = 'field_data_field_ref_case_study_serv_group';
  $handler->display->display_options['filters']['field_ref_case_study_serv_group_target_id']['field'] = 'field_ref_case_study_serv_group_target_id';
  $handler->display->display_options['filters']['field_ref_case_study_serv_group_target_id']['value']['value'] = '3';
  $export['home_case_studies'] = $view;

  return $export;
}
