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
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_invite_name_first' => array(
      'sortable' => 1,
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
  /* Contextual filter: Content: Event Page (field_invite_event) */
  $handler->display->display_options['arguments']['field_invite_event_target_id']['id'] = 'field_invite_event_target_id';
  $handler->display->display_options['arguments']['field_invite_event_target_id']['table'] = 'field_data_field_invite_event';
  $handler->display->display_options['arguments']['field_invite_event_target_id']['field'] = 'field_invite_event_target_id';
  $handler->display->display_options['arguments']['field_invite_event_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_invite_event_target_id']['title'] = '%1';
  $handler->display->display_options['arguments']['field_invite_event_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_invite_event_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_invite_event_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_invite_event_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_invite_event_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_invite_event_target_id']['validate']['type'] = 'node';
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

  /* Display: RSVPs Attending (Page) */
  $handler = $view->new_display('page', 'RSVPs Attending (Page)', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3>Attending</h3>';
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
  $handler->display->display_options['path'] = 'node/%/rsvps';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'RSVPs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: RSVPs Not Attending (Attachment) */
  $handler = $view->new_display('attachment', 'RSVPs Not Attending (Attachment)', 'attachment_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3>Not Attending</h3>';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: RSVPs No Response (Attachment) */
  $handler = $view->new_display('attachment', 'RSVPs No Response (Attachment)', 'attachment_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3>No Response Yet</h3>';
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
    'notified' => 'notified',
    'responded' => 'responded',
  );
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Manage Invites (Page) */
  $handler = $view->new_display('page', 'Manage Invites (Page)', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any invite content';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_invite_name_last' => 'field_invite_name_last',
    'field_invite_name_first' => 'field_invite_name_first',
    'field_invite_email' => 'field_invite_email',
    'field_invite_rsvp' => 'field_invite_rsvp',
    'field_invite_attendee_count' => 'field_invite_attendee_count',
    'field_invite_host_notes' => 'field_invite_host_notes',
    'field_invite_contributions' => 'field_invite_contributions',
    'field_invite_rsvp_notes' => 'field_invite_rsvp_notes',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_invite_name_last';
  $handler->display->display_options['style_options']['info'] = array(
    'field_invite_name_last' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_invite_name_first' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_invite_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_invite_rsvp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_invite_attendee_count' => array(
      'sortable' => 1,
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
    'field_invite_contributions' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_invite_rsvp_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Attending';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'invite::field_invite_rsvp' => 'invite::field_invite_rsvp',
          'invite::field_invite_host_notes' => 'invite::field_invite_host_notes',
          'invite::field_invite_attendee_count' => 'invite::field_invite_attendee_count',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
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
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_invite_email']['id'] = 'field_invite_email';
  $handler->display->display_options['fields']['field_invite_email']['table'] = 'field_data_field_invite_email';
  $handler->display->display_options['fields']['field_invite_email']['field'] = 'field_invite_email';
  $handler->display->display_options['fields']['field_invite_email']['element_label_colon'] = FALSE;
  /* Field: Content: RSVP */
  $handler->display->display_options['fields']['field_invite_rsvp']['id'] = 'field_invite_rsvp';
  $handler->display->display_options['fields']['field_invite_rsvp']['table'] = 'field_data_field_invite_rsvp';
  $handler->display->display_options['fields']['field_invite_rsvp']['field'] = 'field_invite_rsvp';
  $handler->display->display_options['fields']['field_invite_rsvp']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_invite_host_notes']['element_label_colon'] = FALSE;
  /* Field: Content: Contributions */
  $handler->display->display_options['fields']['field_invite_contributions']['id'] = 'field_invite_contributions';
  $handler->display->display_options['fields']['field_invite_contributions']['table'] = 'field_data_field_invite_contributions';
  $handler->display->display_options['fields']['field_invite_contributions']['field'] = 'field_invite_contributions';
  $handler->display->display_options['fields']['field_invite_contributions']['element_label_colon'] = FALSE;
  /* Field: Content: RSVP Notes */
  $handler->display->display_options['fields']['field_invite_rsvp_notes']['id'] = 'field_invite_rsvp_notes';
  $handler->display->display_options['fields']['field_invite_rsvp_notes']['table'] = 'field_data_field_invite_rsvp_notes';
  $handler->display->display_options['fields']['field_invite_rsvp_notes']['field'] = 'field_invite_rsvp_notes';
  $handler->display->display_options['fields']['field_invite_rsvp_notes']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: RSVP Link */
  $handler->display->display_options['fields']['field_invite_rsvp_link']['id'] = 'field_invite_rsvp_link';
  $handler->display->display_options['fields']['field_invite_rsvp_link']['table'] = 'field_data_field_invite_rsvp_link';
  $handler->display->display_options['fields']['field_invite_rsvp_link']['field'] = 'field_invite_rsvp_link';
  $handler->display->display_options['fields']['field_invite_rsvp_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_invite_rsvp_link']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_invite_rsvp_link']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_invite_rsvp_link] ">RSVP Link</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['path'] = 'node/%/invites';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Manage Invites';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $export['invite'] = $view;

  return $export;
}
