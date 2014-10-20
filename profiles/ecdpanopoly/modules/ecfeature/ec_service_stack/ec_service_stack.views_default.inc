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
  $view->name = 'home_service_group_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home Service Group Blocks';
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Home Page Image */
  $handler->display->display_options['fields']['field_home_page_image']['id'] = 'field_home_page_image';
  $handler->display->display_options['fields']['field_home_page_image']['table'] = 'field_data_field_home_page_image';
  $handler->display->display_options['fields']['field_home_page_image']['field'] = 'field_home_page_image';
  $handler->display->display_options['fields']['field_home_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_home_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_home_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_home_page_image']['settings'] = array(
    'image_style' => 'sc_620x310',
    'image_link' => 'content',
  );
  /* Field: Content: Service Categories */
  $handler->display->display_options['fields']['field_ref_serv_group_serv_cat']['id'] = 'field_ref_serv_group_serv_cat';
  $handler->display->display_options['fields']['field_ref_serv_group_serv_cat']['table'] = 'field_data_field_ref_serv_group_serv_cat';
  $handler->display->display_options['fields']['field_ref_serv_group_serv_cat']['field'] = 'field_ref_serv_group_serv_cat';
  $handler->display->display_options['fields']['field_ref_serv_group_serv_cat']['label'] = '';
  $handler->display->display_options['fields']['field_ref_serv_group_serv_cat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_serv_group_serv_cat']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_serv_group_serv_cat']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_serv_group_serv_cat']['multi_type'] = 'ul';
  /* Field: Content: Home Page Link Text */
  $handler->display->display_options['fields']['field_home_page_link_text']['id'] = 'field_home_page_link_text';
  $handler->display->display_options['fields']['field_home_page_link_text']['table'] = 'field_data_field_home_page_link_text';
  $handler->display->display_options['fields']['field_home_page_link_text']['field'] = 'field_home_page_link_text';
  $handler->display->display_options['fields']['field_home_page_link_text']['label'] = '';
  $handler->display->display_options['fields']['field_home_page_link_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_home_page_link_text']['alter']['text'] = '<a href="[path]">[field_home_page_link_text] </a>';
  $handler->display->display_options['fields']['field_home_page_link_text']['element_class'] = 'button service-group-link';
  $handler->display->display_options['fields']['field_home_page_link_text']['element_label_colon'] = FALSE;
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
    'service_group' => 'service_group',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '2';

  /* Display: Home Performance */
  $handler = $view->new_display('panel_pane', 'Home Performance', 'panel_pane_1');

  /* Display: Contracting and Renovations */
  $handler = $view->new_display('panel_pane', 'Contracting and Renovations', 'panel_pane_2');
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
    'service_group' => 'service_group',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '3';
  $export['home_service_group_blocks'] = $view;

  return $export;
}
