<?php
/**
 * @file
 * roomify_lingo.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function roomify_lingo_default_rules_configuration() {
  $items = array();
  $items['roomify_lingo_alter_line_item_label'] = entity_import('rules_config', '{ "roomify_lingo_alter_line_item_label" : {
      "LABEL" : "Roomify Lingo: Alter Line item label",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "rooms_booked_unit_id" } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "rooms_unit",
              "id" : [ "commerce-line-item:rooms-booked-unit-id" ]
            },
            "PROVIDE" : { "entity_fetched" : { "booked_unit" : "Booked unit" } }
          }
        },
        { "data_set" : {
            "data" : [ "commerce-line-item:line-item-label" ],
            "value" : "[booked-unit:name] [commerce-line-item:rooms-booking-dates:duration] reservation - [commerce-line-item:rooms-booking-dates:value:custom:l, M jS Y] to [commerce-line-item:rooms-booking-dates:value2:custom:l, M jS Y] [commerce-line-item:deposit-remainder]"
          }
        }
      ]
    }
  }');
  return $items;
}
