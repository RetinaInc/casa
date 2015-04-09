<?php
/**
 * @file
 * casa_homepage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function casa_homepage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_entity_types';
  $strongarm->value = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'bean' => 'bean',
    'commerce_product' => 0,
    'user' => 0,
  );
  $export['entity_translation_entity_types'] = $strongarm;

  return $export;
}
