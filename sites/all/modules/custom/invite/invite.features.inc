<?php
/**
 * @file
 * invite.features.inc
 */

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
