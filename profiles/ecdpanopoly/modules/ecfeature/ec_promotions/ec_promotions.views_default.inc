<?php
/**
 * @file
 * ec_promotions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_promotions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'promotions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'promotions';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Field: Content: Display Title */
  $handler->display->display_options['fields']['field_display_title']['id'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['table'] = 'field_data_field_display_title';
  $handler->display->display_options['fields']['field_display_title']['field'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['label'] = '';
  $handler->display->display_options['fields']['field_display_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_display_title']['alter']['text'] = '<a href="[path]">[field_display_title]</a>';
  $handler->display->display_options['fields']['field_display_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_display_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_title']['settings'] = array(
    'title_style' => 'h2',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Display subtitle */
  $handler->display->display_options['fields']['field_display_subtitle']['id'] = 'field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['table'] = 'field_data_field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['field'] = 'field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_display_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Button Text */
  $handler->display->display_options['fields']['field_button_text']['id'] = 'field_button_text';
  $handler->display->display_options['fields']['field_button_text']['table'] = 'field_data_field_button_text';
  $handler->display->display_options['fields']['field_button_text']['field'] = 'field_button_text';
  $handler->display->display_options['fields']['field_button_text']['label'] = '';
  $handler->display->display_options['fields']['field_button_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_button_text']['alter']['text'] = '<a class="promo-button" href="[path]">[field_button_text]</a>';
  $handler->display->display_options['fields']['field_button_text']['element_label_colon'] = FALSE;
  /* Field: Content: Promotion image */
  $handler->display->display_options['fields']['field_promotion_image']['id'] = 'field_promotion_image';
  $handler->display->display_options['fields']['field_promotion_image']['table'] = 'field_data_field_promotion_image';
  $handler->display->display_options['fields']['field_promotion_image']['field'] = 'field_promotion_image';
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
    'promotion' => 'promotion',
  );
  /* Filter criterion: Content: A/B Test Page (field_a_b_test_page) */
  $handler->display->display_options['filters']['field_a_b_test_page_value']['id'] = 'field_a_b_test_page_value';
  $handler->display->display_options['filters']['field_a_b_test_page_value']['table'] = 'field_data_field_a_b_test_page';
  $handler->display->display_options['filters']['field_a_b_test_page_value']['field'] = 'field_a_b_test_page_value';
  $handler->display->display_options['filters']['field_a_b_test_page_value']['value'] = array(
    'A Page' => 'A Page',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Field: Content: Promotion image */
  $handler->display->display_options['fields']['field_promotion_image']['id'] = 'field_promotion_image';
  $handler->display->display_options['fields']['field_promotion_image']['table'] = 'field_data_field_promotion_image';
  $handler->display->display_options['fields']['field_promotion_image']['field'] = 'field_promotion_image';
  $handler->display->display_options['fields']['field_promotion_image']['label'] = '';
  $handler->display->display_options['fields']['field_promotion_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promotion_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_promotion_image']['settings'] = array(
    'image_style' => 'sc_300x225',
    'image_link' => '',
  );
  /* Field: Content: Display Title */
  $handler->display->display_options['fields']['field_display_title']['id'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['table'] = 'field_data_field_display_title';
  $handler->display->display_options['fields']['field_display_title']['field'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['label'] = '';
  $handler->display->display_options['fields']['field_display_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_display_title']['alter']['text'] = '<a href="[path]">[field_display_title]</a>';
  $handler->display->display_options['fields']['field_display_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_display_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_display_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_title']['settings'] = array(
    'title_style' => 'h2',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Display subtitle */
  $handler->display->display_options['fields']['field_display_subtitle']['id'] = 'field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['table'] = 'field_data_field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['field'] = 'field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_display_subtitle']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_display_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Button Text */
  $handler->display->display_options['fields']['field_button_text']['id'] = 'field_button_text';
  $handler->display->display_options['fields']['field_button_text']['table'] = 'field_data_field_button_text';
  $handler->display->display_options['fields']['field_button_text']['field'] = 'field_button_text';
  $handler->display->display_options['fields']['field_button_text']['label'] = '';
  $handler->display->display_options['fields']['field_button_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_button_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_button_text']['alter']['text'] = '<a class="promo-button" href="[path]">[field_button_text]</a>';
  $handler->display->display_options['fields']['field_button_text']['element_label_colon'] = FALSE;
  /* Field: Content: Promo link text */
  $handler->display->display_options['fields']['field_promotion_link_text']['id'] = 'field_promotion_link_text';
  $handler->display->display_options['fields']['field_promotion_link_text']['table'] = 'field_data_field_promotion_link_text';
  $handler->display->display_options['fields']['field_promotion_link_text']['field'] = 'field_promotion_link_text';
  $handler->display->display_options['fields']['field_promotion_link_text']['label'] = '';
  $handler->display->display_options['fields']['field_promotion_link_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_link_text']['alter']['text'] = '<a class="promo-button" href="[path]">[field_promotion_link_text]</a>';
  $handler->display->display_options['fields']['field_promotion_link_text']['element_label_colon'] = FALSE;

  /* Display: Sidebar two-promo block */
  $handler = $view->new_display('panel_pane', 'Sidebar two-promo block', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Field: Content: Display Title */
  $handler->display->display_options['fields']['field_display_title']['id'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['table'] = 'field_data_field_display_title';
  $handler->display->display_options['fields']['field_display_title']['field'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['label'] = '';
  $handler->display->display_options['fields']['field_display_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_display_title']['alter']['text'] = '<a href="[path]">[field_display_title]</a>';
  $handler->display->display_options['fields']['field_display_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_display_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_title']['settings'] = array(
    'title_style' => 'h2',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Display subtitle */
  $handler->display->display_options['fields']['field_display_subtitle']['id'] = 'field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['table'] = 'field_data_field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['field'] = 'field_display_subtitle';
  $handler->display->display_options['fields']['field_display_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_display_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Button Text */
  $handler->display->display_options['fields']['field_button_text']['id'] = 'field_button_text';
  $handler->display->display_options['fields']['field_button_text']['table'] = 'field_data_field_button_text';
  $handler->display->display_options['fields']['field_button_text']['field'] = 'field_button_text';
  $handler->display->display_options['fields']['field_button_text']['label'] = '';
  $handler->display->display_options['fields']['field_button_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_button_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_button_text']['alter']['text'] = '<a class="promo-button" href="[path]">[field_button_text]</a>';
  $handler->display->display_options['fields']['field_button_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_button_text']['element_default_classes'] = FALSE;
  /* Field: Content: Promo link text */
  $handler->display->display_options['fields']['field_promotion_link_text']['id'] = 'field_promotion_link_text';
  $handler->display->display_options['fields']['field_promotion_link_text']['table'] = 'field_data_field_promotion_link_text';
  $handler->display->display_options['fields']['field_promotion_link_text']['field'] = 'field_promotion_link_text';
  $handler->display->display_options['fields']['field_promotion_link_text']['label'] = '';
  $handler->display->display_options['fields']['field_promotion_link_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_link_text']['alter']['text'] = '<a class="promo-button" href="[path]">[field_promotion_link_text]</a>';
  $handler->display->display_options['fields']['field_promotion_link_text']['element_label_colon'] = FALSE;
  $export['promotions'] = $view;

  return $export;
}
