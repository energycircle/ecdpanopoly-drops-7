<?php
/**
 * @file
 * ec_review_sites.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_review_sites_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'review_sites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Review Sites';
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
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Testimonial Source */
  $handler = $view->new_display('panel_pane', 'Testimonial Source', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_review_site_cta' => 'field_review_site_cta',
    'field_review_site_logo' => 'field_review_site_logo',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_testimonial_source_node']['id'] = 'reverse_field_testimonial_source_node';
  $handler->display->display_options['relationships']['reverse_field_testimonial_source_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_testimonial_source_node']['field'] = 'reverse_field_testimonial_source_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Review Page */
  $handler->display->display_options['fields']['field_review_site_url']['id'] = 'field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['table'] = 'field_data_field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['field'] = 'field_review_site_url';
  $handler->display->display_options['fields']['field_review_site_url']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_site_url']['click_sort_column'] = 'url';
  /* Field: Content: Review CTA */
  $handler->display->display_options['fields']['field_review_site_cta']['id'] = 'field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['table'] = 'field_data_field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['field'] = 'field_review_site_cta';
  $handler->display->display_options['fields']['field_review_site_cta']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_cta']['element_label_colon'] = FALSE;
  /* Field: Content: Review Site Logo */
  $handler->display->display_options['fields']['field_review_site_logo']['id'] = 'field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['table'] = 'field_data_field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['field'] = 'field_review_site_logo';
  $handler->display->display_options['fields']['field_review_site_logo']['label'] = '';
  $handler->display->display_options['fields']['field_review_site_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_review_site_logo']['alter']['path'] = '[field_review_site_url]';
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_testimonial_source_node';
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
    'review_site' => 'review_site',
  );
  $export['review_sites'] = $view;

  return $export;
}
