<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */

$plugin = array(
  'title' => t('Casa weather'),
  'description' => t('JQuery driven weather widget for Casa.'),
  'single' => TRUE,
  'render callback' => 'casa_settings_weather_block_render',
  'admin info' => 'casa_settings_weather_block_admin_info',
  'category' => array(t('Widgets')),
);

/**
 * 'Admin info' callback for block edit form.
 */
function casa_settings_weather_block_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass;
  $block->title = t('Casa weather info');
  return $block;
}

/**
 * Submit handler for example block edit form.
 */
function casa_settings_weather_block_edit_form_submit($form, &$form_state) {
  foreach (array('city', 'country', 'type') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

function casa_settings_weather_block_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $city = variable_get('casa_settings_city', '');
  if (!empty($city)) {
    $block->content = array(
      '#theme' => 'casa_settings__weather',
      '#attached' => array(
        'js' => array(
          drupal_get_path('module', 'casa_settings') . '/js/casa_settings_weather.js',
          array(
            'data' => array(
              'casa_settings_weather' => array(
                'city' => $city,
                'country' => variable_get('casa_settings_country', ''),
                'type' => variable_get('casa_settings_units', 'metric'),
              ),
            ),
            'type' => 'setting'
          )
        ),
      ),
    );
  }
  return $block;
}