<?php
/**
 * @file
 * ec_article_demo_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ec_article_demo_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'168\',
      \'uid\' => \'0\',
      \'title\' => \'Demo-Test Newsletter 1\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'648d2aab-28d0-4071-8b1d-1cb47b3468bf\',
      \'nid\' => \'149\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1436282419\',
      \'changed\' => \'1442258624\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1ccb35b8-9f68-4f7a-a74f-1398779ff248\',
      \'revision_timestamp\' => \'1442258624\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is the placeholder text for this page. Please replace this text with real copy.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>This is the placeholder text for this page. Please replace this text with real copy.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_article_author\' => array(),
      \'field_article_image\' => array(),
      \'field_article_source\' => array(),
      \'field_article_type\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'11\',
          ),
        ),
      ),
      \'field_display_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-10-23 00:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'America/New_York\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_ref_article_case_study\' => array(),
      \'field_ref_article_product\' => array(),
      \'field_ref_article_testimonial\' => array(),
      \'field_ref_article_blog\' => array(),
      \'field_ref_article_promo\' => array(),
      \'path\' => array(
        \'pid\' => \'308\',
        \'source\' => \'node/149\',
        \'alias\' => \'article/test-newsletter-1\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'149\',
            \'revision_id\' => \'168\',
            \'name\' => \'node:article:default\',
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
            \'entity_id\' => \'149\',
            \'revision_id\' => \'168\',
            \'name\' => \'node:article:default:default\',
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
                \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_date\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'date_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'format_type\' => \'panopoly_day\',
                      \'multiple_number\' => \'\',
                      \'multiple_from\' => \'\',
                      \'multiple_to\' => \'\',
                      \'fromto\' => \'both\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                )),
                \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_author\',
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
                   \'uuid\' => \'71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                )),
                \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_image\',
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
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                )),
                \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
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
                   \'uuid\' => \'4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
                )),
                \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_source\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'link_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
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
                   \'position\' => 4,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'9fb8740b-980b-4914-91b5-5daca474f7d9\',
                )),
                \'new-4422fd08-749a-4717-bf82-bb6642306f9d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-4422fd08-749a-4717-bf82-bb6642306f9d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_promo\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'4422fd08-749a-4717-bf82-bb6642306f9d\',
                )),
                \'new-64238565-3e44-408e-ba42-672dd0c33612\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-64238565-3e44-408e-ba42-672dd0c33612\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_blog\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'64238565-3e44-408e-ba42-672dd0c33612\',
                )),
                \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_testimonial\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                  1 => \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                  2 => \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                  3 => \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
                  4 => \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-4422fd08-749a-4717-bf82-bb6642306f9d\',
                  1 => \'new-64238565-3e44-408e-ba42-672dd0c33612\',
                  2 => \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-db7980d7-e91c-4212-afed-87dfc118f603\',
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
               \'uuid\' => \'db7980d7-e91c-4212-afed-87dfc118f603\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => \'0\',
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'112\',
      \'uid\' => \'0\',
      \'title\' => \'Demo-Test Press Article 2\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'416e8dce-0667-44b8-aff8-804f8594b488\',
      \'nid\' => \'5\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1436282419\',
      \'changed\' => \'1442258665\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3efce21e-0297-453d-b94c-7fa3a480aa60\',
      \'revision_timestamp\' => \'1442258665\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><span>This is the placeholder text for this page. Please replace this text with real copy.</span></p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p><span>This is the placeholder text for this page. Please replace this text with real copy.</span></p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_article_author\' => array(),
      \'field_article_image\' => array(),
      \'field_article_source\' => array(),
      \'field_article_type\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'field_display_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-10-23 00:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'America/New_York\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_ref_article_case_study\' => array(),
      \'field_ref_article_product\' => array(),
      \'field_ref_article_testimonial\' => array(),
      \'field_ref_article_blog\' => array(),
      \'field_ref_article_promo\' => array(),
      \'path\' => array(
        \'pid\' => \'170\',
        \'source\' => \'node/5\',
        \'alias\' => \'article/test-press-article-2\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'5\',
            \'revision_id\' => \'112\',
            \'name\' => \'node:article:default\',
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
            \'entity_id\' => \'5\',
            \'revision_id\' => \'112\',
            \'name\' => \'node:article:default:default\',
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
                \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_date\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'date_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'format_type\' => \'panopoly_day\',
                      \'multiple_number\' => \'\',
                      \'multiple_from\' => \'\',
                      \'multiple_to\' => \'\',
                      \'fromto\' => \'both\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                )),
                \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_author\',
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
                   \'uuid\' => \'71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                )),
                \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_image\',
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
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                )),
                \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
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
                   \'uuid\' => \'4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
                )),
                \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_source\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'link_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
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
                   \'position\' => 4,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'9fb8740b-980b-4914-91b5-5daca474f7d9\',
                )),
                \'new-4422fd08-749a-4717-bf82-bb6642306f9d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-4422fd08-749a-4717-bf82-bb6642306f9d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_promo\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'4422fd08-749a-4717-bf82-bb6642306f9d\',
                )),
                \'new-64238565-3e44-408e-ba42-672dd0c33612\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-64238565-3e44-408e-ba42-672dd0c33612\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_blog\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'64238565-3e44-408e-ba42-672dd0c33612\',
                )),
                \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_testimonial\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                  1 => \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                  2 => \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                  3 => \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
                  4 => \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-4422fd08-749a-4717-bf82-bb6642306f9d\',
                  1 => \'new-64238565-3e44-408e-ba42-672dd0c33612\',
                  2 => \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-db7980d7-e91c-4212-afed-87dfc118f603\',
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
               \'uuid\' => \'db7980d7-e91c-4212-afed-87dfc118f603\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => \'0\',
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'113\',
      \'uid\' => \'0\',
      \'title\' => \'Demo-Test Newsletter 2\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a2ac0a31-1d62-4545-8874-cd7034799098\',
      \'nid\' => \'6\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1436282419\',
      \'changed\' => \'1442258644\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4ac2ee7a-14e7-499e-8d40-f6cde5965e98\',
      \'revision_timestamp\' => \'1442258644\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><span>This is the placeholder text for this page. Please replace this text with real copy.</span></p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p><span>This is the placeholder text for this page. Please replace this text with real copy.</span></p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_article_author\' => array(),
      \'field_article_image\' => array(),
      \'field_article_source\' => array(),
      \'field_article_type\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'11\',
          ),
        ),
      ),
      \'field_display_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-10-23 00:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'America/New_York\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_ref_article_case_study\' => array(),
      \'field_ref_article_product\' => array(),
      \'field_ref_article_testimonial\' => array(),
      \'field_ref_article_blog\' => array(),
      \'field_ref_article_promo\' => array(),
      \'path\' => array(
        \'pid\' => \'171\',
        \'source\' => \'node/6\',
        \'alias\' => \'article/test-newsletter-2\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'6\',
            \'revision_id\' => \'113\',
            \'name\' => \'node:article:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'page-page\',
            \'css\' => \'\',
            \'pipeline\' => \'ipe\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => \'\',
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'6\',
            \'revision_id\' => \'113\',
            \'name\' => \'node:article:default:default\',
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
                \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_date\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'date_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'format_type\' => \'panopoly_day\',
                      \'multiple_number\' => \'\',
                      \'multiple_from\' => \'\',
                      \'multiple_to\' => \'\',
                      \'fromto\' => \'both\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                )),
                \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_author\',
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
                   \'uuid\' => \'71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                )),
                \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_image\',
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
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                )),
                \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
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
                   \'uuid\' => \'4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
                )),
                \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_source\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'link_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
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
                   \'position\' => 4,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'9fb8740b-980b-4914-91b5-5daca474f7d9\',
                )),
                \'new-4422fd08-749a-4717-bf82-bb6642306f9d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-4422fd08-749a-4717-bf82-bb6642306f9d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_promo\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'4422fd08-749a-4717-bf82-bb6642306f9d\',
                )),
                \'new-64238565-3e44-408e-ba42-672dd0c33612\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-64238565-3e44-408e-ba42-672dd0c33612\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_blog\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'64238565-3e44-408e-ba42-672dd0c33612\',
                )),
                \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_testimonial\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                  1 => \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                  2 => \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                  3 => \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
                  4 => \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-4422fd08-749a-4717-bf82-bb6642306f9d\',
                  1 => \'new-64238565-3e44-408e-ba42-672dd0c33612\',
                  2 => \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-db7980d7-e91c-4212-afed-87dfc118f603\',
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
               \'uuid\' => \'db7980d7-e91c-4212-afed-87dfc118f603\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
          ),
        \'teaser\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'6\',
            \'revision_id\' => \'113\',
            \'name\' => \'node:panopoly_page:default:teaser\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'page-teaser\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
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
               \'layout\' => \'radix_boxton\',
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
          ),
        \'featured\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'6\',
            \'revision_id\' => \'113\',
            \'name\' => \'node:panopoly_page:default:featured\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'featured\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
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
               \'layout\' => \'radix_boxton\',
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
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => \'0\',
      \'menu\' => array(
        \'link_title\' => \'Careers\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-auxiliary-menu\',
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
      \'vid\' => \'165\',
      \'uid\' => \'1\',
      \'title\' => \'Demo-A/B Testing (Turning your machine into a lead generating machine)\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f84cba34-3cc6-452b-bf88-412f823a1f00\',
      \'nid\' => \'146\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1442257330\',
      \'changed\' => \'1442257377\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ba38df35-958e-4b63-be63-f790c9bef3d6\',
      \'revision_timestamp\' => \'1442257377\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>A key component of successful web marketing is continual optimization - optimizing your content, keywords, landing pages, and structure to convert your web visitors into leads. But how do you know what converts and what potential changes are going to be most advantageous? You may find some good ideas by reading articles on best practices, but what works for companies in Silicon Valley may not work for your contracting company in Green Bay, Wisconsin. The answer comes back to basic science, one variable against a constant: A/B testing. A/B testing is the practice of sending half your traffic to one page(A), and half of your traffic to a page that has some differences(B), with the same end goal. You can then view performance differences between the two pages and determine which is optimal. Your website may be doing well. It may even be doing great. But no matter how it’s doing, with A/B testing, it can be doing better.</p><p>The purpose of A/B testing a website is to find out&nbsp;<em>exactly&nbsp;</em>what makes your potential customers fill out a from or pick up a phone and call you. Every test you run will lead to an improvement on your knowledge of your customer, more leads, and more sales in the long run.&nbsp;</p><h3>How to use Google Experiments</h3><p>If you are an analytics freak, like we are at Energy Circle, you have probably noticed&nbsp;<a href="https://developers.google.com/analytics/devguides/platform/experiments-overview">Experiments</a>&nbsp;under the Behavior tab on Google Analytics(see image on right). This tab is buried in the interface, but it could eventually be one of the most important tools to turn website visitors into engaged customers. This tool allows a custom percentage of your audience to see an original landing page, while another percentage views an altered page. These steps may sounds complicated, but rest assured, if you are able to make a page, you can A/B test. &nbsp;</p><h4><img class="imagecache-Inline" src="http://www.energycircle.com/sites/default/files/resize/imagecache/Inline/images/stories/44706/4e99e030493c42f8389b022f92bcc353-1x1.jpeg" title="Setting up your Google Experiment Code for A/B Testing" alt="How to set up your Google Experiment for A/B Testing" width="1" height="1">Here are a some quick steps to set up your first A/B test using Google Experiments:</h4><ol><li><p>Choose a page on your site that you would like to improve conversions.</p></li><li><h4><img class="imagecache-Inline" src="http://www.energycircle.com/sites/default/files/resize/images/4e99e030493c42f8389b022f92bcc353-450x331.jpeg" title="Setting up your Google Experiment Code for A/B Testing" alt="How to set up your Google Experiment for A/B Testing" width="450" height="331"></h4><p>Design and publish a page with the changes you think will improve conversions. (suggestions in the section below)</p></li><li><p>Under the behavior tab in Google Analytics click Create an Experiment.</p></li><li><p>Name the experiment, select a goal to optimize for, and choose the amount of web traffic you would like to allocate to the experiment. The goal you select,&nbsp;whether it be calls or form submissions, will be the measure of efficiency throughout the test.</p></li><li><p>Add the two URLs into the configure section.</p></li><li><p>Paste the given code into the header tag of the original page, or use a Drupal module to insert the given Experiment ID. It is important to not put the code across all pages of the site, as this will upset the experiment.</p></li><li>Click Start Experiment and watch as your customers interact with the two seperate page.</li></ol><p><strong><img src="http://www.energycircle.com/sites/default/files/images/Screenshot%202015-06-03%2015.36.00.png" alt="A Strong Call To Action form Is One Example of An A/B Testing Experiment" width="434" height="384"></strong></p><h3>Variables to Test</h3><p><strong>Lead Generation Form</strong><br>The form acts as gatekeeper to conversions. Make it too big, you lose out on content space. Make it too small, and people may have a hard time locating it. Try reducing the number of fields in your form, changing the color of the form to stand out on the page more, or changing the text on the “Send” button. Each of these small variables could lead to large conversion changes for you.</p><p><strong>Headline of landing page</strong><br>If you are driving traffic to a specific landing page from PPC or SERPs a headline can cause users to convert, or bounce. Creating and testing different headlines for your landing page is necessary. Take 30 minutes, sit down with your marketing team and create two killer headlines to test against each other.</p><p><strong>Content</strong><br>Content takes time to create, so this is a tough one. But if you really want a page to convert testing different content can be of value. It might even give you insight into your sales process by understanding what customers want to hear. Check out more on content and keyword in this&nbsp;<a href="http://www.energycircle.com/blog/2015/05/28/developing-effective-keyword-strategy">blog</a>&nbsp;by Energy Circle’s own Jack Gross.</p><p><strong>Colors!</strong><br>Even something as frivolous as the colors on your page can help increase conversion rate. Customers can see different colors as inviting or commanding. Certain color contrasts can make call to action more noticeable. Check out this infographic on&nbsp;<a href="https://blog.kissmetrics.com/color-psychology/?wide=1">KISSmetrics.com</a>&nbsp;for tips on which color could be right for your site.</p><h3>Careful!</h3><p>As we all know, Google is a stickler for duplicate content. There is a good chance that your alternate page has similar content to the original page. To avoid being penalized in the SERPs be sure to block search engines from crawling your alternate page until you have found a winner in the A/B test. This is done with a simple check box in both the Drupal and Wordpress CMS.</p><h3>Pick a Winner</h3><p>A/B testing isn’t all hard work. Watching and analyzing the results is fun! After two weeks to a month you should have a sizeable amount of data and will know if the change you made to the landing page was looked upon favorably by your customers. Google analytics will show which of the pages has the stronger conversion rate, and you can ax the losing page. Be sure to allow search engines to crawl the new and improved landing page. You can now feel confident that your website is better at converting. Continuous A/B testing will only increase your conversions, so don’t shy away from testing many variables many times.</p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p>A key component of successful web marketing is continual optimization - optimizing your content, keywords, landing pages, and structure to convert your web visitors into leads. But how do you know what converts and what potential changes are going to be most advantageous? You may find some good ideas by reading articles on best practices, but what works for companies in Silicon Valley may not work for your contracting company in Green Bay, Wisconsin. The answer comes back to basic science, one variable against a constant: A/B testing. A/B testing is the practice of sending half your traffic to one page(A), and half of your traffic to a page that has some differences(B), with the same end goal. You can then view performance differences between the two pages and determine which is optimal. Your website may be doing well. It may even be doing great. But no matter how it’s doing, with A/B testing, it can be doing better.</p><p>The purpose of A/B testing a website is to find out <em>exactly </em>what makes your potential customers fill out a from or pick up a phone and call you. Every test you run will lead to an improvement on your knowledge of your customer, more leads, and more sales in the long run. </p><h3>How to use Google Experiments</h3><p>If you are an analytics freak, like we are at Energy Circle, you have probably noticed <a href="https://developers.google.com/analytics/devguides/platform/experiments-overview">Experiments</a> under the Behavior tab on Google Analytics(see image on right). This tab is buried in the interface, but it could eventually be one of the most important tools to turn website visitors into engaged customers. This tool allows a custom percentage of your audience to see an original landing page, while another percentage views an altered page. These steps may sounds complicated, but rest assured, if you are able to make a page, you can A/B test.  </p><h4><img class="imagecache-Inline" src="http://www.energycircle.com/sites/default/files/resize/imagecache/Inline/images/stories/44706/4e99e030493c42f8389b022f92bcc353-1x1.jpeg" title="Setting up your Google Experiment Code for A/B Testing" alt="How to set up your Google Experiment for A/B Testing" width="1" height="1">Here are a some quick steps to set up your first A/B test using Google Experiments:</h4><ol><li><p>Choose a page on your site that you would like to improve conversions.</p></li><li><h4><img class="imagecache-Inline" src="/sites/default/files/resize/remote/49989917f2062745bf3a42b4e5ad0c72-450x331.jpeg" title="Setting up your Google Experiment Code for A/B Testing" alt="How to set up your Google Experiment for A/B Testing" width="450" height="331"></h4><p>Design and publish a page with the changes you think will improve conversions. (suggestions in the section below)</p></li><li><p>Under the behavior tab in Google Analytics click Create an Experiment.</p></li><li><p>Name the experiment, select a goal to optimize for, and choose the amount of web traffic you would like to allocate to the experiment. The goal you select, whether it be calls or form submissions, will be the measure of efficiency throughout the test.</p></li><li><p>Add the two URLs into the configure section.</p></li><li><p>Paste the given code into the header tag of the original page, or use a Drupal module to insert the given Experiment ID. It is important to not put the code across all pages of the site, as this will upset the experiment.</p></li><li>Click Start Experiment and watch as your customers interact with the two seperate page.</li></ol><p><strong><img src="/sites/default/files/resize/remote/0cfc37d30952edbed9a38150138ed072-434x384.png" alt="A Strong Call To Action form Is One Example of An A/B Testing Experiment" width="434" height="384"></strong></p><h3>Variables to Test</h3><p><strong>Lead Generation Form</strong><br>The form acts as gatekeeper to conversions. Make it too big, you lose out on content space. Make it too small, and people may have a hard time locating it. Try reducing the number of fields in your form, changing the color of the form to stand out on the page more, or changing the text on the “Send” button. Each of these small variables could lead to large conversion changes for you.</p><p><strong>Headline of landing page</strong><br>If you are driving traffic to a specific landing page from PPC or SERPs a headline can cause users to convert, or bounce. Creating and testing different headlines for your landing page is necessary. Take 30 minutes, sit down with your marketing team and create two killer headlines to test against each other.</p><p><strong>Content</strong><br>Content takes time to create, so this is a tough one. But if you really want a page to convert testing different content can be of value. It might even give you insight into your sales process by understanding what customers want to hear. Check out more on content and keyword in this <a href="http://www.energycircle.com/blog/2015/05/28/developing-effective-keyword-strategy">blog</a> by Energy Circle’s own Jack Gross.</p><p><strong>Colors!</strong><br>Even something as frivolous as the colors on your page can help increase conversion rate. Customers can see different colors as inviting or commanding. Certain color contrasts can make call to action more noticeable. Check out this infographic on <a href="https://blog.kissmetrics.com/color-psychology/?wide=1">KISSmetrics.com</a> for tips on which color could be right for your site.</p><h3>Careful!</h3><p>As we all know, Google is a stickler for duplicate content. There is a good chance that your alternate page has similar content to the original page. To avoid being penalized in the SERPs be sure to block search engines from crawling your alternate page until you have found a winner in the A/B test. This is done with a simple check box in both the Drupal and Wordpress CMS.</p><h3>Pick a Winner</h3><p>A/B testing isn’t all hard work. Watching and analyzing the results is fun! After two weeks to a month you should have a sizeable amount of data and will know if the change you made to the landing page was looked upon favorably by your customers. Google analytics will show which of the pages has the stronger conversion rate, and you can ax the losing page. Be sure to allow search engines to crawl the new and improved landing page. You can now feel confident that your website is better at converting. Continuous A/B testing will only increase your conversions, so don’t shy away from testing many variables many times.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_article_author\' => array(),
      \'field_article_image\' => array(),
      \'field_article_source\' => array(),
      \'field_article_type\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'11\',
          ),
        ),
      ),
      \'field_display_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-09-14 00:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'America/New_York\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_ref_article_case_study\' => array(),
      \'field_ref_article_product\' => array(),
      \'field_ref_article_testimonial\' => array(),
      \'field_ref_article_blog\' => array(),
      \'field_ref_article_promo\' => array(),
      \'path\' => array(
        \'pid\' => \'303\',
        \'source\' => \'node/146\',
        \'alias\' => \'article/ab-testing-turning-your-machine-lead-generating-machine\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'146\',
            \'revision_id\' => \'165\',
            \'name\' => \'node:article:default\',
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
            \'entity_id\' => \'146\',
            \'revision_id\' => \'165\',
            \'name\' => \'node:article:default:default\',
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
                \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_date\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'date_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'format_type\' => \'panopoly_day\',
                      \'multiple_number\' => \'\',
                      \'multiple_from\' => \'\',
                      \'multiple_to\' => \'\',
                      \'fromto\' => \'both\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                )),
                \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_author\',
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
                   \'uuid\' => \'71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                )),
                \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_image\',
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
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                )),
                \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
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
                   \'uuid\' => \'4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
                )),
                \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_source\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'link_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
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
                   \'position\' => 4,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'9fb8740b-980b-4914-91b5-5daca474f7d9\',
                )),
                \'new-4422fd08-749a-4717-bf82-bb6642306f9d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-4422fd08-749a-4717-bf82-bb6642306f9d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_promo\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'4422fd08-749a-4717-bf82-bb6642306f9d\',
                )),
                \'new-64238565-3e44-408e-ba42-672dd0c33612\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-64238565-3e44-408e-ba42-672dd0c33612\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_blog\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'64238565-3e44-408e-ba42-672dd0c33612\',
                )),
                \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_testimonial\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                  1 => \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                  2 => \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                  3 => \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
                  4 => \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-4422fd08-749a-4717-bf82-bb6642306f9d\',
                  1 => \'new-64238565-3e44-408e-ba42-672dd0c33612\',
                  2 => \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-db7980d7-e91c-4212-afed-87dfc118f603\',
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
               \'uuid\' => \'db7980d7-e91c-4212-afed-87dfc118f603\',
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
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'114\',
      \'uid\' => \'0\',
      \'title\' => \'Demo-Test Press Article 1\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'11aa8836-34aa-4340-83a9-2f336290471f\',
      \'nid\' => \'7\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1436282419\',
      \'changed\' => \'1442258628\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c185bc44-074b-450c-8c9d-a925ebee91d7\',
      \'revision_timestamp\' => \'1442258628\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><span>This is the placeholder text for this page. Please replace this text with real copy.</span></p>\',
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => \'<p><span>This is the placeholder text for this page. Please replace this text with real copy.</span></p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_article_author\' => array(),
      \'field_article_image\' => array(),
      \'field_article_source\' => array(),
      \'field_article_type\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'field_display_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-10-23 00:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'America/New_York\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_ref_article_case_study\' => array(),
      \'field_ref_article_product\' => array(),
      \'field_ref_article_testimonial\' => array(),
      \'field_ref_article_blog\' => array(),
      \'field_ref_article_promo\' => array(),
      \'path\' => array(
        \'pid\' => \'172\',
        \'source\' => \'node/7\',
        \'alias\' => \'article/test-press-article-1\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'7\',
            \'revision_id\' => \'114\',
            \'name\' => \'node:panopoly_page:default\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'page-page\',
            \'css\' => \'\',
            \'pipeline\' => \'ipe\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
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
                    \'parent_mlid\' => \'0\',
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
          ),
        \'default\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'7\',
            \'revision_id\' => \'114\',
            \'name\' => \'node:article:default:default\',
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
                \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_date\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'date_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'format_type\' => \'panopoly_day\',
                      \'multiple_number\' => \'\',
                      \'multiple_from\' => \'\',
                      \'multiple_to\' => \'\',
                      \'fromto\' => \'both\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                )),
                \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_author\',
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
                   \'uuid\' => \'71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                )),
                \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_image\',
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
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                )),
                \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
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
                   \'uuid\' => \'4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
                )),
                \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_source\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'link_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
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
                   \'position\' => 4,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'9fb8740b-980b-4914-91b5-5daca474f7d9\',
                )),
                \'new-4422fd08-749a-4717-bf82-bb6642306f9d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-4422fd08-749a-4717-bf82-bb6642306f9d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_promo\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'4422fd08-749a-4717-bf82-bb6642306f9d\',
                )),
                \'new-64238565-3e44-408e-ba42-672dd0c33612\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-64238565-3e44-408e-ba42-672dd0c33612\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_blog\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'64238565-3e44-408e-ba42-672dd0c33612\',
                )),
                \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_testimonial\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                  1 => \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                  2 => \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                  3 => \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
                  4 => \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-4422fd08-749a-4717-bf82-bb6642306f9d\',
                  1 => \'new-64238565-3e44-408e-ba42-672dd0c33612\',
                  2 => \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-db7980d7-e91c-4212-afed-87dfc118f603\',
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
               \'uuid\' => \'db7980d7-e91c-4212-afed-87dfc118f603\',
               \'hide_title\' => 1,
               \'title_pane\' => \'0\',
            )),
          ),
        \'teaser\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'7\',
            \'revision_id\' => \'114\',
            \'name\' => \'node:panopoly_page:default:teaser\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'teaser\',
            \'css_class\' => \'page-teaser\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
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
               \'layout\' => \'radix_boxton\',
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
          ),
        \'featured\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'7\',
            \'revision_id\' => \'114\',
            \'name\' => \'node:panopoly_page:default:featured\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'standard\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'0\',
            \'view_mode\' => \'featured\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
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
               \'layout\' => \'radix_boxton\',
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
          ),
      ),
      \'machine_name\' => FALSE,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'weight_weight\' => \'0\',
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'164\',
      \'uid\' => \'1\',
      \'title\' => "Demo-Google\'s Big Local Search Change",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cc59d377-6eb7-4417-a34e-9b8f5c044ade\',
      \'nid\' => \'145\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1442257175\',
      \'changed\' => \'1442257212\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c3362ef5-69e0-4bf4-aff5-08dc7be0ae94\',
      \'revision_timestamp\' => \'1442257212\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>On August 7th, Mother Google dropped another bombshell. This one affects all local businesses, but has important implications for companies providing all types of home performance services, from HVAC to insulation to healthy home.</p><p>Here\'s what changed. You may recall from past Energy Circle&nbsp;<a href=\\"http://www.energycircle.com/find?terms=SERP\\" target=\\"_blank\\">posts</a>&nbsp;and&nbsp;<a href=\\"http://www.energycircle.com/pro/webinarseries\\" target=\\"_blank\\">webinars</a>, that we\'ve frequently talked about the configuration of a search engine result page (SERP for us geeks). A typical page, like the one below for \\"Furnace Repair, Boston, MA\\" would generate a mix of paid listings (the ones marked ads), organic results (Yelp and Home Advisor), and a \\"Local Pack\\" of 7 listings. With paid search having a cost, and organic highly competitive for local companies to beat huge directories like Yelp, the Local Pack was our best bet. With 7 opportunities, companies that optimized for local and had their Google+ pages in good shape could rank well.</p><p>Google giveth and Google taketh away. Effective last week, across the entire globe, the 7-pack is no longer. Virtually all local search for services are now in a configuration of 3 that our pals in the search community are calling the Local Stack. 57% of the real estate once available to show our listings is now ... gone. And it\'s actually worse than that – Google has also moved the map from the upper right column to the center above the Stack, so that organic listings are pushed even farther down. Most local searches now are dominated by paid ads (Google\'s main source of revenue), a map and three listings.&nbsp;</p><h5><em>Pre August 7th, Google Local 7-Packs</em><img src=\\"http://www.energycircle.com/sites/default/files/resize/images/Screenshot%202015-08-11%2017.04.38-665x686.png\\" alt=\\"Old Google Local 7-Pack for &quot;Furnace Repair in Boston MA&quot;\\" width=\\"665\\" height=\\"686\\"></h5><h5><em>Post August 7th, Google Local 3-Stacks</em></h5><p><img src=\\"http://www.energycircle.com/sites/default/files/resize/images/furnace%20repair%20boston%2C%20MA_1-665x722.jpg\\" alt=\\"Google\'s new local-3 pack display shown post August 7th for the same search term.\\" width=\\"665\\" height=\\"722\\"></p><h3>What are the implications of this for home performance companies?</h3><p>Obviously, the challenge of getting your listing anywhere on page 1 just got more difficult. Here\'s how we see things given the new configuration:</p><h4>1. Organic is now even that much more important</h4><p>If you’ve been relying on 7-packs for a lot of your leads, it’s time to&nbsp;<a href=\\"http://blumenthals.com/blog/2015/08/07/thoughts-about-the-new-local-stack-display/\\" target=\\"_blank\\">look again at your organic strategy.</a>&nbsp;Companies that are on their game can beat the directories and rank highly in organic either above or below the pack. If your local SEO is strong, this is possible, though not easy. Take the long view and know that the effort you put into organic will be useful down the road, no matter what Google does next.</p><h4>2. Ranking in the top 3 requires you to really be on your local optimization game</h4><p>Google is taking data from Google+&nbsp;for these 3-pack listings, so it\'s vital that that page is perfectly optimized. Be sure your data is exactly accurate, your categories are well chosen and work hard on your reviews. It used to be that you could coast a bit once you got 5 Google reviews (because then the stars would show), but now review volume and velocity is your edge over other companies in your market.&nbsp;</p><p><span><span><img src=\\"https://lh4.googleusercontent.com/q0TVcnHmSA_Ri1CHXvQL0sT02ELaDbzk47tfFvgAW7UCWJIe5izzupFcna5JeUyEKuNm6uFGFXKZUD17px_E5P94ALnRQVnDn07f4Ou1l5JNdLUVk3DhAyFk1z3kn3BYfM4Wnjo\\" alt=\\"In a search for Energy Audit, Concord CA we can see that only one out of the three results in a local pack has G+ reviews\\"></span></span></p><p>For contractors specifically, unlike some other categories, we know that (for now) buttons do include website and directions. So if you can get into the 3-pack you\'ll get some 1-click website traffic as an immediate result.</p><p>On the downside, no industry 3-packs on desktop browsers will include phone numbers. There have been a number of complaints around the web about this part of the change. We\'ll need to track the developments with this all-important piece of data for home performance. Mobile browser packs will continue to include phone numbers.</p><h4>3. You probably need to be using Adwords, as local traffic is sure to decline</h4><p>Looking at the real estate on a SERP makes it obvious that Google\'s cash cow – Adwords – rules the page. If you want to get found, it is increasingly difficult if you are not in the paid search mix. Also (and here we’re partly speculating) the day that the Local Stack is purchasable is probably not far off. Getting in the game of&nbsp;<a href=\\"http://www.energycircle.com/blog/2014/10/02/6-of-biggest-mistakes-adwords\\" target=\\"_blank\\">buying some of your traffic</a>&nbsp;is increasingly non-optional.</p><h4>4. Citations are more important than ever</h4><p>Always a key part of the local search ranking algorithms, Google will continue to use citations&nbsp;as a crucial means of verifying your company identity – whether for a 3-pack or whatever is next in local search. Several experts are saying that citations may be even more important to getting placed in the top 3.&nbsp;</p><h3>Preparing for what may be to come</h3><p>Predicting where Google is headed can be a fool\'s errand, but there are some signs in other industries that we\'re watching closely and could be coming to our sector at some point.</p><ul><li>Paid Local opportunities. We know that Google is testing paid local currently in two categories – locksmiths and plumbers. If plumbers are in the mix, then HVAC cannot be far behind.</li><li>Filter sorting with local. In the hospitality category, the local packs have the option of sortability by star rating, price and availability. While not all of these are relevant to us, the new design clearly lends itself to that kind of sorting.</li></ul><h3>What should you do?</h3><p>1. Check your rankings to find out if you\'ve fallen out of the local packs for key searches.</p><p>2. Stay focused on your Google+ reviews--get to 5 and beyond.</p><p>3. Be sure your&nbsp;<a href=\\"https://www.google.com/business/ce/mws/?utm_expid=101497709-8.oQy7-WxnRfuVxAoqagd3-w.1&amp;utm_referrer=https%3A%2F%2Fwww.google.com%2F\\" target=\\"_blank\\">Google + page</a>&nbsp;is fully optimized: categories properly selected, photos fresh, name and address listed exactly right.</p><p>4. Keep pushing on citations.</p><p>5. Keep driving for organic traffic through a diverse range of tactics – not banking on just one or two tricks.</p><p>As ever, we\'ll continue to watch these changes and will report as we learn new things.&nbsp;</p>",
            \'summary\' => \'\',
            \'format\' => \'panopoly_wysiwyg_text\',
            \'safe_value\' => "<p>On August 7th, Mother Google dropped another bombshell. This one affects all local businesses, but has important implications for companies providing all types of home performance services, from HVAC to insulation to healthy home.</p><p>Here\'s what changed. You may recall from past Energy Circle <a href=\\"http://www.energycircle.com/find?terms=SERP\\" target=\\"_blank\\">posts</a> and <a href=\\"http://www.energycircle.com/pro/webinarseries\\" target=\\"_blank\\">webinars</a>, that we\'ve frequently talked about the configuration of a search engine result page (SERP for us geeks). A typical page, like the one below for \\"Furnace Repair, Boston, MA\\" would generate a mix of paid listings (the ones marked ads), organic results (Yelp and Home Advisor), and a \\"Local Pack\\" of 7 listings. With paid search having a cost, and organic highly competitive for local companies to beat huge directories like Yelp, the Local Pack was our best bet. With 7 opportunities, companies that optimized for local and had their Google+ pages in good shape could rank well.</p><p>Google giveth and Google taketh away. Effective last week, across the entire globe, the 7-pack is no longer. Virtually all local search for services are now in a configuration of 3 that our pals in the search community are calling the Local Stack. 57% of the real estate once available to show our listings is now ... gone. And it\'s actually worse than that – Google has also moved the map from the upper right column to the center above the Stack, so that organic listings are pushed even farther down. Most local searches now are dominated by paid ads (Google\'s main source of revenue), a map and three listings. </p><h5><em>Pre August 7th, Google Local 7-Packs</em><img src=\\"/sites/default/files/resize/remote/8da2b35d23628239e4a0d04a08cb1902-665x686.png\\" alt=\\"Old Google Local 7-Pack for &amp;quot;Furnace Repair in Boston MA&amp;quot;\\" width=\\"665\\" height=\\"686\\"></h5><h5><em>Post August 7th, Google Local 3-Stacks</em></h5><p><img src=\\"/sites/default/files/resize/remote/07ab50a8f777a050125214720de95d4e-665x722.jpg\\" alt=\\"Google\'s new local-3 pack display shown post August 7th for the same search term.\\" width=\\"665\\" height=\\"722\\"></p><h3>What are the implications of this for home performance companies?</h3><p>Obviously, the challenge of getting your listing anywhere on page 1 just got more difficult. Here\'s how we see things given the new configuration:</p><h4>1. Organic is now even that much more important</h4><p>If you’ve been relying on 7-packs for a lot of your leads, it’s time to <a href=\\"http://blumenthals.com/blog/2015/08/07/thoughts-about-the-new-local-stack-display/\\" target=\\"_blank\\">look again at your organic strategy.</a> Companies that are on their game can beat the directories and rank highly in organic either above or below the pack. If your local SEO is strong, this is possible, though not easy. Take the long view and know that the effort you put into organic will be useful down the road, no matter what Google does next.</p><h4>2. Ranking in the top 3 requires you to really be on your local optimization game</h4><p>Google is taking data from Google+ for these 3-pack listings, so it\'s vital that that page is perfectly optimized. Be sure your data is exactly accurate, your categories are well chosen and work hard on your reviews. It used to be that you could coast a bit once you got 5 Google reviews (because then the stars would show), but now review volume and velocity is your edge over other companies in your market. </p><p><span><span><img src=\\"/sites/default/files/resize/remote/fd284f32f32b7f17d34ff49ce416d05d-513x500.png\\" alt=\\"In a search for Energy Audit, Concord CA we can see that only one out of the three results in a local pack has G+ reviews\\" width=\\"513\\" height=\\"500\\"></span></span></p><p>For contractors specifically, unlike some other categories, we know that (for now) buttons do include website and directions. So if you can get into the 3-pack you\'ll get some 1-click website traffic as an immediate result.</p><p>On the downside, no industry 3-packs on desktop browsers will include phone numbers. There have been a number of complaints around the web about this part of the change. We\'ll need to track the developments with this all-important piece of data for home performance. Mobile browser packs will continue to include phone numbers.</p><h4>3. You probably need to be using Adwords, as local traffic is sure to decline</h4><p>Looking at the real estate on a SERP makes it obvious that Google\'s cash cow – Adwords – rules the page. If you want to get found, it is increasingly difficult if you are not in the paid search mix. Also (and here we’re partly speculating) the day that the Local Stack is purchasable is probably not far off. Getting in the game of <a href=\\"http://www.energycircle.com/blog/2014/10/02/6-of-biggest-mistakes-adwords\\" target=\\"_blank\\">buying some of your traffic</a> is increasingly non-optional.</p><h4>4. Citations are more important than ever</h4><p>Always a key part of the local search ranking algorithms, Google will continue to use citations as a crucial means of verifying your company identity – whether for a 3-pack or whatever is next in local search. Several experts are saying that citations may be even more important to getting placed in the top 3. </p><h3>Preparing for what may be to come</h3><p>Predicting where Google is headed can be a fool\'s errand, but there are some signs in other industries that we\'re watching closely and could be coming to our sector at some point.</p><ul><li>Paid Local opportunities. We know that Google is testing paid local currently in two categories – locksmiths and plumbers. If plumbers are in the mix, then HVAC cannot be far behind.</li><li>Filter sorting with local. In the hospitality category, the local packs have the option of sortability by star rating, price and availability. While not all of these are relevant to us, the new design clearly lends itself to that kind of sorting.</li></ul><h3>What should you do?</h3><p>1. Check your rankings to find out if you\'ve fallen out of the local packs for key searches.</p><p>2. Stay focused on your Google+ reviews--get to 5 and beyond.</p><p>3. Be sure your <a href=\\"https://www.google.com/business/ce/mws/?utm_expid=101497709-8.oQy7-WxnRfuVxAoqagd3-w.1&amp;utm_referrer=https%3A%2F%2Fwww.google.com%2F\\" target=\\"_blank\\">Google + page</a> is fully optimized: categories properly selected, photos fresh, name and address listed exactly right.</p><p>4. Keep pushing on citations.</p><p>5. Keep driving for organic traffic through a diverse range of tactics – not banking on just one or two tricks.</p><p>As ever, we\'ll continue to watch these changes and will report as we learn new things. </p>",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_article_author\' => array(),
      \'field_article_image\' => array(),
      \'field_article_source\' => array(),
      \'field_article_type\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'11\',
          ),
        ),
      ),
      \'field_display_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-09-14 00:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'America/New_York\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_ref_article_case_study\' => array(),
      \'field_ref_article_product\' => array(),
      \'field_ref_article_testimonial\' => array(),
      \'field_ref_article_blog\' => array(),
      \'field_ref_article_promo\' => array(),
      \'path\' => array(
        \'pid\' => \'301\',
        \'source\' => \'node/145\',
        \'alias\' => \'article/googles-big-local-search-change\',
        \'language\' => \'und\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'145\',
            \'revision_id\' => \'164\',
            \'name\' => \'node:article:default\',
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
            \'entity_id\' => \'145\',
            \'revision_id\' => \'164\',
            \'name\' => \'node:article:default:default\',
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
                \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_display_date\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'date_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                      \'format_type\' => \'panopoly_day\',
                      \'multiple_number\' => \'\',
                      \'multiple_from\' => \'\',
                      \'multiple_to\' => \'\',
                      \'fromto\' => \'both\',
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
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                )),
                \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_author\',
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
                   \'uuid\' => \'71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                )),
                \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_image\',
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
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                )),
                \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
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
                   \'uuid\' => \'4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
                )),
                \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\',
                   \'panel\' => \'two_66_33_first\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_article_source\',
                   \'shown\' => true,
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'link_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
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
                   \'position\' => 4,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'9fb8740b-980b-4914-91b5-5daca474f7d9\',
                )),
                \'new-4422fd08-749a-4717-bf82-bb6642306f9d\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-4422fd08-749a-4717-bf82-bb6642306f9d\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_promo\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 0,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'4422fd08-749a-4717-bf82-bb6642306f9d\',
                )),
                \'new-64238565-3e44-408e-ba42-672dd0c33612\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-64238565-3e44-408e-ba42-672dd0c33612\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_blog\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 1,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'64238565-3e44-408e-ba42-672dd0c33612\',
                )),
                \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\' => 
                stdClass::__set_state(array(
                   \'pid\' => \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                   \'panel\' => \'two_66_33_second\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:field_ref_article_testimonial\',
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
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => 2,
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                )),
              ),
               \'panels\' => 
              array (
                \'two_66_33_first\' => 
                array (
                  0 => \'new-6ab20c99-b53b-4cfe-b1f5-229d0df1a2d3\',
                  1 => \'new-71d6548e-7dea-44d2-85da-6522a6f72bd5\',
                  2 => \'new-fb766eaf-df62-44a2-ae1e-7d3db8d4db0e\',
                  3 => \'new-4c95fbc1-06d5-4581-ad35-7c0de6a24998\',
                  4 => \'new-9fb8740b-980b-4914-91b5-5daca474f7d9\',
                ),
                \'two_66_33_second\' => 
                array (
                  0 => \'new-4422fd08-749a-4717-bf82-bb6642306f9d\',
                  1 => \'new-64238565-3e44-408e-ba42-672dd0c33612\',
                  2 => \'new-179ea74a-f401-4a20-8441-6fde6c8d29bb\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'new-db7980d7-e91c-4212-afed-87dfc118f603\',
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
               \'uuid\' => \'db7980d7-e91c-4212-afed-87dfc118f603\',
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
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
