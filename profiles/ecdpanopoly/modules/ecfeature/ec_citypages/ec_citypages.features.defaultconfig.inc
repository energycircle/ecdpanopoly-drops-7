<?php
/**
 * @file
 * ec_citypages.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_citypages_defaultconfig_features() {
  return array(
    'ec_citypages' => array(
      'field_default_fields' => 'field_default_fields',
      'field_group_info' => 'field_group_info',
      'panelizer_defaults' => 'panelizer_defaults',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
      'views_default_views' => 'views_default_views',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function ec_citypages_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'node-city_page-field_citypages_example'.
  $fields['node-city_page-field_citypages_example'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_citypages_example',
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
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'city_page',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Describe a notable, particular job of local appeal.<br /><br /><strong>Example: "Did you see our trucks installing panels for the school on Main Street? We installed a PV array that provides 70% of the electricity for the new wing."</strong>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => 3,
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
      'field_name' => 'field_citypages_example',
      'label' => 'Description Example',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 9,
      ),
    ),
  );

  // Exported field: 'node-city_page-field_citypages_local_experience'.
  $fields['node-city_page-field_citypages_local_experience'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_citypages_local_experience',
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
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'city_page',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Describe the type of clients, buildings, or structures you typically work with, in this locality.<br /><br /><strong>Example: "Our contractors work in all type of homes, from the brownstones of Back Bay to the single-family homes in the newest developments. We\'ve worked in Boston for years, and have experience in all types of Boston structures."</strong>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
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
      'field_name' => 'field_citypages_local_experience',
      'label' => 'Description Local Experience',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 8,
      ),
    ),
  );

  // Exported field: 'node-city_page-field_citypages_other_descriptio'.
  $fields['node-city_page-field_citypages_other_descriptio'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_citypages_other_descriptio',
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
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'city_page',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Enter any other content about your work in this locality.<br /><br /><strong>Example: "Ask us about our work in the historic district. Our designs and installations are tailored to fit the appearance standards of your neighborhood while maximizing efficiency and return on investment."</strong>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => 4,
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
      'field_name' => 'field_citypages_other_descriptio',
      'label' => 'Other Local Notes',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 10,
      ),
    ),
  );

  // Exported field: 'node-city_page-field_citypages_photos'.
  $fields['node-city_page-field_citypages_photos'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_citypages_photos',
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
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'city_page',
      'deleted' => 0,
      'description' => 'Upload local photos for an in-page slideshow. Ideal photos show your work and your brand. Enter captions in the "Description" field.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'file_default',
          'weight' => 8,
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
      'field_name' => 'field_citypages_photos',
      'label' => 'City Photos',
      'required' => 0,
      'settings' => array(
        'description_field' => 1,
        'file_directory' => 'citypages',
        'file_extensions' => 'jpg gif png',
        'max_filesize' => '5 MB',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'private' => 0,
            'public' => 'public',
            'vimeo' => 0,
            'youtube' => 0,
          ),
          'allowed_types' => array(
            'audio' => 0,
            'document' => 0,
            'image' => 'image',
            'video' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 'media_default--media_browser_1',
            'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
            'media_internet' => 0,
            'upload' => 'upload',
            'youtube' => 0,
          ),
          'manualcrop_crop_info' => 1,
          'manualcrop_default_crop_area' => 1,
          'manualcrop_enable' => 0,
          'manualcrop_inline_crop' => 0,
          'manualcrop_instant_crop' => FALSE,
          'manualcrop_instant_preview' => 1,
          'manualcrop_keyboard' => 1,
          'manualcrop_maximize_default_crop_area' => 0,
          'manualcrop_require_cropping' => array(),
          'manualcrop_styles_list' => array(),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 0,
        ),
        'type' => 'media_generic',
        'weight' => 18,
      ),
    ),
  );

  // Exported field: 'node-city_page-field_citypages_placenames'.
  $fields['node-city_page-field_citypages_placenames'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_citypages_placenames',
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
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'city_page',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Short, narrative description of what places are in this City.<br /><br /> <strong>Example: "From the distinctive Beacon Hill to the North End, Back Bay and Chinatown, we serve all of downtown Boston."</strong>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
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
      'field_name' => 'field_citypages_placenames',
      'label' => 'Description Place Names',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 7,
      ),
    ),
  );

  // Exported field: 'node-city_page-field_featured_image'.
  $fields['node-city_page-field_featured_image'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_featured_image',
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
      'bundle' => 'city_page',
      'deleted' => 0,
      'description' => '',
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
          'weight' => 9,
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
      'field_name' => 'field_featured_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'citypages',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
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
        'type' => 'image_image',
        'weight' => 16,
      ),
    ),
  );

  // Exported field: 'node-city_page-field_featured_video'.
  $fields['node-city_page-field_featured_video'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_featured_video',
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
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'city_page',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Enter the YouTube video embed path only (not the full embed code). Example: https://www.youtube.com/embed/ABCD',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => 10,
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
      'field_name' => 'field_featured_video',
      'label' => 'Featured Video',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 17,
      ),
    ),
  );

  // Exported field: 'node-city_page-field_ref_citypages_blog'.
  $fields['node-city_page-field_ref_citypages_blog'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_ref_citypages_blog',
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
            'blog_post' => 'blog_post',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => 0,
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'city_page',
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
          'weight' => 6,
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
      'field_name' => 'field_ref_citypages_blog',
      'label' => 'Blog Posts',
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
        'weight' => 12,
      ),
    ),
  );

  // Exported field: 'node-city_page-field_ref_citypages_case_study'.
  $fields['node-city_page-field_ref_citypages_case_study'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_ref_citypages_case_study',
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
      'bundle' => 'city_page',
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
          'weight' => 7,
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
      'field_name' => 'field_ref_citypages_case_study',
      'label' => 'Case Studies',
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
        'weight' => 13,
      ),
    ),
  );

  // Exported field: 'node-city_page-field_ref_citypages_testimonials'.
  $fields['node-city_page-field_ref_citypages_testimonials'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_ref_citypages_testimonials',
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
            'testimonial' => 'testimonial',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => 0,
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'city_page',
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
          'weight' => 5,
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
      'field_name' => 'field_ref_citypages_testimonials',
      'label' => 'Testimonials',
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
        'weight' => 15,
      ),
    ),
  );

  // Exported field: 'node-pcase-field_pcase_electricity_imported'.
  $fields['node-pcase-field_pcase_electricity_imported'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_pcase_electricity_imported',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'number',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'pcase',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'The value in kWh.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 77,
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
      'field_name' => 'field_pcase_electricity_imported',
      'label' => 'Electricity amount (imported from grid)',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 209,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog Posts');
  t('Case Studies');
  t('City Photos');
  t('Describe a notable, particular job of local appeal.<br /><br /><strong>Example: "Did you see our trucks installing panels for the school on Main Street? We installed a PV array that provides 70% of the electricity for the new wing."</strong>');
  t('Describe the type of clients, buildings, or structures you typically work with, in this locality.<br /><br /><strong>Example: "Our contractors work in all type of homes, from the brownstones of Back Bay to the single-family homes in the newest developments. We\'ve worked in Boston for years, and have experience in all types of Boston structures."</strong>');
  t('Description Example');
  t('Description Local Experience');
  t('Description Place Names');
  t('Electricity amount (imported from grid)');
  t('Enter any other content about your work in this locality.<br /><br /><strong>Example: "Ask us about our work in the historic district. Our designs and installations are tailored to fit the appearance standards of your neighborhood while maximizing efficiency and return on investment."</strong>');
  t('Enter the YouTube video embed path only (not the full embed code). Example: https://www.youtube.com/embed/ABCD');
  t('Featured Video');
  t('Image');
  t('Other Local Notes');
  t('Short, narrative description of what places are in this City.<br /><br /> <strong>Example: "From the distinctive Beacon Hill to the North End, Back Bay and Chinatown, we serve all of downtown Boston."</strong>');
  t('Testimonials');
  t('The value in kWh.');
  t('Upload local photos for an in-page slideshow. Ideal photos show your work and your brand. Enter captions in the "Description" field.');

  return $fields;
}

/**
 * Implements hook_defaultconfig_field_group_info().
 */
