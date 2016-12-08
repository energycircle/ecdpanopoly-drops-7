<?php
/**
 * @file
 * ec_a_b_testing_setup.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_a_b_testing_setup_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_ab';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ADMIN--AB';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Review Your A/B Testing Experiments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_a_b_reference_page_node']['id'] = 'reverse_field_a_b_reference_page_node';
  $handler->display->display_options['relationships']['reverse_field_a_b_reference_page_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_a_b_reference_page_node']['field'] = 'reverse_field_a_b_reference_page_node';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_a_b_reference_page_node_1']['id'] = 'reverse_field_a_b_reference_page_node_1';
  $handler->display->display_options['relationships']['reverse_field_a_b_reference_page_node_1']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_a_b_reference_page_node_1']['field'] = 'reverse_field_a_b_reference_page_node';
  /* Field: Content: Reference Original Content */
  $handler->display->display_options['fields']['field_a_b_reference_page']['id'] = 'field_a_b_reference_page';
  $handler->display->display_options['fields']['field_a_b_reference_page']['table'] = 'field_data_field_a_b_reference_page';
  $handler->display->display_options['fields']['field_a_b_reference_page']['field'] = 'field_a_b_reference_page';
  $handler->display->display_options['fields']['field_a_b_reference_page']['label'] = 'Original Content';
  $handler->display->display_options['fields']['field_a_b_reference_page']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Experimental Page';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Reason for A/B Testing */
  $handler->display->display_options['fields']['field_a_b_reason_for_testing']['id'] = 'field_a_b_reason_for_testing';
  $handler->display->display_options['fields']['field_a_b_reason_for_testing']['table'] = 'field_data_field_a_b_reason_for_testing';
  $handler->display->display_options['fields']['field_a_b_reason_for_testing']['field'] = 'field_a_b_reason_for_testing';
  $handler->display->display_options['fields']['field_a_b_reason_for_testing']['type'] = 'text_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit Experiment Page';
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
  /* Filter criterion: Content: If this is the experimental page, fill out the information below. (field_a_b_test_page) */
  $handler->display->display_options['filters']['field_a_b_test_page_value']['id'] = 'field_a_b_test_page_value';
  $handler->display->display_options['filters']['field_a_b_test_page_value']['table'] = 'field_data_field_a_b_test_page';
  $handler->display->display_options['filters']['field_a_b_test_page_value']['field'] = 'field_a_b_test_page_value';
  $handler->display->display_options['filters']['field_a_b_test_page_value']['value'] = array(
    'BPage' => 'BPage',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/admin--ab';
  $export['admin_ab'] = $view;

  return $export;
}
