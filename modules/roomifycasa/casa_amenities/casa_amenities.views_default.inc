<?php
/**
 * @file
 * casa_amenities.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function casa_amenities_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_amenities';
  $view->description = 'Image and fieldset previewed on the homepage';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Amenities';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_amenity_image']['id'] = 'field_amenity_image';
  $handler->display->display_options['fields']['field_amenity_image']['table'] = 'field_data_field_amenity_image';
  $handler->display->display_options['fields']['field_amenity_image']['field'] = 'field_amenity_image';
  $handler->display->display_options['fields']['field_amenity_image']['label'] = '';
  $handler->display->display_options['fields']['field_amenity_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_amenity_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amenity_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_amenity_image']['settings'] = array(
    'image_style' => 'homepage_tall',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_amenity_image']['group_column'] = 'entity_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Amenities */
  $handler->display->display_options['fields']['field_amenities']['id'] = 'field_amenities';
  $handler->display->display_options['fields']['field_amenities']['table'] = 'field_data_field_amenities';
  $handler->display->display_options['fields']['field_amenities']['field'] = 'field_amenities';
  $handler->display->display_options['fields']['field_amenities']['label'] = '';
  $handler->display->display_options['fields']['field_amenities']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_amenities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amenities']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_amenities']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_amenities']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_amenities']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_amenities']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_amenities']['separator'] = '<br />';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="amenities-image">
[field_amenity_image]
</div>
<div class="amenities-text">
<div class="views-field views-field-title"><span class="field-content">[title]</span></div>
[field_amenities]
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'amenities' => 'amenities',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $export['homepage_amenities'] = $view;

  return $export;
}
