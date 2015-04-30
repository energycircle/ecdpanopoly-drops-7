<?php
/**
 * @file
 * ec_help_documentation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_help_documentation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ec_help_documentation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'EC Help Documentation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_help_documentation_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Documentation Type */
  $handler->display->display_options['fields']['field_help_documentation_type']['id'] = 'field_help_documentation_type';
  $handler->display->display_options['fields']['field_help_documentation_type']['table'] = 'field_data_field_help_documentation_type';
  $handler->display->display_options['fields']['field_help_documentation_type']['field'] = 'field_help_documentation_type';
  $handler->display->display_options['fields']['field_help_documentation_type']['label'] = '';
  $handler->display->display_options['fields']['field_help_documentation_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_help_documentation_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_help_documentation_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_help_documentation_type']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_help_documentation_type']['delta_offset'] = '0';
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
    'help_documentation' => 'help_documentation',
  );

  /* Display: Recent Docs */
  $handler = $view->new_display('panel_pane', 'Recent Docs', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recently Posted Help Articles';
  $handler->display->display_options['pane_category']['name'] = 'EC Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Teaser */
  $handler = $view->new_display('panel_pane', 'Teaser', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Learn More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p><br><a>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '1000',
  );
  /* Field: Content: Documentation Type */
  $handler->display->display_options['fields']['field_help_documentation_type']['id'] = 'field_help_documentation_type';
  $handler->display->display_options['fields']['field_help_documentation_type']['table'] = 'field_data_field_help_documentation_type';
  $handler->display->display_options['fields']['field_help_documentation_type']['field'] = 'field_help_documentation_type';
  $handler->display->display_options['fields']['field_help_documentation_type']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_help_documentation_type']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_help_documentation_type']['delta_offset'] = '0';
  $handler->display->display_options['pane_category']['name'] = 'EC Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['ec_help_documentation'] = $view;

  return $export;
}
