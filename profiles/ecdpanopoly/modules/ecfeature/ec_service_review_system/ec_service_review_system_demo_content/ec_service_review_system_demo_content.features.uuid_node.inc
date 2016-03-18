<?php
/**
 * @file
 * ec_service_review_system_demo_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ec_service_review_system_demo_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = (object) array(
  'uid' => 1,
  'title' => 'Google+',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'sreview_site',
  'language' => 'und',
  'created' => 1458149897,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1d4948df-2bd2-4e62-a7f8-9bfc288bbefb',
  'field_sreview_logo' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'gplus.png',
        'uri' => 'public://logo/gplus.png',
        'filemime' => 'image/png',
        'filesize' => 2947,
        'status' => 1,
        'type' => 'image',
        'uuid' => '06741145-6de1-4694-8bb7-b91255a21302',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 222,
          'width' => 227,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 222,
        'width' => 227,
        'uuid_features_file_data' => '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',
      ),
    ),
  ),
  'field_sreview_page' => array(
    'und' => array(
      0 => array(
        'url' => 'plus.google.com',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_sreview_logo' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_sreview_page' => array(
      'predicates' => array(),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'content_experiments' => '',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-03-16 13:38:17 -0400',
);
  $nodes[] = (object) array(
  'uid' => 1,
  'title' => 'Our Reviews',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'panopoly_page',
  'language' => 'und',
  'created' => 1458149422,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '24ae8eb6-1e45-4b82-9c92-713fc417f2ed',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Reviews</p>',
        'summary' => '',
        'format' => 'panopoly_wysiwyg_text',
        'safe_value' => '<p>Reviews</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_featured_categories' => array(),
  'field_featured_image' => array(),
  'field_featured_status' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_button_text' => array(),
  'field_call_to_action' => array(),
  'field_featured_video' => array(),
  'field_ref_to_cta_form' => array(),
  'field_a_b_test_page' => array(),
  'field_ref_page_blog' => array(),
  'field_ref_page_case_study' => array(),
  'field_ref_page_testimonial' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'panelizer' => array(
    'page_manager' => (object) array(
      'entity_type' => 'node',
      'entity_id' => 4,
      'revision_id' => 4,
      'name' => 'node:panopoly_page:default',
      'no_blocks' => 0,
      'css_id' => 'page-page',
      'css' => '',
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => '',
      'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:5:{s:40:"new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1";O:8:"stdClass":14:{s:3:"pid";s:40:"new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:25:"node:field_featured_image";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:2:{s:10:"image_link";s:7:"content";s:11:"image_style";s:19:"panopoly_image_half";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"34b4f35e-bc4b-4819-905c-6b6bf84bffe1";}s:40:"new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b";O:8:"stdClass":14:{s:3:"pid";s:40:"new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"text_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:1:{s:11:"trim_length";s:3:"250";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}s:4:"uuid";s:36:"59cafe99-f0a0-4a3a-a13f-8f108d69d18b";}s:40:"new-f3bf9c22-9b22-41d2-a57e-110951093871";O:8:"stdClass":14:{s:3:"pid";s:40:"new-f3bf9c22-9b22-41d2-a57e-110951093871";s:5:"panel";s:11:"contentmain";s:4:"type";s:10:"node_links";s:7:"subtype";s:10:"node_links";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:6:{s:14:"override_title";b:0;s:19:"override_title_text";s:0:"";s:10:"build_mode";s:8:"featured";s:10:"identifier";s:0:"";s:4:"link";b:1;s:7:"context";s:9:"panelizer";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:1:{s:9:"css_class";s:12:"link-wrapper";}s:6:"extras";a:0:{}s:8:"position";i:2;s:5:"locks";a:0:{}s:4:"uuid";s:36:"f3bf9c22-9b22-41d2-a57e-110951093871";}s:40:"new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71";O:8:"stdClass":14:{s:3:"pid";s:40:"new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:30:"node:field_featured_categories";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"inline";s:9:"formatter";s:28:"taxonomy_term_reference_link";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:3;s:5:"locks";a:0:{}s:4:"uuid";s:36:"0a2c7b96-5f45-4e85-8e00-88fee50f4f71";}s:40:"new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1";O:8:"stdClass":14:{s:3:"pid";s:40:"new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1";s:5:"panel";s:7:"sidebar";s:4:"type";s:9:"menu_tree";s:7:"subtype";s:9:"main-menu";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:11:{s:9:"menu_name";s:9:"main-menu";s:11:"parent_mlid";s:1:"0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";s:1:"2";s:6:"follow";i:0;s:5:"depth";i:0;s:8:"expanded";i:1;s:4:"sort";i:0;s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1";}}s:6:"panels";a:2:{s:11:"contentmain";a:4:{i:0;s:40:"new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1";i:1;s:40:"new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b";i:2;s:40:"new-f3bf9c22-9b22-41d2-a57e-110951093871";i:3;s:40:"new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71";}s:7:"sidebar";a:1:{i:0;s:40:"new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:40:"new-16346c80-6fcf-4cee-bf7a-9c0173fc2916";s:8:"renderer";s:8:"standard";s:6:"layout";s:12:"radix_bryant";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:5:{s:7:"default";N;s:7:"column1";N;s:7:"column2";N;s:7:"sidebar";N;s:11:"contentmain";N;}}s:5:"cache";a:0:{}s:5:"title";s:11:"%node:title";s:4:"uuid";s:36:"16346c80-6fcf-4cee-bf7a-9c0173fc2916";s:10:"hide_title";i:0;s:10:"title_pane";s:40:"new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1";}'),
    ),
    'default' => (object) array(
      'entity_type' => 'node',
      'entity_id' => 4,
      'revision_id' => 4,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 2,
      'view_mode' => 'default',
      'css_class' => 'page-default',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => '',
      'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:5:{i:41;O:8:"stdClass":15:{s:3:"pid";s:2:"41";s:3:"did";s:1:"2";s:5:"panel";s:15:"two_66_33_first";s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";s:5:"shown";s:1:"1";s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"text_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:9:"panelizer";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";s:1:"0";s:5:"locks";a:0:{}s:4:"uuid";s:36:"74f82699-93ba-4b15-8bcf-e3bfa1894d40";}i:42;O:8:"stdClass":15:{s:3:"pid";s:2:"42";s:3:"did";s:1:"2";s:5:"panel";s:15:"two_66_33_first";s:4:"type";s:11:"views_panes";s:7:"subtype";s:32:"hero_image_or_video-panel_pane_1";s:5:"shown";s:1:"1";s:6:"access";a:0:{}s:13:"configuration";a:3:{s:13:"view_settings";s:6:"fields";s:11:"header_type";s:4:"none";s:9:"view_mode";s:6:"teaser";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";s:1:"1";s:5:"locks";a:0:{}s:4:"uuid";s:36:"ab6d95ae-008b-48ab-84b4-0b3c475b7fa4";}i:43;O:8:"stdClass":15:{s:3:"pid";s:2:"43";s:3:"did";s:1:"2";s:5:"panel";s:15:"two_66_33_first";s:4:"type";s:11:"views_panes";s:7:"subtype";s:29:"sreviews_average-panel_pane_1";s:5:"shown";s:1:"1";s:6:"access";a:0:{}s:13:"configuration";a:3:{s:13:"view_settings";s:6:"fields";s:11:"header_type";s:4:"none";s:9:"view_mode";s:4:"full";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";s:1:"2";s:5:"locks";a:0:{}s:4:"uuid";s:36:"49283d54-bdda-418b-a905-49d56fa5d45c";}i:44;O:8:"stdClass":15:{s:3:"pid";s:2:"44";s:3:"did";s:1:"2";s:5:"panel";s:15:"two_66_33_first";s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"sreviews-panel_pane_1";s:5:"shown";s:1:"1";s:6:"access";a:0:{}s:13:"configuration";a:3:{s:13:"view_settings";s:6:"fields";s:11:"header_type";s:4:"none";s:9:"view_mode";s:4:"full";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";s:1:"3";s:5:"locks";a:0:{}s:4:"uuid";s:36:"69d41b08-9214-4d76-93f4-426cc90968da";}i:45;O:8:"stdClass":15:{s:3:"pid";s:2:"45";s:3:"did";s:1:"2";s:5:"panel";s:16:"two_66_33_second";s:4:"type";s:9:"menu_tree";s:7:"subtype";s:9:"main-menu";s:5:"shown";s:1:"1";s:6:"access";a:0:{}s:13:"configuration";a:14:{s:9:"menu_name";s:9:"main-menu";s:11:"parent_mlid";i:0;s:6:"parent";s:11:"main-menu:0";s:10:"title_link";i:1;s:11:"admin_title";s:0:"";s:5:"level";i:2;s:6:"follow";i:0;s:5:"depth";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";s:14:"depth_relative";i:0;}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";s:1:"0";s:5:"locks";a:0:{}s:4:"uuid";s:36:"b92fd697-8377-4b5e-87cc-d81df0e7e61d";}}s:6:"panels";a:2:{s:15:"two_66_33_first";a:4:{i:0;s:2:"41";i:1;s:2:"42";i:2;s:2:"43";i:3;s:2:"44";}s:16:"two_66_33_second";a:1:{i:0;s:2:"45";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:1:"2";s:8:"renderer";s:8:"standard";s:6:"layout";s:9:"two_66_33";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:7:{s:7:"default";N;s:7:"sidebar";N;s:11:"contentmain";N;s:16:"two_66_33_bottom";N;s:15:"two_66_33_first";N;s:16:"two_66_33_second";N;s:13:"two_66_33_top";N;}}s:5:"cache";a:0:{}s:5:"title";s:11:"%node:title";s:10:"hide_title";s:1:"1";s:10:"title_pane";s:1:"0";s:4:"uuid";s:36:"10c9e351-f69c-4629-b191-77b8b01f4f1c";}'),
    ),
    'teaser' => (object) array(
      'entity_type' => 'node',
      'entity_id' => 4,
      'revision_id' => 4,
      'name' => 'node:panopoly_page:default:teaser',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'teaser',
      'css_class' => 'page-teaser',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => '',
      'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:3:{s:40:"new-873d60d8-f80e-41c1-b89d-86ad219285e8";O:8:"stdClass":14:{s:3:"pid";s:40:"new-873d60d8-f80e-41c1-b89d-86ad219285e8";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:25:"node:field_featured_image";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:2:{s:10:"image_link";s:7:"content";s:11:"image_style";s:22:"panopoly_image_quarter";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"873d60d8-f80e-41c1-b89d-86ad219285e8";}s:40:"new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68";O:8:"stdClass":14:{s:3:"pid";s:40:"new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:23:"text_summary_or_trimmed";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:1:{s:11:"trim_length";s:3:"600";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}s:4:"uuid";s:36:"9363564d-7f96-4fa2-a1a5-5b0f5f60ce68";}s:40:"new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8";O:8:"stdClass":14:{s:3:"pid";s:40:"new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8";s:5:"panel";s:11:"contentmain";s:4:"type";s:10:"node_links";s:7:"subtype";s:10:"node_links";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:6:{s:14:"override_title";b:0;s:19:"override_title_text";s:0:"";s:10:"build_mode";s:6:"teaser";s:10:"identifier";s:0:"";s:4:"link";b:1;s:7:"context";s:9:"panelizer";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:1:{s:9:"css_class";s:12:"link-wrapper";}s:6:"extras";a:0:{}s:8:"position";i:2;s:5:"locks";a:0:{}s:4:"uuid";s:36:"e7b29d80-ad23-4c5d-85fd-13f7a038e3d8";}}s:6:"panels";a:1:{s:11:"contentmain";a:3:{i:0;s:40:"new-873d60d8-f80e-41c1-b89d-86ad219285e8";i:1;s:40:"new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68";i:2;s:40:"new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:40:"new-f76cbd0c-d182-4bd2-96f2-f1759b4e69d8";s:8:"renderer";s:8:"standard";s:6:"layout";s:12:"radix_boxton";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:2:{s:7:"default";N;s:11:"contentmain";N;}}s:5:"cache";a:0:{}s:5:"title";s:11:"%node:title";s:4:"uuid";s:36:"f76cbd0c-d182-4bd2-96f2-f1759b4e69d8";s:10:"hide_title";i:0;s:10:"title_pane";s:1:"0";}'),
    ),
    'featured' => (object) array(
      'entity_type' => 'node',
      'entity_id' => 4,
      'revision_id' => 4,
      'name' => 'node:panopoly_page:default:featured',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'featured',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => '',
      'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:4:{s:40:"new-af46907d-aa25-43db-995b-b38f9174221e";O:8:"stdClass":14:{s:3:"pid";s:40:"new-af46907d-aa25-43db-995b-b38f9174221e";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:25:"node:field_featured_image";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:2:{s:10:"image_link";s:7:"content";s:11:"image_style";s:19:"panopoly_image_half";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"af46907d-aa25-43db-995b-b38f9174221e";}s:40:"new-1ee1b165-ebd0-4115-ad5e-49df79509f82";O:8:"stdClass":14:{s:3:"pid";s:40:"new-1ee1b165-ebd0-4115-ad5e-49df79509f82";s:5:"panel";s:11:"contentmain";s:4:"type";s:10:"node_title";s:7:"subtype";s:10:"node_title";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:4:{s:4:"link";i:1;s:7:"context";s:9:"panelizer";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}s:4:"uuid";s:36:"1ee1b165-ebd0-4115-ad5e-49df79509f82";}s:40:"new-a71dc705-b195-439c-b47b-980d8c7fa155";O:8:"stdClass":14:{s:3:"pid";s:40:"new-a71dc705-b195-439c-b47b-980d8c7fa155";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:23:"text_summary_or_trimmed";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:1:{s:11:"trim_length";s:3:"250";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:2;s:5:"locks";a:0:{}s:4:"uuid";s:36:"a71dc705-b195-439c-b47b-980d8c7fa155";}s:40:"new-1d6308c6-817d-4465-ac63-fa7acca627aa";O:8:"stdClass":14:{s:3:"pid";s:40:"new-1d6308c6-817d-4465-ac63-fa7acca627aa";s:5:"panel";s:11:"contentmain";s:4:"type";s:10:"node_links";s:7:"subtype";s:10:"node_links";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:6:{s:14:"override_title";b:0;s:19:"override_title_text";s:0:"";s:10:"build_mode";s:8:"featured";s:10:"identifier";s:0:"";s:4:"link";b:1;s:7:"context";s:9:"panelizer";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:1:{s:9:"css_class";s:12:"link-wrapper";}s:6:"extras";a:0:{}s:8:"position";i:3;s:5:"locks";a:0:{}s:4:"uuid";s:36:"1d6308c6-817d-4465-ac63-fa7acca627aa";}}s:6:"panels";a:1:{s:11:"contentmain";a:4:{i:0;s:40:"new-af46907d-aa25-43db-995b-b38f9174221e";i:1;s:40:"new-1ee1b165-ebd0-4115-ad5e-49df79509f82";i:2;s:40:"new-a71dc705-b195-439c-b47b-980d8c7fa155";i:3;s:40:"new-1d6308c6-817d-4465-ac63-fa7acca627aa";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:40:"new-5b7d08f9-c351-427e-8015-14433221537b";s:8:"renderer";s:8:"standard";s:6:"layout";s:12:"radix_boxton";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:4:{s:7:"default";N;s:7:"column1";N;s:7:"column2";N;s:11:"contentmain";N;}}s:5:"cache";a:0:{}s:5:"title";s:11:"%node:title";s:4:"uuid";s:36:"5b7d08f9-c351-427e-8015-14433221537b";s:10:"hide_title";i:1;s:10:"title_pane";s:1:"0";}'),
    ),
  ),
  'content_experiments' => '',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-03-16 13:30:22 -0400',
);
  $nodes[] = (object) array(
  'uid' => 1,
  'title' => 'Service Review Sites',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'panopoly_page',
  'language' => 'und',
  'created' => 1458150747,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '360bfcc9-4b91-4a2a-939a-de88e4bb060b',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Service review sites</p>',
        'summary' => '',
        'format' => 'panopoly_wysiwyg_text',
        'safe_value' => '<p>Service review sites</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_featured_categories' => array(),
  'field_featured_image' => array(),
  'field_featured_status' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_button_text' => array(),
  'field_call_to_action' => array(),
  'field_featured_video' => array(),
  'field_ref_to_cta_form' => array(),
  'field_a_b_test_page' => array(),
  'field_ref_page_blog' => array(),
  'field_ref_page_case_study' => array(),
  'field_ref_page_testimonial' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'panelizer' => array(
    'default' => (object) array(
      'entity_type' => 'node',
      'entity_id' => 10,
      'revision_id' => 10,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 5,
      'view_mode' => 'default',
      'css_class' => 'page-default',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => '',
      'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:4:{i:54;O:8:"stdClass":15:{s:3:"pid";s:2:"54";s:3:"did";s:1:"5";s:5:"panel";s:15:"two_66_33_first";s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";s:5:"shown";s:1:"1";s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"text_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:9:"panelizer";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";s:1:"0";s:5:"locks";a:0:{}s:4:"uuid";s:36:"74f82699-93ba-4b15-8bcf-e3bfa1894d40";}i:55;O:8:"stdClass":15:{s:3:"pid";s:2:"55";s:3:"did";s:1:"5";s:5:"panel";s:15:"two_66_33_first";s:4:"type";s:11:"views_panes";s:7:"subtype";s:32:"hero_image_or_video-panel_pane_1";s:5:"shown";s:1:"1";s:6:"access";a:0:{}s:13:"configuration";a:3:{s:13:"view_settings";s:6:"fields";s:11:"header_type";s:4:"none";s:9:"view_mode";s:6:"teaser";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";s:1:"1";s:5:"locks";a:0:{}s:4:"uuid";s:36:"ab6d95ae-008b-48ab-84b4-0b3c475b7fa4";}i:58;O:8:"stdClass":15:{s:3:"pid";s:2:"58";s:3:"did";s:1:"5";s:5:"panel";s:15:"two_66_33_first";s:4:"type";s:11:"views_panes";s:7:"subtype";s:34:"services_review_sites-panel_pane_1";s:5:"shown";s:1:"1";s:6:"access";a:0:{}s:13:"configuration";a:3:{s:13:"view_settings";s:6:"fields";s:11:"header_type";s:4:"none";s:9:"view_mode";s:6:"teaser";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";s:1:"2";s:5:"locks";a:0:{}s:4:"uuid";s:36:"53598a41-d26e-4487-a7b5-13e27406c636";}i:57;O:8:"stdClass":15:{s:3:"pid";s:2:"57";s:3:"did";s:1:"5";s:5:"panel";s:16:"two_66_33_second";s:4:"type";s:9:"menu_tree";s:7:"subtype";s:9:"main-menu";s:5:"shown";s:1:"1";s:6:"access";a:0:{}s:13:"configuration";a:14:{s:9:"menu_name";s:9:"main-menu";s:11:"parent_mlid";i:0;s:6:"parent";s:11:"main-menu:0";s:10:"title_link";i:1;s:11:"admin_title";s:0:"";s:5:"level";i:2;s:6:"follow";i:0;s:5:"depth";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";s:14:"depth_relative";i:0;}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";s:1:"0";s:5:"locks";a:0:{}s:4:"uuid";s:36:"b92fd697-8377-4b5e-87cc-d81df0e7e61d";}}s:6:"panels";a:2:{s:15:"two_66_33_first";a:3:{i:0;s:2:"54";i:1;s:2:"55";i:2;s:2:"58";}s:16:"two_66_33_second";a:1:{i:0;s:2:"57";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:1:"5";s:8:"renderer";s:8:"standard";s:6:"layout";s:9:"two_66_33";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:7:{s:7:"default";N;s:7:"sidebar";N;s:11:"contentmain";N;s:16:"two_66_33_bottom";N;s:15:"two_66_33_first";N;s:16:"two_66_33_second";N;s:13:"two_66_33_top";N;}}s:5:"cache";a:0:{}s:5:"title";s:11:"%node:title";s:10:"hide_title";s:1:"1";s:10:"title_pane";s:1:"0";s:4:"uuid";s:36:"10c9e351-f69c-4629-b191-77b8b01f4f1c";}'),
    ),
    'page_manager' => (object) array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'node:panopoly_page:default',
      'title' => 'Default',
      'panelizer_type' => 'node',
      'panelizer_key' => 'panopoly_page',
      'no_blocks' => FALSE,
      'css_id' => 'page-page',
      'css' => '',
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'access' => '',
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => TRUE,
      'extra' => '',
      'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:5:{s:40:"new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1";O:8:"stdClass":14:{s:3:"pid";s:40:"new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:25:"node:field_featured_image";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:2:{s:10:"image_link";s:7:"content";s:11:"image_style";s:19:"panopoly_image_half";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"34b4f35e-bc4b-4819-905c-6b6bf84bffe1";}s:40:"new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b";O:8:"stdClass":14:{s:3:"pid";s:40:"new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"text_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:1:{s:11:"trim_length";s:3:"250";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}s:4:"uuid";s:36:"59cafe99-f0a0-4a3a-a13f-8f108d69d18b";}s:40:"new-f3bf9c22-9b22-41d2-a57e-110951093871";O:8:"stdClass":14:{s:3:"pid";s:40:"new-f3bf9c22-9b22-41d2-a57e-110951093871";s:5:"panel";s:11:"contentmain";s:4:"type";s:10:"node_links";s:7:"subtype";s:10:"node_links";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:6:{s:14:"override_title";b:0;s:19:"override_title_text";s:0:"";s:10:"build_mode";s:8:"featured";s:10:"identifier";s:0:"";s:4:"link";b:1;s:7:"context";s:9:"panelizer";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:1:{s:9:"css_class";s:12:"link-wrapper";}s:6:"extras";a:0:{}s:8:"position";i:2;s:5:"locks";a:0:{}s:4:"uuid";s:36:"f3bf9c22-9b22-41d2-a57e-110951093871";}s:40:"new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71";O:8:"stdClass":14:{s:3:"pid";s:40:"new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:30:"node:field_featured_categories";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"inline";s:9:"formatter";s:28:"taxonomy_term_reference_link";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:3;s:5:"locks";a:0:{}s:4:"uuid";s:36:"0a2c7b96-5f45-4e85-8e00-88fee50f4f71";}s:40:"new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1";O:8:"stdClass":14:{s:3:"pid";s:40:"new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1";s:5:"panel";s:7:"sidebar";s:4:"type";s:9:"menu_tree";s:7:"subtype";s:9:"main-menu";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:11:{s:9:"menu_name";s:9:"main-menu";s:11:"parent_mlid";s:1:"0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";s:1:"2";s:6:"follow";i:0;s:5:"depth";i:0;s:8:"expanded";i:1;s:4:"sort";i:0;s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1";}}s:6:"panels";a:2:{s:11:"contentmain";a:4:{i:0;s:40:"new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1";i:1;s:40:"new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b";i:2;s:40:"new-f3bf9c22-9b22-41d2-a57e-110951093871";i:3;s:40:"new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71";}s:7:"sidebar";a:1:{i:0;s:40:"new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:40:"new-16346c80-6fcf-4cee-bf7a-9c0173fc2916";s:8:"renderer";s:8:"standard";s:6:"layout";s:12:"radix_bryant";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:5:{s:7:"default";N;s:7:"column1";N;s:7:"column2";N;s:7:"sidebar";N;s:11:"contentmain";N;}}s:5:"cache";a:0:{}s:5:"title";s:11:"%node:title";s:4:"uuid";s:36:"16346c80-6fcf-4cee-bf7a-9c0173fc2916";s:10:"hide_title";i:0;s:10:"title_pane";s:40:"new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1";}'),
      'export_module' => 'panopoly_pages',
      'type' => 'Overridden',
      'export_type' => 2,
      'in_code_only' => TRUE,
      'table' => 'panelizer_defaults',
      'did' => NULL,
    ),
    'teaser' => (object) array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'node:panopoly_page:default:teaser',
      'title' => 'Default',
      'panelizer_type' => 'node',
      'panelizer_key' => 'panopoly_page',
      'no_blocks' => FALSE,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'access' => array(),
      'view_mode' => 'teaser',
      'css_class' => 'page-teaser',
      'title_element' => 'H2',
      'link_to_entity' => TRUE,
      'extra' => '',
      'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:3:{s:40:"new-873d60d8-f80e-41c1-b89d-86ad219285e8";O:8:"stdClass":14:{s:3:"pid";s:40:"new-873d60d8-f80e-41c1-b89d-86ad219285e8";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:25:"node:field_featured_image";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:2:{s:10:"image_link";s:7:"content";s:11:"image_style";s:22:"panopoly_image_quarter";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"873d60d8-f80e-41c1-b89d-86ad219285e8";}s:40:"new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68";O:8:"stdClass":14:{s:3:"pid";s:40:"new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:23:"text_summary_or_trimmed";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:1:{s:11:"trim_length";s:3:"600";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}s:4:"uuid";s:36:"9363564d-7f96-4fa2-a1a5-5b0f5f60ce68";}s:40:"new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8";O:8:"stdClass":14:{s:3:"pid";s:40:"new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8";s:5:"panel";s:11:"contentmain";s:4:"type";s:10:"node_links";s:7:"subtype";s:10:"node_links";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:6:{s:14:"override_title";b:0;s:19:"override_title_text";s:0:"";s:10:"build_mode";s:6:"teaser";s:10:"identifier";s:0:"";s:4:"link";b:1;s:7:"context";s:9:"panelizer";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:1:{s:9:"css_class";s:12:"link-wrapper";}s:6:"extras";a:0:{}s:8:"position";i:2;s:5:"locks";a:0:{}s:4:"uuid";s:36:"e7b29d80-ad23-4c5d-85fd-13f7a038e3d8";}}s:6:"panels";a:1:{s:11:"contentmain";a:3:{i:0;s:40:"new-873d60d8-f80e-41c1-b89d-86ad219285e8";i:1;s:40:"new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68";i:2;s:40:"new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:40:"new-f76cbd0c-d182-4bd2-96f2-f1759b4e69d8";s:8:"renderer";s:8:"standard";s:6:"layout";s:12:"radix_boxton";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:2:{s:7:"default";N;s:11:"contentmain";N;}}s:5:"cache";a:0:{}s:5:"title";s:11:"%node:title";s:4:"uuid";s:36:"f76cbd0c-d182-4bd2-96f2-f1759b4e69d8";s:10:"hide_title";i:0;s:10:"title_pane";s:1:"0";}'),
      'export_module' => 'panopoly_pages',
      'type' => 'Overridden',
      'export_type' => 2,
      'in_code_only' => TRUE,
      'table' => 'panelizer_defaults',
      'did' => NULL,
    ),
    'featured' => (object) array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'node:panopoly_page:default:featured',
      'title' => 'Default',
      'panelizer_type' => 'node',
      'panelizer_key' => 'panopoly_page',
      'no_blocks' => FALSE,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'access' => array(),
      'view_mode' => 'featured',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => TRUE,
      'extra' => '',
      'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:4:{s:40:"new-af46907d-aa25-43db-995b-b38f9174221e";O:8:"stdClass":14:{s:3:"pid";s:40:"new-af46907d-aa25-43db-995b-b38f9174221e";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:25:"node:field_featured_image";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:2:{s:10:"image_link";s:7:"content";s:11:"image_style";s:19:"panopoly_image_half";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"af46907d-aa25-43db-995b-b38f9174221e";}s:40:"new-1ee1b165-ebd0-4115-ad5e-49df79509f82";O:8:"stdClass":14:{s:3:"pid";s:40:"new-1ee1b165-ebd0-4115-ad5e-49df79509f82";s:5:"panel";s:11:"contentmain";s:4:"type";s:10:"node_title";s:7:"subtype";s:10:"node_title";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:4:{s:4:"link";i:1;s:7:"context";s:9:"panelizer";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}s:4:"uuid";s:36:"1ee1b165-ebd0-4115-ad5e-49df79509f82";}s:40:"new-a71dc705-b195-439c-b47b-980d8c7fa155";O:8:"stdClass":14:{s:3:"pid";s:40:"new-a71dc705-b195-439c-b47b-980d8c7fa155";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:23:"text_summary_or_trimmed";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:1:{s:11:"trim_length";s:3:"250";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:2;s:5:"locks";a:0:{}s:4:"uuid";s:36:"a71dc705-b195-439c-b47b-980d8c7fa155";}s:40:"new-1d6308c6-817d-4465-ac63-fa7acca627aa";O:8:"stdClass":14:{s:3:"pid";s:40:"new-1d6308c6-817d-4465-ac63-fa7acca627aa";s:5:"panel";s:11:"contentmain";s:4:"type";s:10:"node_links";s:7:"subtype";s:10:"node_links";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:6:{s:14:"override_title";b:0;s:19:"override_title_text";s:0:"";s:10:"build_mode";s:8:"featured";s:10:"identifier";s:0:"";s:4:"link";b:1;s:7:"context";s:9:"panelizer";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:1:{s:9:"css_class";s:12:"link-wrapper";}s:6:"extras";a:0:{}s:8:"position";i:3;s:5:"locks";a:0:{}s:4:"uuid";s:36:"1d6308c6-817d-4465-ac63-fa7acca627aa";}}s:6:"panels";a:1:{s:11:"contentmain";a:4:{i:0;s:40:"new-af46907d-aa25-43db-995b-b38f9174221e";i:1;s:40:"new-1ee1b165-ebd0-4115-ad5e-49df79509f82";i:2;s:40:"new-a71dc705-b195-439c-b47b-980d8c7fa155";i:3;s:40:"new-1d6308c6-817d-4465-ac63-fa7acca627aa";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:40:"new-5b7d08f9-c351-427e-8015-14433221537b";s:8:"renderer";s:8:"standard";s:6:"layout";s:12:"radix_boxton";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:4:{s:7:"default";N;s:7:"column1";N;s:7:"column2";N;s:11:"contentmain";N;}}s:5:"cache";a:0:{}s:5:"title";s:11:"%node:title";s:4:"uuid";s:36:"5b7d08f9-c351-427e-8015-14433221537b";s:10:"hide_title";i:1;s:10:"title_pane";s:1:"0";}'),
      'export_module' => 'panopoly_pages',
      'type' => 'Overridden',
      'export_type' => 2,
      'in_code_only' => TRUE,
      'table' => 'panelizer_defaults',
      'did' => NULL,
    ),
  ),
  'content_experiments' => '',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-03-16 13:52:27 -0400',
);
  $nodes[] = (object) array(
  'uid' => 1,
  'title' => 'Angie\'s List',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'sreview_site',
  'language' => 'und',
  'created' => 1458149844,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8ab7ab21-7a7f-4e3f-a7ae-09e61410a1dc',
  'field_sreview_logo' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'ang.png',
        'uri' => 'public://logo/ang.png',
        'filemime' => 'image/png',
        'filesize' => 2705,
        'status' => 1,
        'type' => 'image',
        'uuid' => '2c999cc8-2f43-4b9a-888f-b444903f413c',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 159,
          'width' => 318,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 159,
        'width' => 318,
        'uuid_features_file_data' => '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',
      ),
    ),
  ),
  'field_sreview_page' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.angieslist.com/',
        'title' => '',
        'attributes' => array(),
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_sreview_logo' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_sreview_page' => array(
      'predicates' => array(),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'content_experiments' => '',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-03-16 13:37:24 -0400',
);
  $nodes[] = (object) array(
  'uid' => 1,
  'title' => 'Leave a Service Review',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'panopoly_page',
  'language' => 'und',
  'created' => 1458149584,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'eb3e9179-c5f9-4a3f-95c0-7063532b26c2',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Leave us a review.</p>',
        'summary' => '',
        'format' => 'panopoly_wysiwyg_text',
        'safe_value' => '<p>Leave us a review.</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_featured_categories' => array(),
  'field_featured_image' => array(),
  'field_featured_status' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_button_text' => array(),
  'field_call_to_action' => array(),
  'field_featured_video' => array(),
  'field_ref_to_cta_form' => array(),
  'field_a_b_test_page' => array(),
  'field_ref_page_blog' => array(),
  'field_ref_page_case_study' => array(),
  'field_ref_page_testimonial' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'panelizer' => array(
    'page_manager' => (object) array(
      'entity_type' => 'node',
      'entity_id' => 6,
      'revision_id' => 6,
      'name' => 'node:panopoly_page:default',
      'no_blocks' => 0,
      'css_id' => 'page-page',
      'css' => '',
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => '',
      'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:5:{s:40:"new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1";O:8:"stdClass":14:{s:3:"pid";s:40:"new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:25:"node:field_featured_image";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:2:{s:10:"image_link";s:7:"content";s:11:"image_style";s:19:"panopoly_image_half";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"34b4f35e-bc4b-4819-905c-6b6bf84bffe1";}s:40:"new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b";O:8:"stdClass":14:{s:3:"pid";s:40:"new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"text_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:1:{s:11:"trim_length";s:3:"250";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}s:4:"uuid";s:36:"59cafe99-f0a0-4a3a-a13f-8f108d69d18b";}s:40:"new-f3bf9c22-9b22-41d2-a57e-110951093871";O:8:"stdClass":14:{s:3:"pid";s:40:"new-f3bf9c22-9b22-41d2-a57e-110951093871";s:5:"panel";s:11:"contentmain";s:4:"type";s:10:"node_links";s:7:"subtype";s:10:"node_links";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:6:{s:14:"override_title";b:0;s:19:"override_title_text";s:0:"";s:10:"build_mode";s:8:"featured";s:10:"identifier";s:0:"";s:4:"link";b:1;s:7:"context";s:9:"panelizer";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:1:{s:9:"css_class";s:12:"link-wrapper";}s:6:"extras";a:0:{}s:8:"position";i:2;s:5:"locks";a:0:{}s:4:"uuid";s:36:"f3bf9c22-9b22-41d2-a57e-110951093871";}s:40:"new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71";O:8:"stdClass":14:{s:3:"pid";s:40:"new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:30:"node:field_featured_categories";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"inline";s:9:"formatter";s:28:"taxonomy_term_reference_link";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:3;s:5:"locks";a:0:{}s:4:"uuid";s:36:"0a2c7b96-5f45-4e85-8e00-88fee50f4f71";}s:40:"new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1";O:8:"stdClass":14:{s:3:"pid";s:40:"new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1";s:5:"panel";s:7:"sidebar";s:4:"type";s:9:"menu_tree";s:7:"subtype";s:9:"main-menu";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:11:{s:9:"menu_name";s:9:"main-menu";s:11:"parent_mlid";s:1:"0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";s:1:"2";s:6:"follow";i:0;s:5:"depth";i:0;s:8:"expanded";i:1;s:4:"sort";i:0;s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1";}}s:6:"panels";a:2:{s:11:"contentmain";a:4:{i:0;s:40:"new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1";i:1;s:40:"new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b";i:2;s:40:"new-f3bf9c22-9b22-41d2-a57e-110951093871";i:3;s:40:"new-0a2c7b96-5f45-4e85-8e00-88fee50f4f71";}s:7:"sidebar";a:1:{i:0;s:40:"new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:40:"new-16346c80-6fcf-4cee-bf7a-9c0173fc2916";s:8:"renderer";s:8:"standard";s:6:"layout";s:12:"radix_bryant";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:5:{s:7:"default";N;s:7:"column1";N;s:7:"column2";N;s:7:"sidebar";N;s:11:"contentmain";N;}}s:5:"cache";a:0:{}s:5:"title";s:11:"%node:title";s:4:"uuid";s:36:"16346c80-6fcf-4cee-bf7a-9c0173fc2916";s:10:"hide_title";i:0;s:10:"title_pane";s:40:"new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1";}'),
    ),
    'default' => (object) array(
      'entity_type' => 'node',
      'entity_id' => 6,
      'revision_id' => 6,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 4,
      'view_mode' => 'default',
      'css_class' => 'page-default',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => '',
      'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:4:{i:50;O:8:"stdClass":15:{s:3:"pid";s:2:"50";s:3:"did";s:1:"4";s:5:"panel";s:15:"two_66_33_first";s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";s:5:"shown";s:1:"1";s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"text_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:9:"panelizer";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";s:1:"0";s:5:"locks";a:0:{}s:4:"uuid";s:36:"74f82699-93ba-4b15-8bcf-e3bfa1894d40";}i:51;O:8:"stdClass":15:{s:3:"pid";s:2:"51";s:3:"did";s:1:"4";s:5:"panel";s:15:"two_66_33_first";s:4:"type";s:11:"views_panes";s:7:"subtype";s:32:"hero_image_or_video-panel_pane_1";s:5:"shown";s:1:"1";s:6:"access";a:0:{}s:13:"configuration";a:3:{s:13:"view_settings";s:6:"fields";s:11:"header_type";s:4:"none";s:9:"view_mode";s:6:"teaser";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";s:1:"1";s:5:"locks";a:0:{}s:4:"uuid";s:36:"ab6d95ae-008b-48ab-84b4-0b3c475b7fa4";}i:52;O:8:"stdClass":15:{s:3:"pid";s:2:"52";s:3:"did";s:1:"4";s:5:"panel";s:15:"two_66_33_first";s:4:"type";s:5:"block";s:7:"subtype";s:24:"entityform_block-sreview";s:5:"shown";s:1:"1";s:6:"access";a:0:{}s:13:"configuration";a:3:{s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";s:1:"2";s:5:"locks";a:0:{}s:4:"uuid";s:36:"f745611d-73a9-4242-a0d0-5a916e7e1e23";}i:53;O:8:"stdClass":15:{s:3:"pid";s:2:"53";s:3:"did";s:1:"4";s:5:"panel";s:16:"two_66_33_second";s:4:"type";s:9:"menu_tree";s:7:"subtype";s:9:"main-menu";s:5:"shown";s:1:"1";s:6:"access";a:0:{}s:13:"configuration";a:14:{s:9:"menu_name";s:9:"main-menu";s:11:"parent_mlid";i:0;s:6:"parent";s:11:"main-menu:0";s:10:"title_link";i:1;s:11:"admin_title";s:0:"";s:5:"level";i:2;s:6:"follow";i:0;s:5:"depth";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";s:14:"depth_relative";i:0;}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";s:1:"0";s:5:"locks";a:0:{}s:4:"uuid";s:36:"b92fd697-8377-4b5e-87cc-d81df0e7e61d";}}s:6:"panels";a:2:{s:15:"two_66_33_first";a:3:{i:0;s:2:"50";i:1;s:2:"51";i:2;s:2:"52";}s:16:"two_66_33_second";a:1:{i:0;s:2:"53";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:1:"4";s:8:"renderer";s:8:"standard";s:6:"layout";s:9:"two_66_33";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:7:{s:7:"default";N;s:7:"sidebar";N;s:11:"contentmain";N;s:16:"two_66_33_bottom";N;s:15:"two_66_33_first";N;s:16:"two_66_33_second";N;s:13:"two_66_33_top";N;}}s:5:"cache";a:0:{}s:5:"title";s:11:"%node:title";s:10:"hide_title";s:1:"1";s:10:"title_pane";s:1:"0";s:4:"uuid";s:36:"10c9e351-f69c-4629-b191-77b8b01f4f1c";}'),
    ),
    'teaser' => (object) array(
      'entity_type' => 'node',
      'entity_id' => 6,
      'revision_id' => 6,
      'name' => 'node:panopoly_page:default:teaser',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'teaser',
      'css_class' => 'page-teaser',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => '',
      'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:3:{s:40:"new-873d60d8-f80e-41c1-b89d-86ad219285e8";O:8:"stdClass":14:{s:3:"pid";s:40:"new-873d60d8-f80e-41c1-b89d-86ad219285e8";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:25:"node:field_featured_image";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:2:{s:10:"image_link";s:7:"content";s:11:"image_style";s:22:"panopoly_image_quarter";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"873d60d8-f80e-41c1-b89d-86ad219285e8";}s:40:"new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68";O:8:"stdClass":14:{s:3:"pid";s:40:"new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:23:"text_summary_or_trimmed";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:1:{s:11:"trim_length";s:3:"600";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}s:4:"uuid";s:36:"9363564d-7f96-4fa2-a1a5-5b0f5f60ce68";}s:40:"new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8";O:8:"stdClass":14:{s:3:"pid";s:40:"new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8";s:5:"panel";s:11:"contentmain";s:4:"type";s:10:"node_links";s:7:"subtype";s:10:"node_links";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:6:{s:14:"override_title";b:0;s:19:"override_title_text";s:0:"";s:10:"build_mode";s:6:"teaser";s:10:"identifier";s:0:"";s:4:"link";b:1;s:7:"context";s:9:"panelizer";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:1:{s:9:"css_class";s:12:"link-wrapper";}s:6:"extras";a:0:{}s:8:"position";i:2;s:5:"locks";a:0:{}s:4:"uuid";s:36:"e7b29d80-ad23-4c5d-85fd-13f7a038e3d8";}}s:6:"panels";a:1:{s:11:"contentmain";a:3:{i:0;s:40:"new-873d60d8-f80e-41c1-b89d-86ad219285e8";i:1;s:40:"new-9363564d-7f96-4fa2-a1a5-5b0f5f60ce68";i:2;s:40:"new-e7b29d80-ad23-4c5d-85fd-13f7a038e3d8";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:40:"new-f76cbd0c-d182-4bd2-96f2-f1759b4e69d8";s:8:"renderer";s:8:"standard";s:6:"layout";s:12:"radix_boxton";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:2:{s:7:"default";N;s:11:"contentmain";N;}}s:5:"cache";a:0:{}s:5:"title";s:11:"%node:title";s:4:"uuid";s:36:"f76cbd0c-d182-4bd2-96f2-f1759b4e69d8";s:10:"hide_title";i:0;s:10:"title_pane";s:1:"0";}'),
    ),
    'featured' => (object) array(
      'entity_type' => 'node',
      'entity_id' => 6,
      'revision_id' => 6,
      'name' => 'node:panopoly_page:default:featured',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'featured',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => '',
      'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:4:{s:40:"new-af46907d-aa25-43db-995b-b38f9174221e";O:8:"stdClass":14:{s:3:"pid";s:40:"new-af46907d-aa25-43db-995b-b38f9174221e";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:25:"node:field_featured_image";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:2:{s:10:"image_link";s:7:"content";s:11:"image_style";s:19:"panopoly_image_half";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"af46907d-aa25-43db-995b-b38f9174221e";}s:40:"new-1ee1b165-ebd0-4115-ad5e-49df79509f82";O:8:"stdClass":14:{s:3:"pid";s:40:"new-1ee1b165-ebd0-4115-ad5e-49df79509f82";s:5:"panel";s:11:"contentmain";s:4:"type";s:10:"node_title";s:7:"subtype";s:10:"node_title";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:4:{s:4:"link";i:1;s:7:"context";s:9:"panelizer";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}s:4:"uuid";s:36:"1ee1b165-ebd0-4115-ad5e-49df79509f82";}s:40:"new-a71dc705-b195-439c-b47b-980d8c7fa155";O:8:"stdClass":14:{s:3:"pid";s:40:"new-a71dc705-b195-439c-b47b-980d8c7fa155";s:5:"panel";s:11:"contentmain";s:4:"type";s:12:"entity_field";s:7:"subtype";s:9:"node:body";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:23:"text_summary_or_trimmed";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:1:{s:11:"trim_length";s:3:"250";}s:7:"context";s:9:"panelizer";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:2;s:5:"locks";a:0:{}s:4:"uuid";s:36:"a71dc705-b195-439c-b47b-980d8c7fa155";}s:40:"new-1d6308c6-817d-4465-ac63-fa7acca627aa";O:8:"stdClass":14:{s:3:"pid";s:40:"new-1d6308c6-817d-4465-ac63-fa7acca627aa";s:5:"panel";s:11:"contentmain";s:4:"type";s:10:"node_links";s:7:"subtype";s:10:"node_links";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:6:{s:14:"override_title";b:0;s:19:"override_title_text";s:0:"";s:10:"build_mode";s:8:"featured";s:10:"identifier";s:0:"";s:4:"link";b:1;s:7:"context";s:9:"panelizer";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:1:{s:9:"css_class";s:12:"link-wrapper";}s:6:"extras";a:0:{}s:8:"position";i:3;s:5:"locks";a:0:{}s:4:"uuid";s:36:"1d6308c6-817d-4465-ac63-fa7acca627aa";}}s:6:"panels";a:1:{s:11:"contentmain";a:4:{i:0;s:40:"new-af46907d-aa25-43db-995b-b38f9174221e";i:1;s:40:"new-1ee1b165-ebd0-4115-ad5e-49df79509f82";i:2;s:40:"new-a71dc705-b195-439c-b47b-980d8c7fa155";i:3;s:40:"new-1d6308c6-817d-4465-ac63-fa7acca627aa";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:40:"new-5b7d08f9-c351-427e-8015-14433221537b";s:8:"renderer";s:8:"standard";s:6:"layout";s:12:"radix_boxton";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:4:{s:7:"default";N;s:7:"column1";N;s:7:"column2";N;s:11:"contentmain";N;}}s:5:"cache";a:0:{}s:5:"title";s:11:"%node:title";s:4:"uuid";s:36:"5b7d08f9-c351-427e-8015-14433221537b";s:10:"hide_title";i:1;s:10:"title_pane";s:1:"0";}'),
    ),
  ),
  'content_experiments' => '',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-03-16 13:33:04 -0400',
);
  $nodes[] = (object) array(
  'uid' => 1,
  'title' => 'Facebook',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'sreview_site',
  'language' => 'und',
  'created' => 1458149962,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f5756cd8-d08b-412e-9def-c080724dbbc3',
  'field_sreview_logo' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'facebook_logo_vector.png',
        'uri' => 'public://logo/facebook_logo_vector.png',
        'filemime' => 'image/png',
        'filesize' => 29048,
        'status' => 1,
        'type' => 'image',
        'uuid' => '368f7ef8-5f6e-4d7e-8089-5eaa12a48ce0',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1200,
          'width' => 1200,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 1200,
        'width' => 1200,
        'uuid_features_file_data' => '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AAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABoNQELAAAAgFYTsAAAAABota4RAAAAvH7ND7zwmj5qixRX9w9d7NivDOxRAhYAAMDLKC79a6Kum9R1k6ZJ6mbz5TSp66RpmjSbP9fkhfdpmqS52Kqa+tLLddNcSlhlJjmryYve98W/j+KFrTP1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lpmf7WVutufbLNuuKArxCraJgAUAO/1g94VHvYbBtj+xKorC1xp792sfgF3LIe4AAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECrCVgAAAAAtJqABQAAAECr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',
      ),
    ),
  ),
  'field_sreview_page' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.facebook.com/',
        'title' => 'Post a Review on Facebook',
        'attributes' => array(),
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_sreview_logo' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_sreview_page' => array(
      'predicates' => array(),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'content_experiments' => '',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-03-16 13:39:22 -0400',
);
  return $nodes;
}
