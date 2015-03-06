<?php
/**
 * @file
 * ec_gallery.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_gallery_defaultconfig_features() {
  return array(
    'ec_gallery' => array(
      'field_default_fields' => 'field_default_fields',
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function ec_gallery_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'node-gallery-body'.
  $fields['node-gallery-body'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'gallery',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'grouped_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'show_this_block' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => 5,
      ),
    ),
  );

  // Exported field: 'node-gallery-field_gallery_image'.
  $fields['node-gallery-field_gallery_image'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_gallery_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'gallery',
      'deleted' => 0,
      'description' => 'Upload each image to be included in the gallery.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 1,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'grouped_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'show_this_block' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_gallery_image',
      'label' => 'Gallery_image',
      'required' => 1,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'gallery',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '2400x2400',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            0 => 'public',
            1 => 'private',
          ),
          'allowed_types' => array(
            0 => 'image',
          ),
          'browser_plugins' => array(),
          'manualcrop_crop_info' => 1,
          'manualcrop_default_crop_area' => 1,
          'manualcrop_enable' => 0,
          'manualcrop_inline_crop' => 0,
          'manualcrop_instant_crop' => 0,
          'manualcrop_instant_preview' => 1,
          'manualcrop_keyboard' => 1,
          'manualcrop_maximize_default_crop_area' => 0,
          'manualcrop_require_cropping' => array(),
          'manualcrop_styles_list' => array(),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 0,
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'node-gallery-field_ref_gallery_case_study'.
  $fields['node-gallery-field_ref_gallery_case_study'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_ref_gallery_case_study',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => 0,
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'field_default_token' => array(
              'status' => TRUE,
            ),
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'case_study' => 'case_study',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => 0,
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'gallery',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 2,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'grouped_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'show_this_block' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ref_gallery_case_study',
      'label' => 'Case Study',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'entityreference',
        'settings' => array(
          'match_operator' => 'CONTAINS',
          'path' => '',
          'size' => 60,
        ),
        'type' => 'entityreference_autocomplete',
        'weight' => 8,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Case Study');
  t('Gallery_image');
  t('Upload each image to be included in the gallery.');

  return $fields;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_gallery_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_author_gallery';
  $strongarm->value = FALSE;
  $export['node_export_reset_author_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_book_mlid_gallery';
  $strongarm->value = FALSE;
  $export['node_export_reset_book_mlid_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_gallery';
  $strongarm->value = 1;
  $export['node_export_reset_changed_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_created_gallery';
  $strongarm->value = 1;
  $export['node_export_reset_created_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_last_comment_timestamp_gallery';
  $strongarm->value = 1;
  $export['node_export_reset_last_comment_timestamp_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_menu_gallery';
  $strongarm->value = 1;
  $export['node_export_reset_menu_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_path_gallery';
  $strongarm->value = 1;
  $export['node_export_reset_path_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_promote_gallery';
  $strongarm->value = 0;
  $export['node_export_reset_promote_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_revision_timestamp_gallery';
  $strongarm->value = 1;
  $export['node_export_reset_revision_timestamp_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_status_gallery';
  $strongarm->value = 0;
  $export['node_export_reset_status_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_sticky_gallery';
  $strongarm->value = 0;
  $export['node_export_reset_sticky_gallery'] = $strongarm;

  return $export;
}
