<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * casa theme.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function casa_form_switchtheme_switch_form_alter(&$form, $form_state) {

  // Custom stylesheet when switchtheme is enable.
  $form['#attached']['css'][] = drupal_get_path('theme', 'casa') . '/css/casa.themedemo.css';

}

/**
 * Implements template_preprocess_views_view_field__slideshow__field_image_image().
 */
function casa_views_view_field__slideshow__field_image_image(&$variables) {
  $row = $variables['row'];

  if (!empty($row->field_field_image_description[0]['rendered']['#markup'])) {
    $output = str_replace('<img', '<img alt="' . $row->field_field_image_description[0]['rendered']['#markup'] . '"', $variables['output']);
  }
  else {
    $output = $variables['output'];
  }

  return $output;

}
