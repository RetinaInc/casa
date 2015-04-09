<?php
/**
 * @file
 * roomify_galleria.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function roomify_galleria_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "galleria" && $api == "galleria_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function roomify_galleria_image_default_styles() {
  $styles = array();

  // Exported image style: roomify_wide_normal.
  $styles['roomify_wide_normal'] = array(
    'name' => 'roomify_wide_normal',
    'label' => 'Roomify Slideshow Widescreen',
    'effects' => array(
      1 => array(
        'label' => 'EPSA Image Crop',
        'help' => '',
        'dimensions callback' => 'epsacrop_crop_dimensions',
        'effect callback' => 'epsacrop_crop_image',
        'form callback' => 'epsacrop_crop_image_form',
        'module' => 'epsacrop',
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 960,
          'height' => 540,
          'anchor' => 'right-bottom',
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: roomify_wide_thumb.
  $styles['roomify_wide_thumb'] = array(
    'name' => 'roomify_wide_thumb',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 116,
          'height' => 75,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'Roomify Slideshow Widescreen Thumbnail',
  );

  return $styles;
}
