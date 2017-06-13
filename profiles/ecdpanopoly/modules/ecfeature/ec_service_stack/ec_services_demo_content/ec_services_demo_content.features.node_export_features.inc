<?php
/**
 * @file
 * ec_services_demo_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ec_services_demo_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'134\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Residential Services\',
      \'log\' => \'\',
      \'status\' => \'0\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1e1fd170-54bc-4ee5-824d-50e6d5b266e0\',
      \'nid\' => \'115\',
      \'type\' => \'service_group\',
      \'language\' => \'und\',
      \'created\' => \'1442001457\',
      \'changed\' => \'1442256077\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'0e525df5-4d2b-4242-86f6-d862b1e3ccb3\',
      \'revision_timestamp\' => \'1442256077\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_ref_serv_group_blog\' => array(),
      \'field_ref_serv_group_case_study\' => array(),
      \'field_ref_serv_group_prodpage\' => array(),
      \'field_ref_serv_group_promo\' => array(),
      \'field_ref_serv_group_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'116\',
          ),
        ),
      ),
      \'field_ref_serv_group_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_group_image\' => array(),
      \'field_ref_serv_group_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'203\',
        \'source\' => \'node/115\',
        \'alias\' => \'service-group/residential-services\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'115\',
            \'revision_id\' => \'134\',
            \'name\' => \'node:service_group:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-7749ce23-624f-4fd1-8714-0551ea77ac89\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7749ce23-624f-4fd1-8714-0551ea77ac89\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7749ce23-624f-4fd1-8714-0551ea77ac89\',
                )),
                \'new-30aa08b5-cfaf-41ea-bc62-9f06ae363adf\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-30aa08b5-cfaf-41ea-bc62-9f06ae363adf\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_group_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'30aa08b5-cfaf-41ea-bc62-9f06ae363adf\',
                )),
                \'new-5d4b8c66-50fd-41a5-83cd-ffc752dc1a46\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5d4b8c66-50fd-41a5-83cd-ffc752dc1a46\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5d4b8c66-50fd-41a5-83cd-ffc752dc1a46\',
                )),
                \'new-c2cd56a7-a538-4759-b284-b00245d5c599\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-c2cd56a7-a538-4759-b284-b00245d5c599\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_group_serv_cat\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'teaser\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'c2cd56a7-a538-4759-b284-b00245d5c599\',
                )),
                \'new-df94c7ed-1fe9-429b-9e71-c76497b59c10\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-df94c7ed-1fe9-429b-9e71-c76497b59c10\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'df94c7ed-1fe9-429b-9e71-c76497b59c10\',
                )),
                \'new-30c9b0f7-ea8f-4740-87fb-78416629b679\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-30c9b0f7-ea8f-4740-87fb-78416629b679\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_group_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'30c9b0f7-ea8f-4740-87fb-78416629b679\',
                )),
                \'new-81ff01eb-7091-4517-b84e-084082214b66\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-81ff01eb-7091-4517-b84e-084082214b66\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_group_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'81ff01eb-7091-4517-b84e-084082214b66\',
                )),
                \'new-69397277-938f-4c83-b1c2-1457742d90df\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-69397277-938f-4c83-b1c2-1457742d90df\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_group_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'69397277-938f-4c83-b1c2-1457742d90df\',
                )),
                \'new-9a45da33-6da1-443b-bf00-006165f49042\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-9a45da33-6da1-443b-bf00-006165f49042\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_group_prodpage\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 4,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'9a45da33-6da1-443b-bf00-006165f49042\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-7749ce23-624f-4fd1-8714-0551ea77ac89\',
                  1 => \'new-30aa08b5-cfaf-41ea-bc62-9f06ae363adf\',
                  2 => \'new-5d4b8c66-50fd-41a5-83cd-ffc752dc1a46\',
                  3 => \'new-c2cd56a7-a538-4759-b284-b00245d5c599\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-df94c7ed-1fe9-429b-9e71-c76497b59c10\',
                  1 => \'new-30c9b0f7-ea8f-4740-87fb-78416629b679\',
                  2 => \'new-81ff01eb-7091-4517-b84e-084082214b66\',
                  3 => \'new-69397277-938f-4c83-b1c2-1457742d90df\',
                  4 => \'new-9a45da33-6da1-443b-bf00-006165f49042\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-6458170d-fa20-4065-8f83-ba80ea7a8697\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'6458170d-fa20-4065-8f83-ba80ea7a8697\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-5d4b8c66-50fd-41a5-83cd-ffc752dc1a46\',
            )),
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Residential Services\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'145\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Mini-Splits\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5efcf49f-4766-4c98-a66e-297248bdc630\',
      \'nid\' => \'126\',
      \'type\' => \'service\',
      \'language\' => \'und\',
      \'created\' => \'1442249365\',
      \'changed\' => \'1442256072\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'24d53f0d-9e06-4edd-a316-89b3db6be678\',
      \'revision_timestamp\' => \'1442256072\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Mini-Splits\',
            \'format\' => NULL,
            \'safe_value\' => \'Mini-Splits\',
          ),
        ),
      ),
      \'field_ref_service_blog\' => array(),
      \'field_ref_service_case_study\' => array(),
      \'field_ref_service_product\' => array(),
      \'field_ref_service_promo\' => array(),
      \'field_ref_service_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'119\',
          ),
        ),
      ),
      \'field_ref_service_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_image\' => array(),
      \'field_ref_service_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'216\',
        \'source\' => \'node/126\',
        \'alias\' => \'service/mini-splits\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'126\',
            \'revision_id\' => \'145\',
            \'name\' => \'node:service:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => NULL,
            \'pipeline\' => \'standard\',
            \'contexts\' => NULL,
            \'relationships\' => NULL,
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => NULL,
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'126\',
            \'revision_id\' => \'145\',
            \'name\' => \'node:service:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                )),
                \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                )),
                \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7fbb5182-cb1e-4409-9983-061ecfddda90\',
                )),
                \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                )),
                \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                )),
                \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                )),
                \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                )),
                \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_product\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                  1 => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                  2 => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                  3 => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                  1 => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                  2 => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                  3 => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
            )),
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:service:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'service\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'h3\',
            \'link_to_entity\' => TRUE,
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'s_220\',
                      \'image_link\' => \'content\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                )),
                \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                )),
                \'new-0fddb420-f828-43a3-9740-0c6531d60091\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0fddb420-f828-43a3-9740-0c6531d60091\',
                )),
                \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                    \'style\' => \'default\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                  1 => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                  2 => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                  3 => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'ec_service_stack\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Mini-Splits\',
        \'mlid\' => 0,
        \'plid\' => \'3290\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'132\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Commercial Services\',
      \'log\' => \'\',
      \'status\' => \'0\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5a7aaa0c-f0dc-4269-99ea-6d78f3ad2b0a\',
      \'nid\' => \'87\',
      \'type\' => \'service_group\',
      \'language\' => \'und\',
      \'created\' => \'1419947714\',
      \'changed\' => \'1442255917\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2d09b878-8650-4184-85df-aa649e4217f5\',
      \'revision_timestamp\' => \'1442255917\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><span><img src="https://lh5.googleusercontent.com/WYKAJFvcbGv2QGGvfk8muobU2JYz38iaGlYizS7jTzG0YpFOrZtUbw9C1caU8O8Zl-2cynYiEhIwrcEBZw51APWhdV6eNEhGyT5rkTWmN8gyrMPDtWbiyWWJ5jSNs4DXRw" alt="commercial_hvac_nj" height="207px;" width="304px;"></span></p><p><span>We are proud to offer complete maintenance, replacement, and installation services for small and large commercial businesses, with the same commitment to responsiveness and professionalism that has made us an HVAC leader for so many years. We stand by our work through our warranties and guarantee that we will be available to service maintenance needs at any time. </span></p><h3><span>A Linc Service</span><span>®</span><span> Contractor</span></h3><p><span>As part of our growth commercial development, we have become a Linc Service</span><span>®</span><span> Contractor. That means we provide innovative heating and air conditioning solutions to commercial building owners, supported by the technology, training, resources, and best practices of a worldwide organization of commercial HVAC franchises.</span></p><p><span><span>&nbsp;</span></span></p><p><span>We are certified and supported in meeting the unique needs of customers in the following markets:</span></p><ul><li><span>Schools and Colleges</span></li><li><span>Computer Rooms</span></li><li><span>Office Buildings</span></li><li><span>Industrial Facilities</span></li><li><span>Municipalities</span></li><li><span>Pharmaceuticals</span></li></ul><p><span>We also have expertise with services such as:</span></p><ul><li><span>Facility Energy Audits and Improvements Reports</span></li><li><span>Utility Bill Audits, Over-Pay Recovery, and Historical Database Development</span></li></ul><p><span><span>Whether you are a current residential customer who would like us to service your business too, or a potential new customer looking for commercial HVAC support, </span><span>contact us</span><span> today to learn more about how we can help your business save energy and save money. </span></span></p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p><span><img src="/sites/default/files/resize/remote/f466c5aec9f375d0876cbf5bd999383d-304x207.jpg" alt="commercial_hvac_nj" height="207" width="304"></span></p><p><span>We are proud to offer complete maintenance, replacement, and installation services for small and large commercial businesses, with the same commitment to responsiveness and professionalism that has made us an HVAC leader for so many years. We stand by our work through our warranties and guarantee that we will be available to service maintenance needs at any time. </span></p><h3><span>A Linc Service</span><span>®</span><span> Contractor</span></h3><p><span>As part of our growth commercial development, we have become a Linc Service</span><span>®</span><span> Contractor. That means we provide innovative heating and air conditioning solutions to commercial building owners, supported by the technology, training, resources, and best practices of a worldwide organization of commercial HVAC franchises.</span></p><p><span><span> </span></span></p><p><span>We are certified and supported in meeting the unique needs of customers in the following markets:</span></p><ul><li><span>Schools and Colleges</span></li><li><span>Computer Rooms</span></li><li><span>Office Buildings</span></li><li><span>Industrial Facilities</span></li><li><span>Municipalities</span></li><li><span>Pharmaceuticals</span></li></ul><p><span>We also have expertise with services such as:</span></p><ul><li><span>Facility Energy Audits and Improvements Reports</span></li><li><span>Utility Bill Audits, Over-Pay Recovery, and Historical Database Development</span></li></ul><p><span><span>Whether you are a current residential customer who would like us to service your business too, or a potential new customer looking for commercial HVAC support, </span><span>contact us</span><span> today to learn more about how we can help your business save energy and save money. </span></span></p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_ref_serv_group_blog\' => array(),
      \'field_ref_serv_group_case_study\' => array(),
      \'field_ref_serv_group_prodpage\' => array(),
      \'field_ref_serv_group_promo\' => array(),
      \'field_ref_serv_group_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'117\',
          ),
        ),
      ),
      \'field_ref_serv_group_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_group_image\' => array(),
      \'field_ref_serv_group_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'200\',
        \'source\' => \'node/87\',
        \'alias\' => \'service-group/commercial-services\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'87\',
            \'revision_id\' => \'132\',
            \'name\' => \'node:service_group:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-7749ce23-624f-4fd1-8714-0551ea77ac89\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7749ce23-624f-4fd1-8714-0551ea77ac89\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7749ce23-624f-4fd1-8714-0551ea77ac89\',
                )),
                \'new-30aa08b5-cfaf-41ea-bc62-9f06ae363adf\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-30aa08b5-cfaf-41ea-bc62-9f06ae363adf\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_group_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'30aa08b5-cfaf-41ea-bc62-9f06ae363adf\',
                )),
                \'new-5d4b8c66-50fd-41a5-83cd-ffc752dc1a46\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5d4b8c66-50fd-41a5-83cd-ffc752dc1a46\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5d4b8c66-50fd-41a5-83cd-ffc752dc1a46\',
                )),
                \'new-c2cd56a7-a538-4759-b284-b00245d5c599\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-c2cd56a7-a538-4759-b284-b00245d5c599\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_group_serv_cat\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'teaser\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'c2cd56a7-a538-4759-b284-b00245d5c599\',
                )),
                \'new-df94c7ed-1fe9-429b-9e71-c76497b59c10\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-df94c7ed-1fe9-429b-9e71-c76497b59c10\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'df94c7ed-1fe9-429b-9e71-c76497b59c10\',
                )),
                \'new-30c9b0f7-ea8f-4740-87fb-78416629b679\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-30c9b0f7-ea8f-4740-87fb-78416629b679\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_group_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'30c9b0f7-ea8f-4740-87fb-78416629b679\',
                )),
                \'new-81ff01eb-7091-4517-b84e-084082214b66\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-81ff01eb-7091-4517-b84e-084082214b66\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_group_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'81ff01eb-7091-4517-b84e-084082214b66\',
                )),
                \'new-69397277-938f-4c83-b1c2-1457742d90df\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-69397277-938f-4c83-b1c2-1457742d90df\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_group_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'69397277-938f-4c83-b1c2-1457742d90df\',
                )),
                \'new-9a45da33-6da1-443b-bf00-006165f49042\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-9a45da33-6da1-443b-bf00-006165f49042\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_group_prodpage\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 4,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'9a45da33-6da1-443b-bf00-006165f49042\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-7749ce23-624f-4fd1-8714-0551ea77ac89\',
                  1 => \'new-30aa08b5-cfaf-41ea-bc62-9f06ae363adf\',
                  2 => \'new-5d4b8c66-50fd-41a5-83cd-ffc752dc1a46\',
                  3 => \'new-c2cd56a7-a538-4759-b284-b00245d5c599\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-df94c7ed-1fe9-429b-9e71-c76497b59c10\',
                  1 => \'new-30c9b0f7-ea8f-4740-87fb-78416629b679\',
                  2 => \'new-81ff01eb-7091-4517-b84e-084082214b66\',
                  3 => \'new-69397277-938f-4c83-b1c2-1457742d90df\',
                  4 => \'new-9a45da33-6da1-443b-bf00-006165f49042\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-6458170d-fa20-4065-8f83-ba80ea7a8697\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'6458170d-fa20-4065-8f83-ba80ea7a8697\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-5d4b8c66-50fd-41a5-83cd-ffc752dc1a46\',
            )),
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'-20\',
      \'menu\' => array(
        \'link_title\' => \'Commercial Services\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'141\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Mini-Split Heat Pumps\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'20af7390-5a8b-4ab1-962b-312969a56e19\',
      \'nid\' => \'122\',
      \'type\' => \'service\',
      \'language\' => \'und\',
      \'created\' => \'1442002023\',
      \'changed\' => \'1442256035\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2d37b529-a66e-441e-960d-2f5bc74a6cea\',
      \'revision_timestamp\' => \'1442256035\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<h2>Energy-efficient home heating at its very best.</h2><p>Mini-split heat pumps are the premier choice for those who want to improve home comfort while also saving money on their energy bill. A relatively new type of home <a href="/node/5">heating</a> system, mini-splits operate without <a href="/node/16">ducts</a> and offer flexibility of placement in practically any room throughout your home. For California homeowners currently using an old furnace, making the jump to mini-split heat pumps is like night and day.</p><h2>How Do Mini-split Heat Pumps Work?</h2><p>As with most conventional HVAC systems, mini-split heat pumps make use of a condenser and a compressor, both of which sit outside your home. Rather than transferring conditioned air to a series of ducts, however, mini-splits send warm air through copper piping into an air-handling unit that is located inside.</p><p>The resulting warm air is then quietly distributed, resulting in true home comfort that is difficult to achieve with older, conventional HVAC systems.</p><h2>Why Switch to Mini-splits?</h2><p>Switching to mini-split heat pumps is a worthwhile upgrade for all California homeowners. Here are just a few reasons to consider them:</p><ul><li><strong>Simple Add-on</strong> — If you’re happy with your current heating system but feel as if you could be getting more out of it in terms of home performance and energy efficiency, mini-splits can be a great option. They’re ideal when used as add-ons in addition to replacing old HVAC systems entirely.</li><li><strong>Extreme Flexibility</strong> — Today’s homeowners crave solutions that allow them to customize everything to their liking, which is why flexibility is key in determining which heating system is best for your home. Mini-splits can be installed practically anywhere in a home, making them the best option for those looking for flexibility with interior design.</li><li><strong>Energy Efficiency</strong> — Everyone wants to save money on their energy bills, but old, outdated furnaces can run your bill sky-high if you aren’t careful. Installing mini-splits is an excellent way to not only improve home performance, but lower your energy bill as well.</li></ul><h2><a href="/node/57">Schedule</a> a Mini-split Installation with Greiner Today</h2><p>At Greiner Heating and Air, we’re passionate about providing our customers with the best possible tools and appliances for taking home performance to the next level. We believe that heating a home with mini-split heat pumps is the future, and we’re ready to show you why.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<h2>Energy-efficient home heating at its very best.</h2><p>Mini-split heat pumps are the premier choice for those who want to improve home comfort while also saving money on their energy bill. A relatively new type of home <a href="/node/5">heating</a> system, mini-splits operate without <a href="/node/16">ducts</a> and offer flexibility of placement in practically any room throughout your home. For California homeowners currently using an old furnace, making the jump to mini-split heat pumps is like night and day.</p><h2>How Do Mini-split Heat Pumps Work?</h2><p>As with most conventional HVAC systems, mini-split heat pumps make use of a condenser and a compressor, both of which sit outside your home. Rather than transferring conditioned air to a series of ducts, however, mini-splits send warm air through copper piping into an air-handling unit that is located inside.</p><p>The resulting warm air is then quietly distributed, resulting in true home comfort that is difficult to achieve with older, conventional HVAC systems.</p><h2>Why Switch to Mini-splits?</h2><p>Switching to mini-split heat pumps is a worthwhile upgrade for all California homeowners. Here are just a few reasons to consider them:</p><ul><li><strong>Simple Add-on</strong> — If you’re happy with your current heating system but feel as if you could be getting more out of it in terms of home performance and energy efficiency, mini-splits can be a great option. They’re ideal when used as add-ons in addition to replacing old HVAC systems entirely.</li><li><strong>Extreme Flexibility</strong> — Today’s homeowners crave solutions that allow them to customize everything to their liking, which is why flexibility is key in determining which heating system is best for your home. Mini-splits can be installed practically anywhere in a home, making them the best option for those looking for flexibility with interior design.</li><li><strong>Energy Efficiency</strong> — Everyone wants to save money on their energy bills, but old, outdated furnaces can run your bill sky-high if you aren’t careful. Installing mini-splits is an excellent way to not only improve home performance, but lower your energy bill as well.</li></ul><h2><a href="/node/57">Schedule</a> a Mini-split Installation with Greiner Today</h2><p>At Greiner Heating and Air, we’re passionate about providing our customers with the best possible tools and appliances for taking home performance to the next level. We believe that heating a home with mini-split heat pumps is the future, and we’re ready to show you why.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(),
      \'field_ref_service_blog\' => array(),
      \'field_ref_service_case_study\' => array(),
      \'field_ref_service_product\' => array(),
      \'field_ref_service_promo\' => array(),
      \'field_ref_service_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'116\',
          ),
        ),
      ),
      \'field_ref_service_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_image\' => array(),
      \'field_ref_service_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'210\',
        \'source\' => \'node/122\',
        \'alias\' => \'service/mini-split-heat-pumps\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'122\',
            \'revision_id\' => \'141\',
            \'name\' => \'node:service:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => NULL,
            \'pipeline\' => \'standard\',
            \'contexts\' => NULL,
            \'relationships\' => NULL,
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => NULL,
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'122\',
            \'revision_id\' => \'141\',
            \'name\' => \'node:service:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                )),
                \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                )),
                \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7fbb5182-cb1e-4409-9983-061ecfddda90\',
                )),
                \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                )),
                \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                )),
                \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                )),
                \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                )),
                \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_product\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                  1 => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                  2 => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                  3 => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                  1 => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                  2 => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                  3 => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
            )),
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:service:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'service\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'h3\',
            \'link_to_entity\' => TRUE,
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'s_220\',
                      \'image_link\' => \'content\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                )),
                \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                )),
                \'new-0fddb420-f828-43a3-9740-0c6531d60091\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0fddb420-f828-43a3-9740-0c6531d60091\',
                )),
                \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                    \'style\' => \'default\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                  1 => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                  2 => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                  3 => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'ec_service_stack\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Mini-Split Heat Pumps\',
        \'mlid\' => 0,
        \'plid\' => \'3287\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'147\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Furnaces\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e3110017-ac99-4146-9a56-0704995312d1\',
      \'nid\' => \'128\',
      \'type\' => \'service\',
      \'language\' => \'und\',
      \'created\' => \'1442251179\',
      \'changed\' => \'1442255994\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3d32cd46-163a-4bfc-8f86-c83735f4c807\',
      \'revision_timestamp\' => \'1442255994\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Furnaces\',
            \'format\' => NULL,
            \'safe_value\' => \'Furnaces\',
          ),
        ),
      ),
      \'field_ref_service_blog\' => array(),
      \'field_ref_service_case_study\' => array(),
      \'field_ref_service_product\' => array(),
      \'field_ref_service_promo\' => array(),
      \'field_ref_service_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'116\',
          ),
        ),
      ),
      \'field_ref_service_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_image\' => array(),
      \'field_ref_service_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'218\',
        \'source\' => \'node/128\',
        \'alias\' => \'service/furnaces\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'128\',
            \'revision_id\' => \'147\',
            \'name\' => \'node:service:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => NULL,
            \'pipeline\' => \'standard\',
            \'contexts\' => NULL,
            \'relationships\' => NULL,
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => NULL,
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'128\',
            \'revision_id\' => \'147\',
            \'name\' => \'node:service:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                )),
                \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                )),
                \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7fbb5182-cb1e-4409-9983-061ecfddda90\',
                )),
                \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                )),
                \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                )),
                \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                )),
                \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                )),
                \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_product\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                  1 => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                  2 => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                  3 => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                  1 => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                  2 => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                  3 => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
            )),
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:service:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'service\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'h3\',
            \'link_to_entity\' => TRUE,
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'s_220\',
                      \'image_link\' => \'content\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                )),
                \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                )),
                \'new-0fddb420-f828-43a3-9740-0c6531d60091\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0fddb420-f828-43a3-9740-0c6531d60091\',
                )),
                \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                    \'style\' => \'default\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                  1 => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                  2 => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                  3 => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'ec_service_stack\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Furnaces\',
        \'mlid\' => 0,
        \'plid\' => \'3287\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'135\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Heating\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fe197b56-1a1c-4edf-9e71-24d660a91451\',
      \'nid\' => \'116\',
      \'type\' => \'service_category\',
      \'language\' => \'und\',
      \'created\' => \'1442001695\',
      \'changed\' => \'1442256001\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'64e3a58b-027a-49ba-8a0c-f2b0f5e0df9c\',
      \'revision_timestamp\' => \'1442256001\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<h2>Energy-efficient heating solutions for your California home.</h2><p>Heating your home shouldn’t be a challenge. Sadly, many California residents find themselves spending far too much money on their heating bill, especially through the cooler months of the year. There are a number of home heating solutions that can allow you to move toward enhanced <a href="/node/7">home performance</a>, and Greiner is ready to help determine which is right for your home.</p><h2>Heating Service and Installation</h2><ul><li><a href="/node/13"><strong>Furnaces</strong></a> — The furnaces of the past are anything but energy efficient. Greiner sells and installs new high-efficiency furnaces that are ideal for those who are looking to stick with a traditional HVAC system, yet want to save money on their monthly heating bill.</li><li><a href="/node/14"><strong>Mini-split Heat Pumps</strong></a> — Mini-splits are extremely popular today, and for good reason. They’re considered by many in the home performance industry to be the most energy-efficient heating solution available, offering flexibility in installation like no other option can.</li><li><a href="/node/15"><strong>Indoor Air Quality</strong></a> — The quality of the air you and your family breathes should never be left to chance. At Greiner, we only install heating systems that promote strong indoor air quality (IAQ), ensuring that your home is a safe and healthy environment year-round.</li><li><a href="/node/16"><strong>Ventilation Systems / Ductwork</strong></a> — Not all ventilation systems are designed to best suit the homes they’re in, and ductwork can easily suffer damage such as cracks and leaks. We’ll help you make any modifications that might be necessary or even install a completely new ventilation system for your home.</li></ul><h2>Home Heating with Greiner Heating and Air</h2><p>At Greiner, we believe that the road toward home performance can’t be traveled without addressing any potential setbacks from your home heating system. With a new install or modification, we can help you to achieve:</p><ul><li><strong>Improved home comfort</strong></li><li><strong>Higher energy efficiency</strong></li><li><strong>Reduced utility bills</strong></li><li><strong>Safe, clean indoor air</strong></li></ul>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<h2>Energy-efficient heating solutions for your California home.</h2><p>Heating your home shouldn’t be a challenge. Sadly, many California residents find themselves spending far too much money on their heating bill, especially through the cooler months of the year. There are a number of home heating solutions that can allow you to move toward enhanced <a href="/node/7">home performance</a>, and Greiner is ready to help determine which is right for your home.</p><h2>Heating Service and Installation</h2><ul><li><a href="/node/13"><strong>Furnaces</strong></a> — The furnaces of the past are anything but energy efficient. Greiner sells and installs new high-efficiency furnaces that are ideal for those who are looking to stick with a traditional HVAC system, yet want to save money on their monthly heating bill.</li><li><a href="/node/14"><strong>Mini-split Heat Pumps</strong></a> — Mini-splits are extremely popular today, and for good reason. They’re considered by many in the home performance industry to be the most energy-efficient heating solution available, offering flexibility in installation like no other option can.</li><li><a href="/node/15"><strong>Indoor Air Quality</strong></a> — The quality of the air you and your family breathes should never be left to chance. At Greiner, we only install heating systems that promote strong indoor air quality (IAQ), ensuring that your home is a safe and healthy environment year-round.</li><li><a href="/node/16"><strong>Ventilation Systems / Ductwork</strong></a> — Not all ventilation systems are designed to best suit the homes they’re in, and ductwork can easily suffer damage such as cracks and leaks. We’ll help you make any modifications that might be necessary or even install a completely new ventilation system for your home.</li></ul><h2>Home Heating with Greiner Heating and Air</h2><p>At Greiner, we believe that the road toward home performance can’t be traveled without addressing any potential setbacks from your home heating system. With a new install or modification, we can help you to achieve:</p><ul><li><strong>Improved home comfort</strong></li><li><strong>Higher energy efficiency</strong></li><li><strong>Reduced utility bills</strong></li><li><strong>Safe, clean indoor air</strong></li></ul>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(),
      \'field_ref_serv_cat_blog\' => array(),
      \'field_ref_serv_cat_case_study\' => array(),
      \'field_ref_serv_cat_prodpage\' => array(),
      \'field_ref_serv_cat_promo\' => array(),
      \'field_ref_serv_cat_serv_group\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'115\',
          ),
        ),
      ),
      \'field_ref_serv_cat_services\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'121\',
          ),
          array(
            \'target_id\' => \'122\',
          ),
          array(
            \'target_id\' => \'120\',
          ),
          array(
            \'target_id\' => \'127\',
          ),
          array(
            \'target_id\' => \'128\',
          ),
          array(
            \'target_id\' => \'134\',
          ),
        ),
      ),
      \'field_ref_serv_cat_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_category_image\' => array(),
      \'field_ref_serv_cat_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'204\',
        \'source\' => \'node/116\',
        \'alias\' => \'service-category/heating\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'116\',
            \'revision_id\' => \'135\',
            \'name\' => \'node:service_category:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2a09c6c6-0795-474b-8bc0-b8f32541cfb7\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2a09c6c6-0795-474b-8bc0-b8f32541cfb7\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2a09c6c6-0795-474b-8bc0-b8f32541cfb7\',
                )),
                \'new-1a5a6ae8-aff9-4a07-a83c-1fbd4542f4cd\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-1a5a6ae8-aff9-4a07-a83c-1fbd4542f4cd\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_category_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'1a5a6ae8-aff9-4a07-a83c-1fbd4542f4cd\',
                )),
                \'new-86bb4783-e660-485e-b831-8b0ff370b14c\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-86bb4783-e660-485e-b831-8b0ff370b14c\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'86bb4783-e660-485e-b831-8b0ff370b14c\',
                )),
                \'new-c1f1828d-d832-46ec-8df9-26b177b38db4\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-c1f1828d-d832-46ec-8df9-26b177b38db4\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'c1f1828d-d832-46ec-8df9-26b177b38db4\',
                )),
                \'new-36692d53-1b71-4103-b24a-47a46ef78eef\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-36692d53-1b71-4103-b24a-47a46ef78eef\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_services\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'teaser\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 4,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'36692d53-1b71-4103-b24a-47a46ef78eef\',
                )),
                \'new-32790dba-eb7b-443d-9a53-e22c1211b55f\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-32790dba-eb7b-443d-9a53-e22c1211b55f\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'32790dba-eb7b-443d-9a53-e22c1211b55f\',
                )),
                \'new-6de6e416-b49a-4fe8-97a3-39675e297072\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6de6e416-b49a-4fe8-97a3-39675e297072\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6de6e416-b49a-4fe8-97a3-39675e297072\',
                )),
                \'new-e329171e-67f0-4a90-ae1d-65f89eab5208\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e329171e-67f0-4a90-ae1d-65f89eab5208\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e329171e-67f0-4a90-ae1d-65f89eab5208\',
                )),
                \'new-eb1df09e-bae4-4df0-a438-3705d6904c6e\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-eb1df09e-bae4-4df0-a438-3705d6904c6e\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_prodpage\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'eb1df09e-bae4-4df0-a438-3705d6904c6e\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2a09c6c6-0795-474b-8bc0-b8f32541cfb7\',
                  1 => \'new-1a5a6ae8-aff9-4a07-a83c-1fbd4542f4cd\',
                  2 => \'new-86bb4783-e660-485e-b831-8b0ff370b14c\',
                  3 => \'new-c1f1828d-d832-46ec-8df9-26b177b38db4\',
                  4 => \'new-36692d53-1b71-4103-b24a-47a46ef78eef\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-32790dba-eb7b-443d-9a53-e22c1211b55f\',
                  1 => \'new-6de6e416-b49a-4fe8-97a3-39675e297072\',
                  2 => \'new-e329171e-67f0-4a90-ae1d-65f89eab5208\',
                  3 => \'new-eb1df09e-bae4-4df0-a438-3705d6904c6e\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-dd665112-2817-499f-a514-7d66df2234b7\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'dd665112-2817-499f-a514-7d66df2234b7\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-c1f1828d-d832-46ec-8df9-26b177b38db4\',
            )),
          ),
        \'teaser\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'116\',
            \'revision_id\' => \'135\',
            \'name\' => \'node:service_category:default:teaser\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-152069b0-3dab-4707-a38c-63c31f81f81f\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-152069b0-3dab-4707-a38c-63c31f81f81f\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'152069b0-3dab-4707-a38c-63c31f81f81f\',
                )),
                \'new-c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_category_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_220x110\',
                      \'image_link\' => \'content\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9\',
                )),
                \'new-f427cd34-814a-408b-9033-7d56c19af2b2\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-f427cd34-814a-408b-9033-7d56c19af2b2\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f427cd34-814a-408b-9033-7d56c19af2b2\',
                )),
                \'new-72270395-d870-482e-ad03-4e27e231e361\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-72270395-d870-482e-ad03-4e27e231e361\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_class\' => \'link-wrapper\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'72270395-d870-482e-ad03-4e27e231e361\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-152069b0-3dab-4707-a38c-63c31f81f81f\',
                  1 => \'new-c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9\',
                  2 => \'new-f427cd34-814a-408b-9033-7d56c19af2b2\',
                  3 => \'new-72270395-d870-482e-ad03-4e27e231e361\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-82fa03eb-e4cb-4245-b092-a1ab5c64df63\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'82fa03eb-e4cb-4245-b092-a1ab5c64df63\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Heating\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'1\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'149\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Energy Audits\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9b9e27f8-fdbd-4fdc-81c2-502391a82ccb\',
      \'nid\' => \'130\',
      \'type\' => \'service\',
      \'language\' => \'und\',
      \'created\' => \'1442251259\',
      \'changed\' => \'1442255734\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'705190b3-7b37-4181-9899-0554f90bbd60\',
      \'revision_timestamp\' => \'1442255734\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Energy Audits\',
            \'format\' => NULL,
            \'safe_value\' => \'Energy Audits\',
          ),
        ),
      ),
      \'field_ref_service_blog\' => array(),
      \'field_ref_service_case_study\' => array(),
      \'field_ref_service_product\' => array(),
      \'field_ref_service_promo\' => array(),
      \'field_ref_service_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'117\',
          ),
        ),
      ),
      \'field_ref_service_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_image\' => array(),
      \'field_ref_service_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'220\',
        \'source\' => \'node/130\',
        \'alias\' => \'service/extended-energy-audits\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'130\',
            \'revision_id\' => \'149\',
            \'name\' => \'node:service:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => NULL,
            \'pipeline\' => \'standard\',
            \'contexts\' => NULL,
            \'relationships\' => NULL,
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => NULL,
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'130\',
            \'revision_id\' => \'149\',
            \'name\' => \'node:service:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                )),
                \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                )),
                \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7fbb5182-cb1e-4409-9983-061ecfddda90\',
                )),
                \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                )),
                \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                )),
                \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                )),
                \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                )),
                \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_product\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                  1 => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                  2 => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                  3 => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                  1 => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                  2 => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                  3 => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
            )),
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:service:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'service\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'h3\',
            \'link_to_entity\' => TRUE,
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'s_220\',
                      \'image_link\' => \'content\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                )),
                \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                )),
                \'new-0fddb420-f828-43a3-9740-0c6531d60091\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0fddb420-f828-43a3-9740-0c6531d60091\',
                )),
                \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                    \'style\' => \'default\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                  1 => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                  2 => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                  3 => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'ec_service_stack\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Energy Audits\',
        \'mlid\' => 0,
        \'plid\' => \'3288\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'146\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Geothermal\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'24abb0e3-ae07-4f14-8fb9-5f088bdd7f7f\',
      \'nid\' => \'127\',
      \'type\' => \'service\',
      \'language\' => \'und\',
      \'created\' => \'1442249420\',
      \'changed\' => \'1442255998\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b488448a-c5b7-4103-8fb8-84148c3a511c\',
      \'revision_timestamp\' => \'1442255998\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Geothermal\',
            \'format\' => NULL,
            \'safe_value\' => \'Geothermal\',
          ),
        ),
      ),
      \'field_ref_service_blog\' => array(),
      \'field_ref_service_case_study\' => array(),
      \'field_ref_service_product\' => array(),
      \'field_ref_service_promo\' => array(),
      \'field_ref_service_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'116\',
          ),
        ),
      ),
      \'field_ref_service_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_image\' => array(),
      \'field_ref_service_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'217\',
        \'source\' => \'node/127\',
        \'alias\' => \'service/geothermal\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'127\',
            \'revision_id\' => \'146\',
            \'name\' => \'node:service:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => NULL,
            \'pipeline\' => \'standard\',
            \'contexts\' => NULL,
            \'relationships\' => NULL,
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => NULL,
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'127\',
            \'revision_id\' => \'146\',
            \'name\' => \'node:service:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                )),
                \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                )),
                \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7fbb5182-cb1e-4409-9983-061ecfddda90\',
                )),
                \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                )),
                \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                )),
                \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                )),
                \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                )),
                \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_product\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                  1 => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                  2 => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                  3 => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                  1 => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                  2 => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                  3 => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
            )),
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:service:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'service\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'h3\',
            \'link_to_entity\' => TRUE,
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'s_220\',
                      \'image_link\' => \'content\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                )),
                \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                )),
                \'new-0fddb420-f828-43a3-9740-0c6531d60091\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0fddb420-f828-43a3-9740-0c6531d60091\',
                )),
                \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                    \'style\' => \'default\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                  1 => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                  2 => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                  3 => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'ec_service_stack\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Geothermal\',
        \'mlid\' => 0,
        \'plid\' => \'3287\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'153\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Tankless Water Heaters\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b7404483-7893-48cd-86e0-a0decfa0d064\',
      \'nid\' => \'134\',
      \'type\' => \'service\',
      \'language\' => \'und\',
      \'created\' => \'1442251356\',
      \'changed\' => \'1442255742\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b6dded5d-759e-48ac-9455-d4d4c56bc8d4\',
      \'revision_timestamp\' => \'1442255742\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Tankless Water Heaters\',
            \'format\' => NULL,
            \'safe_value\' => \'Tankless Water Heaters\',
          ),
        ),
      ),
      \'field_ref_service_blog\' => array(),
      \'field_ref_service_case_study\' => array(),
      \'field_ref_service_product\' => array(),
      \'field_ref_service_promo\' => array(),
      \'field_ref_service_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'116\',
          ),
        ),
      ),
      \'field_ref_service_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_image\' => array(),
      \'field_ref_service_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'225\',
        \'source\' => \'node/134\',
        \'alias\' => \'service/tankless-water-heaters\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'134\',
            \'revision_id\' => \'153\',
            \'name\' => \'node:service:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => NULL,
            \'pipeline\' => \'standard\',
            \'contexts\' => NULL,
            \'relationships\' => NULL,
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => NULL,
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'134\',
            \'revision_id\' => \'153\',
            \'name\' => \'node:service:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                )),
                \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                )),
                \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7fbb5182-cb1e-4409-9983-061ecfddda90\',
                )),
                \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                )),
                \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                )),
                \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                )),
                \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                )),
                \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_product\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                  1 => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                  2 => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                  3 => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                  1 => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                  2 => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                  3 => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
            )),
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:service:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'service\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'h3\',
            \'link_to_entity\' => TRUE,
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'s_220\',
                      \'image_link\' => \'content\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                )),
                \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                )),
                \'new-0fddb420-f828-43a3-9740-0c6531d60091\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0fddb420-f828-43a3-9740-0c6531d60091\',
                )),
                \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                    \'style\' => \'default\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                  1 => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                  2 => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                  3 => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'ec_service_stack\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Tankless Water Heaters\',
        \'mlid\' => 0,
        \'plid\' => \'3287\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'154\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-High-Efficiency Tank Water Heaters\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b7f2186b-c8f5-44ae-a723-89b86f3bd692\',
      \'nid\' => \'135\',
      \'type\' => \'service\',
      \'language\' => \'und\',
      \'created\' => \'1442251374\',
      \'changed\' => \'1442255738\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c187c4a3-e5d8-45fc-8904-a6be90622ffa\',
      \'revision_timestamp\' => \'1442255738\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(
        \'und\' => array(
          array(
            \'value\' => \'High-Efficiency Tank Water Heaters\',
            \'format\' => NULL,
            \'safe_value\' => \'High-Efficiency Tank Water Heaters\',
          ),
        ),
      ),
      \'field_ref_service_blog\' => array(),
      \'field_ref_service_case_study\' => array(),
      \'field_ref_service_product\' => array(),
      \'field_ref_service_promo\' => array(),
      \'field_ref_service_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'117\',
          ),
        ),
      ),
      \'field_ref_service_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_image\' => array(),
      \'field_ref_service_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'226\',
        \'source\' => \'node/135\',
        \'alias\' => \'service/high-efficiency-tank-water-heaters\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'135\',
            \'revision_id\' => \'154\',
            \'name\' => \'node:service:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => NULL,
            \'pipeline\' => \'standard\',
            \'contexts\' => NULL,
            \'relationships\' => NULL,
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => NULL,
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'135\',
            \'revision_id\' => \'154\',
            \'name\' => \'node:service:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                )),
                \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                )),
                \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7fbb5182-cb1e-4409-9983-061ecfddda90\',
                )),
                \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                )),
                \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                )),
                \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                )),
                \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                )),
                \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_product\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                  1 => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                  2 => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                  3 => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                  1 => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                  2 => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                  3 => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
            )),
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:service:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'service\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'h3\',
            \'link_to_entity\' => TRUE,
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'s_220\',
                      \'image_link\' => \'content\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                )),
                \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                )),
                \'new-0fddb420-f828-43a3-9740-0c6531d60091\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0fddb420-f828-43a3-9740-0c6531d60091\',
                )),
                \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                    \'style\' => \'default\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                  1 => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                  2 => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                  3 => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'ec_service_stack\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'High-Efficiency Tank Water Heaters\',
        \'mlid\' => 0,
        \'plid\' => \'3288\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'152\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Air Sealing\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b2911944-1f56-4a5c-a89d-318b716298e3\',
      \'nid\' => \'133\',
      \'type\' => \'service\',
      \'language\' => \'und\',
      \'created\' => \'1442251310\',
      \'changed\' => \'1442255746\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d396fb5f-4eb1-415b-b6f8-19f8364a98f4\',
      \'revision_timestamp\' => \'1442255746\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Air Sealing\',
            \'format\' => NULL,
            \'safe_value\' => \'Air Sealing\',
          ),
        ),
      ),
      \'field_ref_service_blog\' => array(),
      \'field_ref_service_case_study\' => array(),
      \'field_ref_service_product\' => array(),
      \'field_ref_service_promo\' => array(),
      \'field_ref_service_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'117\',
          ),
        ),
      ),
      \'field_ref_service_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_image\' => array(),
      \'field_ref_service_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'223\',
        \'source\' => \'node/133\',
        \'alias\' => \'service/sealing\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'133\',
            \'revision_id\' => \'152\',
            \'name\' => \'node:service:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => NULL,
            \'pipeline\' => \'standard\',
            \'contexts\' => NULL,
            \'relationships\' => NULL,
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => NULL,
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'133\',
            \'revision_id\' => \'152\',
            \'name\' => \'node:service:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                )),
                \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                )),
                \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7fbb5182-cb1e-4409-9983-061ecfddda90\',
                )),
                \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                )),
                \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                )),
                \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                )),
                \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                )),
                \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_product\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                  1 => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                  2 => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                  3 => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                  1 => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                  2 => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                  3 => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
            )),
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:service:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'service\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'h3\',
            \'link_to_entity\' => TRUE,
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'s_220\',
                      \'image_link\' => \'content\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                )),
                \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                )),
                \'new-0fddb420-f828-43a3-9740-0c6531d60091\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0fddb420-f828-43a3-9740-0c6531d60091\',
                )),
                \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                    \'style\' => \'default\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                  1 => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                  2 => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                  3 => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'ec_service_stack\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Air Sealing\',
        \'mlid\' => 0,
        \'plid\' => \'3288\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'140\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Indoor Air \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b0afdb47-0cd3-465e-b38a-372b0d88cf75\',
      \'nid\' => \'121\',
      \'type\' => \'service\',
      \'language\' => \'und\',
      \'created\' => \'1442001931\',
      \'changed\' => \'1442256014\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d51487f2-8de3-497b-9ad6-245a71da95c6\',
      \'revision_timestamp\' => \'1442256014\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<h2>Because you deserve to breathe free and clear in your own home.</h2><p>Have you ever thought about the quality of the air you’re breathing at home? The thing is, most people don’t unless there’s something obviously wrong. No one wants to breathe poor-quality air day-in, day-out, and in many cases, doing so can prove to be more than a simple nuisance. The air inside your home doesn’t have to be poor quality, and understanding what can affect indoor air quality (IAQ) is the first step toward remedying whatever issues may exist.</p><h2>Factors Affecting Indoor Air Quality</h2><p>Determining the exact cause of indoor air quality issues can certainly be a challenge, but there are plenty of factors that tend to contribute to the problem. These include:</p><ul><li><a href="/node/16">Dirty ductwork</a> — Your heating system utilizes ductwork to push warm air throughout the house. Ductwork can easily become clogged with dirt, dust, mold and bacteria, which can then spread throughout the rest of your home. As you might expect, this can quickly lead to poor indoor air quality.</li><li>Mold — Mold is more common in California homes than many people realize. When left unaddressed, mold can easily grow to the point of being a health risk and eventually end up in your home’s ventilation system. Because mold can be dangerous, it must be dealt with by a team of trained professionals.</li><li>Household chemicals — Household chemicals may be a necessity for cleaning purposes, but they’re often toxic and can cause a number of different symptoms.</li><li>VOCs — Most people don’t look down at their carpets or at the paint on their walls and think “danger,” but volatile organic compounds (VOCs) that are sometimes in common household items can be hazardous to the health of you and your family.</li></ul><h2>Have Your Home’s Air Tested by Greiner</h2><p>If you feel that your home suffers from poor IAQ, it’s essential to get your air tested. The courteous, professional staff at Greiner is adept at pinpointing indoor air quality issues, and we’re here to help make your home safe and comfortable for you and your family.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<h2>Because you deserve to breathe free and clear in your own home.</h2><p>Have you ever thought about the quality of the air you’re breathing at home? The thing is, most people don’t unless there’s something obviously wrong. No one wants to breathe poor-quality air day-in, day-out, and in many cases, doing so can prove to be more than a simple nuisance. The air inside your home doesn’t have to be poor quality, and understanding what can affect indoor air quality (IAQ) is the first step toward remedying whatever issues may exist.</p><h2>Factors Affecting Indoor Air Quality</h2><p>Determining the exact cause of indoor air quality issues can certainly be a challenge, but there are plenty of factors that tend to contribute to the problem. These include:</p><ul><li><a href="/node/16">Dirty ductwork</a> — Your heating system utilizes ductwork to push warm air throughout the house. Ductwork can easily become clogged with dirt, dust, mold and bacteria, which can then spread throughout the rest of your home. As you might expect, this can quickly lead to poor indoor air quality.</li><li>Mold — Mold is more common in California homes than many people realize. When left unaddressed, mold can easily grow to the point of being a health risk and eventually end up in your home’s ventilation system. Because mold can be dangerous, it must be dealt with by a team of trained professionals.</li><li>Household chemicals — Household chemicals may be a necessity for cleaning purposes, but they’re often toxic and can cause a number of different symptoms.</li><li>VOCs — Most people don’t look down at their carpets or at the paint on their walls and think “danger,” but volatile organic compounds (VOCs) that are sometimes in common household items can be hazardous to the health of you and your family.</li></ul><h2>Have Your Home’s Air Tested by Greiner</h2><p>If you feel that your home suffers from poor IAQ, it’s essential to get your air tested. The courteous, professional staff at Greiner is adept at pinpointing indoor air quality issues, and we’re here to help make your home safe and comfortable for you and your family.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(),
      \'field_ref_service_blog\' => array(),
      \'field_ref_service_case_study\' => array(),
      \'field_ref_service_product\' => array(),
      \'field_ref_service_promo\' => array(),
      \'field_ref_service_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'116\',
          ),
        ),
      ),
      \'field_ref_service_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_image\' => array(),
      \'field_ref_service_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'209\',
        \'source\' => \'node/121\',
        \'alias\' => \'service/indoor-air\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'121\',
            \'revision_id\' => \'140\',
            \'name\' => \'node:service:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => NULL,
            \'pipeline\' => \'standard\',
            \'contexts\' => NULL,
            \'relationships\' => NULL,
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => NULL,
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'121\',
            \'revision_id\' => \'140\',
            \'name\' => \'node:service:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                )),
                \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                )),
                \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7fbb5182-cb1e-4409-9983-061ecfddda90\',
                )),
                \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                )),
                \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                )),
                \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                )),
                \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                )),
                \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_product\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                  1 => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                  2 => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                  3 => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                  1 => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                  2 => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                  3 => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
            )),
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:service:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'service\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'h3\',
            \'link_to_entity\' => TRUE,
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'s_220\',
                      \'image_link\' => \'content\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                )),
                \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                )),
                \'new-0fddb420-f828-43a3-9740-0c6531d60091\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0fddb420-f828-43a3-9740-0c6531d60091\',
                )),
                \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                    \'style\' => \'default\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                  1 => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                  2 => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                  3 => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'ec_service_stack\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Indoor Air\',
        \'mlid\' => 0,
        \'plid\' => \'3287\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'148\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Insulation\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a5bddd59-db14-4385-9b4b-60eb69cc6c0f\',
      \'nid\' => \'129\',
      \'type\' => \'service\',
      \'language\' => \'und\',
      \'created\' => \'1442251204\',
      \'changed\' => \'1442255753\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e993fcea-8cf1-4da9-b9f9-c285475d25d8\',
      \'revision_timestamp\' => \'1442255753\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Insulation\',
            \'format\' => NULL,
            \'safe_value\' => \'Insulation\',
          ),
        ),
      ),
      \'field_ref_service_blog\' => array(),
      \'field_ref_service_case_study\' => array(),
      \'field_ref_service_product\' => array(),
      \'field_ref_service_promo\' => array(),
      \'field_ref_service_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'117\',
          ),
        ),
      ),
      \'field_ref_service_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_image\' => array(),
      \'field_ref_service_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'219\',
        \'source\' => \'node/129\',
        \'alias\' => \'service/insulation\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'129\',
            \'revision_id\' => \'148\',
            \'name\' => \'node:service:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => NULL,
            \'pipeline\' => \'standard\',
            \'contexts\' => NULL,
            \'relationships\' => NULL,
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => NULL,
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'129\',
            \'revision_id\' => \'148\',
            \'name\' => \'node:service:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                )),
                \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                )),
                \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7fbb5182-cb1e-4409-9983-061ecfddda90\',
                )),
                \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                )),
                \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                )),
                \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                )),
                \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                )),
                \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_product\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                  1 => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                  2 => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                  3 => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                  1 => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                  2 => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                  3 => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
            )),
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:service:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'service\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'h3\',
            \'link_to_entity\' => TRUE,
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'s_220\',
                      \'image_link\' => \'content\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                )),
                \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                )),
                \'new-0fddb420-f828-43a3-9740-0c6531d60091\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0fddb420-f828-43a3-9740-0c6531d60091\',
                )),
                \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                    \'style\' => \'default\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                  1 => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                  2 => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                  3 => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'ec_service_stack\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Insulation\',
        \'mlid\' => 0,
        \'plid\' => \'3288\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'138\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Air Conditioning\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f1852cd6-3eb3-4add-9ef7-b46ac3063edc\',
      \'nid\' => \'119\',
      \'type\' => \'service_category\',
      \'language\' => \'und\',
      \'created\' => \'1442001837\',
      \'changed\' => \'1442255784\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ec4c529c-969e-4736-9910-b85bc801def0\',
      \'revision_timestamp\' => \'1442255784\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>Keeping your home cool, no matter how hot it gets outside.&nbsp;California residents know that the hottest days of the year can be unbearable without air&nbsp;conditioning. Cooling a home is not always an easy task, however, which is especially true&nbsp;when only window air conditioners are used.&nbsp;At Greiner, we’re passionate about helping our customers stay cool and comfortable on even&nbsp;the hottest California days, which is why we sell and install the best AC units available.&nbsp;</p><h2>Air Conditioning Service and Installation</h2><ul><li><span style="font-size: 13.0080003738403px; line-height: 1.538em; background-color: transparent;"><a href="/service/central-air-conditioning"><strong>Central Air Conditioning</strong></a> — Central air conditioning is the most popular way to cool a&nbsp;home in California, and it’s easy to see why. When operating properly, a central air&nbsp;system can help push cool, conditioned air throughout the ductwork of your home,&nbsp;ensuring that you enjoy true comfort every day.&nbsp;</span></li><li><span style="font-size: 13.0080003738403px; line-height: 1.538em; background-color: transparent;"><a href="http://live-ec-greiner.pantheon.io/service/mini-split-heat-pumps"><strong>Mini-split Air Conditioners</strong></a> — Unlike central air, mini-split air conditioners are able to&nbsp;cool your home without the use of ductwork. The result is a home cooling system that is&nbsp;not only extremely efficient, but can also keep rooms cool that don’t have access to&nbsp;ductwork.</span></li><li><span style="font-size: 13.0080003738403px; line-height: 1.538em; background-color: transparent;"><a href="http://live-ec-greiner.pantheon.io/service/indoor-air"><strong>Indoor Air Quality</strong></a> — Indoor air quality is something you shouldn’t overlook, and it can&nbsp;</span><span style="font-size: 13.0080003738403px; line-height: 1.538em; background-color: transparent;">often be impacted by your air conditioning system. Having your air quality tested is the&nbsp;</span><span style="font-size: 13.0080003738403px; line-height: 1.538em; background-color: transparent;">only way to ensure that you and your family are breathing safe, clean air whenever&nbsp;</span><span style="font-size: 13.0080003738403px; line-height: 1.538em; background-color: transparent;">you’re at home.</span></li><li><span style="font-size: 13.0080003738403px; line-height: 1.538em; background-color: transparent;"><a href="http://live-ec-greiner.pantheon.io/service/ventilation-systemsduct-design"><strong>Ventilation Systems / Ductwork</strong></a> — The right ventilation system can have a&nbsp;tremendously positive impact on your home cooling system. We’ll help determine&nbsp;whether or not your current ductwork could use a retrofit or modification.&nbsp;</span></li></ul><h2>Home Cooling with Greiner Heating and Air&nbsp;</h2><p>The team at Greiner Heating and Air knows exactly what a hot California summer can bring, and&nbsp;we strive to make life as comfortable as possible for our customers. Our staff is kind, courteous,&nbsp;clean-cut and professional, delivering the utmost in quality service no matter how large or small&nbsp;the job may be. We’re here to help you work toward true home performance, no matter how&nbsp;complex the job may be.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>Keeping your home cool, no matter how hot it gets outside. California residents know that the hottest days of the year can be unbearable without air conditioning. Cooling a home is not always an easy task, however, which is especially true when only window air conditioners are used. At Greiner, we’re passionate about helping our customers stay cool and comfortable on even the hottest California days, which is why we sell and install the best AC units available. </p><h2>Air Conditioning Service and Installation</h2><ul><li><span><a href="/service/central-air-conditioning"><strong>Central Air Conditioning</strong></a> — Central air conditioning is the most popular way to cool a home in California, and it’s easy to see why. When operating properly, a central air system can help push cool, conditioned air throughout the ductwork of your home, ensuring that you enjoy true comfort every day. </span></li><li><span><a href="http://live-ec-greiner.pantheon.io/service/mini-split-heat-pumps"><strong>Mini-split Air Conditioners</strong></a> — Unlike central air, mini-split air conditioners are able to cool your home without the use of ductwork. The result is a home cooling system that is not only extremely efficient, but can also keep rooms cool that don’t have access to ductwork.</span></li><li><span><a href="http://live-ec-greiner.pantheon.io/service/indoor-air"><strong>Indoor Air Quality</strong></a> — Indoor air quality is something you shouldn’t overlook, and it can </span><span>often be impacted by your air conditioning system. Having your air quality tested is the </span><span>only way to ensure that you and your family are breathing safe, clean air whenever </span><span>you’re at home.</span></li><li><span><a href="http://live-ec-greiner.pantheon.io/service/ventilation-systemsduct-design"><strong>Ventilation Systems / Ductwork</strong></a> — The right ventilation system can have a tremendously positive impact on your home cooling system. We’ll help determine whether or not your current ductwork could use a retrofit or modification. </span></li></ul><h2>Home Cooling with Greiner Heating and Air </h2><p>The team at Greiner Heating and Air knows exactly what a hot California summer can bring, and we strive to make life as comfortable as possible for our customers. Our staff is kind, courteous, clean-cut and professional, delivering the utmost in quality service no matter how large or small the job may be. We’re here to help you work toward true home performance, no matter how complex the job may be.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(),
      \'field_ref_serv_cat_blog\' => array(),
      \'field_ref_serv_cat_case_study\' => array(),
      \'field_ref_serv_cat_prodpage\' => array(),
      \'field_ref_serv_cat_promo\' => array(),
      \'field_ref_serv_cat_serv_group\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'115\',
          ),
        ),
      ),
      \'field_ref_serv_cat_services\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'125\',
          ),
          array(
            \'target_id\' => \'126\',
          ),
          array(
            \'target_id\' => \'131\',
          ),
        ),
      ),
      \'field_ref_serv_cat_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_category_image\' => array(),
      \'field_ref_serv_cat_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'207\',
        \'source\' => \'node/119\',
        \'alias\' => \'service-category/air-conditioning\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'119\',
            \'revision_id\' => \'138\',
            \'name\' => \'node:service_category:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2a09c6c6-0795-474b-8bc0-b8f32541cfb7\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2a09c6c6-0795-474b-8bc0-b8f32541cfb7\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2a09c6c6-0795-474b-8bc0-b8f32541cfb7\',
                )),
                \'new-1a5a6ae8-aff9-4a07-a83c-1fbd4542f4cd\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-1a5a6ae8-aff9-4a07-a83c-1fbd4542f4cd\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_category_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'1a5a6ae8-aff9-4a07-a83c-1fbd4542f4cd\',
                )),
                \'new-86bb4783-e660-485e-b831-8b0ff370b14c\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-86bb4783-e660-485e-b831-8b0ff370b14c\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'86bb4783-e660-485e-b831-8b0ff370b14c\',
                )),
                \'new-c1f1828d-d832-46ec-8df9-26b177b38db4\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-c1f1828d-d832-46ec-8df9-26b177b38db4\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'c1f1828d-d832-46ec-8df9-26b177b38db4\',
                )),
                \'new-36692d53-1b71-4103-b24a-47a46ef78eef\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-36692d53-1b71-4103-b24a-47a46ef78eef\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_services\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'teaser\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 4,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'36692d53-1b71-4103-b24a-47a46ef78eef\',
                )),
                \'new-32790dba-eb7b-443d-9a53-e22c1211b55f\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-32790dba-eb7b-443d-9a53-e22c1211b55f\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'32790dba-eb7b-443d-9a53-e22c1211b55f\',
                )),
                \'new-6de6e416-b49a-4fe8-97a3-39675e297072\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6de6e416-b49a-4fe8-97a3-39675e297072\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6de6e416-b49a-4fe8-97a3-39675e297072\',
                )),
                \'new-e329171e-67f0-4a90-ae1d-65f89eab5208\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e329171e-67f0-4a90-ae1d-65f89eab5208\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e329171e-67f0-4a90-ae1d-65f89eab5208\',
                )),
                \'new-eb1df09e-bae4-4df0-a438-3705d6904c6e\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-eb1df09e-bae4-4df0-a438-3705d6904c6e\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_prodpage\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'eb1df09e-bae4-4df0-a438-3705d6904c6e\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2a09c6c6-0795-474b-8bc0-b8f32541cfb7\',
                  1 => \'new-1a5a6ae8-aff9-4a07-a83c-1fbd4542f4cd\',
                  2 => \'new-86bb4783-e660-485e-b831-8b0ff370b14c\',
                  3 => \'new-c1f1828d-d832-46ec-8df9-26b177b38db4\',
                  4 => \'new-36692d53-1b71-4103-b24a-47a46ef78eef\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-32790dba-eb7b-443d-9a53-e22c1211b55f\',
                  1 => \'new-6de6e416-b49a-4fe8-97a3-39675e297072\',
                  2 => \'new-e329171e-67f0-4a90-ae1d-65f89eab5208\',
                  3 => \'new-eb1df09e-bae4-4df0-a438-3705d6904c6e\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-dd665112-2817-499f-a514-7d66df2234b7\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'dd665112-2817-499f-a514-7d66df2234b7\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-c1f1828d-d832-46ec-8df9-26b177b38db4\',
            )),
          ),
        \'teaser\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'119\',
            \'revision_id\' => \'138\',
            \'name\' => \'node:service_category:default:teaser\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-152069b0-3dab-4707-a38c-63c31f81f81f\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-152069b0-3dab-4707-a38c-63c31f81f81f\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'152069b0-3dab-4707-a38c-63c31f81f81f\',
                )),
                \'new-c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_category_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_220x110\',
                      \'image_link\' => \'content\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9\',
                )),
                \'new-f427cd34-814a-408b-9033-7d56c19af2b2\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-f427cd34-814a-408b-9033-7d56c19af2b2\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f427cd34-814a-408b-9033-7d56c19af2b2\',
                )),
                \'new-72270395-d870-482e-ad03-4e27e231e361\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-72270395-d870-482e-ad03-4e27e231e361\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_class\' => \'link-wrapper\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'72270395-d870-482e-ad03-4e27e231e361\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-152069b0-3dab-4707-a38c-63c31f81f81f\',
                  1 => \'new-c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9\',
                  2 => \'new-f427cd34-814a-408b-9033-7d56c19af2b2\',
                  3 => \'new-72270395-d870-482e-ad03-4e27e231e361\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-82fa03eb-e4cb-4245-b092-a1ab5c64df63\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'82fa03eb-e4cb-4245-b092-a1ab5c64df63\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Air Conditioning\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'1\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'139\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Ventilation Systems/Duct Design\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'37d85130-4115-4462-ad38-a2b494cc133a\',
      \'nid\' => \'120\',
      \'type\' => \'service\',
      \'language\' => \'und\',
      \'created\' => \'1442001909\',
      \'changed\' => \'1442256161\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ee1c4c2d-f427-48be-a719-24357c9416c9\',
      \'revision_timestamp\' => \'1442256161\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<h2>Your ducts are the “lungs” of your home – don’t overlook their importance.</h2><p>It’s common to take certain aspects of the home for granted. Take your home’s ductwork and ventilation system, for example. Ductwork allows the warm air generated by your home <a href="/node/5">heating system</a> to move from room to room, yet most people go through their day without even taking note of this. The issue with this is that problems associated with ventilation systems and duct design do happen, and they can have a marked effect on <a href="/node/7">home performance</a>.</p><h2>Understanding Your Ventilation System</h2><p>It helps to have a clear understanding of your ventilation system and how it operates when learning about the common issues that can affect its performance. Your heating system creates warm air, which then travels through a series of ducts to reach its final destination. When things work properly, each room in your home is comfortable thanks to the conditioned air ending up where it’s supposed to. Unfortunately, this isn’t always the case with old or poorly-designed ductwork.</p><p>If your ventilation system suffers from leaks or other types of damage, conditioned air will be lost, and your heating system will have to work harder than it’s supposed to in order to keep up. As you might expect, this can lead to a drop in performance and decreased systems longevity.</p><h2>Ductwork Issues to Watch Out For</h2><p>Ductwork issues are certainly problematic, and they’re also quite common. Here are just a few that tend to affect California homeowners.</p><ul><li><strong>Cracks and leaks</strong> — Cracks and leaks can form over time, especially if you live in an old home. The solution can be found in either sealing the cracked ducts or modifying your ductwork.</li><li><strong>Poorly designed ventilation systems</strong> — No matter how well you maintain your ductwork, you can’t fix a poor initial design. In this case, replacing your ductwork altogether may be the key for achieving true energy efficiency.</li><li><strong>Dirt, dust, mold and contaminants</strong> — Over time, dust, dirt, mold and other contaminants can find their way into your ductwork. Duct cleaning can be the solution here.</li></ul>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<h2>Your ducts are the “lungs” of your home – don’t overlook their importance.</h2><p>It’s common to take certain aspects of the home for granted. Take your home’s ductwork and ventilation system, for example. Ductwork allows the warm air generated by your home <a href="/node/5">heating system</a> to move from room to room, yet most people go through their day without even taking note of this. The issue with this is that problems associated with ventilation systems and duct design do happen, and they can have a marked effect on <a href="/node/7">home performance</a>.</p><h2>Understanding Your Ventilation System</h2><p>It helps to have a clear understanding of your ventilation system and how it operates when learning about the common issues that can affect its performance. Your heating system creates warm air, which then travels through a series of ducts to reach its final destination. When things work properly, each room in your home is comfortable thanks to the conditioned air ending up where it’s supposed to. Unfortunately, this isn’t always the case with old or poorly-designed ductwork.</p><p>If your ventilation system suffers from leaks or other types of damage, conditioned air will be lost, and your heating system will have to work harder than it’s supposed to in order to keep up. As you might expect, this can lead to a drop in performance and decreased systems longevity.</p><h2>Ductwork Issues to Watch Out For</h2><p>Ductwork issues are certainly problematic, and they’re also quite common. Here are just a few that tend to affect California homeowners.</p><ul><li><strong>Cracks and leaks</strong> — Cracks and leaks can form over time, especially if you live in an old home. The solution can be found in either sealing the cracked ducts or modifying your ductwork.</li><li><strong>Poorly designed ventilation systems</strong> — No matter how well you maintain your ductwork, you can’t fix a poor initial design. In this case, replacing your ductwork altogether may be the key for achieving true energy efficiency.</li><li><strong>Dirt, dust, mold and contaminants</strong> — Over time, dust, dirt, mold and other contaminants can find their way into your ductwork. Duct cleaning can be the solution here.</li></ul>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(),
      \'field_ref_service_blog\' => array(),
      \'field_ref_service_case_study\' => array(),
      \'field_ref_service_product\' => array(),
      \'field_ref_service_promo\' => array(),
      \'field_ref_service_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'116\',
          ),
        ),
      ),
      \'field_ref_service_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_image\' => array(),
      \'field_ref_service_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'208\',
        \'source\' => \'node/120\',
        \'alias\' => \'service/ventilation-systemsduct-design\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'120\',
            \'revision_id\' => \'139\',
            \'name\' => \'node:service:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => NULL,
            \'pipeline\' => \'standard\',
            \'contexts\' => NULL,
            \'relationships\' => NULL,
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => NULL,
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'120\',
            \'revision_id\' => \'139\',
            \'name\' => \'node:service:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                )),
                \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                )),
                \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7fbb5182-cb1e-4409-9983-061ecfddda90\',
                )),
                \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                )),
                \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                )),
                \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                )),
                \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                )),
                \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_product\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                  1 => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                  2 => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                  3 => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                  1 => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                  2 => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                  3 => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
            )),
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:service:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'service\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'h3\',
            \'link_to_entity\' => TRUE,
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'s_220\',
                      \'image_link\' => \'content\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                )),
                \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                )),
                \'new-0fddb420-f828-43a3-9740-0c6531d60091\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0fddb420-f828-43a3-9740-0c6531d60091\',
                )),
                \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                    \'style\' => \'default\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                  1 => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                  2 => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                  3 => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'ec_service_stack\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Ventilation Systems/Duct Design\',
        \'mlid\' => 0,
        \'plid\' => \'3287\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'150\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Central Air Conditioning\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'615db9e2-0365-424c-aa62-6265ea37a205\',
      \'nid\' => \'131\',
      \'type\' => \'service\',
      \'language\' => \'und\',
      \'created\' => \'1442251277\',
      \'changed\' => \'1442255750\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f5465da9-6020-4eee-8c0b-fd93c5f84a1d\',
      \'revision_timestamp\' => \'1442255750\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Central Air Conditioning\',
            \'format\' => NULL,
            \'safe_value\' => \'Central Air Conditioning\',
          ),
        ),
      ),
      \'field_ref_service_blog\' => array(),
      \'field_ref_service_case_study\' => array(),
      \'field_ref_service_product\' => array(),
      \'field_ref_service_promo\' => array(),
      \'field_ref_service_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'119\',
          ),
        ),
      ),
      \'field_ref_service_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_image\' => array(),
      \'field_ref_service_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'221\',
        \'source\' => \'node/131\',
        \'alias\' => \'service/central-air-conditioning\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'131\',
            \'revision_id\' => \'150\',
            \'name\' => \'node:service:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => NULL,
            \'pipeline\' => \'standard\',
            \'contexts\' => NULL,
            \'relationships\' => NULL,
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => NULL,
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'131\',
            \'revision_id\' => \'150\',
            \'name\' => \'node:service:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                )),
                \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                )),
                \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7fbb5182-cb1e-4409-9983-061ecfddda90\',
                )),
                \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                )),
                \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                )),
                \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                )),
                \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                )),
                \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_product\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                  1 => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                  2 => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                  3 => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                  1 => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                  2 => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                  3 => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
            )),
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:service:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'service\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'h3\',
            \'link_to_entity\' => TRUE,
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'s_220\',
                      \'image_link\' => \'content\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                )),
                \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                )),
                \'new-0fddb420-f828-43a3-9740-0c6531d60091\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0fddb420-f828-43a3-9740-0c6531d60091\',
                )),
                \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                    \'style\' => \'default\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                  1 => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                  2 => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                  3 => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'ec_service_stack\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Central Air Conditioning\',
        \'mlid\' => 0,
        \'plid\' => \'3290\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'136\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Home Performance\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'981b69ea-e410-4ac8-87ee-e11b1e0f976f\',
      \'nid\' => \'117\',
      \'type\' => \'service_category\',
      \'language\' => \'und\',
      \'created\' => \'1442001731\',
      \'changed\' => \'1442255717\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f5891508-9b4a-4042-9332-7ef05eb47ec7\',
      \'revision_timestamp\' => \'1442255717\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<h2>Improving home performance and energy efficiency for our customers.</h2><p>Energy efficiency has long been a focus for homeowners and contractors alike. In a changing world, the importance of home performance is only increasing with time, and at Greiner, we stress this to each and every customer we serve. Improving home performance is one of our primary goals with every project we take on, which is why we offer energy upgrades that can help take your home\'s energy efficiency to the next level.</p><h2>The Benefits of Energy Upgrades with Greiner</h2><p>At Greiner, we work hard to assist our customers in taking steps toward an energy efficient future. Making energy upgrades to your home such as those outlined above includes a number of benefits:</p><ul><li><strong><span style=\\"font-size: 13.0080003738403px; line-height: 1.538em; background-color: transparent;\\">Lower energy bills</span></strong></li><li><strong><span style=\\"font-size: 13.0080003738403px; line-height: 1.538em; background-color: transparent;\\">Longer duration of systems life</span></strong></li><li><strong><span style=\\"font-size: 13.0080003738403px; line-height: 1.538em; background-color: transparent;\\">Improved home comfort</span></strong></li><li><strong><span style=\\"font-size: 13.0080003738403px; line-height: 1.538em; background-color: transparent;\\">Safer, cleaner indoor air</span></strong></li><li><strong><span style=\\"font-size: 13.0080003738403px; line-height: 1.538em; background-color: transparent;\\">Reduced impact on the environment</span></strong></li></ul>",
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => "<h2>Improving home performance and energy efficiency for our customers.</h2><p>Energy efficiency has long been a focus for homeowners and contractors alike. In a changing world, the importance of home performance is only increasing with time, and at Greiner, we stress this to each and every customer we serve. Improving home performance is one of our primary goals with every project we take on, which is why we offer energy upgrades that can help take your home\'s energy efficiency to the next level.</p><h2>The Benefits of Energy Upgrades with Greiner</h2><p>At Greiner, we work hard to assist our customers in taking steps toward an energy efficient future. Making energy upgrades to your home such as those outlined above includes a number of benefits:</p><ul><li><strong><span>Lower energy bills</span></strong></li><li><strong><span>Longer duration of systems life</span></strong></li><li><strong><span>Improved home comfort</span></strong></li><li><strong><span>Safer, cleaner indoor air</span></strong></li><li><strong><span>Reduced impact on the environment</span></strong></li></ul>",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(),
      \'field_ref_serv_cat_blog\' => array(),
      \'field_ref_serv_cat_case_study\' => array(),
      \'field_ref_serv_cat_prodpage\' => array(),
      \'field_ref_serv_cat_promo\' => array(),
      \'field_ref_serv_cat_serv_group\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'115\',
          ),
        ),
      ),
      \'field_ref_serv_cat_services\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'129\',
          ),
          array(
            \'target_id\' => \'133\',
          ),
          array(
            \'target_id\' => \'135\',
          ),
          array(
            \'target_id\' => \'130\',
          ),
        ),
      ),
      \'field_ref_serv_cat_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_category_image\' => array(),
      \'field_ref_serv_cat_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'205\',
        \'source\' => \'node/117\',
        \'alias\' => \'service-category/home-performance\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'117\',
            \'revision_id\' => \'136\',
            \'name\' => \'node:service_category:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2a09c6c6-0795-474b-8bc0-b8f32541cfb7\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2a09c6c6-0795-474b-8bc0-b8f32541cfb7\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2a09c6c6-0795-474b-8bc0-b8f32541cfb7\',
                )),
                \'new-1a5a6ae8-aff9-4a07-a83c-1fbd4542f4cd\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-1a5a6ae8-aff9-4a07-a83c-1fbd4542f4cd\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_category_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'1a5a6ae8-aff9-4a07-a83c-1fbd4542f4cd\',
                )),
                \'new-86bb4783-e660-485e-b831-8b0ff370b14c\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-86bb4783-e660-485e-b831-8b0ff370b14c\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'86bb4783-e660-485e-b831-8b0ff370b14c\',
                )),
                \'new-c1f1828d-d832-46ec-8df9-26b177b38db4\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-c1f1828d-d832-46ec-8df9-26b177b38db4\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'c1f1828d-d832-46ec-8df9-26b177b38db4\',
                )),
                \'new-36692d53-1b71-4103-b24a-47a46ef78eef\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-36692d53-1b71-4103-b24a-47a46ef78eef\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_services\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'teaser\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 4,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'36692d53-1b71-4103-b24a-47a46ef78eef\',
                )),
                \'new-32790dba-eb7b-443d-9a53-e22c1211b55f\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-32790dba-eb7b-443d-9a53-e22c1211b55f\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'32790dba-eb7b-443d-9a53-e22c1211b55f\',
                )),
                \'new-6de6e416-b49a-4fe8-97a3-39675e297072\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6de6e416-b49a-4fe8-97a3-39675e297072\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6de6e416-b49a-4fe8-97a3-39675e297072\',
                )),
                \'new-e329171e-67f0-4a90-ae1d-65f89eab5208\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e329171e-67f0-4a90-ae1d-65f89eab5208\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e329171e-67f0-4a90-ae1d-65f89eab5208\',
                )),
                \'new-eb1df09e-bae4-4df0-a438-3705d6904c6e\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-eb1df09e-bae4-4df0-a438-3705d6904c6e\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_serv_cat_prodpage\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'eb1df09e-bae4-4df0-a438-3705d6904c6e\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2a09c6c6-0795-474b-8bc0-b8f32541cfb7\',
                  1 => \'new-1a5a6ae8-aff9-4a07-a83c-1fbd4542f4cd\',
                  2 => \'new-86bb4783-e660-485e-b831-8b0ff370b14c\',
                  3 => \'new-c1f1828d-d832-46ec-8df9-26b177b38db4\',
                  4 => \'new-36692d53-1b71-4103-b24a-47a46ef78eef\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-32790dba-eb7b-443d-9a53-e22c1211b55f\',
                  1 => \'new-6de6e416-b49a-4fe8-97a3-39675e297072\',
                  2 => \'new-e329171e-67f0-4a90-ae1d-65f89eab5208\',
                  3 => \'new-eb1df09e-bae4-4df0-a438-3705d6904c6e\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-dd665112-2817-499f-a514-7d66df2234b7\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'dd665112-2817-499f-a514-7d66df2234b7\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-c1f1828d-d832-46ec-8df9-26b177b38db4\',
            )),
          ),
        \'teaser\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'117\',
            \'revision_id\' => \'136\',
            \'name\' => \'node:service_category:default:teaser\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-152069b0-3dab-4707-a38c-63c31f81f81f\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-152069b0-3dab-4707-a38c-63c31f81f81f\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'152069b0-3dab-4707-a38c-63c31f81f81f\',
                )),
                \'new-c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_category_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_220x110\',
                      \'image_link\' => \'content\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9\',
                )),
                \'new-f427cd34-814a-408b-9033-7d56c19af2b2\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-f427cd34-814a-408b-9033-7d56c19af2b2\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f427cd34-814a-408b-9033-7d56c19af2b2\',
                )),
                \'new-72270395-d870-482e-ad03-4e27e231e361\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-72270395-d870-482e-ad03-4e27e231e361\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_class\' => \'link-wrapper\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'72270395-d870-482e-ad03-4e27e231e361\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-152069b0-3dab-4707-a38c-63c31f81f81f\',
                  1 => \'new-c48c9cd1-30a3-49d7-9c9c-f51e7e686bd9\',
                  2 => \'new-f427cd34-814a-408b-9033-7d56c19af2b2\',
                  3 => \'new-72270395-d870-482e-ad03-4e27e231e361\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-82fa03eb-e4cb-4245-b092-a1ab5c64df63\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'82fa03eb-e4cb-4245-b092-a1ab5c64df63\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Home Performance\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-45\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'1\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'144\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-Home Zoning\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3f9140c3-389a-43e1-a341-db079ce156ec\',
      \'nid\' => \'125\',
      \'type\' => \'service\',
      \'language\' => \'und\',
      \'created\' => \'1442249338\',
      \'changed\' => \'1442256009\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'fab13954-fc67-49ba-bb3d-f2acca907b86\',
      \'revision_timestamp\' => \'1442256009\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>This is the content for this page. Please replace this content with text of your own. This text is only here as a placeholder.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_display_subtitle\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Home Zoning\',
            \'format\' => NULL,
            \'safe_value\' => \'Home Zoning\',
          ),
        ),
      ),
      \'field_ref_service_blog\' => array(),
      \'field_ref_service_case_study\' => array(),
      \'field_ref_service_product\' => array(),
      \'field_ref_service_promo\' => array(),
      \'field_ref_service_serv_cat\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'119\',
          ),
        ),
      ),
      \'field_ref_service_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_service_image\' => array(),
      \'field_ref_service_faq\' => array(),
      \'path\' => array(
        \'pid\' => \'215\',
        \'source\' => \'node/125\',
        \'alias\' => \'service/home-zoning\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'125\',
            \'revision_id\' => \'144\',
            \'name\' => \'node:service:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => NULL,
            \'pipeline\' => \'standard\',
            \'contexts\' => NULL,
            \'relationships\' => NULL,
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => NULL,
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'125\',
            \'revision_id\' => \'144\',
            \'name\' => \'node:service:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_subtitle\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                )),
                \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'sc_940x470_mc\',
                      \'image_link\' => \'\',
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                    \'override_title_heading\' => \'h2\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                )),
                \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_testimonial\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-testimonial\',
                    \'css_class\' => \'testimonial\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7fbb5182-cb1e-4409-9983-061ecfddda90\',
                )),
                \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                    ),
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                )),
                \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'teaser\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                )),
                \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_promo\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'3\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-promotion\',
                    \'css_class\' => \'promotion\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                )),
                \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_blog\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'1\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-blog\',
                    \'css_class\' => \'blog\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                )),
                \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_service_product\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => \'0\',
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => 0,
                    \'formatter_settings\' => 
                    array (
                      \'link\' => false,
                      \'field_multiple_limit\' => -1,
                      \'field_multiple_limit_offset\' => 0,
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_id\' => \'show-this-product\',
                    \'css_class\' => \'product\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-2bbbd67c-11ce-478a-a099-2ad97e9b073a\',
                  1 => \'new-5bb741a2-6c69-4f6c-8d90-ea2395bbb974\',
                  2 => \'new-7fbb5182-cb1e-4409-9983-061ecfddda90\',
                  3 => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-8cd389e8-5945-46fb-a991-fb1c8fcef539\',
                  1 => \'new-0acfb0c6-6117-4a92-9fde-3a5c514a7705\',
                  2 => \'new-2c425fad-2ae8-4f27-8e98-4c88451a4e2d\',
                  3 => \'new-0586ce34-9849-4c98-b0dd-1f2fe90daee6\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'renderer\' => \'standard\',
               \'layout\' => \'two_66_33\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'two_66_33_top\' => NULL,
                  \'two_66_33_first\' => NULL,
                  \'two_66_33_second\' => NULL,
                  \'two_66_33_bottom\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f7cc83f7-2f8d-46eb-a673-c546879d7556\',
               \'hide_title\' => 1,
               \'title_pane\' => \'new-2349e6d6-b875-48ff-bd87-edaea74d1ffe\',
            )),
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:service:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'service\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'\',
            \'title_element\' => \'h3\',
            \'link_to_entity\' => TRUE,
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_service_image\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'image\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'image_style\' => \'s_220\',
                      \'image_link\' => \'content\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                )),
                \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
                    \'markup\' => \'h2\',
                    \'id\' => \'\',
                    \'class\' => \'\',
                    \'context\' => \'panelizer\',
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                )),
                \'new-0fddb420-f828-43a3-9740-0c6531d60091\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_summary_or_trimmed\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'trim_length\' => \'600\',
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0fddb420-f828-43a3-9740-0c6531d60091\',
                )),
                \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                   \'panel\' => \'one_main\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 1,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => 0,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                    \'style\' => \'default\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                )),
              ),
               \'panels\' => 
              array (
                \'one_main\' => 
                array (
                  0 => \'new-d036a5c1-1942-4a5f-a721-aab6855fb2d8\',
                  1 => \'new-e5a9a169-db20-47a2-90ff-cde2ee148aae\',
                  2 => \'new-0fddb420-f828-43a3-9740-0c6531d60091\',
                  3 => \'new-6f5bc7e9-5d44-481c-8a05-1f814e8686b8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'renderer\' => \'standard\',
               \'layout\' => \'one\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'center\' => NULL,
                  \'one_main\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'91b16e23-2c1c-4138-af12-1e845d783f7d\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'ec_service_stack\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Home Zoning\',
        \'mlid\' => 0,
        \'plid\' => \'3290\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
