<?php
/**
 * @file
 * casa_homepage_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function casa_homepage_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_amenities|node|homepage|form';
  $field_group->group_name = 'group_homepage_amenities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_homepage';
  $field_group->data = array(
    'label' => 'Amenities',
    'weight' => '7',
    'children' => array(
      0 => 'field_homepage_choose_amenities',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-homepage-amenities field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_homepage_amenities|node|homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_features|node|homepage|form';
  $field_group->group_name = 'group_homepage_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_homepage';
  $field_group->data = array(
    'label' => 'Feature boxes',
    'weight' => '6',
    'children' => array(
      0 => 'field_homepage_choose_features',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Feature boxes',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-homepage-features field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_homepage_features|node|homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_further|node|homepage|form';
  $field_group->group_name = 'group_homepage_further';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_homepage';
  $field_group->data = array(
    'label' => 'Further Info',
    'weight' => '8',
    'children' => array(
      0 => 'field_homepage_choose_further',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Further Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-homepage-further field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_homepage_further|node|homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_intro|node|homepage|form';
  $field_group->group_name = 'group_homepage_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_homepage';
  $field_group->data = array(
    'label' => 'Intro text',
    'weight' => '5',
    'children' => array(
      0 => 'field_homepage_choose_intro',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Intro text',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-homepage-intro field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_homepage_intro|node|homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_slideshow|node|homepage|form';
  $field_group->group_name = 'group_homepage_slideshow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_homepage';
  $field_group->data = array(
    'label' => 'Slideshow',
    'weight' => '4',
    'children' => array(
      0 => 'field_homepage_choose_slideshow',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-homepage-slideshow field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_homepage_slideshow|node|homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage|node|homepage|form';
  $field_group->group_name = 'group_homepage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Homepage',
    'weight' => '1',
    'children' => array(
      0 => 'group_homepage_slideshow',
      1 => 'group_homepage_intro',
      2 => 'group_homepage_features',
      3 => 'group_homepage_amenities',
      4 => 'group_homepage_further',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-homepage field-group-htabs',
      ),
    ),
  );
  $export['group_homepage|node|homepage|form'] = $field_group;

  return $export;
}
