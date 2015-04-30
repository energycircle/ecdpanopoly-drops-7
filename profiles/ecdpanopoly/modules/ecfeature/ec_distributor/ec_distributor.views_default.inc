<?php
/**
 * @file
 * ec_distributor.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_distributor_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'distributors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Distributors';
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
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_address_1',
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_external_website']['id'] = 'field_external_website';
  $handler->display->display_options['fields']['field_external_website']['table'] = 'field_data_field_external_website';
  $handler->display->display_options['fields']['field_external_website']['field'] = 'field_external_website';
  $handler->display->display_options['fields']['field_external_website']['label'] = '';
  $handler->display->display_options['fields']['field_external_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_website']['type'] = 'link_url';
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_distributor_contact_name']['id'] = 'field_distributor_contact_name';
  $handler->display->display_options['fields']['field_distributor_contact_name']['table'] = 'field_data_field_distributor_contact_name';
  $handler->display->display_options['fields']['field_distributor_contact_name']['field'] = 'field_distributor_contact_name';
  $handler->display->display_options['fields']['field_distributor_contact_name']['label'] = '';
  $handler->display->display_options['fields']['field_distributor_contact_name']['element_label_colon'] = FALSE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_address_1']['id'] = 'field_address_1';
  $handler->display->display_options['fields']['field_address_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_1']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address_1']['label'] = '';
  $handler->display->display_options['fields']['field_address_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address_1']['type'] = 'addressfield_components';
  $handler->display->display_options['fields']['field_address_1']['settings'] = array(
    'components' => array(
      'administrative_area_full' => 'administrative_area_full',
    ),
    'separator' => '',
  );
  /* Sort criterion: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['sorts']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['sorts']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['sorts']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
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
    'distributor' => 'distributor',
  );

  /* Display: Distributors by State */
  $handler = $view->new_display('panel_pane', 'Distributors by State', 'panel_pane_1');
  $export['distributors'] = $view;

  return $export;
}
