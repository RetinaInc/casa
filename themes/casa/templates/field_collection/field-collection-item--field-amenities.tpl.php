<?php

/**
 * @file
 * Overrides field-collection-item.tpl.php for amenities.
 */

$amenity_name =  $content['field_amenity_name'][0]['#markup'];
$amenity_description = &$content['field_amenity_description'][0]['#markup'];

if ($amenity_description) {
  print '<strong class="amenity__name">' . $amenity_name . ':</strong>';
  print ' <span class="amenity__description">' . $amenity_description . '</span>';
} else {
  print '<strong class="amenity__name">' . $amenity_name . '</strong>';
}
