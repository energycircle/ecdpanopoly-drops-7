<?php
/**
 * @file
 * ec_cleaner.features.disable_modules.inc
 */

/**
 * Implements hook_disable_modules_defaults().
 */
function ec_cleaner_disable_modules_defaults() {
  $disable_modules = array();
  $disable_modules['contemplate'] = 'contemplate';
  $disable_modules['ctools_ajax_sample'] = 'ctools_ajax_sample';
  $disable_modules['ctools_plugin_example'] = 'ctools_plugin_example';
  $disable_modules['date_migrate_example'] = 'date_migrate_example';
  $disable_modules['deploy'] = 'deploy';
  $disable_modules['deploy_adhoc_plan'] = 'deploy_adhoc_plan';
  $disable_modules['deploy_auto_plan'] = 'deploy_auto_plan';
  $disable_modules['deploy_example'] = 'deploy_example';
  $disable_modules['deploy_managed_ui'] = 'deploy_managed_ui';
  $disable_modules['deploy_services'] = 'deploy_services';
  $disable_modules['deploy_services_client'] = 'deploy_services_client';
  $disable_modules['deploy_ui'] = 'deploy_ui';
  $disable_modules['devel'] = 'devel';
  $disable_modules['devel_contrib'] = 'devel_contrib';
  $disable_modules['devel_contrib_generate'] = 'devel_contrib_generate';
  $disable_modules['devel_entity'] = 'devel_entity';
  $disable_modules['devel_entity_ui'] = 'devel_entity_ui';
  $disable_modules['devel_generate'] = 'devel_generate';
  $disable_modules['devel_node_access'] = 'devel_node_access';
  $disable_modules['diff'] = 'diff';
  $disable_modules['distro_update'] = 'distro_update';
  $disable_modules['draggableviews_book'] = 'draggableviews_book';
  $disable_modules['ec_article_demo_content'] = 'ec_article_demo_content';
  $disable_modules['ec_blog_demo_content'] = 'ec_blog_demo_content';
  $disable_modules['ec_casestudy_demo_content'] = 'ec_casestudy_demo_content';
  $disable_modules['ec_development'] = 'ec_development';
  $disable_modules['ec_distinction_demo_content'] = 'ec_distinction_demo_content';
  $disable_modules['ec_faq_demo_content'] = 'ec_faq_demo_content';
  $disable_modules['ec_modifications'] = 'ec_modifications';
  $disable_modules['ec_panopoly_page_demo_content'] = 'ec_panopoly_page_demo_content';
  $disable_modules['ec_promotions_demo_content'] = 'ec_promotions_demo_content';
  $disable_modules['ec_services_demo_content'] = 'ec_services_demo_content';
  $disable_modules['ec_slide_demo_content'] = 'ec_slide_demo_content';
  $disable_modules['ec_staff_demo_content'] = 'ec_staff_demo_content';
  $disable_modules['ec_testimonials_demo_content'] = 'ec_testimonials_demo_content';
  $disable_modules['entityreference_behavior_example'] = 'entityreference_behavior_example';
  $disable_modules['features_extra_test'] = 'features_extra_test';
  $disable_modules['features_orphans'] = 'features_orphans';
  $disable_modules['field_tools'] = 'field_tools';
  $disable_modules['field_tools_taxonomy'] = 'field_tools_taxonomy';
  $disable_modules['flexslider_example'] = 'flexslider_example';
  $disable_modules['help_example'] = 'help_example';
  $disable_modules['menu_block_export'] = 'menu_block_export';
  $disable_modules['metatag_devel'] = 'metatag_devel';
  $disable_modules['migrate'] = 'migrate';
  $disable_modules['migrate_example'] = 'migrate_example';
  $disable_modules['migrate_example_baseball'] = 'migrate_example_baseball';
  $disable_modules['migrate_example_oracle'] = 'migrate_example_oracle';
  $disable_modules['migrate_extras'] = 'migrate_extras';
  $disable_modules['migrate_extras_media'] = 'migrate_extras_media';
  $disable_modules['migrate_extras_pathauto'] = 'migrate_extras_pathauto';
  $disable_modules['migrate_extras_profile2'] = 'migrate_extras_profile2';
  $disable_modules['migrate_ui'] = 'migrate_ui';
  $disable_modules['mimemail_example'] = 'mimemail_example';
  $disable_modules['node_export'] = 'node_export';
  $disable_modules['node_export_dependency'] = 'node_export_dependency';
  $disable_modules['node_export_feeds'] = 'node_export_feeds';
  $disable_modules['node_export_relation'] = 'node_export_relation';
  $disable_modules['permissions_export'] = 'permissions_export';
  $disable_modules['rdf'] = 'rdf';
  $disable_modules['schemaorg_event'] = 'schemaorg_event';
  $disable_modules['schemaorg_person'] = 'schemaorg_person';
  $disable_modules['schemaorg_recipe'] = 'schemaorg_recipe';
  $disable_modules['simpletest'] = 'simpletest';
  $disable_modules['uuid_services_example'] = 'uuid_services_example';
  $disable_modules['variable_example'] = 'variable_example';
  return $disable_modules;
}
