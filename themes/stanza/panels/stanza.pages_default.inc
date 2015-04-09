<?php
/**
 * Implementation of hook_default_page_manager_handlers()
 */
function stanza_default_page_manager_handlers() {
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'roomify_default_site_template';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Roomify Default',
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
  $display->layout = 'l-page-default';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'branding' => NULL,
      'main' => NULL,
      'footer' => NULL,
      'help' => NULL,
      'hero' => NULL,
      'leader' => NULL,
      'nav' => NULL,
      'utility' => NULL,
      'default' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6fb34066-34df-4a9f-a43c-019081c26697';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8a43bf67-ec80-4412-a07d-58d646fa858a';
    $pane->panel = 'branding';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8a43bf67-ec80-4412-a07d-58d646fa858a';
    $display->content['new-8a43bf67-ec80-4412-a07d-58d646fa858a'] = $pane;
    $display->panels['branding'][0] = 'new-8a43bf67-ec80-4412-a07d-58d646fa858a';
    $pane = new stdClass();
    $pane->pid = 'new-b38a485c-5a1e-48d9-afaf-cd93d279258d';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer';
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
    $pane->uuid = 'b38a485c-5a1e-48d9-afaf-cd93d279258d';
    $display->content['new-b38a485c-5a1e-48d9-afaf-cd93d279258d'] = $pane;
    $display->panels['footer'][0] = 'new-b38a485c-5a1e-48d9-afaf-cd93d279258d';
    $pane = new stdClass();
    $pane->pid = 'new-d9339920-3a02-41f4-ab94-d5d5a49248a7';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'bean-footer';
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
    $pane->uuid = 'd9339920-3a02-41f4-ab94-d5d5a49248a7';
    $display->content['new-d9339920-3a02-41f4-ab94-d5d5a49248a7'] = $pane;
    $display->panels['footer'][1] = 'new-d9339920-3a02-41f4-ab94-d5d5a49248a7';
    $pane = new stdClass();
    $pane->pid = 'new-3a684631-108d-4bc6-9841-c7b0609f9044';
    $pane->panel = 'footer';
    $pane->type = 'views';
    $pane->subtype = 'address_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
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
    $pane->uuid = '3a684631-108d-4bc6-9841-c7b0609f9044';
    $display->content['new-3a684631-108d-4bc6-9841-c7b0609f9044'] = $pane;
    $display->panels['footer'][2] = 'new-3a684631-108d-4bc6-9841-c7b0609f9044';
    $pane = new stdClass();
    $pane->pid = 'new-e9bb8bb1-3202-4b27-b54d-cd93adb176ce';
    $pane->panel = 'help';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e9bb8bb1-3202-4b27-b54d-cd93adb176ce';
    $display->content['new-e9bb8bb1-3202-4b27-b54d-cd93adb176ce'] = $pane;
    $display->panels['help'][0] = 'new-e9bb8bb1-3202-4b27-b54d-cd93adb176ce';
    $pane = new stdClass();
    $pane->pid = 'new-fb1e485c-ff96-4370-bee6-ba2eaacce6b3';
    $pane->panel = 'help';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
    $pane->uuid = 'fb1e485c-ff96-4370-bee6-ba2eaacce6b3';
    $display->content['new-fb1e485c-ff96-4370-bee6-ba2eaacce6b3'] = $pane;
    $display->panels['help'][1] = 'new-fb1e485c-ff96-4370-bee6-ba2eaacce6b3';
    $pane = new stdClass();
    $pane->pid = 'new-f3aca58a-7589-42a7-b8ff-710a32aaf990';
    $pane->panel = 'help';
    $pane->type = 'page_help';
    $pane->subtype = 'page_help';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f3aca58a-7589-42a7-b8ff-710a32aaf990';
    $display->content['new-f3aca58a-7589-42a7-b8ff-710a32aaf990'] = $pane;
    $display->panels['help'][2] = 'new-f3aca58a-7589-42a7-b8ff-710a32aaf990';
    $pane = new stdClass();
    $pane->pid = 'new-b9e90624-f470-49bd-ab8a-88b3fc14ed19';
    $pane->panel = 'leader';
    $pane->type = 'block';
    $pane->subtype = 'switchtheme-switch_form';
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
    $pane->uuid = 'b9e90624-f470-49bd-ab8a-88b3fc14ed19';
    $display->content['new-b9e90624-f470-49bd-ab8a-88b3fc14ed19'] = $pane;
    $display->panels['leader'][0] = 'new-b9e90624-f470-49bd-ab8a-88b3fc14ed19';
    $pane = new stdClass();
    $pane->pid = 'new-0898b665-b41d-45bd-8230-7cbd28d3c738';
    $pane->panel = 'main';
    $pane->type = 'availability_three_calendars';
    $pane->subtype = 'availability_three_calendars';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0898b665-b41d-45bd-8230-7cbd28d3c738';
    $display->content['new-0898b665-b41d-45bd-8230-7cbd28d3c738'] = $pane;
    $display->panels['main'][0] = 'new-0898b665-b41d-45bd-8230-7cbd28d3c738';
    $pane = new stdClass();
    $pane->pid = 'new-39f86c34-679e-4874-a34d-8252022dc9bb';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h1',
          'class_enable' => 1,
          'class' => 'page-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '39f86c34-679e-4874-a34d-8252022dc9bb';
    $display->content['new-39f86c34-679e-4874-a34d-8252022dc9bb'] = $pane;
    $display->panels['main'][1] = 'new-39f86c34-679e-4874-a34d-8252022dc9bb';
    $pane = new stdClass();
    $pane->pid = 'new-37e06743-e525-457b-b050-10e581c17f60';
    $pane->panel = 'nav';
    $pane->type = 'page_primary_links';
    $pane->subtype = 'page_primary_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '37e06743-e525-457b-b050-10e581c17f60';
    $display->content['new-37e06743-e525-457b-b050-10e581c17f60'] = $pane;
    $display->panels['nav'][0] = 'new-37e06743-e525-457b-b050-10e581c17f60';
    $pane = new stdClass();
    $pane->pid = 'new-03d8d5eb-19b0-480e-a480-38314d607c27';
    $pane->panel = 'nav';
    $pane->type = 'availability_calendars_button';
    $pane->subtype = 'availability_calendars_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '03d8d5eb-19b0-480e-a480-38314d607c27';
    $display->content['new-03d8d5eb-19b0-480e-a480-38314d607c27'] = $pane;
    $display->panels['nav'][1] = 'new-03d8d5eb-19b0-480e-a480-38314d607c27';
    $pane = new stdClass();
    $pane->pid = 'new-46363faf-2070-4426-a4bf-c867b60ea493';
    $pane->panel = 'utility';
    $pane->type = 'block';
    $pane->subtype = 'bean-header-promo';
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
    $pane->uuid = '46363faf-2070-4426-a4bf-c867b60ea493';
    $display->content['new-46363faf-2070-4426-a4bf-c867b60ea493'] = $pane;
    $display->panels['utility'][0] = 'new-46363faf-2070-4426-a4bf-c867b60ea493';
    $pane = new stdClass();
    $pane->pid = 'new-0767eb02-8fec-4828-ac0a-4d6a1568696a';
    $pane->panel = 'utility';
    $pane->type = 'casa_weather_content_type';
    $pane->subtype = 'casa_weather_content_type';
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
    $pane->uuid = '0767eb02-8fec-4828-ac0a-4d6a1568696a';
    $display->content['new-0767eb02-8fec-4828-ac0a-4d6a1568696a'] = $pane;
    $display->panels['utility'][1] = 'new-0767eb02-8fec-4828-ac0a-4d6a1568696a';
    $pane = new stdClass();
    $pane->pid = 'new-57ec70c9-b68d-4094-a4a0-d4e3955447d7';
    $pane->panel = 'utility';
    $pane->type = 'block';
    $pane->subtype = 'locale-language';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '57ec70c9-b68d-4094-a4a0-d4e3955447d7';
    $display->content['new-57ec70c9-b68d-4094-a4a0-d4e3955447d7'] = $pane;
    $display->panels['utility'][2] = 'new-57ec70c9-b68d-4094-a4a0-d4e3955447d7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $handlers[$handler->name] = $handler;
  return $handlers;
}
