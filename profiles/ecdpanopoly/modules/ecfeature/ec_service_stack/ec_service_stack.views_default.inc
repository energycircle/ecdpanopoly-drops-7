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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['service_request'] = $view;

  return $export;
}
