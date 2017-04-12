<?php
/**
 * @file
 * ec_external_forms.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_external_forms_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'external_cta_form';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'External CTA Form';
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
  $handler->display->display_options['relationships']['field_ref_external_form_target_id']['id'] = 'field_ref_external_form_target_id';
  $handler->display->display_options['relationships']['field_ref_external_form_target_id']['table'] = 'field_data_field_ref_external_form';
  $handler->display->display_options['relationships']['field_ref_external_form_target_id']['field'] = 'field_ref_external_form_target_id';
  /* Field: Content: Call to Action */
  $handler->display->display_options['fields']['field_call_to_action']['id'] = 'field_call_to_action';
  $handler->display->display_options['fields']['field_call_to_action']['table'] = 'field_data_field_call_to_action';
  $handler->display->display_options['fields']['field_call_to_action']['field'] = 'field_call_to_action';
  $handler->display->display_options['fields']['field_call_to_action']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action']['element_label_colon'] = FALSE;
  /* Field: Content: Form Embed Code */
  $handler->display->display_options['fields']['field_ex_form_embed_code']['id'] = 'field_ex_form_embed_code';
  $handler->display->display_options['fields']['field_ex_form_embed_code']['table'] = 'field_data_field_ex_form_embed_code';
  $handler->display->display_options['fields']['field_ex_form_embed_code']['field'] = 'field_ex_form_embed_code';
  $handler->display->display_options['fields']['field_ex_form_embed_code']['relationship'] = 'field_ref_external_form_target_id';
  $handler->display->display_options['fields']['field_ex_form_embed_code']['label'] = '';
  $handler->display->display_options['fields']['field_ex_form_embed_code']['element_label_colon'] = FALSE;
  /* Field: Content: Button Text */
  $handler->display->display_options['fields']['field_button_text']['id'] = 'field_button_text';
  $handler->display->display_options['fields']['field_button_text']['table'] = 'field_data_field_button_text';
  $handler->display->display_options['fields']['field_button_text']['field'] = 'field_button_text';
  $handler->display->display_options['fields']['field_button_text']['label'] = '';
  $handler->display->display_options['fields']['field_button_text']['element_label_colon'] = FALSE;
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

  /* Display: External CTA Form */
  $handler = $view->new_display('panel_pane', 'External CTA Form', 'panel_pane_1');
  $export['external_cta_form'] = $view;

  return $export;
}
