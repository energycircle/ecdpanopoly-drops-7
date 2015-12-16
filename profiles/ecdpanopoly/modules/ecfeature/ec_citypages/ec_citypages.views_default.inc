<?php
/**
 * @file
 * ec_citypages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ec_citypages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'city_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City Pages';
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
  /* Field: Content: Description Local Experience */
  $handler->display->display_options['fields']['field_citypages_local_experience']['id'] = 'field_citypages_local_experience';
  $handler->display->display_options['fields']['field_citypages_local_experience']['table'] = 'field_data_field_citypages_local_experience';
  $handler->display->display_options['fields']['field_citypages_local_experience']['field'] = 'field_citypages_local_experience';
  $handler->display->display_options['fields']['field_citypages_local_experience']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_local_experience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_local_experience']['element_label_colon'] = FALSE;
  /* Field: Content: Description Example */
  $handler->display->display_options['fields']['field_citypages_example']['id'] = 'field_citypages_example';
  $handler->display->display_options['fields']['field_citypages_example']['table'] = 'field_data_field_citypages_example';
  $handler->display->display_options['fields']['field_citypages_example']['field'] = 'field_citypages_example';
  $handler->display->display_options['fields']['field_citypages_example']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_example']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_example']['element_label_colon'] = FALSE;
  /* Field: Content: Other Local Notes */
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['id'] = 'field_citypages_other_descriptio';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['table'] = 'field_data_field_citypages_other_descriptio';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['field'] = 'field_citypages_other_descriptio';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['element_label_colon'] = FALSE;
  /* Field: Content: Description Place Names */
  $handler->display->display_options['fields']['field_citypages_placenames']['id'] = 'field_citypages_placenames';
  $handler->display->display_options['fields']['field_citypages_placenames']['table'] = 'field_data_field_citypages_placenames';
  $handler->display->display_options['fields']['field_citypages_placenames']['field'] = 'field_citypages_placenames';
  $handler->display->display_options['fields']['field_citypages_placenames']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_placenames']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_placenames']['alter']['text'] = '[field_citypages_placenames]
