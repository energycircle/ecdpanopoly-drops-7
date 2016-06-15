<?php
/**
 * @file
 * ec_testimonial.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_testimonial_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'testimonials';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'testimonials';
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
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['id'] = 'fs-testimonialslide2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Testimonial Name */
  $handler->display->display_options['fields']['field_tetstimonial_name']['id'] = 'field_tetstimonial_name';
  $handler->display->display_options['fields']['field_tetstimonial_name']['table'] = 'field_data_field_tetstimonial_name';
  $handler->display->display_options['fields']['field_tetstimonial_name']['field'] = 'field_tetstimonial_name';
  $handler->display->display_options['fields']['field_tetstimonial_name']['label'] = '';
  $handler->display->display_options['fields']['field_tetstimonial_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tetstimonial_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tetstimonial_name']['alter']['text'] = '[field_tetstimonial_name], ';
  $handler->display->display_options['fields']['field_tetstimonial_name']['element_label_colon'] = FALSE;
  /* Field: Content: Display Title */
  $handler->display->display_options['fields']['field_display_title']['id'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['table'] = 'field_data_field_display_title';
  $handler->display->display_options['fields']['field_display_title']['field'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['label'] = '';
  $handler->display->display_options['fields']['field_display_title']['element_label_colon'] = FALSE;
  /* Field: Content: Display subtitle */
  $handler->display->display_options['fields']['field_display_subtitle']['id'] = 'field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['table'] = 'field_data_field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['field'] = 'field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_display_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_subtitle']['type'] = 'text_plain';
  /* Field: Content: Testimonial Image */
  $handler->display->display_options['fields']['field_testimonial_image']['id'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['table'] = 'field_data_field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['field'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_image']['settings'] = array(
    'image_style' => 's_460',
    'image_link' => '',
    'field_multiple_limit' => '1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_testimonial_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['delta_offset'] = '0';
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
  /* Field: Content: Testimonial City */
  $handler->display->display_options['fields']['field_testimonial_city']['id'] = 'field_testimonial_city';
  $handler->display->display_options['fields']['field_testimonial_city']['table'] = 'field_data_field_testimonial_city';
  $handler->display->display_options['fields']['field_testimonial_city']['field'] = 'field_testimonial_city';
  $handler->display->display_options['fields']['field_testimonial_city']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_testimonial_city']['alter']['text'] = '[field_tetstimonial_name][field_testimonial_city]';
  $handler->display->display_options['fields']['field_testimonial_city']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_ref_testimonial_service']['id'] = 'field_ref_testimonial_service';
  $handler->display->display_options['fields']['field_ref_testimonial_service']['table'] = 'field_data_field_ref_testimonial_service';
  $handler->display->display_options['fields']['field_ref_testimonial_service']['field'] = 'field_ref_testimonial_service';
  $handler->display->display_options['fields']['field_ref_testimonial_service']['label'] = 'Services Provided';
  $handler->display->display_options['fields']['field_ref_testimonial_service']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_ref_testimonial_service']['hide_empty'] = TRUE;
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

  /* Display: Testimonials - Slideshow */
  $handler = $view->new_display('panel_pane', 'Testimonials - Slideshow', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['id'] = 'fs-testimonialslide';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Testimonial Name */
  $handler->display->display_options['fields']['field_tetstimonial_name']['id'] = 'field_tetstimonial_name';
  $handler->display->display_options['fields']['field_tetstimonial_name']['table'] = 'field_data_field_tetstimonial_name';
  $handler->display->display_options['fields']['field_tetstimonial_name']['field'] = 'field_tetstimonial_name';
  $handler->display->display_options['fields']['field_tetstimonial_name']['label'] = '';
  $handler->display->display_options['fields']['field_tetstimonial_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tetstimonial_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tetstimonial_name']['alter']['text'] = '[field_tetstimonial_name], ';
  $handler->display->display_options['fields']['field_tetstimonial_name']['element_label_colon'] = FALSE;
  /* Field: Content: Display Title */
  $handler->display->display_options['fields']['field_display_title']['id'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['table'] = 'field_data_field_display_title';
  $handler->display->display_options['fields']['field_display_title']['field'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['label'] = '';
  $handler->display->display_options['fields']['field_display_title']['element_label_colon'] = FALSE;
  /* Field: Content: Display subtitle */
  $handler->display->display_options['fields']['field_display_subtitle']['id'] = 'field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['table'] = 'field_data_field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['field'] = 'field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_display_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_subtitle']['type'] = 'text_plain';
  /* Field: Content: Testimonial Image */
  $handler->display->display_options['fields']['field_testimonial_image']['id'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['table'] = 'field_data_field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['field'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_image']['settings'] = array(
    'image_style' => 's_460',
    'image_link' => '',
    'field_multiple_limit' => '1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_testimonial_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['delta_offset'] = '0';
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
  /* Field: Content: Testimonial City */
  $handler->display->display_options['fields']['field_testimonial_city']['id'] = 'field_testimonial_city';
  $handler->display->display_options['fields']['field_testimonial_city']['table'] = 'field_data_field_testimonial_city';
  $handler->display->display_options['fields']['field_testimonial_city']['field'] = 'field_testimonial_city';
  $handler->display->display_options['fields']['field_testimonial_city']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_testimonial_city']['alter']['text'] = '[field_tetstimonial_name][field_testimonial_city]';
  $handler->display->display_options['fields']['field_testimonial_city']['element_label_colon'] = FALSE;

  /* Display: Testimonials - Slideshow nid block */
  $handler = $view->new_display('panel_pane', 'Testimonials - Slideshow nid block', 'panel_pane_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_page_testimonial_node']['id'] = 'reverse_field_ref_page_testimonial_node';
  $handler->display->display_options['relationships']['reverse_field_ref_page_testimonial_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_page_testimonial_node']['field'] = 'reverse_field_ref_page_testimonial_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_page_testimonial_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Testimonials - page */
  $handler = $view->new_display('panel_pane', 'Testimonials - page', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_page_testimonial_node']['id'] = 'reverse_field_ref_page_testimonial_node';
  $handler->display->display_options['relationships']['reverse_field_ref_page_testimonial_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_page_testimonial_node']['field'] = 'reverse_field_ref_page_testimonial_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  $export['testimonials'] = $view;

  return $export;
}
