<?php
/**
 * @file
 * casa_homepage_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function casa_homepage_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-homepage-field_homepage_choose_amenities'
  $field_instances['node-homepage-field_homepage_choose_amenities'] = array(
    'bundle' => 'homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the list of amenities you would like to highlight on the front page.
You can create an amenity list by visiting <a target="_blank" href="/node/add/amenities">/node/add/amenities</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_homepage_choose_amenities',
    'label' => 'Amenities',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-homepage-field_homepage_choose_features'
  $field_instances['node-homepage-field_homepage_choose_features'] = array(
    'bundle' => 'homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this to highlight some of the best features of your "Casa" with an image and some descriptive text.
You can create features by visiting <a target="_blank" href="/node/add/features">/node/add/features</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_homepage_choose_features',
    'label' => 'Feature boxes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-homepage-field_homepage_choose_further'
  $field_instances['node-homepage-field_homepage_choose_further'] = array(
    'bundle' => 'homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You can use this section to provide additional information about your "Casa" or the area.<br />
You can create more info content by visiting <a target="_blank" href="/node/add/further-info">/node/add/further-info</a>.<br />
If you wish to use a tripadvisor widget in this space, add one here <a target="_blank" href="/node/add/widget">/node/add/widget</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_homepage_choose_further',
    'label' => 'Further Info',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-homepage-field_homepage_choose_intro'
  $field_instances['node-homepage-field_homepage_choose_intro'] = array(
    'bundle' => 'homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the intro to show up on front page.
You can create intro\'s by visiting <a target="_blank" href="/node/add/page">/node/add/page</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_homepage_choose_intro',
    'label' => 'Intro text',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-homepage-field_homepage_choose_slideshow'
  $field_instances['node-homepage-field_homepage_choose_slideshow'] = array(
    'bundle' => 'homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the slideshow that will display on your site\'s frontt page.
You can create slideshows by visiting <a target="_blank" href="/node/add/slideshow">/node/add/slideshow</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_homepage_choose_slideshow',
    'label' => 'Slideshow',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Amenities');
  t('Choose the intro to show up on front page.
You can create intro\'s by visiting <a target="_blank" href="/node/add/page">/node/add/page</a>.');
  t('Feature boxes');
  t('Further Info');
  t('Intro text');
  t('Select the list of amenities you would like to highlight on the front page.
You can create an amenity list by visiting <a target="_blank" href="/node/add/amenities">/node/add/amenities</a>.');
  t('Slideshow');
  t('This is the slideshow that will display on your site\'s frontt page.
You can create slideshows by visiting <a target="_blank" href="/node/add/slideshow">/node/add/slideshow</a>.');
  t('Use this to highlight some of the best features of your "Casa" with an image and some descriptive text.
You can create features by visiting <a target="_blank" href="/node/add/features">/node/add/features</a>.');
  t('You can use this section to provide additional information about your "Casa" or the area.<br />
You can create more info content by visiting <a target="_blank" href="/node/add/further-info">/node/add/further-info</a>.<br />
If you wish to use a tripadvisor widget in this space, add one here <a target="_blank" href="/node/add/widget">/node/add/widget</a>.');

  return $field_instances;
}
