<?php
/**
 * @file
 * casa_unit_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function casa_unit_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rooms_availability_constraints_type_casa_type';
  $strongarm->value = 0;
  $export['rooms_availability_constraints_type_casa_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rooms_availability_constraints_unit_casa_type';
  $strongarm->value = 1;
  $export['rooms_availability_constraints_unit_casa_type'] = $strongarm;

  return $export;
}
