<?php
/**
 * @file
 * ec_promotions.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ec_promotions_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-promotion-field_address'
  $field_instances['entityform-promotion-field_address'] = array(
    'bundle' => 'promotion',
    'default_value' => array(
      0 => array(
        'element_key' => 'entityform|promotion|field_address|und|0',
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
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'default_country' => '',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'addressfield_standard',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-promotion-field_business2'
  $field_instances['entityform-promotion-field_business2'] = array(
    'bundle' => 'promotion',
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_business2',
    'label' => 'Business Name',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-promotion-field_email'
  $field_instances['entityform-promotion-field_email'] = array(
    'bundle' => 'promotion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'email_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-promotion-field_first_name'
  $field_instances['entityform-promotion-field_first_name'] = array(
    'bundle' => 'promotion',
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-promotion-field_last_name'
  $field_instances['entityform-promotion-field_last_name'] = array(
    'bundle' => 'promotion',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-promotion-field_phone'
  $field_instances['entityform-promotion-field_phone'] = array(
    'bundle' => 'promotion',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 1,
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
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'phone_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-panopoly_page-field_ref_page_promotions'
  $field_instances['node-panopoly_page-field_ref_page_promotions'] = array(
    'bundle' => 'panopoly_page',
    'default_value' => NULL,
    'default_value_function' => '',
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
      'search_result' => array(
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
    'field_name' => 'field_ref_page_promotions',
    'label' => 'Promotions',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'status' => 0,
        ),
      ),
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
  );

  // Exported field_instance: 'node-promotion-body'
  $field_instances['node-promotion-body'] = array(
    'bundle' => 'promotion',
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
        'weight' => 14,
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
        'weight' => 15,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-promotion-field_button_text'
  $field_instances['node-promotion-field_button_text'] = array(
    'bundle' => 'promotion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the text for the CTA form submit button',
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
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'title_class' => 'button promo-button',
          'title_link' => 'content',
          'title_style' => '_none',
        ),
        'type' => 'title_linked',
        'weight' => 2,
      ),
      'grouped_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'show_this_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_button_text',
    'label' => 'Button Text',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
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
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-promotion-field_call_to_action'
  $field_instances['node-promotion-field_call_to_action'] = array(
    'bundle' => 'promotion',
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
        'weight' => 13,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_call_to_action',
    'label' => 'Call to Action',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
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
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-promotion-field_display_startend'
  $field_instances['node-promotion-field_display_startend'] = array(
    'bundle' => 'promotion',
    'deleted' => 0,
    'description' => 'Enter the dates on which to start and end the display of this promotion in feature blocks.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
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
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_display_startend',
    'label' => 'Display Start-End',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'strtotime',
      'default_value_code' => '',
      'default_value_code2' => '+180 days',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'M j Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-promotion-field_display_subtitle'
  $field_instances['node-promotion-field_display_subtitle'] = array(
    'bundle' => 'promotion',
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
      'featured' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'grouped_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'show_this_block' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'title_class' => '',
          'title_link' => 'content',
          'title_style' => '_none',
        ),
        'type' => 'title_linked',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_display_subtitle',
    'label' => 'Display subtitle',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-promotion-field_display_title'
  $field_instances['node-promotion-field_display_title'] = array(
    'bundle' => 'promotion',
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
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'grouped_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'show_this_block' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'title_class' => '',
          'title_link' => 'content',
          'title_style' => '_none',
        ),
        'type' => 'title_linked',
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
    'field_name' => 'field_display_title',
    'label' => 'Display Title',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-promotion-field_promotion_image'
  $field_instances['node-promotion-field_promotion_image'] = array(
    'bundle' => 'promotion',
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
        'weight' => 5,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'grouped_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'show_this_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_promotion_image',
    'label' => 'Promotion image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'promotion',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '2400x2400',
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
  );

  // Exported field_instance: 'node-promotion-field_promotion_link_text'
  $field_instances['node-promotion-field_promotion_link_text'] = array(
    'bundle' => 'promotion',
    'default_value' => array(
      0 => array(
        'value' => 'Learn More',
      ),
    ),
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
        'weight' => 16,
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
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'title_class' => '',
          'title_link' => 'content',
          'title_style' => '_none',
        ),
        'type' => 'title_linked',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_promotion_link_text',
    'label' => 'Promo link text',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-promotion-field_ref_promo_article'
  $field_instances['node-promotion-field_ref_promo_article'] = array(
    'bundle' => 'promotion',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Select article pages (news, press release, etc.) on which to display this promo.',
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
        'weight' => 9,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ref_promo_article',
    'label' => 'Article',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'status' => 0,
        ),
      ),
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
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-promotion-field_ref_promo_case_study'
  $field_instances['node-promotion-field_ref_promo_case_study'] = array(
    'bundle' => 'promotion',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Select case study pages on which to display this promo.',
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
        'weight' => 10,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
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
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ref_promo_case_study',
    'label' => 'Case Study',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'status' => 0,
        ),
      ),
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
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-promotion-field_ref_promo_page'
  $field_instances['node-promotion-field_ref_promo_page'] = array(
    'bundle' => 'promotion',
    'default_value' => NULL,
    'default_value_function' => '',
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
        'weight' => 15,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
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
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ref_promo_page',
    'label' => 'Content Page',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'status' => 0,
        ),
      ),
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
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-promotion-field_ref_promo_serv_cat'
  $field_instances['node-promotion-field_ref_promo_serv_cat'] = array(
    'bundle' => 'promotion',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Select the service category pages on which to show this promo.',
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
        'weight' => 12,
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
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ref_promo_serv_cat',
    'label' => 'Service Category',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'status' => 0,
        ),
      ),
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
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-promotion-field_ref_promo_serv_group'
  $field_instances['node-promotion-field_ref_promo_serv_group'] = array(
    'bundle' => 'promotion',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Select the service group pages on which to display this promo',
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
        'weight' => 13,
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
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ref_promo_serv_group',
    'label' => 'Service Group',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'status' => 0,
        ),
      ),
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
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-promotion-field_ref_promo_service'
  $field_instances['node-promotion-field_ref_promo_service'] = array(
    'bundle' => 'promotion',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Select the Service pages on which to show this promo.',
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
        'weight' => 8,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
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
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ref_promo_service',
    'label' => 'Service',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'status' => 0,
        ),
      ),
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
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-promotion-field_ref_promotion_product'
  $field_instances['node-promotion-field_ref_promotion_product'] = array(
    'bundle' => 'promotion',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Show this promotion on these product pages.',
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
        'weight' => 12,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
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
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ref_promotion_product',
    'label' => 'Product',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'status' => 0,
        ),
      ),
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-promotion-field_ref_to_cta_form'
  $field_instances['node-promotion-field_ref_to_cta_form'] = array(
    'bundle' => 'promotion',
    'default_value' => NULL,
    'default_value_function' => '',
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
        'weight' => 14,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
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
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ref_to_cta_form',
    'label' => 'CTA form',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'status' => 0,
        ),
      ),
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
      'weight' => 29,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Article');
  t('Body');
  t('Business Name');
  t('Button Text');
  t('CTA form');
  t('Call to Action');
  t('Case Study');
  t('Content Page');
  t('Display Start-End');
  t('Display Title');
  t('Display subtitle');
  t('Email');
  t('Enter the dates on which to start and end the display of this promotion in feature blocks.');
  t('Enter the text for the CTA form submit button');
  t('First Name');
  t('Last Name');
  t('Phone');
  t('Product');
  t('Promo link text');
  t('Promotion image');
  t('Promotions');
  t('Select article pages (news, press release, etc.) on which to display this promo.');
  t('Select case study pages on which to display this promo.');
  t('Select the Service pages on which to show this promo.');
  t('Select the service category pages on which to show this promo.');
  t('Select the service group pages on which to display this promo');
  t('Service');
  t('Service Category');
  t('Service Group');
  t('Show this promotion on these product pages.');

  return $field_instances;
}
