<?php
/**
 * @file
 * casa_amenities.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function casa_amenities_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__amenities';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Amenities',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'amenities' => 'amenities',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4595a2b6-772d-4830-9924-ec86edb65a58';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3257413c-222c-48c9-9be0-c5cf70c909a3';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_amenity_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'optionset' => 'default',
        'image_style' => 'roomify_zoom',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3257413c-222c-48c9-9be0-c5cf70c909a3';
    $display->content['new-3257413c-222c-48c9-9be0-c5cf70c909a3'] = $pane;
    $display->panels['middle'][0] = 'new-3257413c-222c-48c9-9be0-c5cf70c909a3';
    $pane = new stdClass();
    $pane->pid = 'new-64f92b41-2b9c-454d-ac5e-e6e400391f56';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_amenities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => 'Edit',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => 0,
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '64f92b41-2b9c-454d-ac5e-e6e400391f56';
    $display->content['new-64f92b41-2b9c-454d-ac5e-e6e400391f56'] = $pane;
    $display->panels['middle'][1] = 'new-64f92b41-2b9c-454d-ac5e-e6e400391f56';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3257413c-222c-48c9-9be0-c5cf70c909a3';
  $handler->conf['display'] = $display;
  $export['node_view__amenities'] = $handler;

  return $export;
}
