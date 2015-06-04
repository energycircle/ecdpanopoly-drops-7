<?php
/**
 * @file
 * ec_faq_demo_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ec_faq_demo_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 10,
  'title' => 'How do I know if it is more cost-efficient to repair my old air conditioning system or replace it?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5c5735d2-1bea-45ce-99bc-0f4d1dc3e688',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1416494620,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '56c08b58-7e49-4029-a16d-0b68f7997420',
  'revision_uid' => 10,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>If you’re like many people, the frustration of an equipment breakdown can make it tempting to solve the problem with a quick fix that doesn’t cost you a lot of money. That way you can get on with your busy life in relative comfort. But while a quick fix may be the least expensive solution in the short run, it may not give you the most value in the long run. It’s a fact of life:&nbsp;Older systems are more likely to break down.&nbsp;That means a bigger chance of emergency service calls and repairs—and paying for them.</p><p>There’s also an ongoing cost factor. Repairing an old system can only restore it to something less than its original level of efficiency. After you’ve recovered from the repair bill and the frustration of a system breakdown, you’ll still be battling high energy bills. What’s more, even a system that doesn’t break down loses efficiency as it ages. A 15-year-old system doesn’t operate anywhere near the efficiency it had when it was new!</p><p>Plus, when compared with modern, technologically advanced equipment, 15-year-old cooling systems are considered inefficient by today’s standards. The average homeowner can save up to 40% on cooling costs with new high-efficiency equipment.</p><h3>Here are some rules of thumb to help you decide whether to replace or repair.</h3><h3>Replace&nbsp;your system if:</h3><ul><li>it is more than 10 years old and only in average condition.</li><li>it does not keep you as comfortable as you would like.</li><li>it breaks down frequently.</li><li>you will be living in your home for at least five more years.</li></ul><h3>Repair&nbsp;your system if:</h3><ul><li>it is less than 10 years old and in good condition.</li><li>your cooling costs have been acceptable.</li><li>you’re pleased with your level of comfort.</li><li>its performance is reliable.</li><li>you will be moving within the next five years.</li><li>it is still under warranty.</li></ul>',
        'summary' => '',
        'format' => 'panopoly_wysiwyg_text',
        'safe_value' => '<p>If you’re like many people, the frustration of an equipment breakdown can make it tempting to solve the problem with a quick fix that doesn’t cost you a lot of money. That way you can get on with your busy life in relative comfort. But while a quick fix may be the least expensive solution in the short run, it may not give you the most value in the long run. It’s a fact of life: Older systems are more likely to break down. That means a bigger chance of emergency service calls and repairs—and paying for them.</p>
<p>There’s also an ongoing cost factor. Repairing an old system can only restore it to something less than its original level of efficiency. After you’ve recovered from the repair bill and the frustration of a system breakdown, you’ll still be battling high energy bills. What’s more, even a system that doesn’t break down loses efficiency as it ages. A 15-year-old system doesn’t operate anywhere near the efficiency it had when it was new!</p>
<p>Plus, when compared with modern, technologically advanced equipment, 15-year-old cooling systems are considered inefficient by today’s standards. The average homeowner can save up to 40% on cooling costs with new high-efficiency equipment.</p>
<h3>Here are some rules of thumb to help you decide whether to replace or repair.</h3>
<h3>Replace your system if:</h3>
<ul>
<li>it is more than 10 years old and only in average condition.</li>
<li>it does not keep you as comfortable as you would like.</li>
<li>it breaks down frequently.</li>
<li>you will be living in your home for at least five more years.</li>
</ul>
<h3>Repair your system if:</h3>
<ul>
<li>it is less than 10 years old and in good condition.</li>
<li>your cooling costs have been acceptable.</li>
<li>you’re pleased with your level of comfort.</li>
<li>its performance is reliable.</li>
<li>you will be moving within the next five years.</li>
<li>it is still under warranty.</li>
</ul>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_ref_faq_serv' => array(),
  'field_ref_faq_servcat' => array(
    'und' => array(
      0 => array(
        'target_id' => 23,
      ),
    ),
  ),
  'field_ref_faq_servgroup' => array(
    'und' => array(
      0 => array(
        'target_id' => 22,
      ),
      1 => array(
        'target_id' => 33,
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'panelizer' => array(
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 129,
      'revision_id' => 129,
      'name' => 'node:faq:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          96 => array(
            'pid' => 96,
            'did' => 15,
            'panel' => 'two_66_33_first',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'field_multiple_limit' => -1,
                'field_multiple_limit_offset' => 0,
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '46d877ad-93e0-4815-ad2d-508137fb9df3',
          ),
          97 => array(
            'pid' => 97,
            'did' => 15,
            'panel' => 'two_66_33_first',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '3369f28e-0efd-4c42-af69-cc9f90c84660',
          ),
          98 => array(
            'pid' => 98,
            'did' => 15,
            'panel' => 'two_66_33_second',
            'type' => 'menu_tree',
            'subtype' => 'menu-auxiliary-menu',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'menu_name' => 'menu-auxiliary-menu',
              'parent_mlid' => 0,
              'parent' => 'menu-auxiliary-menu:0',
              'title_link' => 0,
              'admin_title' => '',
              'level' => 2,
              'follow' => 0,
              'depth' => 0,
              'expanded' => 0,
              'sort' => 0,
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '1123caeb-0a8a-44b4-94ed-f6fd3cb0a52a',
          ),
        ),
        'panels' => array(
          'two_66_33_first' => array(
            0 => 96,
            1 => 97,
          ),
          'two_66_33_second' => array(
            0 => 98,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 15,
        'renderer' => 'standard',
        'layout' => 'two_66_33',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'two_66_33_top' => NULL,
            'two_66_33_first' => NULL,
            'two_66_33_second' => NULL,
            'two_66_33_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 97,
        'uuid' => 'dbc690d0-c6be-427a-be5b-1edba00b007d',
      ),
    ),
  ),
  'machine_name' => FALSE,
  'name' => 'Jack Gross',
  'picture' => 0,
  'data' => 'b:0;',
  'weight_weight' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-11-20 09:43:40 -0500',
);
  $nodes[] = array(
  'uid' => 10,
  'title' => 'I hear a lot of talk about high-efficiency heating systems. How do you determine a heating system’s efficiency?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3e0cb701-7ecf-4d50-8614-ebd6f366e7b4',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1416495771,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8016d5bf-4ff2-4fa0-a562-3c45b6eac3e7',
  'revision_uid' => 10,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span>One indiciator is Annual Fuel Utilization Efficiency (AFUE). All heating equipment manufactured after 1980 has been required to have a label indicating its AFUE. The AFUE ratio is a measurement of a heating system’s seasonal efficiency, taking into account how well the system performs over an entire season of starts and stops. Modern heating systems can range in efficiency from 81% to 95%. If your system’s AFUE is lower than this range, talk to us about your replacement options.</span></p>',
        'summary' => '',
        'format' => 'panopoly_wysiwyg_text',
        'safe_value' => '<p><span>One indiciator is Annual Fuel Utilization Efficiency (AFUE). All heating equipment manufactured after 1980 has been required to have a label indicating its AFUE. The AFUE ratio is a measurement of a heating system’s seasonal efficiency, taking into account how well the system performs over an entire season of starts and stops. Modern heating systems can range in efficiency from 81% to 95%. If your system’s AFUE is lower than this range, talk to us about your replacement options.</span></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_ref_faq_serv' => array(
    'und' => array(
      0 => array(
        'target_id' => 27,
      ),
    ),
  ),
  'field_ref_faq_servcat' => array(
    'und' => array(
      0 => array(
        'target_id' => 23,
      ),
      1 => array(
        'target_id' => 47,
      ),
    ),
  ),
  'field_ref_faq_servgroup' => array(
    'und' => array(
      0 => array(
        'target_id' => 22,
      ),
      1 => array(
        'target_id' => 33,
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'panelizer' => array(
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 131,
      'revision_id' => 131,
      'name' => 'node:faq:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          96 => array(
            'pid' => 96,
            'did' => 15,
            'panel' => 'two_66_33_first',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'field_multiple_limit' => -1,
                'field_multiple_limit_offset' => 0,
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '46d877ad-93e0-4815-ad2d-508137fb9df3',
          ),
          97 => array(
            'pid' => 97,
            'did' => 15,
            'panel' => 'two_66_33_first',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '3369f28e-0efd-4c42-af69-cc9f90c84660',
          ),
          98 => array(
            'pid' => 98,
            'did' => 15,
            'panel' => 'two_66_33_second',
            'type' => 'menu_tree',
            'subtype' => 'menu-auxiliary-menu',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'menu_name' => 'menu-auxiliary-menu',
              'parent_mlid' => 0,
              'parent' => 'menu-auxiliary-menu:0',
              'title_link' => 0,
              'admin_title' => '',
              'level' => 2,
              'follow' => 0,
              'depth' => 0,
              'expanded' => 0,
              'sort' => 0,
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '1123caeb-0a8a-44b4-94ed-f6fd3cb0a52a',
          ),
        ),
        'panels' => array(
          'two_66_33_first' => array(
            0 => 96,
            1 => 97,
          ),
          'two_66_33_second' => array(
            0 => 98,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 15,
        'renderer' => 'standard',
        'layout' => 'two_66_33',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'two_66_33_top' => NULL,
            'two_66_33_first' => NULL,
            'two_66_33_second' => NULL,
            'two_66_33_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 97,
        'uuid' => 'dbc690d0-c6be-427a-be5b-1edba00b007d',
      ),
    ),
  ),
  'machine_name' => FALSE,
  'name' => 'Jack Gross',
  'picture' => 0,
  'data' => 'b:0;',
  'weight_weight' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-11-20 10:02:51 -0500',
);
  $nodes[] = array(
  'uid' => 10,
  'title' => 'What does SEER stand for?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f0c950a2-e0bd-4d15-87c3-6872c8d622aa',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1416494827,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ac1e5a29-a573-430c-a71d-aaead79e151e',
  'revision_uid' => 10,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span>SEER stands for Seasonal Energy Efficiency Ratio. It is used to indicate the efficiency of air conditioning systems. The higher the SEER number, the more cooling you get per unit of energy. As of January 2006, only units with a SEER of 13 or higher will be allowed to be sold in the&nbsp;</span>United States<span>. Today’s cooling units are up to 40% more efficient than those made as recently as 10 years ago. SEER is only one way to judge efficiency. Some better factors to look at are EER.</span></p>',
        'summary' => '',
        'format' => 'panopoly_wysiwyg_text',
        'safe_value' => '<p><span>SEER stands for Seasonal Energy Efficiency Ratio. It is used to indicate the efficiency of air conditioning systems. The higher the SEER number, the more cooling you get per unit of energy. As of January 2006, only units with a SEER of 13 or higher will be allowed to be sold in the </span>United States<span>. Today’s cooling units are up to 40% more efficient than those made as recently as 10 years ago. SEER is only one way to judge efficiency. Some better factors to look at are EER.</span></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_ref_faq_serv' => array(
    'und' => array(
      0 => array(
        'target_id' => 27,
      ),
    ),
  ),
  'field_ref_faq_servcat' => array(
    'und' => array(
      0 => array(
        'target_id' => 23,
      ),
      1 => array(
        'target_id' => 44,
      ),
    ),
  ),
  'field_ref_faq_servgroup' => array(
    'und' => array(
      0 => array(
        'target_id' => 22,
      ),
      1 => array(
        'target_id' => 33,
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'panelizer' => array(
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 130,
      'revision_id' => 130,
      'name' => 'node:faq:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          96 => array(
            'pid' => 96,
            'did' => 15,
            'panel' => 'two_66_33_first',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'field_multiple_limit' => -1,
                'field_multiple_limit_offset' => 0,
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '46d877ad-93e0-4815-ad2d-508137fb9df3',
          ),
          97 => array(
            'pid' => 97,
            'did' => 15,
            'panel' => 'two_66_33_first',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '3369f28e-0efd-4c42-af69-cc9f90c84660',
          ),
          98 => array(
            'pid' => 98,
            'did' => 15,
            'panel' => 'two_66_33_second',
            'type' => 'menu_tree',
            'subtype' => 'menu-auxiliary-menu',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'menu_name' => 'menu-auxiliary-menu',
              'parent_mlid' => 0,
              'parent' => 'menu-auxiliary-menu:0',
              'title_link' => 0,
              'admin_title' => '',
              'level' => 2,
              'follow' => 0,
              'depth' => 0,
              'expanded' => 0,
              'sort' => 0,
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '1123caeb-0a8a-44b4-94ed-f6fd3cb0a52a',
          ),
        ),
        'panels' => array(
          'two_66_33_first' => array(
            0 => 96,
            1 => 97,
          ),
          'two_66_33_second' => array(
            0 => 98,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 15,
        'renderer' => 'standard',
        'layout' => 'two_66_33',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'two_66_33_top' => NULL,
            'two_66_33_first' => NULL,
            'two_66_33_second' => NULL,
            'two_66_33_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 97,
        'uuid' => 'dbc690d0-c6be-427a-be5b-1edba00b007d',
      ),
    ),
  ),
  'machine_name' => FALSE,
  'name' => 'Jack Gross',
  'picture' => 0,
  'data' => 'b:0;',
  'weight_weight' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-11-20 09:47:07 -0500',
);
  $nodes[] = array(
  'uid' => 10,
  'title' => 'How do I know what size system to install?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '65ed2093-2d2f-4acd-9886-0c79effad614',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1416331417,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd0f16eb1-a207-44e4-9f9e-4a976fba5e39',
  'revision_uid' => 3,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span>The experts at Princeton Air will be happy to come to your home and calculate your cooling and heating “loads.” They will then be able to recommend a system that is the correct size and model to meet your home’s requirements. Please call us for more details.</span></p>',
        'summary' => '',
        'format' => 'panopoly_wysiwyg_text',
        'safe_value' => '<p><span>The experts at Princeton Air will be happy to come to your home and calculate your cooling and heating “loads.” They will then be able to recommend a system that is the correct size and model to meet your home’s requirements. Please call us for more details.</span></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_ref_faq_serv' => array(
    'und' => array(
      0 => array(
        'target_id' => 27,
      ),
    ),
  ),
  'field_ref_faq_servcat' => array(
    'und' => array(
      0 => array(
        'target_id' => 23,
      ),
      1 => array(
        'target_id' => 44,
      ),
      2 => array(
        'target_id' => 47,
      ),
    ),
  ),
  'field_ref_faq_servgroup' => array(
    'und' => array(
      0 => array(
        'target_id' => 22,
      ),
      1 => array(
        'target_id' => 33,
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'panelizer' => array(
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 83,
      'revision_id' => 83,
      'name' => 'node:faq:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          96 => array(
            'pid' => 96,
            'did' => 15,
            'panel' => 'two_66_33_first',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'field_multiple_limit' => -1,
                'field_multiple_limit_offset' => 0,
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '46d877ad-93e0-4815-ad2d-508137fb9df3',
          ),
          97 => array(
            'pid' => 97,
            'did' => 15,
            'panel' => 'two_66_33_first',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '3369f28e-0efd-4c42-af69-cc9f90c84660',
          ),
          98 => array(
            'pid' => 98,
            'did' => 15,
            'panel' => 'two_66_33_second',
            'type' => 'menu_tree',
            'subtype' => 'menu-auxiliary-menu',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'menu_name' => 'menu-auxiliary-menu',
              'parent_mlid' => 0,
              'parent' => 'menu-auxiliary-menu:0',
              'title_link' => 0,
              'admin_title' => '',
              'level' => 2,
              'follow' => 0,
              'depth' => 0,
              'expanded' => 0,
              'sort' => 0,
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '1123caeb-0a8a-44b4-94ed-f6fd3cb0a52a',
          ),
        ),
        'panels' => array(
          'two_66_33_first' => array(
            0 => 96,
            1 => 97,
          ),
          'two_66_33_second' => array(
            0 => 98,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 15,
        'renderer' => 'standard',
        'layout' => 'two_66_33',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'two_66_33_top' => NULL,
            'two_66_33_first' => NULL,
            'two_66_33_second' => NULL,
            'two_66_33_bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 0,
        'title_pane' => 97,
        'uuid' => 'dbc690d0-c6be-427a-be5b-1edba00b007d',
      ),
    ),
  ),
  'machine_name' => FALSE,
  'name' => 'Jack Gross',
  'picture' => 0,
  'data' => 'b:0;',
  'weight_weight' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-11-18 12:23:37 -0500',
);
  return $nodes;
}
