<?php
/**
 * @file
 * ec_redhen.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_redhen_defaultconfig_features() {
  return array(
    'ec_redhen' => array(
      'field_default_fields' => 'field_default_fields',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function ec_redhen_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'redhen_contact-individual-field_contact_bio'.
  $fields['redhen_contact-individual-field_contact_bio'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_contact_bio',
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
      'bundle' => 'individual',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => 6,
        ),
        'grouped_teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => 6,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'redhen_contact',
      'field_name' => 'field_contact_bio',
      'label' => 'Contact Bio',
      'required' => 0,
      'settings' => array(
        'display_summary' => 0,
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
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => 9,
      ),
    ),
  );

  // Exported field: 'redhen_contact-individual-field_contact_job_title'.
  $fields['redhen_contact-individual-field_contact_job_title'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_contact_job_title',
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
      'bundle' => 'individual',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => 5,
        ),
        'grouped_teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => 5,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'redhen_contact',
      'field_name' => 'field_contact_job_title',
      'label' => 'Job Title',
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
        'weight' => 5,
      ),
    ),
  );

  // Exported field: 'redhen_contact-individual-field_contact_photo'.
  $fields['redhen_contact-individual-field_contact_photo'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_contact_photo',
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
      'bundle' => 'individual',
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
          'weight' => 7,
        ),
        'grouped_teaser' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'redhen_contact',
      'field_name' => 'field_contact_photo',
      'label' => 'Photo',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'contacts',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
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
            'media_default--media_browser_1' => 0,
            'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
            'media_internet' => 'media_internet',
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
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'redhen_contact-individual-field_phone'.
  $fields['redhen_contact-individual-field_phone'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_phone',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'phone',
      'settings' => array(
        'country' => 'ca',
      ),
      'translatable' => 0,
      'type' => 'phone',
    ),
    'field_instance' => array(
      'bundle' => 'individual',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'phone',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'phone',
          'weight' => 3,
        ),
        'grouped_teaser' => array(
          'label' => 'above',
          'module' => 'phone',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'phone',
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'redhen_contact',
      'field_name' => 'field_phone',
      'label' => 'Phone',
      'required' => 0,
      'settings' => array(
        'ca_phone_parentheses' => 1,
        'ca_phone_separator' => '-',
        'phone_country_code' => 0,
        'phone_default_country_code' => 1,
        'phone_int_max_length' => 15,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone_textfield',
        'weight' => 3,
      ),
    ),
  );

  // Exported field: 'redhen_contact-individual-field_website'.
  $fields['redhen_contact-individual-field_website'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_website',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'profile2_private' => FALSE,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => 0,
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'individual',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'link_default',
          'weight' => 4,
        ),
        'grouped_teaser' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'link_default',
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'redhen_contact',
      'field_name' => 'field_website',
      'label' => 'Website',
      'required' => 0,
      'settings' => array(
        'absolute_url' => 1,
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => '_blank',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'rel_remove' => 'default',
        'title' => 'none',
        'title_label_use_field_label' => FALSE,
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => 7,
      ),
    ),
  );

  // Exported field: 'redhen_contact-individual-redhen_contact_email'.
  $fields['redhen_contact-individual-redhen_contact_email'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'redhen_contact_email',
      'foreign keys' => array(),
      'indexes' => array(
        'redhen_email_address' => array(
          0 => 'value',
        ),
      ),
      'locked' => 1,
      'module' => 'redhen_fields',
      'settings' => array(
        'labels' => array(
          1 => 'home',
          2 => 'work',
        ),
      ),
      'translatable' => 0,
      'type' => 'redhen_email',
    ),
    'field_instance' => array(
      'bundle' => 'individual',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'redhen_fields',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'redhen_email_formatter',
          'weight' => 0,
        ),
        'grouped_teaser' => array(
          'label' => 'above',
          'module' => 'redhen_fields',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'redhen_email_formatter',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'redhen_contact',
      'field_name' => 'redhen_contact_email',
      'label' => 'Email',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'redhen_fields',
        'settings' => array(),
        'type' => 'redhen_email_widget',
        'weight' => 4,
      ),
    ),
  );

  // Exported field: 'redhen_note-redhen_note-redhen_note_body'.
  $fields['redhen_note-redhen_note-redhen_note_body'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'redhen_note_body',
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
      'locked' => 1,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'redhen_note',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'redhen_note',
      'field_name' => 'redhen_note_body',
      'label' => 'Message',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 31,
      ),
    ),
  );

  // Exported field: 'redhen_note-redhen_note-redhen_note_type'.
  $fields['redhen_note-redhen_note-redhen_note_type'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'redhen_note_type',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 1,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'note_type',
            'parent' => 0,
          ),
        ),
        'options_list_callback' => 'title_taxonomy_allowed_values',
      ),
      'translatable' => 0,
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'redhen_note',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'redhen_note',
      'field_name' => 'redhen_note_type',
      'label' => 'Note Type',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 32,
      ),
    ),
  );

  // Exported field: 'redhen_org-business-field_address'.
  $fields['redhen_org-business-field_address'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_address',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'addressfield',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'business',
      'default_value' => array(
        0 => array(
          'element_key' => 'redhen_org|business|field_address|und|0',
          'thoroughfare' => '',
          'premise' => '',
          'locality' => '',
          'administrative_area' => '',
          'postal_code' => '',
          'country' => 'US',
        ),
      ),
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => 5,
        ),
        'grouped_teaser' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => 5,
        ),
        'logo' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 5,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 12,
        ),
        'token' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 7,
        ),
      ),
      'entity_type' => 'redhen_org',
      'field_name' => 'field_address',
      'label' => 'Company Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(),
          'format_handlers' => array(
            'address' => 'address',
            'address-hide-country' => 0,
            'organisation' => 0,
            'name-full' => 0,
            'name-oneline' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => 8,
      ),
    ),
  );

  // Exported field: 'redhen_org-business-field_contact_bio'.
  $fields['redhen_org-business-field_contact_bio'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_contact_bio',
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
      'bundle' => 'business',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
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
        'grouped_teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => 2,
        ),
        'logo' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 10,
        ),
        'token' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 6,
        ),
      ),
      'entity_type' => 'redhen_org',
      'field_name' => 'field_contact_bio',
      'label' => 'Contact Bio',
      'required' => 0,
      'settings' => array(
        'display_summary' => 0,
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
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => 9,
      ),
    ),
  );

  // Exported field: 'redhen_org-business-field_logo'.
  $fields['redhen_org-business-field_logo'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_logo',
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
      'bundle' => 'business',
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
          'weight' => 3,
        ),
        'grouped_teaser' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 3,
        ),
        'logo' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'image_link' => '',
            'image_style' => 's_300',
          ),
          'type' => 'image',
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'image_link_formatter',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'image_link' => 'field_website',
            'image_style' => 's_220',
          ),
          'type' => 'image_link_formatter',
          'weight' => 0,
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'image_link' => 'content',
            'image_style' => 's_220',
          ),
          'type' => 'image',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'redhen_org',
      'field_name' => 'field_logo',
      'label' => 'Logo',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'contacts',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
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
        'weight' => 5,
      ),
    ),
  );

  // Exported field: 'redhen_org-business-field_phone'.
  $fields['redhen_org-business-field_phone'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_phone',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'phone',
      'settings' => array(
        'country' => 'ca',
      ),
      'translatable' => 0,
      'type' => 'phone',
    ),
    'field_instance' => array(
      'bundle' => 'business',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'phone',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'phone',
          'weight' => 0,
        ),
        'grouped_teaser' => array(
          'label' => 'above',
          'module' => 'phone',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'phone',
          'weight' => 0,
        ),
        'logo' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 11,
        ),
        'token' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'redhen_org',
      'field_name' => 'field_phone',
      'label' => 'Phone',
      'required' => 0,
      'settings' => array(
        'ca_phone_parentheses' => 1,
        'ca_phone_separator' => '-',
        'phone_country_code' => 0,
        'phone_default_country_code' => 1,
        'phone_int_max_length' => 15,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone_textfield',
        'weight' => 7,
      ),
    ),
  );

  // Exported field: 'redhen_org-business-field_website'.
  $fields['redhen_org-business-field_website'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_website',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'profile2_private' => FALSE,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => 0,
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'business',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'link_default',
          'weight' => 1,
        ),
        'grouped_teaser' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'link_default',
          'weight' => 1,
        ),
        'logo' => array(
          'label' => 'hidden',
          'module' => 'link',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'link_plain',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 9,
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'link',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'link_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'redhen_org',
      'field_name' => 'field_website',
      'label' => 'Website',
      'required' => 0,
      'settings' => array(
        'absolute_url' => 1,
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => '_blank',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'rel_remove' => 'default',
        'title' => 'none',
        'title_label_use_field_label' => FALSE,
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => 6,
      ),
    ),
  );

  // Exported field: 'relation-redhen_affiliation-endpoints'.
  $fields['relation-redhen_affiliation-endpoints'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'endpoints',
      'foreign keys' => array(),
      'indexes' => array(
        'relation' => array(
          0 => 'entity_type',
          1 => 'entity_id',
          2 => 'r_index',
        ),
      ),
      'locked' => 0,
      'module' => 'relation_endpoint',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'relation_endpoint',
    ),
    'field_instance' => array(
      'bundle' => 'redhen_affiliation',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'relation_endpoint',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'view_modes' => array(
              'cer' => 'default',
              'entity_rule_setting' => 'default',
              'entityform' => 'default',
              'entityform_type' => 'default',
              'field_collection_item' => 'default',
              'fieldable_panels_pane' => 'default',
              'file' => 'default',
              'menu_link' => 'default',
              'node' => 'default',
              'redhen_contact' => 'default',
              'redhen_contact_type' => 'default',
              'redhen_note' => 'default',
              'redhen_org' => 'default',
              'redhen_org_type' => 'default',
              'redirect' => 'default',
              'relation' => 'default',
              'rules_config' => 'default',
              'taxonomy_term' => 'default',
              'taxonomy_vocabulary' => 'default',
              'user' => 'default',
              'wysiwyg_profile' => 'default',
            ),
          ),
          'type' => 'relation_endpoint',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'relation',
      'field_name' => 'endpoints',
      'label' => 'endpoints',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'relation_endpoint',
        'settings' => array(),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'relation-redhen_affiliation-redhen_relation_roles'.
  $fields['relation-redhen_affiliation-redhen_relation_roles'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'redhen_relation_roles',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 1,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Admin',
          1 => 'Member',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'redhen_affiliation',
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'deleted' => 0,
      'description' => 'This is a placeholder field to control what actions a contact in an organization can perform. Access control to be implemented.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'list_default',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'relation',
      'field_name' => 'redhen_relation_roles',
      'label' => 'Organization Role',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'relation-redhen_affiliation-redhen_relation_status'.
  $fields['relation-redhen_affiliation-redhen_relation_status'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'redhen_relation_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 1,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Inactive',
          1 => 'Active',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'redhen_affiliation',
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'list_default',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'relation',
      'field_name' => 'redhen_relation_status',
      'label' => 'Affiliation Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'relation-redhen_connection-endpoints'.
  $fields['relation-redhen_connection-endpoints'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'endpoints',
      'foreign keys' => array(),
      'indexes' => array(
        'relation' => array(
          0 => 'entity_type',
          1 => 'entity_id',
          2 => 'r_index',
        ),
      ),
      'locked' => 0,
      'module' => 'relation_endpoint',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'relation_endpoint',
    ),
    'field_instance' => array(
      'bundle' => 'redhen_connection',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'relation_endpoint',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'view_modes' => array(
              'cer' => 'default',
              'entity_rule_setting' => 'default',
              'entityform' => 'default',
              'entityform_type' => 'default',
              'field_collection_item' => 'default',
              'fieldable_panels_pane' => 'default',
              'file' => 'default',
              'menu_link' => 'default',
              'node' => 'default',
              'redhen_contact' => 'default',
              'redhen_contact_type' => 'default',
              'redhen_note' => 'default',
              'redhen_org' => 'default',
              'redhen_org_type' => 'default',
              'redirect' => 'default',
              'relation' => 'default',
              'rules_config' => 'default',
              'taxonomy_term' => 'default',
              'taxonomy_vocabulary' => 'default',
              'user' => 'default',
              'wysiwyg_profile' => 'default',
            ),
          ),
          'type' => 'relation_endpoint',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'relation',
      'field_name' => 'endpoints',
      'label' => 'endpoints',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'relation_endpoint',
        'settings' => array(),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'relation-redhen_connection-redhen_relation_status'.
  $fields['relation-redhen_connection-redhen_relation_status'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'redhen_relation_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 1,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Inactive',
          1 => 'Active',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'redhen_connection',
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'list_default',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'relation',
      'field_name' => 'redhen_relation_status',
      'label' => 'Connection Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => 1,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Affiliation Status');
  t('Company Address');
  t('Connection Status');
  t('Contact Bio');
  t('Email');
  t('Job Title');
  t('Logo');
  t('Message');
  t('Note Type');
  t('Organization Role');
  t('Phone');
  t('Photo');
  t('This is a placeholder field to control what actions a contact in an organization can perform. Access control to be implemented.');
  t('Website');
  t('endpoints');

  return $fields;
}
