<?php
/**
 * @file
 * roomify_galleria.galleria_default_preset.inc
 */

/**
 * Implements hook_galleria_default_presets().
 */
function roomify_galleria_galleria_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'roomify_widescreen';
  $preset->title = 'Roomify Widescreen Slideshow';
  $preset->theme = 'showroom';
  $preset->plugins = array();
  $preset->imagestyle_thumb = 'roomify_wide_thumb';
  $preset->imagestyle_normal = 'roomify_wide_normal';
  $preset->imagestyle_big = '';
  $preset->options = array(
    'transition' => 'slide',
    'initialTransition' => 'fade',
    'showCounter' => TRUE,
    '_toggleInfo' => FALSE,
  );
  $export['roomify_widescreen'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'roomify_widescreen_nothumbs';
  $preset->title = 'Roomify Widescreen Slideshow (no thumbs)';
  $preset->theme = 'showroom';
  $preset->plugins = array();
  $preset->imagestyle_thumb = 'roomify_wide_thumb';
  $preset->imagestyle_normal = 'roomify_wide_normal';
  $preset->imagestyle_big = '';
  $preset->options = array(
    'transition' => 'slide',
    'initialTransition' => 'fade',
    'showCounter' => TRUE,
    '_toggleInfo' => FALSE,
    'thumbnails' => 'numbers',
  );
  $export['roomify_widescreen_nothumbs'] = $preset;

  return $export;
}
