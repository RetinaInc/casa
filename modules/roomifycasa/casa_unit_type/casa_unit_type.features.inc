<?php
/**
 * @file
 * casa_unit_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function casa_unit_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_rooms_unit_type().
 */
function casa_unit_type_default_rooms_unit_type() {
  $items = array();
  $items['casa_type'] = entity_import('rooms_unit_type', '{
    "type" : "casa_type",
    "label" : "Casa Type",
    "weight" : "0",
    "data" : {
      "base_price" : "",
      "min_sleeps" : "",
      "max_sleeps" : "",
      "min_children" : "",
      "max_children" : "",
      "rooms_description_source" : ""
    },
    "rooms_booking_unit_options" : [],
    "rooms_constraints_range" : [],
    "rdf_mapping" : []
  }');
  return $items;
}
