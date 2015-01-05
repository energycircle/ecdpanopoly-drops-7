<?php
/**
 * @file
 * ec_rms.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ec_rms_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'RMS - High Range - Review',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'node-edit',
    'css' => '/* all-variant styles: */

h1#page-title,
#breadcrumb,
ul.tabs.primary {
	display: none;
}',
    'contexts' => array(
      0 => array(
        'identifier' => 'String',
        'keyword' => 'string',
        'name' => 'string',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ec_review' => 'ec_review',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/rms-review',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
    'sidebar' => array(
      'style' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '56f6d0a5-d0cb-4670-8442-80de25b84871';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-87ebf542-1428-4f4c-bb96-76dffea55f76';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'High-Range Review Message',
      'title' => '',
      'body' => '<h2>Thank you for rating our service! If you have a minute, please leave us a review.</h2>',
      'format' => 'panopoly_html_text',
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
    $pane->uuid = '87ebf542-1428-4f4c-bb96-76dffea55f76';
    $display->content['new-87ebf542-1428-4f4c-bb96-76dffea55f76'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-87ebf542-1428-4f4c-bb96-76dffea55f76';
    $pane = new stdClass();
    $pane->pid = 'new-7aad04c1-605b-4af7-8304-3bb3f3d27615';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_review_site_review';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7aad04c1-605b-4af7-8304-3bb3f3d27615';
    $display->content['new-7aad04c1-605b-4af7-8304-3bb3f3d27615'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-7aad04c1-605b-4af7-8304-3bb3f3d27615';
    $pane = new stdClass();
    $pane->pid = 'new-c0926cca-059c-4bb1-bccd-2838ec7a93f2';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c0926cca-059c-4bb1-bccd-2838ec7a93f2';
    $display->content['new-c0926cca-059c-4bb1-bccd-2838ec7a93f2'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-c0926cca-059c-4bb1-bccd-2838ec7a93f2';
    $pane = new stdClass();
    $pane->pid = 'new-f8f88b11-852f-46d4-abd1-4debb25744f9';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'rms_review_sites-panel_pane_1';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f8f88b11-852f-46d4-abd1-4debb25744f9';
    $display->content['new-f8f88b11-852f-46d4-abd1-4debb25744f9'] = $pane;
    $display->panels['two_66_33_first'][3] = 'new-f8f88b11-852f-46d4-abd1-4debb25744f9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_3';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'RMS - Low-Range - Comment',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'node-edit',
    'css' => '/* all-variant styles: */

h1#page-title,
#breadcrumb,
ul.tabs.primary {
	display: none;
}

/* additional rating widget styles */

input#edit-field-review-rating-und-none,
label[for="edit-field-review-rating-und-none"] {
  display:none;
}

#edit-field-review-rating-und,
.description {
  width: 500px;
}
  
#edit-field-review-rating-und {
	padding-top: 20px;
}

.description {
	padding-top: 5px;
}

#edit-field-review-rating-und .form-item {
  display: inline-block; 
  width: 8%; 
  padding: 0; 
  margin: 0;
}

#edit-field-review-rating-und label {
  float: left; 
  width: 100%;
  }
  
.review-low,
.review-high {
  display: inline-block; 
  width: 48%;
}
  
.review-low {
	padding-left: 1em;
}
.review-high {
  text-align: right; 
}',
    'contexts' => array(
      0 => array(
        'identifier' => 'String',
        'keyword' => 'string',
        'name' => 'string',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ec_review' => 'ec_review',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/rms-message2',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '56f6d0a5-d0cb-4670-8442-80de25b84871';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9fd3a0f4-f2ce-4250-9949-f1a1ca54797f';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Low-Range Review Message',
      'title' => '',
      'body' => '<p>We are sorry that there was a problem. Please provide a brief description, so that our staff can contact you to follow up.</p>',
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
    $pane->uuid = '9fd3a0f4-f2ce-4250-9949-f1a1ca54797f';
    $display->content['new-9fd3a0f4-f2ce-4250-9949-f1a1ca54797f'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-9fd3a0f4-f2ce-4250-9949-f1a1ca54797f';
    $pane = new stdClass();
    $pane->pid = 'new-8a1f94b7-1e16-4cf5-b0c4-c6757d8e0dff';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_review_message';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8a1f94b7-1e16-4cf5-b0c4-c6757d8e0dff';
    $display->content['new-8a1f94b7-1e16-4cf5-b0c4-c6757d8e0dff'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-8a1f94b7-1e16-4cf5-b0c4-c6757d8e0dff';
    $pane = new stdClass();
    $pane->pid = 'new-c0926cca-059c-4bb1-bccd-2838ec7a93f2';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c0926cca-059c-4bb1-bccd-2838ec7a93f2';
    $display->content['new-c0926cca-059c-4bb1-bccd-2838ec7a93f2'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-c0926cca-059c-4bb1-bccd-2838ec7a93f2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_4';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'RMS - Rate Us',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'node-edit',
    'css' => 'h1#page-title,
#breadcrumb,
ul.tabs.primary,
input#edit-field-review-rating-und-none,
label[for="edit-field-review-rating-und-none"] {
  display:none;
  }

#edit-field-review-rating-und,
.description {
  width: 500px;
  }
  
#edit-field-review-rating-und {
	padding-top: 20px;
}

.description {
	padding-top: 5px;
}

#edit-field-review-rating-und .form-item {
  display: inline-block; 
  width: 8%; 
  padding: 0; 
  margin: 0;
  }

#edit-field-review-rating-und label {
  float: left; 
  width: 100%;
  }
  
.review-low,
.review-high {
  display: inline-block; 
  width: 48%;
  }
  
.review-low {
	padding-left: 1em;
}
.review-high {
  text-align: right; 
  }',
    'contexts' => array(
      0 => array(
        'identifier' => 'String',
        'keyword' => 'string',
        'name' => 'string',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ec_review' => 'ec_review',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/rms-rating',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '56f6d0a5-d0cb-4670-8442-80de25b84871';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d5aa28cd-7615-4fad-a1a0-6450a0f3032b';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_review_rating';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd5aa28cd-7615-4fad-a1a0-6450a0f3032b';
    $display->content['new-d5aa28cd-7615-4fad-a1a0-6450a0f3032b'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-d5aa28cd-7615-4fad-a1a0-6450a0f3032b';
    $pane = new stdClass();
    $pane->pid = 'new-c0926cca-059c-4bb1-bccd-2838ec7a93f2';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c0926cca-059c-4bb1-bccd-2838ec7a93f2';
    $display->content['new-c0926cca-059c-4bb1-bccd-2838ec7a93f2'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-c0926cca-059c-4bb1-bccd-2838ec7a93f2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_5';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'RMS - Mid-Range - Comment',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'node-edit',
    'css' => '/* all-variant styles: */

h1#page-title,
#breadcrumb,
ul.tabs.primary {
	display: none;
}',
    'contexts' => array(
      0 => array(
        'identifier' => 'String',
        'keyword' => 'string',
        'name' => 'string',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ec_review' => 'ec_review',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '*/rms-message1',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '56f6d0a5-d0cb-4670-8442-80de25b84871';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b3bd895f-642a-41eb-9454-dd69ffb60c83';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Mid-Range Review Message',
      'title' => '',
      'body' => '<p>We would like to address your concerns. Please provide a brief description of the issue.</p>',
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
    $pane->uuid = 'b3bd895f-642a-41eb-9454-dd69ffb60c83';
    $display->content['new-b3bd895f-642a-41eb-9454-dd69ffb60c83'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-b3bd895f-642a-41eb-9454-dd69ffb60c83';
    $pane = new stdClass();
    $pane->pid = 'new-8a1f94b7-1e16-4cf5-b0c4-c6757d8e0dff';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_review_message';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8a1f94b7-1e16-4cf5-b0c4-c6757d8e0dff';
    $display->content['new-8a1f94b7-1e16-4cf5-b0c4-c6757d8e0dff'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-8a1f94b7-1e16-4cf5-b0c4-c6757d8e0dff';
    $pane = new stdClass();
    $pane->pid = 'new-c0926cca-059c-4bb1-bccd-2838ec7a93f2';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c0926cca-059c-4bb1-bccd-2838ec7a93f2';
    $display->content['new-c0926cca-059c-4bb1-bccd-2838ec7a93f2'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-c0926cca-059c-4bb1-bccd-2838ec7a93f2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_5'] = $handler;

  return $export;
}
