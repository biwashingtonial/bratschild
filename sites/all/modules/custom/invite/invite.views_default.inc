<?php
/**
 * @file
 * invite.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function invite_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'invite';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Invite';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_invite_name_last' => 'field_invite_name_last',
    'field_invite_name_first' => 'field_invite_name_first',
    'field_invite_attendee_count' => 'field_invite_attendee_count',
    'field_invite_host_notes' => 'field_invite_host_notes',
  );
  $handler->display->display_options['style_options']['default'] = 'field_invite_name_last';
  $handler->display->display_options['style_options']['info'] = array(
    'field_invite_name_last' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_invite_name_first' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_invite_attendee_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_invite_host_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_invite_name_last']['id'] = 'field_invite_name_last';
  $handler->display->display_options['fields']['field_invite_name_last']['table'] = 'field_data_field_invite_name_last';
  $handler->display->display_options['fields']['field_invite_name_last']['field'] = 'field_invite_name_last';
  $handler->display->display_options['fields']['field_invite_name_last']['element_label_colon'] = FALSE;
  /* Field: Content: First Name(s) */
  $handler->display->display_options['fields']['field_invite_name_first']['id'] = 'field_invite_name_first';
  $handler->display->display_options['fields']['field_invite_name_first']['table'] = 'field_data_field_invite_name_first';
  $handler->display->display_options['fields']['field_invite_name_first']['field'] = 'field_invite_name_first';
  $handler->display->display_options['fields']['field_invite_name_first']['element_label_colon'] = FALSE;
  /* Field: Content: # of Attendees */
  $handler->display->display_options['fields']['field_invite_attendee_count']['id'] = 'field_invite_attendee_count';
  $handler->display->display_options['fields']['field_invite_attendee_count']['table'] = 'field_data_field_invite_attendee_count';
  $handler->display->display_options['fields']['field_invite_attendee_count']['field'] = 'field_invite_attendee_count';
  $handler->display->display_options['fields']['field_invite_attendee_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_invite_attendee_count']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Host Notes */
  $handler->display->display_options['fields']['field_invite_host_notes']['id'] = 'field_invite_host_notes';
  $handler->display->display_options['fields']['field_invite_host_notes']['table'] = 'field_data_field_invite_host_notes';
  $handler->display->display_options['fields']['field_invite_host_notes']['field'] = 'field_invite_host_notes';
  $handler->display->display_options['fields']['field_invite_host_notes']['label'] = '';
  $handler->display->display_options['fields']['field_invite_host_notes']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'invite' => 'invite',
  );

  /* Display: Attending (Block) */
  $handler = $view->new_display('block', 'Attending (Block)', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Attending';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'invite' => 'invite',
  );
  /* Filter criterion: Content: RSVP (field_invite_rsvp) */
  $handler->display->display_options['filters']['field_invite_rsvp_value']['id'] = 'field_invite_rsvp_value';
  $handler->display->display_options['filters']['field_invite_rsvp_value']['table'] = 'field_data_field_invite_rsvp';
  $handler->display->display_options['filters']['field_invite_rsvp_value']['field'] = 'field_invite_rsvp_value';
  $handler->display->display_options['filters']['field_invite_rsvp_value']['value'] = array(
    'attending' => 'attending',
  );

  /* Display: Declined (block) */
  $handler = $view->new_display('block', 'Declined (block)', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Not Attending';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'invite' => 'invite',
  );
  /* Filter criterion: Content: RSVP (field_invite_rsvp) */
  $handler->display->display_options['filters']['field_invite_rsvp_value']['id'] = 'field_invite_rsvp_value';
  $handler->display->display_options['filters']['field_invite_rsvp_value']['table'] = 'field_data_field_invite_rsvp';
  $handler->display->display_options['filters']['field_invite_rsvp_value']['field'] = 'field_invite_rsvp_value';
  $handler->display->display_options['filters']['field_invite_rsvp_value']['value'] = array(
    'regrets' => 'regrets',
  );
  $export['invite'] = $view;

  return $export;
}
