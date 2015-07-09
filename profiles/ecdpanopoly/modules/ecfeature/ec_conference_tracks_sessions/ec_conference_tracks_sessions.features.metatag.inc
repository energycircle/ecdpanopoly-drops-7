<?php
/**
 * @file
 * ec_conference_tracks_sessions.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function ec_conference_tracks_sessions_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:conference.
  $config['node:conference'] = array(
    'instance' => 'node:conference',
    'config' => array(),
  );

  // Exported Metatag config instance: node:conference_event.
  $config['node:conference_event'] = array(
    'instance' => 'node:conference_event',
    'config' => array(),
  );

  return $config;
}
