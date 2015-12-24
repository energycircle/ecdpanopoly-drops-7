<?php
/**
 * @file
 * ec_download_file_gate.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ec_download_file_gate_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_6a964864-8a84-42fc-9849-4a9a5da7e874';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'EC Guide - Signup',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'request_restricted' => 'request_restricted',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 5,
              1 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5a387286-7b06-478e-bf7b-7f9328173c6b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5fe417c7-a492-4efd-b32e-02cd478330a5';
  $pane->panel = 'two_50_bottom';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_req_res_file';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5fe417c7-a492-4efd-b32e-02cd478330a5';
  $display->content['new-5fe417c7-a492-4efd-b32e-02cd478330a5'] = $pane;
  $display->panels['two_50_bottom'][0] = 'new-5fe417c7-a492-4efd-b32e-02cd478330a5';
  $pane = new stdClass();
  $pane->pid = 'new-86e3cc47-b51c-4e34-a901-e85528a55d7f';
  $pane->panel = 'two_50_top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Enter your name and email address (and click "Save"). You will receive an email with a link to download the file.</p>',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86e3cc47-b51c-4e34-a901-e85528a55d7f';
  $display->content['new-86e3cc47-b51c-4e34-a901-e85528a55d7f'] = $pane;
  $display->panels['two_50_top'][0] = 'new-86e3cc47-b51c-4e34-a901-e85528a55d7f';
  $pane = new stdClass();
  $pane->pid = 'new-552c6d68-1f9a-4377-a119-2227438ddb5e';
  $pane->panel = 'two_50_top';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_req_res_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '552c6d68-1f9a-4377-a119-2227438ddb5e';
  $display->content['new-552c6d68-1f9a-4377-a119-2227438ddb5e'] = $pane;
  $display->panels['two_50_top'][1] = 'new-552c6d68-1f9a-4377-a119-2227438ddb5e';
  $pane = new stdClass();
  $pane->pid = 'new-2ca18de0-2b3e-4789-88e8-2cdf469ea3b2';
  $pane->panel = 'two_50_top';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_req_res_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2ca18de0-2b3e-4789-88e8-2cdf469ea3b2';
  $display->content['new-2ca18de0-2b3e-4789-88e8-2cdf469ea3b2'] = $pane;
  $display->panels['two_50_top'][2] = 'new-2ca18de0-2b3e-4789-88e8-2cdf469ea3b2';
  $pane = new stdClass();
  $pane->pid = 'new-30c04647-626e-400d-8f9d-f7b53be12751';
  $pane->panel = 'two_50_top';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '30c04647-626e-400d-8f9d-f7b53be12751';
  $display->content['new-30c04647-626e-400d-8f9d-f7b53be12751'] = $pane;
  $display->panels['two_50_top'][3] = 'new-30c04647-626e-400d-8f9d-f7b53be12751';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_6a964864-8a84-42fc-9849-4a9a5da7e874'] = $handler;

  return $export;
}
