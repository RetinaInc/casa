<?php
/**
 * @file
 * casa_activity.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function casa_activity_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__activity';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Activity',
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
              'activity' => 'activity',
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
  $display->uuid = 'b4a8fd8a-aced-42ab-b4a8-2f0f0f6e43b3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5183d3c7-c525-4cf5-8842-5fe7c87e882a';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_activity_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'roomify_large',
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
    $pane->uuid = '5183d3c7-c525-4cf5-8842-5fe7c87e882a';
    $display->content['new-5183d3c7-c525-4cf5-8842-5fe7c87e882a'] = $pane;
    $display->panels['middle'][0] = 'new-5183d3c7-c525-4cf5-8842-5fe7c87e882a';
    $pane = new stdClass();
    $pane->pid = 'new-5cccf582-3af1-460c-aad1-0fb2ef982df7';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_activity_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '5cccf582-3af1-460c-aad1-0fb2ef982df7';
    $display->content['new-5cccf582-3af1-460c-aad1-0fb2ef982df7'] = $pane;
    $display->panels['middle'][1] = 'new-5cccf582-3af1-460c-aad1-0fb2ef982df7';
    $pane = new stdClass();
    $pane->pid = 'new-891f497f-32cb-4562-9af4-21766cbe3caa';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '891f497f-32cb-4562-9af4-21766cbe3caa';
    $display->content['new-891f497f-32cb-4562-9af4-21766cbe3caa'] = $pane;
    $display->panels['middle'][2] = 'new-891f497f-32cb-4562-9af4-21766cbe3caa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5183d3c7-c525-4cf5-8842-5fe7c87e882a';
  $handler->conf['display'] = $display;
  $export['node_view__activity'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function casa_activity_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'activity_page';
  $page->task = 'page';
  $page->admin_title = 'Activities page';
  $page->admin_description = '';
  $page->path = 'things-to-do';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Things to do',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_activity_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'activity_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b75199b7-3956-47ec-9c25-51badc55ff9d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4f1499f2-f855-4fcc-9d1c-d126533f7de2';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><a href="/node/add/activity"><img alt="" src="/profiles/roomifycasa/themes/casa/images/add.png" /> Add Activity</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4f1499f2-f855-4fcc-9d1c-d126533f7de2';
    $display->content['new-4f1499f2-f855-4fcc-9d1c-d126533f7de2'] = $pane;
    $display->panels['middle'][0] = 'new-4f1499f2-f855-4fcc-9d1c-d126533f7de2';
    $pane = new stdClass();
    $pane->pid = 'new-3943390a-7876-4088-953d-f4c1dd44e666';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '20',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => 'things-to-do',
      'display' => 'default',
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
    $pane->uuid = '3943390a-7876-4088-953d-f4c1dd44e666';
    $display->content['new-3943390a-7876-4088-953d-f4c1dd44e666'] = $pane;
    $display->panels['middle'][1] = 'new-3943390a-7876-4088-953d-f4c1dd44e666';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3943390a-7876-4088-953d-f4c1dd44e666';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['activity_page'] = $page;

  return $pages;

}
