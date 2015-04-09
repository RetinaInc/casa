<?php
/**
 * @file
 * casa_footer_bean_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function casa_footer_bean_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-footer-field_footer_facebook'
  $field_instances['bean-footer-field_footer_facebook'] = array(
    'bundle' => 'footer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your Facebook profile URL. Eg, <em>http://facebook.com/username</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_footer_facebook',
    'label' => 'Facebook',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'icon icon-facebook',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Facebook',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'external',
        'urls_filter' => '*facebook.com*',
        'urls_search' => 'start',
      ),
      'type' => 'advanced_link',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'bean-footer-field_footer_further_text'
  $field_instances['bean-footer-field_footer_further_text'] = array(
    'bundle' => 'footer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_footer_further_text',
    'label' => 'Further text',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'bean-footer-field_footer_google_plus'
  $field_instances['bean-footer-field_footer_google_plus'] = array(
    'bundle' => 'footer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your Google+ profile URL. Eg, <em>http://plus.google.com/numeric_id</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_footer_google_plus',
    'label' => 'Google+',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'icon icon-google-plus',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Google+',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'external',
        'urls_filter' => '*plus.google.com*',
        'urls_search' => 'start',
      ),
      'type' => 'advanced_link',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-footer-field_footer_instagram'
  $field_instances['bean-footer-field_footer_instagram'] = array(
    'bundle' => 'footer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your Instagram profile URL. Eg, <em>http://instagram.com/username</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_footer_instagram',
    'label' => 'Instagram',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'icon icon-instagram',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Instagram',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'external',
        'urls_filter' => '*instagram.com*',
        'urls_search' => 'start',
      ),
      'type' => 'advanced_link',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'bean-footer-field_footer_pinterest'
  $field_instances['bean-footer-field_footer_pinterest'] = array(
    'bundle' => 'footer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your Pinterest profile URL. Eg, <em>http://pinterest.com/username</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_footer_pinterest',
    'label' => 'Pinterest',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'icon icon-pinterest',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Pinterest',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'external',
        'urls_filter' => '*pinterest.com*',
        'urls_search' => 'start',
      ),
      'type' => 'advanced_link',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-footer-field_footer_telephone'
  $field_instances['bean-footer-field_footer_telephone'] = array(
    'bundle' => 'footer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'display_label' => 't',
    'entity_type' => 'bean',
    'field_name' => 'field_footer_telephone',
    'label' => 'Telephone',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'bean-footer-field_footer_text'
  $field_instances['bean-footer-field_footer_text'] = array(
    'bundle' => 'footer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_footer_text',
    'label' => 'Footer text',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-footer-field_footer_twitter'
  $field_instances['bean-footer-field_footer_twitter'] = array(
    'bundle' => 'footer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your Twitter profile URL. Eg, <em>http://twitter.com/username</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_footer_twitter',
    'label' => 'Twitter',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'twitter-icon',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Twitter',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'external',
        'urls_filter' => '*twitter.com*',
        'urls_search' => 'start',
      ),
      'type' => 'advanced_link',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-footer-title_field'
  $field_instances['bean-footer-title_field'] = array(
    'bundle' => 'footer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Title of the block.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enter your Facebook profile URL. Eg, <em>http://facebook.com/username</em>');
  t('Enter your Google+ profile URL. Eg, <em>http://plus.google.com/numeric_id</em>');
  t('Enter your Instagram profile URL. Eg, <em>http://instagram.com/username</em>');
  t('Enter your Pinterest profile URL. Eg, <em>http://pinterest.com/username</em>');
  t('Enter your Twitter profile URL. Eg, <em>http://twitter.com/username</em>');
  t('Facebook');
  t('Footer text');
  t('Further text');
  t('Google+');
  t('Instagram');
  t('Pinterest');
  t('Telephone');
  t('The Title of the block.');
  t('Title');
  t('Twitter');

  return $field_instances;
}
