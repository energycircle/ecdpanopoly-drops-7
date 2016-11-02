<?php
/**
 * @file
 * ec_sr3.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ec_sr3_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_0e9feb6b-7915-4378-a5cb-d5eab1c04ff5';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'SR3 - Low',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'sr3-low',
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
              'sr3_service_review' => 'sr3_service_review',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/sr3-message2',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Leave Feedback';
  $display->uuid = '35aa7d05-b237-4b3c-a835-a64325a17b90';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit__panel_context_0e9feb6b-7915-4378-a5cb-d5eab1c04ff5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1eac9233-8ad4-4695-88db-4140793cc59a';
  $pane->panel = 'one_main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'SR3 - Low Review Intro. Message',
    'title' => '',
    'body' => '<p>It looks as if we weren\'t on our best game. Please take a moment and send us a note, about how we can improve.<br>[This is a custom panel pane in the Node add/edit form, SR3 - Low.]</p>',
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
  $pane->uuid = '1eac9233-8ad4-4695-88db-4140793cc59a';
  $display->content['new-1eac9233-8ad4-4695-88db-4140793cc59a'] = $pane;
  $display->panels['one_main'][0] = 'new-1eac9233-8ad4-4695-88db-4140793cc59a';
  $pane = new stdClass();
  $pane->pid = 'new-f8c4543f-d7ea-4d95-9050-625f7703cb6e';
  $pane->panel = 'one_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:group_sr3_feedback';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
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
  $pane->uuid = 'f8c4543f-d7ea-4d95-9050-625f7703cb6e';
  $display->content['new-f8c4543f-d7ea-4d95-9050-625f7703cb6e'] = $pane;
  $display->panels['one_main'][1] = 'new-f8c4543f-d7ea-4d95-9050-625f7703cb6e';
  $pane = new stdClass();
  $pane->pid = 'new-8e4b89bf-6890-4033-835b-e90eb3744f4c';
  $pane->panel = 'one_main';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
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
  $pane->uuid = '8e4b89bf-6890-4033-835b-e90eb3744f4c';
  $display->content['new-8e4b89bf-6890-4033-835b-e90eb3744f4c'] = $pane;
  $display->panels['one_main'][2] = 'new-8e4b89bf-6890-4033-835b-e90eb3744f4c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f8c4543f-d7ea-4d95-9050-625f7703cb6e';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_0e9feb6b-7915-4378-a5cb-d5eab1c04ff5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_90443be3-e070-4134-be54-f5cd5697482e';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'SR3 - High',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'sr3-high',
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
              'sr3_service_review' => 'sr3_service_review',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/sr3-rating',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Post a Review';
  $display->uuid = '326ce0e4-1610-442c-917b-be84233e72cb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit__panel_context_90443be3-e070-4134-be54-f5cd5697482e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-73c196d5-3c7a-4ba8-8fb9-6a2c3584bff9';
  $pane->panel = 'one_main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'SR3 - High Review Intro. Message',
    'title' => '',
    'body' => '<p>We\'re glad you were satisfied with our service. Please take a minute to leave a review.</p>',
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
  $pane->uuid = '73c196d5-3c7a-4ba8-8fb9-6a2c3584bff9';
  $display->content['new-73c196d5-3c7a-4ba8-8fb9-6a2c3584bff9'] = $pane;
  $display->panels['one_main'][0] = 'new-73c196d5-3c7a-4ba8-8fb9-6a2c3584bff9';
  $pane = new stdClass();
  $pane->pid = 'new-f1153150-7a26-4527-8f62-39ffe41b65b9';
  $pane->panel = 'one_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:group_sr3_reviewer';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
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
  $pane->uuid = 'f1153150-7a26-4527-8f62-39ffe41b65b9';
  $display->content['new-f1153150-7a26-4527-8f62-39ffe41b65b9'] = $pane;
  $display->panels['one_main'][1] = 'new-f1153150-7a26-4527-8f62-39ffe41b65b9';
  $pane = new stdClass();
  $pane->pid = 'new-e9b71552-cb16-42c1-a9ad-35b2e21fcf83';
  $pane->panel = 'one_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:group_sr3_rating';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
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
  $pane->uuid = 'e9b71552-cb16-42c1-a9ad-35b2e21fcf83';
  $display->content['new-e9b71552-cb16-42c1-a9ad-35b2e21fcf83'] = $pane;
  $display->panels['one_main'][2] = 'new-e9b71552-cb16-42c1-a9ad-35b2e21fcf83';
  $pane = new stdClass();
  $pane->pid = 'new-d2aaa1f1-0af7-4a1e-aac4-74dc9eaf60af';
  $pane->panel = 'one_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:group_sr3_review';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
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
  $pane->uuid = 'd2aaa1f1-0af7-4a1e-aac4-74dc9eaf60af';
  $display->content['new-d2aaa1f1-0af7-4a1e-aac4-74dc9eaf60af'] = $pane;
  $display->panels['one_main'][3] = 'new-d2aaa1f1-0af7-4a1e-aac4-74dc9eaf60af';
  $pane = new stdClass();
  $pane->pid = 'new-1671aad1-ba5e-484c-82ce-3712b54aff3b';
  $pane->panel = 'one_main';
  $pane->type = 'views_panes';
  $pane->subtype = 'sr3_review_sites-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '1671aad1-ba5e-484c-82ce-3712b54aff3b';
  $display->content['new-1671aad1-ba5e-484c-82ce-3712b54aff3b'] = $pane;
  $display->panels['one_main'][4] = 'new-1671aad1-ba5e-484c-82ce-3712b54aff3b';
  $pane = new stdClass();
  $pane->pid = 'new-0d2d61f1-d59a-4f65-91b5-897db72ed870';
  $pane->panel = 'one_main';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '0d2d61f1-d59a-4f65-91b5-897db72ed870';
  $display->content['new-0d2d61f1-d59a-4f65-91b5-897db72ed870'] = $pane;
  $display->panels['one_main'][5] = 'new-0d2d61f1-d59a-4f65-91b5-897db72ed870';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f1153150-7a26-4527-8f62-39ffe41b65b9';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_90443be3-e070-4134-be54-f5cd5697482e'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_9148b22c-afed-4333-b4d3-2618e8879ab7';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'SR3 - Medium',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'sr3-medium',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'sr3_service_review' => 'sr3_service_review',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/sr3-message1',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Leave Feedback';
  $display->uuid = '648300e9-fcb1-4e5b-93d9-3853aabf0f9a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit__panel_context_9148b22c-afed-4333-b4d3-2618e8879ab7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0f3b54f0-c436-4902-ac5a-b42b03dfc7f6';
  $pane->panel = 'one_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:group_sr3_feedback';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
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
  $pane->uuid = '0f3b54f0-c436-4902-ac5a-b42b03dfc7f6';
  $display->content['new-0f3b54f0-c436-4902-ac5a-b42b03dfc7f6'] = $pane;
  $display->panels['one_main'][0] = 'new-0f3b54f0-c436-4902-ac5a-b42b03dfc7f6';
  $pane = new stdClass();
  $pane->pid = 'new-0390cc37-30a5-45ac-80cf-e0722d583b53';
  $pane->panel = 'one_main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'SR3 - Medium Review Intro. Message',
    'title' => '',
    'body' => '<p>It looks as if we weren\'t on our best game. Please take a moment and send us a note, about how we can improve.<br>[This is a custom panel pane in the Node add/edit form, SR3 - Medium.]</p>',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0390cc37-30a5-45ac-80cf-e0722d583b53';
  $display->content['new-0390cc37-30a5-45ac-80cf-e0722d583b53'] = $pane;
  $display->panels['one_main'][1] = 'new-0390cc37-30a5-45ac-80cf-e0722d583b53';
  $pane = new stdClass();
  $pane->pid = 'new-3e0e1b88-b81e-4180-aeef-f57fc10822ed';
  $pane->panel = 'one_main';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
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
  $pane->uuid = '3e0e1b88-b81e-4180-aeef-f57fc10822ed';
  $display->content['new-3e0e1b88-b81e-4180-aeef-f57fc10822ed'] = $pane;
  $display->panels['one_main'][2] = 'new-3e0e1b88-b81e-4180-aeef-f57fc10822ed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_9148b22c-afed-4333-b4d3-2618e8879ab7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_93361273-00c4-4b5b-8541-2387b2359cd0';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'SR3 - Evaluation',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'sr3-evaluation',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'sr3_service_review' => 'sr3_service_review',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Evaluate Our Service';
  $display->uuid = '4686d533-f7fd-4fad-b729-6e9ab1264819';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit__panel_context_93361273-00c4-4b5b-8541-2387b2359cd0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5866a161-1645-4698-aa8b-9d09f0041013';
  $pane->panel = 'one_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:group_sr3_services';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
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
  $pane->uuid = '5866a161-1645-4698-aa8b-9d09f0041013';
  $display->content['new-5866a161-1645-4698-aa8b-9d09f0041013'] = $pane;
  $display->panels['one_main'][0] = 'new-5866a161-1645-4698-aa8b-9d09f0041013';
  $pane = new stdClass();
  $pane->pid = 'new-6676e662-5783-4784-b02d-fb461b620f5d';
  $pane->panel = 'one_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:group_sr3_evaluation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
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
  $pane->uuid = '6676e662-5783-4784-b02d-fb461b620f5d';
  $display->content['new-6676e662-5783-4784-b02d-fb461b620f5d'] = $pane;
  $display->panels['one_main'][1] = 'new-6676e662-5783-4784-b02d-fb461b620f5d';
  $pane = new stdClass();
  $pane->pid = 'new-bc0f2416-d602-472a-bf4b-5295d7e04779';
  $pane->panel = 'one_main';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
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
  $pane->uuid = 'bc0f2416-d602-472a-bf4b-5295d7e04779';
  $display->content['new-bc0f2416-d602-472a-bf4b-5295d7e04779'] = $pane;
  $display->panels['one_main'][2] = 'new-bc0f2416-d602-472a-bf4b-5295d7e04779';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6676e662-5783-4784-b02d-fb461b620f5d';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_93361273-00c4-4b5b-8541-2387b2359cd0'] = $handler;

  return $export;
}
