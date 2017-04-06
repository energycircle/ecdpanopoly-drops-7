<?php
/**
 * @file
 * ec_service_stack.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ec_service_stack_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>Use the contact form below to request a scheduled appointment.&nbsp;</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'content_experiments\' => \'\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:17:"mimemail_textonly";i:0;}\',
      \'field_a_b_reason_for_testing\' => array(),
      \'field_a_b_reference_page\' => array(),
      \'field_a_b_test_page\' => array(),
      \'field_button_text\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Request Appointment\',
            \'format\' => NULL,
            \'safe_value\' => \'Request Appointment\',
          ),
        ),
      ),
      \'field_call_to_action\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is a CALL TO ACTION example<br><a href="tel:15555555555">1 (555) 555-5555</a></p>\',
            \'format\' => \'panopoly_wysiwyg_text\',
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
      \'field_featured_video\' => array(),
      \'field_ref_page_blog\' => array(),
      \'field_ref_page_case_study\' => array(),
      \'field_ref_page_faq\' => array(),
      \'field_ref_page_promotions\' => array(),
      \'field_ref_page_testimonial\' => array(),
      \'field_ref_to_cta_form\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'3\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'machine_name\' => FALSE,
      \'menu\' => NULL,
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'panelizer\' => array(
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'6\',
            \'revision_id\' => \'7\',
            \'view_mode\' => \'default\',
            \'did\' => \'4\',
            \'name\' => NULL,
            \'css_id\' => \'\',
            \'css_class\' => \'page-default\',
            \'css\' => \'\',
            \'no_blocks\' => \'0\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                19 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-e0d93093-20b4-42cd-bf23-6f2f487240a6\',
                   \'did\' => \'4\',
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
                20 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-74f82699-93ba-4b15-8bcf-e3bfa1894d40\',
                   \'did\' => \'4\',
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
                27 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-ea5fc452-a5e6-4dfa-aa5a-7846bb74c38b\',
                   \'did\' => \'4\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'custom\',
                   \'subtype\' => \'anchor_link_to_schedule_service_form\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'admin_title\' => \'\',
                    \'title\' => \'\',
                    \'title_heading\' => \'h2\',
                    \'body\' => \'\',
                    \'format\' => \'panopoly_wysiwyg_text\',
                    \'substitute\' => true,
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
                    \'css_id\' => \'\',
                    \'css_class\' => \'element-invisible\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'2\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'ea5fc452-a5e6-4dfa-aa5a-7846bb74c38b\',
                )),
                21 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-fec2be4c-f5b1-4466-98d0-6cd3c4d1c60d\',
                   \'did\' => \'4\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'views_panes\',
                   \'subtype\' => \'service_request-panel_pane_1\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_settings\' => \'fields\',
                    \'header_type\' => \'none\',
                    \'view_mode\' => \'full\',
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
                   \'position\' => \'3\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'fec2be4c-f5b1-4466-98d0-6cd3c4d1c60d\',
                )),
                22 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-02325551-6f68-40b1-a84d-1d2b41f12947\',
                   \'did\' => \'4\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_page_faq\',
                   \'shown\' => \'1\',
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
                      \'field_multiple_limit\' => \'-1\',
                      \'field_multiple_limit_offset\' => \'0\',
                      \'field_multiple_limit_order\' => \'0\',
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
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
                   \'position\' => \'4\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'02325551-6f68-40b1-a84d-1d2b41f12947\',
                )),
                23 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-40aa6b49-b426-44f7-b973-afccbf175e90\',
                   \'did\' => \'4\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_page_blog\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 0,
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
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
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'40aa6b49-b426-44f7-b973-afccbf175e90\',
                )),
                24 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-b092ecee-3927-49a1-9bf0-2fa9e3d8f628\',
                   \'did\' => \'4\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_page_case_study\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'entityreference_entity_view\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 0,
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
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
                   \'position\' => \'1\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'b092ecee-3927-49a1-9bf0-2fa9e3d8f628\',
                )),
                25 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-add1b6a9-eb1e-4ecb-a30d-cf9915bb50de\',
                   \'did\' => \'4\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_page_promotions\',
                   \'shown\' => \'1\',
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
                      \'field_multiple_limit\' => \'-1\',
                      \'field_multiple_limit_offset\' => \'0\',
                      \'field_multiple_limit_order\' => \'0\',
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
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
                   \'position\' => \'2\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'add1b6a9-eb1e-4ecb-a30d-cf9915bb50de\',
                )),
                26 => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-5b6d419e-2f7d-4821-8d27-d1ed9be31906\',
                   \'did\' => \'4\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_page_testimonial\',
                   \'shown\' => \'1\',
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
                      \'field_multiple_limit\' => \'-1\',
                      \'field_multiple_limit_offset\' => \'0\',
                      \'field_multiple_limit_order\' => \'0\',
                      \'view_mode\' => \'show_this_block\',
                      \'links\' => 1,
                    ),
                    \'context\' => 
                    array (
                    ),
                    \'override_title\' => 1,
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
                   \'position\' => \'3\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'5b6d419e-2f7d-4821-8d27-d1ed9be31906\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'19\',
                  1 => \'20\',
                  2 => \'27\',
                  3 => \'21\',
                  4 => \'22\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'23\',
                  1 => \'24\',
                  2 => \'25\',
                  3 => \'26\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'4\',
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
               \'storage_type\' => \'panelizer_entity\',
               \'storage_id\' => \'node:6:default\',
            )),
          ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'field_call_to_action\' => array(
          \'predicates\' => array(),
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Schedule Service\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'panopoly_page\',
      \'uid\' => \'1\',
      \'uuid\' => \'b89ebaed-31eb-4807-8c68-ccb85e55d1ca\',
      \'vid\' => NULL,
      \'vuuid\' => \'878cc0f1-57ba-4790-a4c8-2e968e3084a4\',
    ),
)',
);
  return $node_export;
}
