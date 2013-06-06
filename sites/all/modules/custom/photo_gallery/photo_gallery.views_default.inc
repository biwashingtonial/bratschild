<?php
/**
 * @file
 * photo_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function photo_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'php';
  $handler->display->display_options['access']['php_access'] = 'return photo_gallery_page_has_photos();';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_photo_caption']['id'] = 'field_photo_caption';
  $handler->display->display_options['fields']['field_photo_caption']['table'] = 'field_data_field_photo_caption';
  $handler->display->display_options['fields']['field_photo_caption']['field'] = 'field_photo_caption';
  $handler->display->display_options['fields']['field_photo_caption']['exclude'] = TRUE;
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_photo_photographer']['id'] = 'field_photo_photographer';
  $handler->display->display_options['fields']['field_photo_photographer']['table'] = 'field_data_field_photo_photographer';
  $handler->display->display_options['fields']['field_photo_photographer']['field'] = 'field_photo_photographer';
  $handler->display->display_options['fields']['field_photo_photographer']['exclude'] = TRUE;
  /* Field: Content: Photo file upload */
  $handler->display->display_options['fields']['field_photo_file']['id'] = 'field_photo_file';
  $handler->display->display_options['fields']['field_photo_file']['table'] = 'field_data_field_photo_file';
  $handler->display->display_options['fields']['field_photo_file']['field'] = 'field_photo_file';
  $handler->display->display_options['fields']['field_photo_file']['label'] = '';
  $handler->display->display_options['fields']['field_photo_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_file']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_photo_file']['settings'] = array(
    'colorbox_node_style' => 'photo_gallery_thumb',
    'colorbox_image_style' => 'photo_gallery_full',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'custom',
    'colorbox_caption_custom' => '[node:field_photo_caption] - [node:field_photo_photographer]',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Gallery (field_photo_parent_node) */
  $handler->display->display_options['arguments']['field_photo_parent_node_target_id']['id'] = 'field_photo_parent_node_target_id';
  $handler->display->display_options['arguments']['field_photo_parent_node_target_id']['table'] = 'field_data_field_photo_parent_node';
  $handler->display->display_options['arguments']['field_photo_parent_node_target_id']['field'] = 'field_photo_parent_node_target_id';
  $handler->display->display_options['arguments']['field_photo_parent_node_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_photo_parent_node_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_photo_parent_node_target_id']['title'] = '%1';
  $handler->display->display_options['arguments']['field_photo_parent_node_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_photo_parent_node_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_photo_parent_node_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_photo_parent_node_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_photo_parent_node_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_photo_parent_node_target_id']['validate']['type'] = 'node';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Photos (Page) */
  $handler = $view->new_display('page', 'Photos (Page)', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php if (photo_gallery_add_access()) : ?>
  <h2><?php print l(\'Upload a photo >\', \'node/add/photo\'); ?></h2>
<?php endif; ?>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = TRUE;
  $handler->display->display_options['footer']['php']['php_output'] = '<?php if (photo_gallery_add_access()) : ?>
  <h2><?php print l(\'Upload a photo >\', \'node/add/photo\'); ?></h2>
<?php endif; ?>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/gallery';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Photo Gallery';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Gallery Options */
  $handler = $view->new_display('entityreference', 'Gallery Options', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Used for field_photo_parent_node entity reference';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$invite = context_get(\'context\', \'invite_invite\');
if ($invite && isset($invite->field_invite_event))
  return $invite->field_invite_event[$invite->language][0][\'target_id\']
;';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $export['photo_gallery'] = $view;

  return $export;
}
