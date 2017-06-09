<?php
/**
 * @file
 * ec_panopoly_page_overrides.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_panopoly_page_overrides_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hero_image_or_video';
  $view->description = 'Show video if there is one, otherwise image';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hero Image or Video';
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
  /* Field: Field: Primary Image */
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
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_featured_video';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '5';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_featured_image]';
  $handler->display->display_options['fields']['views_conditional']['or'] = '<iframe width="100%" height="auto" src="[field_featured_video]" frameborder="0" allowfullscreen></iframe>';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
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
    'panopoly_page' => 'panopoly_page',
  );

  /* Display: Content Page hero image or video */
  $handler = $view->new_display('panel_pane', 'Content Page hero image or video', 'panel_pane_1');
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
  /* Field: Field: Primary Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'sc_940x470',
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
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_featured_image]';
  $handler->display->display_options['fields']['views_conditional']['or'] = '<iframe width="853" height="480" src="[field_featured_video]" frameborder="0" allowfullscreen></iframe>';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  $export['hero_image_or_video'] = $view;

  return $export;
}
