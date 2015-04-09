<?php
/**
 * @file
 * casa_unit_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function casa_unit_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'rooms_unit-casa_type-rooms_booking_unit_options'
  $field_instances['rooms_unit-casa_type-rooms_booking_unit_options'] = array(
    'bundle' => 'casa_type',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'rooms',
        'settings' => array(),
        'type' => 'rooms_options_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'rooms_unit',
    'field_name' => 'rooms_booking_unit_options',
    'label' => 'Options',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'rooms',
      'settings' => array(),
      'type' => 'rooms_options_combined',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'rooms_unit-casa_type-rooms_constraints_range'
  $field_instances['rooms_unit-casa_type-rooms_constraints_range'] = array(
    'bundle' => 'casa_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'rooms_availability_constraints_range',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'rooms_unit',
    'field_name' => 'rooms_constraints_range',
    'label' => 'Availability ranges',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'rooms_availability_constraints',
      'settings' => array(),
      'type' => 'rooms_availability_constraints_range',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'rooms_unit_type-rooms_unit_type-rooms_booking_unit_options'
  $field_instances['rooms_unit_type-rooms_unit_type-rooms_booking_unit_options'] = array(
    'bundle' => 'rooms_unit_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'rooms',
        'settings' => array(),
        'type' => 'rooms_options_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'rooms_unit_type',
    'field_name' => 'rooms_booking_unit_options',
    'label' => 'Options',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'rooms',
      'settings' => array(),
      'type' => 'rooms_options_combined',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'rooms_unit_type-rooms_unit_type-rooms_constraints_range'
  $field_instances['rooms_unit_type-rooms_unit_type-rooms_constraints_range'] = array(
    'bundle' => 'rooms_unit_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'rooms_availability_constraints_range',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'rooms_unit_type',
    'field_name' => 'rooms_constraints_range',
    'label' => 'Availability ranges',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'rooms_availability_constraints',
      'settings' => array(),
      'type' => 'rooms_availability_constraints_range',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Availability ranges');
  t('Options');

  return $field_instances;
}
