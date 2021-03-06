<?php
/**
 * @file
 * invite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function invite_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function invite_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function invite_node_info() {
  $items = array(
    'comment' => array(
      'name' => t('Comment'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'invite' => array(
      'name' => t('Invite'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
