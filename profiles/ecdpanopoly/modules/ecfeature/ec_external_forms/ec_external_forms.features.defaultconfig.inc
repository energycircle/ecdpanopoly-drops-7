<?php
/**
 * @file
 * ec_external_forms.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ec_external_forms_defaultconfig_features() {
  return array(
    'ec_external_forms' => array(
      'field_default_fields' => 'field_default_fields',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function ec_external_forms_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'node-external_form-field_ex_form_embed_code'.
  $fields['node-external_form-field_ex_form_embed_code'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_ex_form_embed_code',
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
      'bundle' => 'external_form',
      'default_value' => array(
        0 => array(
          'value' => 'Copy form code here and select iframe. ',
          'format' => 'iframe',
        ),
      ),
      'deleted' => 0,
      'description' => 'Use the IFRAME editor setting to ensure not to strip important HTML tags',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'field_multiple_limit_order' => 0,
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
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ex_form_embed_code',
      'label' => 'Form Embed Code',
      'required' => 1,
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
          'maxlength_js' => '',
          'maxlength_js_enforce' => 0,
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
          'maxlength_js_truncate_html' => 0,
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'node-service-field_ref_external_form'.
  $fields['node-service-field_ref_external_form'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_ref_external_form',
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
            'external_form' => 'external_form',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => 0,
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'service',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
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
      'field_name' => 'field_ref_external_form',
      'label' => 'External Form',
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
        'weight' => 18,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('External Form');
  t('Form Embed Code');
  t('Use the IFRAME editor setting to ensure not to strip important HTML tags');

  return $fields;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function ec_external_forms_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node external_form defaults'.
  $permissions['administer panelizer node external_form defaults'] = array(
    'name' => 'administer panelizer node external_form defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create external_form content'.
  $permissions['create external_form content'] = array(
    'name' => 'create external_form content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any external_form content'.
  $permissions['delete any external_form content'] = array(
    'name' => 'delete any external_form content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own external_form content'.
  $permissions['delete own external_form content'] = array(
    'name' => 'delete own external_form content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any external_form content'.
  $permissions['edit any external_form content'] = array(
    'name' => 'edit any external_form content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own external_form content'.
  $permissions['edit own external_form content'] = array(
    'name' => 'edit own external_form content',
    'roles' => array(
      'EC Platinum admin' => 'EC Platinum admin',
      'EC Platinum editor' => 'EC Platinum editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
