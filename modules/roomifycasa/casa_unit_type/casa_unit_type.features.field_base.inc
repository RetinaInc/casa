<?php
/**
 * @file
 * casa_unit_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function casa_unit_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'rooms_booking_unit_options'
  $field_bases['rooms_booking_unit_options'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'rooms_booking_unit_options',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'rooms',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'rooms_options',
  );

  // Exported field_base: 'rooms_constraints_range'
  $field_bases['rooms_constraints_range'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'rooms_constraints_range',
    'foreign keys' => array(),
    'indexes' => array(
      'range' => array(
        0 => 'start_date',
        1 => 'end_date',
        2 => 'minimum_stay',
        3 => 'maximum_stay',
      ),
      'range_day' => array(
        0 => 'start_date',
        1 => 'end_date',
        2 => 'minimum_stay',
        3 => 'maximum_stay',
        4 => 'start_day',
      ),
    ),
    'locked' => 0,
    'module' => 'rooms_availability_constraints',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'rooms_availability_constraints_range',
  );

  return $field_bases;
}
