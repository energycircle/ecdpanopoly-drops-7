<?php
/**
 * @file
 * ec_base_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ec_base_content_uuid_features_default_content() {
  $nodes = array();
  $nodes[] = array(
  'title' => 'Home Page',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'panopoly_page',
  'language' => 'und',
  'created' => 1441986039,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bd9e52ea-f081-4999-94e1-301825474fc9',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Home page Content - Thundercats whatever shoreditch viral before they sold out organic. Locavore gluten-free keffiyeh raw denim lomo messenger bag. Before they sold out leggings trust fund irony yr, craft beer letterpress carles messenger bag whatever locavore art party DIY next level. Tofu craft beer marfa quinoa, freegan messenger bag locavore blog dreamcatcher etsy wayfarers squid fap you probably haven\'t heard of them. Chambray retro freegan, cardigan keffiyeh jean shorts seitan leggings lo-fi blog vegan echo park scenester 8-bit. Sustainable locavore blog, pitchfork quinoa aesthetic readymade raw denim hoodie banh mi synth williamsburg fanny pack stumptown whatever. Readymade messenger bag chambray, food truck vice before they sold out cosby sweater etsy keffiyeh fanny pack ethical beard tumblr williamsburg blog.<br><br>8-bit viral irony biodiesel, squid +1 lomo trust fund messenger bag 3 wolf moon sustainable pitchfork letterpress put a bird on it. Art party +1 jean shorts chambray. Cliche salvia american apparel +1 high life, butcher shoreditch. Photo booth next level williamsburg, single-origin coffee letterpress dreamcatcher 3 wolf moon jean shorts viral messenger bag 8-bit raw denim. Terry richardson vegan wolf, carles PBR artisan echo park photo booth. Beard fixie bicycle rights whatever vinyl, VHS carles mlkshk wes anderson. Shoreditch cardigan fixie, aesthetic raw denim wes anderson portland jean shorts sustainable pitchfork master cleanse.<br><br>Locavore high life PBR skateboard echo park vegan, quinoa Austin marfa. Farm-to-table fap aesthetic next level gentrify banksy. Brunch quinoa craft beer next level, etsy readymade pitchfork food truck +1 VHS. Cred twee ethical, banh mi iphone butcher letterpress master cleanse squid synth williamsburg raw denim. Seitan wolf carles etsy, trust fund chambray craft beer tofu. Cliche master cleanse aesthetic, viral mixtape raw denim sustainable carles. Cosby sweater portland carles readymade.<br><br>Etsy brunch blog scenester single-origin coffee wayfarers. Art party organic williamsburg butcher, iphone gluten-free lo-fi banh mi. DIY stumptown high life, viral mixtape marfa PBR VHS craft beer food truck quinoa. Photo booth dreamcatcher twee thundercats wayfarers, cosby sweater butcher mlkshk homo fixie mcsweeney\'s pitchfork. Synth 3 wolf moon twee vegan, salvia lomo ethical messenger bag jean shorts squid terry richardson you probably haven\'t heard of them cardigan. Irony dreamcatcher tofu +1, messenger bag food truck iphone farm-to-table. Keytar farm-to-table iphone, ethical stumptown synth put a bird on it tattooed jean shorts seitan etsy cosby sweater shoreditch.</p>',
        'summary' => '',
        'format' => 'panopoly_wysiwyg_text',
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
  'field_button_text' => array(
    'und' => array(
      0 => array(
        'value' => 'Get It!',
        'format' => NULL,
      ),
    ),
  ),
  'field_call_to_action' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>This is a CALL TO ACTION</h3><p>[custom:phone-number]</p>',
        'format' => 'panopoly_wysiwyg_text',
      ),
    ),
  ),
  'field_featured_video' => array(),
  'field_ref_to_cta_form' => array(),
  'field_a_b_test_page' => array(),
  'field_ref_page_blog' => array(),
  'field_ref_page_case_study' => array(),
  'field_ref_page_faq' => array(),
  'field_ref_page_testimonial' => array(),
  'field_ref_page_promotions' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
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
        0 => 'schema:name',
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
    'field_call_to_action' => array(
      'predicates' => array(),
    ),
    'field_featured_image' => array(
      'predicates' => array(
        0 => 'schema:primaryImageOfPage',
        1 => 'foaf:primaryImage',
      ),
      'type' => 'rel',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_ref_page_testimonial' => array(
      'predicates' => array(),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'panelizer' => array(
    'default' => array(
      'name' => 'node:panopoly_page:home_default',
    ),
  ),
  'content_experiments' => '',
  'machine_name' => FALSE,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-09-11 11:40:39 -0400',
  'user_uuid' => '62abf0bb-389a-413c-9ad8-5d05b476fb5b',
  );
  $nodes[] = array(
  'title' => 403,
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'panopoly_page',
  'language' => 'und',
  'created' => 1441986039,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8a173786-9cf4-45e7-aebc-8def1c21123a',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>403</p>',
        'summary' => '',
        'format' => 'panopoly_wysiwyg_text',
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
  'field_ref_page_faq' => array(),
  'field_ref_page_testimonial' => array(),
  'field_ref_page_promotions' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
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
        0 => 'schema:name',
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
    'field_call_to_action' => array(
      'predicates' => array(),
    ),
    'field_featured_image' => array(
      'predicates' => array(
        0 => 'schema:primaryImageOfPage',
        1 => 'foaf:primaryImage',
      ),
      'type' => 'rel',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_ref_page_testimonial' => array(
      'predicates' => array(),
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'panelizer' => array(
    'default' => array(
      'name' => 'node:panopoly_page:default:default',
    ),
  ),
  'content_experiments' => NULL,
  'machine_name' => FALSE,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-09-11 11:40:39 -0400',
  'user_uuid' => '62abf0bb-389a-413c-9ad8-5d05b476fb5b',
);

  $nodes[] = array(
  'title' => 404,
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'panopoly_page',
  'language' => 'und',
  'created' => 1441986039,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f2daa6a8-0070-4445-9561-a9eba82a6be5',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>404</p>',
        'summary' => '',
        'format' => 'panopoly_wysiwyg_text',
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
  'field_ref_page_faq' => array(),
  'field_ref_page_testimonial' => array(),
  'field_ref_page_promotions' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
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
        0 => 'schema:name',
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
    'field_call_to_action' => array(
      'predicates' => array(),
    ),
    'field_featured_image' => array(
      'predicates' => array(
        0 => 'schema:primaryImageOfPage',
        1 => 'foaf:primaryImage',
      ),
      'type' => 'rel',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_ref_page_testimonial' => array(
      'predicates' => array(),
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'panelizer' => array(
    'default' => array(
      'name' => 'node:panopoly_page:default:default',
    ),
  ),
  'content_experiments' => NULL,
  'machine_name' => FALSE,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-09-11 11:40:39 -0400',
  'user_uuid' => '62abf0bb-389a-413c-9ad8-5d05b476fb5b',
);
  return $nodes;
}
