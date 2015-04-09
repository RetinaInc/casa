<?php
/**
 * @file
 * casa_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function casa_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = 'Casa homepage';
  $page->path = 'homepage';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0d616648-57cd-4f9d-a66a-33b6f508d023';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3c3edfa0-34fd-4c45-bf2f-7a699884f004';
    $pane->panel = 'main_left';
    $pane->type = 'block';
    $pane->subtype = 'views-homepage_intro-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '3c3edfa0-34fd-4c45-bf2f-7a699884f004';
    $display->content['new-3c3edfa0-34fd-4c45-bf2f-7a699884f004'] = $pane;
    $display->panels['main_left'][0] = 'new-3c3edfa0-34fd-4c45-bf2f-7a699884f004';
    $pane = new stdClass();
    $pane->pid = 'new-54111053-4cd3-47a7-b3f1-5435b7d16568';
    $pane->panel = 'main_right';
    $pane->type = 'block';
    $pane->subtype = 'views-homepage_further_info-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '54111053-4cd3-47a7-b3f1-5435b7d16568';
    $display->content['new-54111053-4cd3-47a7-b3f1-5435b7d16568'] = $pane;
    $display->panels['main_right'][0] = 'new-54111053-4cd3-47a7-b3f1-5435b7d16568';
    $pane = new stdClass();
    $pane->pid = 'new-a43263ec-d71b-4bc3-bd53-dc2b4056eded';
    $pane->panel = 'secondary_left';
    $pane->type = 'block';
    $pane->subtype = 'views-homepage_amenities-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'a43263ec-d71b-4bc3-bd53-dc2b4056eded';
    $display->content['new-a43263ec-d71b-4bc3-bd53-dc2b4056eded'] = $pane;
    $display->panels['secondary_left'][0] = 'new-a43263ec-d71b-4bc3-bd53-dc2b4056eded';
    $pane = new stdClass();
    $pane->pid = 'new-386e35a6-7676-4611-93fc-310a2bfb6e11';
    $pane->panel = 'secondary_right';
    $pane->type = 'block';
    $pane->subtype = 'views-homepage_about_the_area-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '386e35a6-7676-4611-93fc-310a2bfb6e11';
    $display->content['new-386e35a6-7676-4611-93fc-310a2bfb6e11'] = $pane;
    $display->panels['secondary_right'][0] = 'new-386e35a6-7676-4611-93fc-310a2bfb6e11';
    $pane = new stdClass();
    $pane->pid = 'new-63e7772e-0072-4ffe-97f2-9fee02077151';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'views-slideshow-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '63e7772e-0072-4ffe-97f2-9fee02077151';
    $display->content['new-63e7772e-0072-4ffe-97f2-9fee02077151'] = $pane;
    $display->panels['highlighted'][0] = 'new-63e7772e-0072-4ffe-97f2-9fee02077151';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
