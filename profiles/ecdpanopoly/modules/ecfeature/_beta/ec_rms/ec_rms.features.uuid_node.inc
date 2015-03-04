<?php
/**
 * @file
 * ec_rms.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ec_rms_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Yelp',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'review_site',
  'language' => 'und',
  'created' => 1419964247,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'da50984c-47ab-4a1c-a078-bfa6e734f5d0',
  'body' => array(),
  'field_review_site_url' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.yelp.com/biz/your-url-here',
        'title' => 'Post a Review on Yelp',
        'attributes' => array(),
      ),
    ),
  ),
  'field_review_site_logo' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'b21a4591-b3cf-492d-9080-549b298d75d1',
        'width' => 102,
        'height' => 52,
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'machine_name' => FALSE,
  'weight_weight' => -20,
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-12-30 13:30:47 -0500',
  'user_uuid' => '203a004b-09a7-4aa7-9532-2fa7fc23b4c5',
);
  $nodes[] = array(
  'title' => 'Facebook',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'review_site',
  'language' => 'und',
  'created' => 1419964203,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f1be70ac-9f17-4a3a-b567-73cd5cc6fb24',
  'body' => array(),
  'field_review_site_url' => array(
    'und' => array(
      0 => array(
        'url' => 'https://www.facebook.com/enter-your-url',
        'title' => 'Post a Review on Facebook',
        'attributes' => array(),
      ),
    ),
  ),
  'field_review_site_logo' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'bf6811f2-e3e0-432b-86bd-4b773b885111',
        'width' => 100,
        'height' => 100,
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'machine_name' => FALSE,
  'weight_weight' => -20,
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-12-30 13:30:03 -0500',
  'user_uuid' => '203a004b-09a7-4aa7-9532-2fa7fc23b4c5',
);
  return $nodes;
}
