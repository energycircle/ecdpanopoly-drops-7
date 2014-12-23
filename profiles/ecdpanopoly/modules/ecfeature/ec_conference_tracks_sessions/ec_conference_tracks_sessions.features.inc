<?php
/**
 * @file
 * ec_conference_tracks_sessions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_conference_tracks_sessions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ec_conference_tracks_sessions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ec_conference_tracks_sessions_node_info() {
  $items = array(
    'conference_event' => array(
      'name' => t('Conference Event'),
      'base' => 'node_content',
      'description' => t('A special event at a conference, such as an evening event, outing, or other event to be included in the special events schedule. (Not for sessions or workshops)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'conference_schedule' => array(
      'name' => t('Conference Schedule'),
      'base' => 'node_content',
      'description' => t('A landing page for a major conference\'s schedule'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => t('A regular session in a conference track (not used for a workshop, demo, or other special event).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'track' => array(
      'name' => t('Track'),
      'base' => 'node_content',
      'description' => t('A conference track, associated with one or more conferences.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Enter the track name including the track number. Example: "Track 1: Homes"'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