function ec_citypages_defaultconfig_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_city_page_tabs|node|city_page|form';
  $field_group->group_name = 'group_city_page_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'City Page Tabs',
    'weight' => '1',
    'children' => array(
      0 => 'group_citypages_description',
      1 => 'group_citypages_shown_this_page',
      2 => 'group_citypages_photoset',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-city-page-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_city_page_tabs|node|city_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citypages_description|node|city_page|form';
  $field_group->group_name = 'group_citypages_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_city_page_tabs';
  $field_group->data = array(
    'label' => 'Description Builder',
    'weight' => '2',
    'children' => array(
      0 => 'field_citypages_placenames',
      1 => 'field_citypages_local_experience',
      2 => 'field_citypages_example',
      3 => 'field_citypages_other_descriptio',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Description Builder',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_citypages_description|node|city_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citypages_photoset|node|city_page|form';
  $field_group->group_name = 'group_citypages_photoset';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_city_page_tabs';
  $field_group->data = array(
    'label' => 'City Photos',
    'weight' => '3',
    'children' => array(
      0 => 'field_citypages_photos',
      1 => 'field_featured_image',
      2 => 'field_featured_video',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_citypages_photoset|node|city_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citypages_shown_this_page|node|city_page|form';
  $field_group->group_name = 'group_citypages_shown_this_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'city_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_city_page_tabs';
  $field_group->data = array(
    'label' => 'Shown on This Page',
    'weight' => '4',
    'children' => array(
      0 => 'field_ref_citypages_testimonials',
      1 => 'field_ref_citypages_blog',
      2 => 'field_ref_citypages_case_study',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_citypages_shown_this_page|node|city_page|form'] = $field_group;

  return $export;
}

/**
 * Implements hook_defaultconfig_panelizer_defaults().
 */
function ec_citypages_defaultconfig_panelizer_defaults() {
  $export = array();

  return $export;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function ec_citypages_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_city_page';
  $strongarm->value = 'edit-extras';
  $export['additional_settings__active_tab_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_menutitle_city_page';
  $strongarm->value = 0;
  $export['auto_menutitle_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clear_all_city_page';
  $strongarm->value = 0;
  $export['clear_all_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_cancel_city_page';
  $strongarm->value = '0';
  $export['content_type_extras_cancel_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_preview_button_city_page';
  $strongarm->value = 'Preview';
  $export['content_type_extras_preview_button_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_button_city_page';
  $strongarm->value = 'Save and Edit';
  $export['content_type_extras_save_and_edit_button_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_edit_city_page';
  $strongarm->value = '0';
  $export['content_type_extras_save_and_edit_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_button_city_page';
  $strongarm->value = 'Save and New';
  $export['content_type_extras_save_and_new_button_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_save_and_new_city_page';
  $strongarm->value = '1';
  $export['content_type_extras_save_and_new_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_title_hide_city_page';
  $strongarm->value = 0;
  $export['content_type_extras_title_hide_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_city_page';
  $strongarm->value = 0;
  $export['date_popup_authored_enabled_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_city_page';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_city_page';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__city_page';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '6',
        ),
        'xmlsitemap' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_city_page';
  $strongarm->value = array(
    0 => 'menu-auxiliary-menu',
    1 => 'main-menu',
  );
  $export['menu_options_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_city_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__city_page';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_city_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_city_page';
  $strongarm->value = '0';
  $export['node_preview_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_city_page';
  $strongarm->value = 0;
  $export['node_submitted_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_city_page';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'show_this_block' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'grouped_teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_city_page_pattern';
  $strongarm->value = 'city/[node:title]';
  $export['pathauto_node_city_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_city_page';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sync_translations_city_page';
  $strongarm->value = '0';
  $export['sync_translations_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_permissions_city_page';
  $strongarm->value = array(
    0 => 'create_roles',
    1 => 'edit_roles',
    2 => 'edit_own_roles',
    3 => 'delete_roles',
    4 => 'delete_own_roles',
  );
  $export['user_permissions_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_default_city_page';
  $strongarm->value = '0';
  $export['weight_default_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_enabled_city_page';
  $strongarm->value = '1';
  $export['weight_enabled_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_menu_city_page';
  $strongarm->value = '0';
  $export['weight_menu_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_range_city_page';
  $strongarm->value = '20';
  $export['weight_range_city_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_city_page';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_city_page'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function ec_citypages_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node city_page breadcrumbs'.
  $permissions['administer panelizer node city_page breadcrumbs'] = array(
    'name' => 'administer panelizer node city_page breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node city_page content'.
  $permissions['administer panelizer node city_page content'] = array(
    'name' => 'administer panelizer node city_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node city_page context'.
  $permissions['administer panelizer node city_page context'] = array(
    'name' => 'administer panelizer node city_page context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node city_page defaults'.
  $permissions['administer panelizer node city_page defaults'] = array(
    'name' => 'administer panelizer node city_page defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node city_page layout'.
  $permissions['administer panelizer node city_page layout'] = array(
    'name' => 'administer panelizer node city_page layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node city_page overview'.
  $permissions['administer panelizer node city_page overview'] = array(
    'name' => 'administer panelizer node city_page overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node city_page settings'.
  $permissions['administer panelizer node city_page settings'] = array(
    'name' => 'administer panelizer node city_page settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create city_page content'.
  $permissions['create city_page content'] = array(
    'name' => 'create city_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any city_page content'.
  $permissions['delete any city_page content'] = array(
    'name' => 'delete any city_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own city_page content'.
  $permissions['delete own city_page content'] = array(
    'name' => 'delete own city_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any city_page content'.
  $permissions['edit any city_page content'] = array(
    'name' => 'edit any city_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own city_page content'.
  $permissions['edit own city_page content'] = array(
    'name' => 'edit own city_page content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}

/**
 * Implements hook_defaultconfig_views_default_views().
 */
function ec_citypages_defaultconfig_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'city_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Description Local Experience */
  $handler->display->display_options['fields']['field_citypages_local_experience']['id'] = 'field_citypages_local_experience';
  $handler->display->display_options['fields']['field_citypages_local_experience']['table'] = 'field_data_field_citypages_local_experience';
  $handler->display->display_options['fields']['field_citypages_local_experience']['field'] = 'field_citypages_local_experience';
  $handler->display->display_options['fields']['field_citypages_local_experience']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_local_experience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_local_experience']['element_label_colon'] = FALSE;
  /* Field: Content: Description Example */
  $handler->display->display_options['fields']['field_citypages_example']['id'] = 'field_citypages_example';
  $handler->display->display_options['fields']['field_citypages_example']['table'] = 'field_data_field_citypages_example';
  $handler->display->display_options['fields']['field_citypages_example']['field'] = 'field_citypages_example';
  $handler->display->display_options['fields']['field_citypages_example']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_example']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_example']['element_label_colon'] = FALSE;
  /* Field: Content: Other Local Notes */
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['id'] = 'field_citypages_other_descriptio';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['table'] = 'field_data_field_citypages_other_descriptio';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['field'] = 'field_citypages_other_descriptio';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_other_descriptio']['element_label_colon'] = FALSE;
  /* Field: Content: Description Place Names */
  $handler->display->display_options['fields']['field_citypages_placenames']['id'] = 'field_citypages_placenames';
  $handler->display->display_options['fields']['field_citypages_placenames']['table'] = 'field_data_field_citypages_placenames';
  $handler->display->display_options['fields']['field_citypages_placenames']['field'] = 'field_citypages_placenames';
  $handler->display->display_options['fields']['field_citypages_placenames']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_placenames']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_placenames']['alter']['text'] = '[field_citypages_placenames]
[field_citypages_local_experience]
[field_citypages_example]
[field_citypages_other_descriptio]';
  $handler->display->display_options['fields']['field_citypages_placenames']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'city_page' => 'city_page',
  );

  /* Display: City Page - Description */
  $handler = $view->new_display('panel_pane', 'City Page - Description', 'panel_pane_1');

  /* Display: City Page - Slides */
  $handler = $view->new_display('panel_pane', 'City Page - Slides', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'pcase_gallery_slides';
  $handler->display->display_options['style_options']['captionfield'] = 'field_citypages_photos_1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: City Photos */
  $handler->display->display_options['fields']['field_citypages_photos_1']['id'] = 'field_citypages_photos_1';
  $handler->display->display_options['fields']['field_citypages_photos_1']['table'] = 'field_data_field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos_1']['field'] = 'field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos_1']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_photos_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_photos_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citypages_photos_1']['alter']['text'] = '[field_citypages_photos_1-description]';
  $handler->display->display_options['fields']['field_citypages_photos_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citypages_photos_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_citypages_photos_1']['settings'] = array(
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_citypages_photos_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_citypages_photos_1']['delta_offset'] = '0';
  /* Field: Content: City Photos */
  $handler->display->display_options['fields']['field_citypages_photos']['id'] = 'field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos']['table'] = 'field_data_field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos']['field'] = 'field_citypages_photos';
  $handler->display->display_options['fields']['field_citypages_photos']['label'] = '';
  $handler->display->display_options['fields']['field_citypages_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citypages_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_citypages_photos']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_citypages_photos']['settings'] = array(
    'file_view_mode' => 'default',
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_citypages_photos']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_citypages_photos']['delta_offset'] = '0';
  $export['city_pages'] = $view;

  $view = new view();
  $view->name = 'city_pages_lists';
  $view->description = 'LIstings and administrative views of City Pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City Pages - Lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Blog Posts */
  $handler->display->display_options['fields']['field_ref_citypages_blog']['id'] = 'field_ref_citypages_blog';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['table'] = 'field_data_field_ref_citypages_blog';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['field'] = 'field_ref_citypages_blog';
  $handler->display->display_options['fields']['field_ref_citypages_blog']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_blog']['delta_offset'] = '0';
  /* Field: Content: Testimonials */
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['id'] = 'field_ref_citypages_testimonials';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['table'] = 'field_data_field_ref_citypages_testimonials';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['field'] = 'field_ref_citypages_testimonials';
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_testimonials']['delta_offset'] = '0';
  /* Field: Content: Case Studies */
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['id'] = 'field_ref_citypages_case_study';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['table'] = 'field_data_field_ref_citypages_case_study';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['field'] = 'field_ref_citypages_case_study';
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['settings'] = array(
    'link' => 1,
    'field_multiple_limit' => '-1',
    'field_multiple_limit_offset' => '0',
  );
  $handler->display->display_options['fields']['field_ref_citypages_case_study']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'city_page' => 'city_page',
  );

  /* Display: City Page Linked Content */
  $handler = $view->new_display('panel_pane', 'City Page Linked Content', 'panel_pane_1');
  $export['city_pages_lists'] = $view;

  return $export;
}
