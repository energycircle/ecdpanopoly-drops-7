<?php
/**
 * @file
 * ec_help_documentation.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function ec_help_documentation_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'ec_help_documentation';
  $plan->title = 'EC Help Documentation';
  $plan->description = 'Used to pull in help documentation.';
  $plan->debug = 1;
  $plan->aggregator_plugin = 'DeployAggregatorManaged';
  $plan->aggregator_config = array(
    'delete_post_deploy' => 0,
  );
  $plan->fetch_only = 1;
  $plan->processor_plugin = '';
  $plan->processor_config = array();
  $plan->endpoints = array();
  $plan->dependency_plugin = 'deploy_iterator';
  $export['ec_help_documentation'] = $plan;

  return $export;
}
