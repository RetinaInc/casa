<?php
/**
 * @file
 * casa_homepage_content_type.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function casa_homepage_content_type_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__homepage';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Homepage',
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
              'homepage' => 'homepage',
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
  $display->layout = 'casa-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'highlighted' => NULL,
      'main' => NULL,
      'main_left' => NULL,
      'main_right' => NULL,
      'secondary' => NULL,
      'secondary_left' => NULL,
      'secondary_right' => NULL,
      'bottom' => NULL,
      'default' => NULL,
      'secondary_middle' => NULL,
      'tertiary' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9523e567-3757-4b3f-a85f-21d40d0fff0d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a04cb5d2-ab52-424b-ba13-cb3747d9912f';
    $pane->panel = 'highlighted';
    $pane->type = 'views';
    $pane->subtype = 'slideshow';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = 'a04cb5d2-ab52-424b-ba13-cb3747d9912f';
    $display->content['new-a04cb5d2-ab52-424b-ba13-cb3747d9912f'] = $pane;
    $display->panels['highlighted'][0] = 'new-a04cb5d2-ab52-424b-ba13-cb3747d9912f';
    $pane = new stdClass();
    $pane->pid = 'new-b741ea87-5588-44bc-8874-7d16d87166ab';
    $pane->panel = 'main_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_homepage_choose_intro';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
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
    $pane->uuid = 'b741ea87-5588-44bc-8874-7d16d87166ab';
    $display->content['new-b741ea87-5588-44bc-8874-7d16d87166ab'] = $pane;
    $display->panels['main_left'][0] = 'new-b741ea87-5588-44bc-8874-7d16d87166ab';
    $pane = new stdClass();
    $pane->pid = 'new-ca7ceddd-607c-4192-8a06-5e5a9d3aeec3';
    $pane->panel = 'main_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_homepage_choose_features';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
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
    $pane->uuid = 'ca7ceddd-607c-4192-8a06-5e5a9d3aeec3';
    $display->content['new-ca7ceddd-607c-4192-8a06-5e5a9d3aeec3'] = $pane;
    $display->panels['main_right'][0] = 'new-ca7ceddd-607c-4192-8a06-5e5a9d3aeec3';
    $pane = new stdClass();
    $pane->pid = 'new-c017800f-903e-4e19-829d-9444dca47151';
    $pane->panel = 'secondary_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_homepage_choose_amenities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
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
    $pane->uuid = 'c017800f-903e-4e19-829d-9444dca47151';
    $display->content['new-c017800f-903e-4e19-829d-9444dca47151'] = $pane;
    $display->panels['secondary_left'][0] = 'new-c017800f-903e-4e19-829d-9444dca47151';
    $pane = new stdClass();
    $pane->pid = 'new-a8e6e0f0-7a7f-4d39-bc79-2cb6764d62a6';
    $pane->panel = 'secondary_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_homepage_choose_further';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
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
    $pane->uuid = 'a8e6e0f0-7a7f-4d39-bc79-2cb6764d62a6';
    $display->content['new-a8e6e0f0-7a7f-4d39-bc79-2cb6764d62a6'] = $pane;
    $display->panels['secondary_right'][0] = 'new-a8e6e0f0-7a7f-4d39-bc79-2cb6764d62a6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__homepage'] = $handler;

  return $export;
}
