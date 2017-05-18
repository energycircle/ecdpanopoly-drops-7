<?php
/**
 * @file
 * ec_service_stack.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_service_stack_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'service_icons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Icons';
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
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_case_study_service_node']['id'] = 'reverse_field_ref_case_study_service_node';
  $handler->display->display_options['relationships']['reverse_field_ref_case_study_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_case_study_service_node']['field'] = 'reverse_field_ref_case_study_service_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'service-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Service Icon */
  $handler->display->display_options['fields']['field_service_icon']['id'] = 'field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['table'] = 'field_data_field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['field'] = 'field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['label'] = '';
  $handler->display->display_options['fields']['field_service_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_service_icon']['settings'] = array(
    'image_style' => 's_220',
    'image_link' => 'content',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_case_study_service_node';
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
    'service' => 'service',
  );

  /* Display: Services Provided */
  $handler = $view->new_display('panel_pane', 'Services Provided', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services Provided';
  $export['service_icons'] = $view;

  $view = new view();
  $view->name = 'service_request';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform_type';
  $view->human_name = 'Service Request';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Broken/missing handler */
  $handler->display->display_options['empty']['view_field']['id'] = 'view_field';
  $handler->display->display_options['empty']['view_field']['table'] = 'views';
  $handler->display->display_options['empty']['view_field']['field'] = 'view_field';
  $handler->display->display_options['empty']['view_field']['label'] = '';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_to_cta_form_node']['id'] = 'reverse_field_ref_to_cta_form_node';
  $handler->display->display_options['relationships']['reverse_field_ref_to_cta_form_node']['table'] = 'entityform_type';
  $handler->display->display_options['relationships']['reverse_field_ref_to_cta_form_node']['field'] = 'reverse_field_ref_to_cta_form_node';
  /* Field: Content: Call to Action */
  $handler->display->display_options['fields']['field_call_to_action']['id'] = 'field_call_to_action';
  $handler->display->display_options['fields']['field_call_to_action']['table'] = 'field_data_field_call_to_action';
  $handler->display->display_options['fields']['field_call_to_action']['field'] = 'field_call_to_action';
  $handler->display->display_options['fields']['field_call_to_action']['relationship'] = 'reverse_field_ref_to_cta_form_node';
  $handler->display->display_options['fields']['field_call_to_action']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action']['element_label_colon'] = FALSE;
  /* Field: Entityform Type: Rendered Entityform Type */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_entityform_type';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['alter']['text'] = '[rendered_entity] ';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Button Text */
  $handler->display->display_options['fields']['field_button_text']['id'] = 'field_button_text';
  $handler->display->display_options['fields']['field_button_text']['table'] = 'field_data_field_button_text';
  $handler->display->display_options['fields']['field_button_text']['field'] = 'field_button_text';
  $handler->display->display_options['fields']['field_button_text']['relationship'] = 'reverse_field_ref_to_cta_form_node';
  $handler->display->display_options['fields']['field_button_text']['label'] = '';
  $handler->display->display_options['fields']['field_button_text']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ref_to_cta_form_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Sidebar CTA Form */
  $handler = $view->new_display('panel_pane', 'Sidebar CTA Form', 'panel_pane_1');
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['service_request'] = $view;

  $view = new view();
  $view->name = 'services_hero_image_or_video';
  $view->description = 'Show video if there is one, otherwise image';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services Hero Image or Video';
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
  /* Field: Content: Image */
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

  /* Display: Service Page hero image or video */
  $handler = $view->new_display('panel_pane', 'Service Page hero image or video', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Video */
  $handler->display->display_options['fields']['field_featured_video']['id'] = 'field_featured_video';
  $handler->display->display_options['fields']['field_featured_video']['table'] = 'field_data_field_featured_video';
  $handler->display->display_options['fields']['field_featured_video']['field'] = 'field_featured_video';
  $handler->display->display_options['fields']['field_featured_video']['label'] = '';
  $handler->display->display_options['fields']['field_featured_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_video']['alter']['text'] = '<iframe width="853" height="480" src="[field_featured_video]" frameborder="0" allowfullscreen></iframe>';
  $handler->display->display_options['fields']['field_featured_video']['element_label_colon'] = FALSE;
  /* Field: Content: Service Image */
  $handler->display->display_options['fields']['field_service_image']['id'] = 'field_service_image';
  $handler->display->display_options['fields']['field_service_image']['table'] = 'field_data_field_service_image';
  $handler->display->display_options['fields']['field_service_image']['field'] = 'field_service_image';
  $handler->display->display_options['fields']['field_service_image']['label'] = '';
  $handler->display->display_options['fields']['field_service_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_service_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_service_image']['settings'] = array(
    'image_style' => 'sc_940x470',
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
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_service_image]';
  $handler->display->display_options['fields']['views_conditional']['or'] = '<iframe width="853" height="480" src="[field_featured_video]" frameborder="0" allowfullscreen></iframe>';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
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
    'service' => 'service',
  );

  /* Display: Service Category hero image or video */
  $handler = $view->new_display('panel_pane', 'Service Category hero image or video', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Video */
  $handler->display->display_options['fields']['field_featured_video']['id'] = 'field_featured_video';
  $handler->display->display_options['fields']['field_featured_video']['table'] = 'field_data_field_featured_video';
  $handler->display->display_options['fields']['field_featured_video']['field'] = 'field_featured_video';
  $handler->display->display_options['fields']['field_featured_video']['label'] = '';
  $handler->display->display_options['fields']['field_featured_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_video']['alter']['text'] = '<iframe width="853" height="480" src="[field_featured_video]" frameborder="0" allowfullscreen></iframe>';
  $handler->display->display_options['fields']['field_featured_video']['element_label_colon'] = FALSE;
  /* Field: Content: Service Category Image */
  $handler->display->display_options['fields']['field_service_category_image']['id'] = 'field_service_category_image';
  $handler->display->display_options['fields']['field_service_category_image']['table'] = 'field_data_field_service_category_image';
  $handler->display->display_options['fields']['field_service_category_image']['field'] = 'field_service_category_image';
  $handler->display->display_options['fields']['field_service_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_service_category_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_service_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_service_category_image']['settings'] = array(
    'image_style' => 'sc_940x470',
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
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_service_category_image]';
  $handler->display->display_options['fields']['views_conditional']['or'] = '<iframe width="853" height="480" src="[field_featured_video]" frameborder="0" allowfullscreen></iframe>';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
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
  $export['services_hero_image_or_video'] = $view;

  return $export;
}
