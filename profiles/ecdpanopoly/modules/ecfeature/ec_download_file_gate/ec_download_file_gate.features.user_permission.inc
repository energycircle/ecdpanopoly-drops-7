<?php
/**
 * @file
 * ec_download_file_gate.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ec_download_file_gate_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node gated_file_page defaults'.
  $permissions['administer panelizer node gated_file_page defaults'] = array(
    'name' => 'administer panelizer node gated_file_page defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create gated_file_page content'.
  $permissions['create gated_file_page content'] = array(
    'name' => 'create gated_file_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create request_restricted content'.
  $permissions['create request_restricted content'] = array(
    'name' => 'create request_restricted content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gated_file_page content'.
  $permissions['delete any gated_file_page content'] = array(
    'name' => 'delete any gated_file_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any request_restricted content'.
  $permissions['delete any request_restricted content'] = array(
    'name' => 'delete any request_restricted content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own gated_file_page content'.
  $permissions['delete own gated_file_page content'] = array(
    'name' => 'delete own gated_file_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own request_restricted content'.
  $permissions['delete own request_restricted content'] = array(
    'name' => 'delete own request_restricted content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any gated_file_page content'.
  $permissions['edit any gated_file_page content'] = array(
    'name' => 'edit any gated_file_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any request_restricted content'.
  $permissions['edit any request_restricted content'] = array(
    'name' => 'edit any request_restricted content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own gated_file_page content'.
  $permissions['edit own gated_file_page content'] = array(
    'name' => 'edit own gated_file_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own request_restricted content'.
  $permissions['edit own request_restricted content'] = array(
    'name' => 'edit own request_restricted content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
