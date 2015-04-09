<?php

/**
 * Implements hook_preprocess_node().
 */
function casa_preprocess_node(&$variables) {
  if ($variables['type'] == 'slideshow') {

    // Hide the page title on Slideshow nodes.
    $variables['title'] = '';
  }

  // Provide a way to pull certain media along side the title.
  foreach ($variables['content'] as $fieldname => $field) {
    if (isset($field['#formatter']) && $field['#formatter'] == 'image') {

      // If an image field is using the homepage_tall format, move it up
      // inline with the title.
      if ($field[0]['#image_style'] == 'homepage_tall') {

        // Copy the image to the media section.
        $variables['content']['media'][] = $field;

        // And remove the original image field.
        unset($variables['content'][$fieldname]);
      }
    }
  }
}