[field_citypages_local_experience]
[field_citypages_example]
[field_citypages_other_descriptio]';
  $handler->display->display_options['fields']['field_citypages_placenames']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'city_page' => 'city_page',
  );

  /* Display: City Page - Description */
  $handler = $view->new_display('panel_pane', 'City Page - Description', 'panel_pane_1');

  /* Display: City Page - Slides */
  $handler = $view->new_display('panel_pane', 'City Page - Slides', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'pcase_gallery_slides';
  $handler->display->display_options['style_options']['captionfield'] = 'field_citypages_photos_1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_citypages_photos_1']['id'] = 'field_citypages_photos_1';
  $handler->display->display_options['fields']['field_citypages_photos_1']['table'] = 'field_data_field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos_1']['field'] = 'field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos_1']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_photos_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_photos_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_photos_1']['alter']['text'] = '[field_citypages_photos_1-description]';
  $handler->display->display_options['fields']['field_citypages_photos_1']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_citypages_photos']['id'] = 'field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos']['table'] = 'field_data_field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos']['field'] = 'field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_photos']['element_label_colon'] = FALSE;
  $export['city_pages'] = $view;

  $view = new view();
  $view->name = 'city_pages_lists';
  $view->description = 'LIstings and administrative views of City Pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City Pages - Lists';
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
  /* Field: Content: Blog Posts */
  $handler->display->display_options['fields']['field_ref_citypages_blog']['id'] = 'field_ref_citypages_blog';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['table'] = 'field_data_field_ref_citypages_blog';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['field'] = 'field_ref_citypages_blog';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_blog']['delta_offset'] = '0';
  /* Field: Content: Testimonials */
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['id'] = 'field_ref_citypages_testimonials';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['table'] = 'field_data_field_ref_citypages_testimonials';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['field'] = 'field_ref_citypages_testimonials';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['delta_offset'] = '0';
  /* Field: Content: Case Studies */
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['id'] = 'field_ref_citypages_case_study';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['table'] = 'field_data_field_ref_citypages_case_study';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['field'] = 'field_ref_citypages_case_study';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['delta_offset'] = '0';
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
    'city_page' => 'city_page',
  );

  /* Display: City Page Linked Content */
  $handler = $view->new_display('panel_pane', 'City Page Linked Content', 'panel_pane_1');
  $export['city_pages_lists'] = $view;

  $view = new view();
  $view->name = 'city_pages_service_area_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City Pages - Service Area Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'google_map';
  $handler->display->display_options['style_options']['map_min_zoom'] = '1';
  $handler->display->display_options['style_options']['map_max_zoom'] = '19';
  $handler->display->display_options['style_options']['marker_url_field'] = 'path';
  $handler->display->display_options['style_options']['marker_title_field'] = 'title';
  $handler->display->display_options['style_options']['use_marker_clusterer'] = 0;
  $handler->display->display_options['style_options']['marker_clusterer'] = array(
    'grid_size' => '',
    'max_zoom' => '',
    'icon_url' => '',
    'icon_size' => '',
  );
  $handler->display->display_options['style_options']['map_auto_center_and_zoom'] = 1;
  $handler->display->display_options['style_options']['map_disable_scroll_wheel'] = 1;
  $handler->display->display_options['style_options']['map_disable_double_click_zoom'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Location pin */
  $handler->display->display_options['fields']['field_citypages_pin']['id'] = 'field_citypages_pin';
  $handler->display->display_options['fields']['field_citypages_pin']['table'] = 'field_data_field_citypages_pin';
  $handler->display->display_options['fields']['field_citypages_pin']['field'] = 'field_citypages_pin';
  $handler->display->display_options['fields']['field_citypages_pin']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_pin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citypages_pin']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_citypages_pin']['type'] = 'geolocation_latitude';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
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
    'city_page' => 'city_page',
  );

  /* Display: Service Area Pin Map */
  $handler = $view->new_display('panel_pane', 'Service Area Pin Map', 'panel_pane_1');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['link_to_view'] = '1';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="city-page-list">Our service area includes:</h2>';
  $handler->display->display_options['header']['area']['format'] = 'panopoly_html_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Location pin */
  $handler->display->display_options['fields']['field_citypages_pin']['id'] = 'field_citypages_pin';
  $handler->display->display_options['fields']['field_citypages_pin']['table'] = 'field_data_field_citypages_pin';
  $handler->display->display_options['fields']['field_citypages_pin']['field'] = 'field_citypages_pin';
  $handler->display->display_options['fields']['field_citypages_pin']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_pin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citypages_pin']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_citypages_pin']['type'] = 'geolocation_googlemaps_static';
  $handler->display->display_options['fields']['field_citypages_pin']['settings'] = array(
    'map_width' => '100px',
    'map_height' => '100px',
    'marker_icon' => '',
    'map_imageformat' => 'png8',
    'map_link' => 0,
    'map_maptype' => 'roadmap',
    'map_zoomlevel' => '14',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_citypagesshort_description']['id'] = 'field_citypagesshort_description';
  $handler->display->display_options['fields']['field_citypagesshort_description']['table'] = 'field_data_field_citypagesshort_description';
  $handler->display->display_options['fields']['field_citypagesshort_description']['field'] = 'field_citypagesshort_description';
  $handler->display->display_options['fields']['field_citypagesshort_description']['label'] = '';
  $handler->display->display_options['fields']['field_citypagesshort_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Rearrange City Pages */
  $handler = $view->new_display('panel_pane', 'Rearrange City Pages', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'draggableviews' => 'draggableviews',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = 'Rearrange';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $export['city_pages_service_area_map'] = $view;

  $view = new view();
  $view->name = 'citypages_image_or_video';
  $view->description = 'Show video if there is one, otherwise image';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CityPages Hero Image or Video';
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
  /* Field: Field: Image */
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
    'city_page' => 'city_page',
  );

  /* Display: CityPages hero image or video */
  $handler = $view->new_display('panel_pane', 'CityPages hero image or video', 'panel_pane_1');
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
  /* Field: Content: City Page Image */
  $handler->display->display_options['fields']['field_citypages_image']['id'] = 'field_citypages_image';
  $handler->display->display_options['fields']['field_citypages_image']['table'] = 'field_data_field_citypages_image';
  $handler->display->display_options['fields']['field_citypages_image']['field'] = 'field_citypages_image';
  $handler->display->display_options['fields']['field_citypages_image']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citypages_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_citypages_image']['settings'] = array(
    'image_style' => 'sc_940x470_mc',
    'image_link' => '',
  );
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['hide_empty'] = TRUE;
  $export['citypages_image_or_video'] = $view;

  return $export;
}