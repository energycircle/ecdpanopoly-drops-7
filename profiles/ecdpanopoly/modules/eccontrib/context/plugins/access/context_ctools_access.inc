<?php

/**
 * @file
 * Plugin to provide access control based on solr status
 */

$plugin = array(
  'title' => t('Context (Module)'),
  'description' => t('Is a Context (Module) set?'),
  'callback' => 'context_ctools_access_check',
  'default' => array('negate' => 0, 'context_access' => array()),
  'settings form' => 'context_ctools_access_settings',
  'summary' => 'context_ctools_access_summary',
);

/**
 * Settings form for the 'by parent term' access plugin
 */
function context_ctools_access_settings($form, &$form_state, $conf) {
  // No additional configuration necessary.
  $list = context_context_list();
  if (empty($list)) {
    $form['no_context'] = array(
      '#markup' => t('No Contexts are defined by the Context Module.'),
    );
  }
  else {
    $form['settings']['context_access'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Context Name'),
      '#options' => $list,
      '#default_value' => $conf['context_access'],
      );
  }
  return $form;
}

/**
 * Check for access.
 */
function context_ctools_access_check($conf, $context) {
  foreach (array_filter($conf['context_access']) as $key => $value) {
    if (context_isset('context', $key)) {
      return TRUE;
    }
  }
  return FALSE;
}

/**
 * Provide a summary description based upon the checked terms.
 */
function context_ctools_access_summary($conf, $context) {
  $list = implode( array_filter($conf['context_access']), t(' OR '));
  return t('Context $list is set', array('$list' => $list));
}
