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
  $handler->display->display_options['cache']['type'] = 'none';
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
  /* Field: Content: Other Local Notes */
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

  /* Display: City Page - Slides */
  $handler = $view->new_display('panel_pane', 'City Page - Slides', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'pcase_gallery_slides';
  $handler->display->display_options['style_options']['captionfield'] = 'field_citypages_photos_1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_citypages_photos_1']['id'] = 'field_citypages_photos_1';
  $handler->display->display_options['fields']['field_citypages_photos_1']['table'] = 'field_data_field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos_1']['field'] = 'field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos_1']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_photos_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_photos_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_photos_1']['alter']['text'] = '[field_citypages_photos_1-description]';
  $handler->display->display_options['fields']['field_citypages_photos_1']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_citypages_photos']['id'] = 'field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos']['table'] = 'field_data_field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos']['field'] = 'field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_photos']['element_label_colon'] = FALSE;
  $export['city_pages'] = $view;

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
  $export['city_pages_lists'] = $view;

  return $export;
}
