<?php
/**
 * @file
 * mapping.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mapping_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Location Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_map_coordinates';
  $handler->display->display_options['style_options']['description_field'] = 'variable_1';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['hide_empty'] = 1;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['icon']['iconUrl'] = 'profiles/roomifycasa/modules/roomifycore/mapping/images/marker[node:field_accommodation].png';
  $handler->display->display_options['style_options']['icon']['iconSize']['x'] = '25';
  $handler->display->display_options['style_options']['icon']['iconSize']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['iconAnchor']['x'] = '12';
  $handler->display->display_options['style_options']['icon']['iconAnchor']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['shadowAnchor']['x'] = '41';
  $handler->display->display_options['style_options']['icon']['shadowAnchor']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['popupAnchor']['x'] = '1';
  $handler->display->display_options['style_options']['icon']['popupAnchor']['y'] = '-34';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="messages messages--warning">1. To view your vacation rental on the map please add longitude and latitude info in the location page for the accommodation.<br>2. To help visitors find you, <a href="/node/add/location">create departure points from key locations</a>, such as the closest airport, train station, interstate highway, etc. They will also be able to see directions from those points to your place.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Get Directions from [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Global: System variable */
  $handler->display->display_options['fields']['variable']['id'] = 'variable';
  $handler->display->display_options['fields']['variable']['table'] = 'views';
  $handler->display->display_options['fields']['variable']['field'] = 'variable';
  $handler->display->display_options['fields']['variable']['label'] = '';
  $handler->display->display_options['fields']['variable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['variable']['alter']['text'] = '13';
  $handler->display->display_options['fields']['variable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['variable']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['variable']['variable_name'] = 'mapping_location_accommodation';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title]
';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'getdirections/locations/[nid]/[variable]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Content: Map Coordinates */
  $handler->display->display_options['fields']['field_map_coordinates']['id'] = 'field_map_coordinates';
  $handler->display->display_options['fields']['field_map_coordinates']['table'] = 'field_data_field_map_coordinates';
  $handler->display->display_options['fields']['field_map_coordinates']['field'] = 'field_map_coordinates';
  $handler->display->display_options['fields']['field_map_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_map_coordinates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_coordinates']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_map_coordinates']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>[title_1]</strong><br />
[field_address]<br />
[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Accomodation */
  $handler->display->display_options['fields']['field_accommodation']['id'] = 'field_accommodation';
  $handler->display->display_options['fields']['field_accommodation']['table'] = 'field_data_field_accommodation';
  $handler->display->display_options['fields']['field_accommodation']['field'] = 'field_accommodation';
  $handler->display->display_options['fields']['field_accommodation']['label'] = '';
  $handler->display->display_options['fields']['field_accommodation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_accommodation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_accommodation']['alter']['text'] = '<strong>[title_1]</strong><br />
[field_address]';
  $handler->display->display_options['fields']['field_accommodation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_accommodation']['empty'] = '[nothing]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = 'Get directions to [title_2]';
  $handler->display->display_options['fields']['title_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['path'] = 'getdirections/location/to/[nid_1]';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<strong>[title_1]</strong><br />
[field_address]<br />
[title_2]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: System variable */
  $handler->display->display_options['fields']['variable_1']['id'] = 'variable_1';
  $handler->display->display_options['fields']['variable_1']['table'] = 'views';
  $handler->display->display_options['fields']['variable_1']['field'] = 'variable';
  $handler->display->display_options['fields']['variable_1']['label'] = '';
  $handler->display->display_options['fields']['variable_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['variable_1']['alter']['text'] = '[field_accommodation]';
  $handler->display->display_options['fields']['variable_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['variable_1']['empty'] = '[nothing_1]';
  $handler->display->display_options['fields']['variable_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['variable_1']['variable_name'] = 'mapping_location_accommodation';
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
    'location' => 'location',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'location';
  $translatables['location'] = array(
    t('Master'),
    t('Location Map'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="messages messages--warning">1. To view your vacation rental on the map please add longitude and latitude info in the location page for the accommodation.<br>2. To help visitors find you, <a href="/node/add/location">create departure points from key locations</a>, such as the closest airport, train station, interstate highway, etc. They will also be able to see directions from those points to your place.</div>'),
    t('Get Directions from [title]'),
    t('13'),
    t('[title]
'),
    t('<strong>[title_1]</strong><br />
[field_address]<br />
[nid]'),
    t('<strong>[title_1]</strong><br />
[field_address]'),
    t('[nothing]'),
    t('Get directions to [title_2]'),
    t('<strong>[title_1]</strong><br />
[field_address]<br />
[title_2]'),
    t('[field_accommodation]'),
    t('[nothing_1]'),
    t('Page'),
  );
  $export['location'] = $view;

  return $export;
}
