<?php
/**
 * @file
 * ec_base_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ec_base_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'403\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4a0e982a-962b-4958-9f1f-dbd4d045156c\',
      \'nid\' => \'3\',
      \'type\' => \'panopoly_page\',
      \'language\' => \'und\',
      \'created\' => \'1419875850\',
      \'changed\' => \'1419893499\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8a173786-9cf4-45e7-aebc-8def1c21123a\',
      \'revision_timestamp\' => \'1419893499\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>403</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => "<p>403</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_featured_categories\' => array(),
      \'field_featured_image\' => array(),
      \'field_featured_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_ref_page_blog\' => array(),
      \'field_ref_page_case_study\' => array(),
      \'field_ref_page_promotions\' => array(),
      \'field_ref_page_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_ref_page_faq\' => array(),
      \'metatags\' => array(),
      \'path\' => array(
        \'pid\' => \'4\',
        \'source\' => \'node/3\',
        \'alias\' => \'403\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'3\',
            \'revision_id\' => \'3\',
            \'name\' => \'node:panopoly_page:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'ipe\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'page-default\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => \'\',
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                5 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e0d93093-20b4-42cd-bf23-6f2f487240a6\',
                   \'did\' => \'2\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_image\',
                   \'shown\' => \'1\',
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
                      \'image_style\' => \'panopoly_image_half\',
                      \'image_link\' => \'\',
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
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e0d93093-20b4-42cd-bf23-6f2f487240a6\',
                )),
                6 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-74f82699-93ba-4b15-8bcf-e3bfa1894d40\',
                   \'did\' => \'2\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => \'1\',
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
                   \'position\' => \'1\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'74f82699-93ba-4b15-8bcf-e3bfa1894d40\',
                )),
                9 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-2ed1fba1-1bcb-4d1c-b6ac-d287a6c83f39\',
                   \'did\' => \'2\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'menu_tree\',
                   \'subtype\' => \'main-menu\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'menu_name\' => \'main-menu\',
                    \'parent_mlid\' => 0,
                    \'parent\' => \'main-menu:0\',
                    \'title_link\' => 0,
                    \'admin_title\' => \'\',
                    \'level\' => \'1\',
                    \'follow\' => 0,
                    \'depth\' => \'0\',
                    \'expanded\' => 0,
                    \'sort\' => 0,
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
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2ed1fba1-1bcb-4d1c-b6ac-d287a6c83f39\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'5\',
                  1 => \'6\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'9\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-10c9e351-f69c-4629-b191-77b8b01f4f1c\',
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
                  \'sidebar\' => NULL,
                  \'contentmain\' => NULL,
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
               \'hide_title\' => \'1\',
               \'title_pane\' => \'0\',
               \'uuid\' => \'10c9e351-f69c-4629-b191-77b8b01f4f1c\',
            )),
          ),
        \'page_manager\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:panopoly_page:default\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'panopoly_page\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'page-page\',
            \'css\' => \'\',
            \'pipeline\' => \'ipe\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => \'\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => TRUE,
            \'extra\' => \'\',
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_image\',
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
                      \'image_link\' => \'content\',
                      \'image_style\' => \'panopoly_image_half\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'34b4f35e-bc4b-4819-905c-6b6bf84bffe1\',
                )),
                \'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b\',
                   \'panel\' => \'contentmain\',
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
                      \'trim_length\' => \'250\',
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
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'59cafe99-f0a0-4a3a-a13f-8f108d69d18b\',
                )),
                \'new-f3bf9c22-9b22-41d2-a57e-110951093871\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-f3bf9c22-9b22-41d2-a57e-110951093871\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => false,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'featured\',
                    \'identifier\' => \'\',
                    \'link\' => true,
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
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f3bf9c22-9b22-41d2-a57e-110951093871\',
                )),
                \'new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_categories\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'inline\',
                    \'formatter\' => \'taxonomy_term_reference_link\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
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
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0a2c7b96-5f45-4e85-8e00-88fee50f4f71\',
                )),
                \'new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1\',
                   \'panel\' => \'sidebar\',
                   \'type\' => \'menu_tree\',
                   \'subtype\' => \'main-menu\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'menu_name\' => \'main-menu\',
                    \'parent_mlid\' => \'main-menu:0\',
                    \'title_link\' => 0,
                    \'admin_title\' => \'\',
                    \'level\' => \'2\',
                    \'follow\' => 0,
                    \'depth\' => 0,
                    \'expanded\' => 1,
                    \'sort\' => 0,
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
                   \'uuid\' => \'c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1\',
                )),
              ),
               \'panels\' => 
              array (
                \'contentmain\' => 
                array (
                  0 => \'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1\',
                  1 => \'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b\',
                  2 => \'new-f3bf9c22-9b22-41d2-a57e-110951093871\',
                  3 => \'new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71\',
                ),
                \'sidebar\' => 
                array (
                  0 => \'new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-16346c80-6fcf-4cee-bf7a-9c0173fc2916\',
               \'renderer\' => \'standard\',
               \'layout\' => \'radix_bryant\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'column1\' => NULL,
                  \'column2\' => NULL,
                  \'sidebar\' => NULL,
                  \'contentmain\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'16346c80-6fcf-4cee-bf7a-9c0173fc2916\',
               \'hide_title\' => 0,
               \'title_pane\' => \'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1\',
            )),
            \'export_module\' => \'panopoly_pages\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:panopoly_page:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'panopoly_page\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'page-teaser\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => TRUE,
            \'extra\' => \'\',
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-873d60d8-f80e-41c1-b89d-86ad219285e8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-873d60d8-f80e-41c1-b89d-86ad219285e8\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_image\',
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
                      \'image_link\' => \'content\',
                      \'image_style\' => \'panopoly_image_quarter\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'873d60d8-f80e-41c1-b89d-86ad219285e8\',
                )),
                \'new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68\',
                   \'panel\' => \'contentmain\',
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
                   \'uuid\' => \'9363564d-7f96-4fa2-a1a5-5b0f5f60ce68\',
                )),
                \'new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => false,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => true,
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
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e7b29d80-ad23-4c5d-85fd-13f7a038e3d8\',
                )),
              ),
               \'panels\' => 
              array (
                \'contentmain\' => 
                array (
                  0 => \'new-873d60d8-f80e-41c1-b89d-86ad219285e8\',
                  1 => \'new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68\',
                  2 => \'new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f76cbd0c-d182-4bd2-96f2-f1759b4e69d8\',
               \'renderer\' => \'standard\',
               \'layout\' => \'boxton\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'contentmain\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f76cbd0c-d182-4bd2-96f2-f1759b4e69d8\',
               \'hide_title\' => 0,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'panopoly_pages\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
        \'featured\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:panopoly_page:default:featured\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'panopoly_page\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'featured\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => TRUE,
            \'extra\' => \'\',
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-af46907d-aa25-43db-995b-b38f9174221e\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-af46907d-aa25-43db-995b-b38f9174221e\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_image\',
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
                      \'image_link\' => \'content\',
                      \'image_style\' => \'panopoly_image_half\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'af46907d-aa25-43db-995b-b38f9174221e\',
                )),
                \'new-1ee1b165-ebd0-4115-ad5e-49df79509f82\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-1ee1b165-ebd0-4115-ad5e-49df79509f82\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
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
                   \'uuid\' => \'1ee1b165-ebd0-4115-ad5e-49df79509f82\',
                )),
                \'new-a71dc705-b195-439c-b47b-980d8c7fa155\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-a71dc705-b195-439c-b47b-980d8c7fa155\',
                   \'panel\' => \'contentmain\',
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
                      \'trim_length\' => \'250\',
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
                   \'uuid\' => \'a71dc705-b195-439c-b47b-980d8c7fa155\',
                )),
                \'new-1d6308c6-817d-4465-ac63-fa7acca627aa\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-1d6308c6-817d-4465-ac63-fa7acca627aa\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => false,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'featured\',
                    \'identifier\' => \'\',
                    \'link\' => true,
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
                   \'uuid\' => \'1d6308c6-817d-4465-ac63-fa7acca627aa\',
                )),
              ),
               \'panels\' => 
              array (
                \'contentmain\' => 
                array (
                  0 => \'new-af46907d-aa25-43db-995b-b38f9174221e\',
                  1 => \'new-1ee1b165-ebd0-4115-ad5e-49df79509f82\',
                  2 => \'new-a71dc705-b195-439c-b47b-980d8c7fa155\',
                  3 => \'new-1d6308c6-817d-4465-ac63-fa7acca627aa\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-5b7d08f9-c351-427e-8015-14433221537b\',
               \'renderer\' => \'standard\',
               \'layout\' => \'boxton\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'column1\' => NULL,
                  \'column2\' => NULL,
                  \'contentmain\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'5b7d08f9-c351-427e-8015-14433221537b\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'panopoly_pages\',
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
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'Home Page\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'dd3b2f12-cbcf-491a-9c39-fc9be8bcf00a\',
      \'nid\' => \'1\',
      \'type\' => \'panopoly_page\',
      \'language\' => \'und\',
      \'created\' => \'1419875816\',
      \'changed\' => \'1419893499\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'bd9e52ea-f081-4999-94e1-301825474fc9\',
      \'revision_timestamp\' => \'1419893499\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>Home page Content</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => "<p>Home page Content</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_featured_categories\' => array(),
      \'field_featured_image\' => array(),
      \'field_featured_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_ref_page_blog\' => array(),
      \'field_ref_page_case_study\' => array(),
      \'field_ref_page_promotions\' => array(),
      \'field_ref_page_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_ref_page_faq\' => array(),
      \'metatags\' => array(),
      \'path\' => array(
        \'pid\' => \'2\',
        \'source\' => \'node/1\',
        \'alias\' => \'home\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'1\',
            \'revision_id\' => \'1\',
            \'name\' => \'node:panopoly_page:home_default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'ipe\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'page-default\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => \'\',
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                1 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e0d93093-20b4-42cd-bf23-6f2f487240a6\',
                   \'did\' => \'1\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_image\',
                   \'shown\' => \'1\',
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
                      \'image_style\' => \'panopoly_image_half\',
                      \'image_link\' => \'\',
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
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e0d93093-20b4-42cd-bf23-6f2f487240a6\',
                )),
                2 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-74f82699-93ba-4b15-8bcf-e3bfa1894d40\',
                   \'did\' => \'1\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => \'1\',
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
                   \'position\' => \'1\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'74f82699-93ba-4b15-8bcf-e3bfa1894d40\',
                )),
              ),
               \'panels\' => 
              array (
                \'contentmain\' => 
                array (
                  0 => \'1\',
                  1 => \'2\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-10c9e351-f69c-4629-b191-77b8b01f4f1c\',
               \'renderer\' => \'standard\',
               \'layout\' => \'boxton\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'sidebar\' => NULL,
                  \'contentmain\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'hide_title\' => \'1\',
               \'title_pane\' => \'0\',
               \'uuid\' => \'10c9e351-f69c-4629-b191-77b8b01f4f1c\',
            )),
          ),
        \'page_manager\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:panopoly_page:default\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'panopoly_page\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'page-page\',
            \'css\' => \'\',
            \'pipeline\' => \'ipe\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => \'\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => TRUE,
            \'extra\' => \'\',
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_image\',
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
                      \'image_link\' => \'content\',
                      \'image_style\' => \'panopoly_image_half\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'34b4f35e-bc4b-4819-905c-6b6bf84bffe1\',
                )),
                \'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b\',
                   \'panel\' => \'contentmain\',
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
                      \'trim_length\' => \'250\',
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
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'59cafe99-f0a0-4a3a-a13f-8f108d69d18b\',
                )),
                \'new-f3bf9c22-9b22-41d2-a57e-110951093871\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-f3bf9c22-9b22-41d2-a57e-110951093871\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => false,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'featured\',
                    \'identifier\' => \'\',
                    \'link\' => true,
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
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f3bf9c22-9b22-41d2-a57e-110951093871\',
                )),
                \'new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_categories\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'inline\',
                    \'formatter\' => \'taxonomy_term_reference_link\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
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
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0a2c7b96-5f45-4e85-8e00-88fee50f4f71\',
                )),
                \'new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1\',
                   \'panel\' => \'sidebar\',
                   \'type\' => \'menu_tree\',
                   \'subtype\' => \'main-menu\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'menu_name\' => \'main-menu\',
                    \'parent_mlid\' => \'main-menu:0\',
                    \'title_link\' => 0,
                    \'admin_title\' => \'\',
                    \'level\' => \'2\',
                    \'follow\' => 0,
                    \'depth\' => 0,
                    \'expanded\' => 1,
                    \'sort\' => 0,
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
                   \'uuid\' => \'c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1\',
                )),
              ),
               \'panels\' => 
              array (
                \'contentmain\' => 
                array (
                  0 => \'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1\',
                  1 => \'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b\',
                  2 => \'new-f3bf9c22-9b22-41d2-a57e-110951093871\',
                  3 => \'new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71\',
                ),
                \'sidebar\' => 
                array (
                  0 => \'new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-16346c80-6fcf-4cee-bf7a-9c0173fc2916\',
               \'renderer\' => \'standard\',
               \'layout\' => \'radix_bryant\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'column1\' => NULL,
                  \'column2\' => NULL,
                  \'sidebar\' => NULL,
                  \'contentmain\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'16346c80-6fcf-4cee-bf7a-9c0173fc2916\',
               \'hide_title\' => 0,
               \'title_pane\' => \'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1\',
            )),
            \'export_module\' => \'panopoly_pages\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:panopoly_page:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'panopoly_page\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'page-teaser\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => TRUE,
            \'extra\' => \'\',
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-873d60d8-f80e-41c1-b89d-86ad219285e8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-873d60d8-f80e-41c1-b89d-86ad219285e8\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_image\',
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
                      \'image_link\' => \'content\',
                      \'image_style\' => \'panopoly_image_quarter\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'873d60d8-f80e-41c1-b89d-86ad219285e8\',
                )),
                \'new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68\',
                   \'panel\' => \'contentmain\',
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
                   \'uuid\' => \'9363564d-7f96-4fa2-a1a5-5b0f5f60ce68\',
                )),
                \'new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => false,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => true,
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
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e7b29d80-ad23-4c5d-85fd-13f7a038e3d8\',
                )),
              ),
               \'panels\' => 
              array (
                \'contentmain\' => 
                array (
                  0 => \'new-873d60d8-f80e-41c1-b89d-86ad219285e8\',
                  1 => \'new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68\',
                  2 => \'new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f76cbd0c-d182-4bd2-96f2-f1759b4e69d8\',
               \'renderer\' => \'standard\',
               \'layout\' => \'boxton\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'contentmain\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f76cbd0c-d182-4bd2-96f2-f1759b4e69d8\',
               \'hide_title\' => 0,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'panopoly_pages\',
            \'type\' => \'Overridden\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
        \'featured\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:panopoly_page:default:featured\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'panopoly_page\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'featured\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => TRUE,
            \'extra\' => \'\',
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-af46907d-aa25-43db-995b-b38f9174221e\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-af46907d-aa25-43db-995b-b38f9174221e\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_image\',
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
                      \'image_link\' => \'content\',
                      \'image_style\' => \'panopoly_image_half\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'af46907d-aa25-43db-995b-b38f9174221e\',
                )),
                \'new-1ee1b165-ebd0-4115-ad5e-49df79509f82\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-1ee1b165-ebd0-4115-ad5e-49df79509f82\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
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
                   \'uuid\' => \'1ee1b165-ebd0-4115-ad5e-49df79509f82\',
                )),
                \'new-a71dc705-b195-439c-b47b-980d8c7fa155\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-a71dc705-b195-439c-b47b-980d8c7fa155\',
                   \'panel\' => \'contentmain\',
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
                      \'trim_length\' => \'250\',
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
                   \'uuid\' => \'a71dc705-b195-439c-b47b-980d8c7fa155\',
                )),
                \'new-1d6308c6-817d-4465-ac63-fa7acca627aa\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-1d6308c6-817d-4465-ac63-fa7acca627aa\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => false,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'featured\',
                    \'identifier\' => \'\',
                    \'link\' => true,
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
                   \'uuid\' => \'1d6308c6-817d-4465-ac63-fa7acca627aa\',
                )),
              ),
               \'panels\' => 
              array (
                \'contentmain\' => 
                array (
                  0 => \'new-af46907d-aa25-43db-995b-b38f9174221e\',
                  1 => \'new-1ee1b165-ebd0-4115-ad5e-49df79509f82\',
                  2 => \'new-a71dc705-b195-439c-b47b-980d8c7fa155\',
                  3 => \'new-1d6308c6-817d-4465-ac63-fa7acca627aa\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-5b7d08f9-c351-427e-8015-14433221537b\',
               \'renderer\' => \'standard\',
               \'layout\' => \'boxton\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'column1\' => NULL,
                  \'column2\' => NULL,
                  \'contentmain\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'5b7d08f9-c351-427e-8015-14433221537b\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'panopoly_pages\',
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
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'404\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5e766b70-fd50-4ce2-8ea3-c89954f0365a\',
      \'nid\' => \'2\',
      \'type\' => \'panopoly_page\',
      \'language\' => \'und\',
      \'created\' => \'1419875841\',
      \'changed\' => \'1419893499\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f2daa6a8-0070-4445-9561-a9eba82a6be5\',
      \'revision_timestamp\' => \'1419893499\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>404</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => "<p>404</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_featured_categories\' => array(),
      \'field_featured_image\' => array(),
      \'field_featured_status\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_button_text\' => array(),
      \'field_call_to_action\' => array(),
      \'field_ref_page_blog\' => array(),
      \'field_ref_page_case_study\' => array(),
      \'field_ref_page_promotions\' => array(),
      \'field_ref_page_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(),
      \'field_ref_page_faq\' => array(),
      \'metatags\' => array(),
      \'path\' => array(
        \'pid\' => \'3\',
        \'source\' => \'node/2\',
        \'alias\' => \'404\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'2\',
            \'revision_id\' => \'2\',
            \'name\' => \'node:panopoly_page:default:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'ipe\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'default\',
            \'css_class\' => \'page-default\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => \'\',
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                5 => 
                stdClass::__set_state(array(
                   \'pid\' => \'5\',
                   \'did\' => \'2\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_image\',
                   \'shown\' => \'1\',
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
                      \'image_style\' => \'panopoly_image_half\',
                      \'image_link\' => \'\',
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
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e0d93093-20b4-42cd-bf23-6f2f487240a6\',
                )),
                6 => 
                stdClass::__set_state(array(
                   \'pid\' => \'6\',
                   \'did\' => \'2\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => \'1\',
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
                   \'position\' => \'1\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'74f82699-93ba-4b15-8bcf-e3bfa1894d40\',
                )),
                9 => 
                stdClass::__set_state(array(
                   \'pid\' => \'9\',
                   \'did\' => \'2\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'menu_tree\',
                   \'subtype\' => \'main-menu\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'menu_name\' => \'main-menu\',
                    \'parent_mlid\' => 0,
                    \'parent\' => \'main-menu:0\',
                    \'title_link\' => 0,
                    \'admin_title\' => \'\',
                    \'level\' => \'1\',
                    \'follow\' => 0,
                    \'depth\' => \'0\',
                    \'expanded\' => 0,
                    \'sort\' => 0,
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
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'2ed1fba1-1bcb-4d1c-b6ac-d287a6c83f39\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'5\',
                  1 => \'6\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'9\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'2\',
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
                  \'sidebar\' => NULL,
                  \'contentmain\' => NULL,
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
               \'hide_title\' => \'1\',
               \'title_pane\' => \'0\',
               \'uuid\' => \'10c9e351-f69c-4629-b191-77b8b01f4f1c\',
            )),
          ),
        \'page_manager\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:panopoly_page:default\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'panopoly_page\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'page-page\',
            \'css\' => \'\',
            \'pipeline\' => \'ipe\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => \'\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => TRUE,
            \'extra\' => \'\',
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_image\',
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
                      \'image_link\' => \'content\',
                      \'image_style\' => \'panopoly_image_half\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'34b4f35e-bc4b-4819-905c-6b6bf84bffe1\',
                )),
                \'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b\',
                   \'panel\' => \'contentmain\',
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
                      \'trim_length\' => \'250\',
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
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'59cafe99-f0a0-4a3a-a13f-8f108d69d18b\',
                )),
                \'new-f3bf9c22-9b22-41d2-a57e-110951093871\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-f3bf9c22-9b22-41d2-a57e-110951093871\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => false,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'featured\',
                    \'identifier\' => \'\',
                    \'link\' => true,
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
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f3bf9c22-9b22-41d2-a57e-110951093871\',
                )),
                \'new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_categories\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'inline\',
                    \'formatter\' => \'taxonomy_term_reference_link\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
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
                   \'position\' => 3,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0a2c7b96-5f45-4e85-8e00-88fee50f4f71\',
                )),
                \'new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1\',
                   \'panel\' => \'sidebar\',
                   \'type\' => \'menu_tree\',
                   \'subtype\' => \'main-menu\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'menu_name\' => \'main-menu\',
                    \'parent_mlid\' => \'main-menu:0\',
                    \'title_link\' => 0,
                    \'admin_title\' => \'\',
                    \'level\' => \'2\',
                    \'follow\' => 0,
                    \'depth\' => 0,
                    \'expanded\' => 1,
                    \'sort\' => 0,
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
                   \'uuid\' => \'c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1\',
                )),
              ),
               \'panels\' => 
              array (
                \'contentmain\' => 
                array (
                  0 => \'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1\',
                  1 => \'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b\',
                  2 => \'new-f3bf9c22-9b22-41d2-a57e-110951093871\',
                  3 => \'new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71\',
                ),
                \'sidebar\' => 
                array (
                  0 => \'new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-16346c80-6fcf-4cee-bf7a-9c0173fc2916\',
               \'renderer\' => \'standard\',
               \'layout\' => \'radix_bryant\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'column1\' => NULL,
                  \'column2\' => NULL,
                  \'sidebar\' => NULL,
                  \'contentmain\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'16346c80-6fcf-4cee-bf7a-9c0173fc2916\',
               \'hide_title\' => 0,
               \'title_pane\' => \'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1\',
            )),
            \'export_module\' => \'panopoly_pages\',
            \'type\' => \'Default\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
        \'teaser\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:panopoly_page:default:teaser\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'panopoly_page\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'page-teaser\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => TRUE,
            \'extra\' => \'\',
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-873d60d8-f80e-41c1-b89d-86ad219285e8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-873d60d8-f80e-41c1-b89d-86ad219285e8\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_image\',
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
                      \'image_link\' => \'content\',
                      \'image_style\' => \'panopoly_image_quarter\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'873d60d8-f80e-41c1-b89d-86ad219285e8\',
                )),
                \'new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68\',
                   \'panel\' => \'contentmain\',
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
                   \'uuid\' => \'9363564d-7f96-4fa2-a1a5-5b0f5f60ce68\',
                )),
                \'new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => false,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'teaser\',
                    \'identifier\' => \'\',
                    \'link\' => true,
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
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e7b29d80-ad23-4c5d-85fd-13f7a038e3d8\',
                )),
              ),
               \'panels\' => 
              array (
                \'contentmain\' => 
                array (
                  0 => \'new-873d60d8-f80e-41c1-b89d-86ad219285e8\',
                  1 => \'new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68\',
                  2 => \'new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-f76cbd0c-d182-4bd2-96f2-f1759b4e69d8\',
               \'renderer\' => \'standard\',
               \'layout\' => \'boxton\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'contentmain\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'f76cbd0c-d182-4bd2-96f2-f1759b4e69d8\',
               \'hide_title\' => 0,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'panopoly_pages\',
            \'type\' => \'Default\',
            \'export_type\' => 2,
            \'in_code_only\' => TRUE,
            \'table\' => \'panelizer_defaults\',
            \'did\' => NULL,
          ),
        \'featured\' => (object) array(
            \'disabled\' => FALSE,
            \'api_version\' => 1,
            \'name\' => \'node:panopoly_page:default:featured\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'panopoly_page\',
            \'no_blocks\' => FALSE,
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'access\' => array(),
            \'view_mode\' => \'featured\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => TRUE,
            \'extra\' => \'\',
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                \'new-af46907d-aa25-43db-995b-b38f9174221e\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-af46907d-aa25-43db-995b-b38f9174221e\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_featured_image\',
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
                      \'image_link\' => \'content\',
                      \'image_style\' => \'panopoly_image_half\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'af46907d-aa25-43db-995b-b38f9174221e\',
                )),
                \'new-1ee1b165-ebd0-4115-ad5e-49df79509f82\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-1ee1b165-ebd0-4115-ad5e-49df79509f82\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_title\',
                   \'subtype\' => \'node_title\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'link\' => 1,
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
                   \'uuid\' => \'1ee1b165-ebd0-4115-ad5e-49df79509f82\',
                )),
                \'new-a71dc705-b195-439c-b47b-980d8c7fa155\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-a71dc705-b195-439c-b47b-980d8c7fa155\',
                   \'panel\' => \'contentmain\',
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
                      \'trim_length\' => \'250\',
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
                   \'uuid\' => \'a71dc705-b195-439c-b47b-980d8c7fa155\',
                )),
                \'new-1d6308c6-817d-4465-ac63-fa7acca627aa\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-1d6308c6-817d-4465-ac63-fa7acca627aa\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => false,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'featured\',
                    \'identifier\' => \'\',
                    \'link\' => true,
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
                   \'uuid\' => \'1d6308c6-817d-4465-ac63-fa7acca627aa\',
                )),
              ),
               \'panels\' => 
              array (
                \'contentmain\' => 
                array (
                  0 => \'new-af46907d-aa25-43db-995b-b38f9174221e\',
                  1 => \'new-1ee1b165-ebd0-4115-ad5e-49df79509f82\',
                  2 => \'new-a71dc705-b195-439c-b47b-980d8c7fa155\',
                  3 => \'new-1d6308c6-817d-4465-ac63-fa7acca627aa\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-5b7d08f9-c351-427e-8015-14433221537b\',
               \'renderer\' => \'standard\',
               \'layout\' => \'boxton\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'column1\' => NULL,
                  \'column2\' => NULL,
                  \'contentmain\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'uuid\' => \'5b7d08f9-c351-427e-8015-14433221537b\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
            \'export_module\' => \'panopoly_pages\',
            \'type\' => \'Default\',
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
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
