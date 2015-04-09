<?php
/**
 * @file
 * casa_widget.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function casa_widget_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_widget';
  $strongarm->value = '0';
  $export['language_content_type_widget'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_widget';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_widget'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_widget';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_widget'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_widget';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_widget'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_widget';
  $strongarm->value = '1';
  $export['node_preview_widget'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_widget';
  $strongarm->value = 0;
  $export['node_submitted_widget'] = $strongarm;

  return $export;
}
