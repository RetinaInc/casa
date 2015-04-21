<?php
/**
 * @file
 * Enables modules and site configuration for a RoomifyCasa site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function roomifycasa_form_install_configure_form_alter(&$form, $form_state) {

  // Disable update notifications because this is a distro.
  $form['update_notifications']['update_status_module']['#default_value'] = array('0');
}

/**
 * Implements hook_install_tasks().
 */
function roomifycasa_install_tasks(&$install_state) {
  return array(
    'roomifycasa_create_unit_form' => array(
      'display_name' => st('Configure Roomify'),
      'type' => 'form',
    ),
    'roomifycasa_enable_features' => array(
      'display_name' => st('Installing Casa options'),
      'type' => 'normal',
      'display' => FALSE,
    ),
    'roomifycasa_multilingual_support_form' => array(
      'display_name' => st('Multilingual support'),
      'type' => 'form',
      'display' => TRUE,
    ),
    'roomifycasa_basic_information_form' => array(
      'display_name' => st('Basic Information'),
      'type' => 'form',
      'display' => TRUE,
    ),
    'roomifycasa_choose_theme_form' => array(
      'display_name' => st('Choose theme'),
      'type' => 'form',
      'display' => TRUE,
    ),
    'roomifycasa_finish' => array(
      'display_name' => st('Apply configuration'),
      'display' => TRUE,
      'type' => 'batch',
    ),
  );
}

/**
 * Implements hook_install_tasks_alter().
 */
function roomifycasa_install_tasks_alter(&$tasks, $install_state) {
  // This is a workaround because drupal_get_path doesnt work with profiles.
  $css = str_replace('.profile', '.css', drupal_get_filename('profile', 'roomifycasa'));
  drupal_add_css($css, array('group' => CSS_THEME));
}

/**
 * Unit creation form lets user insert information for the first Casa Unit.
 */
function roomifycasa_create_unit_form() {
  drupal_set_title(st('Roomify - Property configuration'));
  $form['welcome']['#markup'] = '<p>' .  st('Please configure your property.') . '</p><p>' .
  st('The following values are required to properly install your site; you may always change these values later.') . '</p>';

  $form['property_name'] = array(
    '#title' => st('Property Name'),
    '#type' => 'textfield',
    '#default_value' => variable_get('site_name', ''),
  );
  // Price and title are separated so the price and currency form fields
  // can be displayed next to each other, with the title above.
  $form['price_title'] = array(
    '#type' => 'item',
    '#markup' => '<label for="edit-price">' . st('Property default price per night') . '</label>',
  );
  $form['price'] = array(
    '#type' => 'textfield',
    '#size' => 5,
  );

  roomifycasa_get_commerce_currency_field($form);

  $form['max_sleeps'] = array(
    '#title' => st('Maximum number of occupants'),
    '#type' => 'textfield',
    '#size' => 2,
  );
  $form['max_children'] = array(
    '#title' => st('Maximum number of children in group (optional)'),
    '#type' => 'textfield',
    '#size' => 2,
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Save and continue'),
    '#weight' => 15,
  );

  $form['#validate'] = array('roomifycasa_create_unit_form_validate');
  $form['#submit'] = array('roomifycasa_create_unit_form_submit');
  rooms_booking_manager_deposit_config_form($form, array());

  return $form;
 }

/**
 * Helper function builds a currency options list from all defined currencies.
 *
 * See commerce_currency_settings_form().
 */
function roomifycasa_get_commerce_currency_field(&$form) {
  if (!module_exists('commerce')) {
    return;
  }
  $options = array();

  foreach (commerce_currencies(FALSE, TRUE) as $currency_code => $currency) {
    $options[$currency_code] = st('@code - !name', array('@code' => $currency['code'], '@symbol' => $currency['symbol'], '!name' => $currency['name']));

    if (!empty($currency['symbol'])) {
      $options[$currency_code] .= ' - ' . check_plain($currency['symbol']);
    }
  }

  $form['commerce_default_currency'] = array(
    '#type' => 'select',
    '#options' => $options,
    '#default_value' => commerce_default_currency(),
  );
}

/**
 * Create Standard UnitType Validate
 */
function roomifycasa_create_unit_form_validate($form, &$form_state) {

  if(!is_numeric($form_state['values']['price'])) {
    form_set_error('price', st('Price must be a numeric value.'));
  }
  if(!is_numeric($form_state['values']['max_sleeps'])) {
    form_set_error('max_sleeps', st('Maximum number of occupants must be a numeric value.'));
  }
  if($form_state['values']['max_children'] != '' && !is_numeric($form_state['values']['max_children'])) {
    form_set_error('max_children', st('Maximum number of children must be a numeric value.'));
  }
}

/**
 * Create Standard UnitType Submit
 */
function roomifycasa_create_unit_form_submit($form, &$form_state) {
  variable_set('property_name', $form_state['values']['property_name']);
  variable_set('price', $form_state['values']['price']);
  variable_set('max_sleeps', $form_state['values']['max_sleeps']);
  variable_set('max_children', $form_state['values']['max_children']);
  variable_set('commerce_default_currency', $form_state['values']['commerce_default_currency']);
  variable_set('rooms_booking_manager_search_form_max_group_size', $form_state['values']['max_sleeps']);
}

function roomifycasa_multilingual_support_form($form, &$form_state) {
  $form['multilingual_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => st('Enable support for translation of Casa content in multiple languages'),
    '#description' => st('We have built in support for a few languages and you can add more later. This will switch on all the appropriate settings and the multi-lingual selector'),
  );

  $form['available_languages'] = array(
    '#type' => 'fieldset',
    '#title' => st('Available languages to enable'),
    '#states' => array(
      'visible' => array(
        '#edit-multilingual-enabled' => array('checked' => TRUE),
      ),
    ),
  );

  $default_language = language_default();

  $languages = array_merge(array($default_language->language => $default_language->name), array(
    'en' => 'English',
    'es' => 'Spanish',
    'fr' => 'French',
    'it' => 'Italian',
    'de' => 'German',
  ));

  $form['available_languages']['select_languages'] = array(
    '#type' => 'checkboxes',
    '#options' => $languages,
    '#default_value' => array($default_language->language),
  );

  $form['available_languages']['select_languages'][$default_language->language]['#disabled'] = TRUE;
  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Save and continue'),
    '#weight' => 15,
  );

  return $form;
}

function roomifycasa_multilingual_support_form_submit($form, &$form_state) {
  variable_set('roomifycasa_multilingual_support', $form_state['values']['multilingual_enabled']);
  $languages = array_filter($form_state['values']['select_languages']);
  foreach ($languages as $language) {
    if (!db_select('languages', 'l')->fields('l', array('language'))->condition('language', $language)->execute()->rowCount()) {
      locale_add_language($language);
    }
  }
}

/**
 * Enables some features that RoomifyCasa use.
 */
function roomifycasa_enable_features() {
  module_enable(array('casa_unit_type'), TRUE);
  $unit_type = rooms_unit_type_load('casa_type', TRUE);
  $unit_type->data['base_price'] = variable_get('price');
  $unit_type->data['max_children'] = variable_get('max_children');
  $unit_type->data['min_sleeps'] = 1;
  $unit_type->data['max_sleeps'] = variable_get('max_sleeps');
  $room = array(
    'type' => 'casa_type',
    'name' => variable_get('property_name'),
    'uid' => 1,
    'default_state' => 1,
  );
  rooms_unit_save(rooms_unit_create($room));
  variable_del('property_name');
  variable_del('price');
  variable_del('max_sleeps');
  variable_del('max_children');

  variable_set('roomify_lingo', 'property_rental');
  $modules = array(
    'rooms_availability_hidden_calendars',
    'casa_booking_manager',
    'casa_address_footer',
    'casa_image_styles',
    'casa_activity',
    'casa_amenities',
    'casa_widget',
    'casa_system',
    'casa_features',
    'casa_footer_bean_type',
    'casa_further_info',
    'casa_homepage',
    'casa_homepage_content_type',
    'casa_overrides',
    'casa_page',
    'casa_roles_and_permissions',
    'casa_settings',
    'casa_slideshow',
    'mapping',
    'roomify_contact_page',
    'roomify_lingo',
    'roomify_rich_text',
    'roomify_style',
  );

  // Build list of Roomify themes to enable.
  $themes = array();
  foreach (system_rebuild_theme_data() as $theme_name => $theme) {
    if (isset($theme->info['roomify_type'])) {
      $themes[] = $theme_name;
    }
  }

  theme_enable($themes);
  module_enable($modules, TRUE);

  // Bartik theme doesn't need to be enabled.
  theme_disable(array('bartik'));

  // Set admin theme.
  variable_set('admin_theme', 'shiny');
}

/**
 * Basic Information form lets user insert other information for the first Casa Unit.
 */
function roomifycasa_basic_information_form() {
  drupal_set_title(st('Roomify - Basic Information'));
  $form = rooms_booking_casa_settings_form();

  $form_state = array();

  $form_state += array('values' => array());
  $form += array('#parents' => array());

  $form['actions']['submit']['#value'] = st('Save and continue');
  $form['#submit'][] = 'roomifycasa_create_footer_bean';
  $form['social_links']['#description'] .= '<br />' . st('This information will be used to populate various sections where social links show up such as in the footer. This is optional, and may be modified or added later.');
  return $form;
 }

/**
 * Creates the Footer bean based on the Social networks profiles entered.
 */
function roomifycasa_create_footer_bean($form, &$form_state) {

  $bean = entity_create('bean', array('type' => 'footer'));
  $bean->label = 'footer';
  $wrapper = entity_metadata_wrapper('bean', $bean);

  $social_networks = array('facebook', 'twitter', 'google_plus', 'pinterest', 'instagram');

  foreach ($social_networks as $social_network) {
    $variable = variable_get('casa_settings_' . $social_network, '');
    if (!empty($variable)) {
      $wrapper->{'field_footer_' . $social_network}->url = $variable;
    }
  }

  $telephone = variable_get('casa_settings_telephone', '');

  if (!empty($telephone)) {
    $wrapper->field_footer_telephone = drupal_substr($telephone, 0, 25);
  }
  // Set default footer text.
  $wrapper->field_footer_text->value = 'Click <a href="/block/footer/edit?destination=admin/content/blocks">here</a> to edit footer into and social media links';
  $wrapper->field_footer_text->format = 'filtered_html';

  $wrapper->save();
}

/**
 * A form to lets user choose theme and enable some example content.
 */
function roomifycasa_choose_theme_form() {
  drupal_set_title(st('Roomify - Choose theme'));
  $form = array();

  $themes = $form_state['themes'] = system_rebuild_theme_data();
  $modules = $form_state['modules'] = system_rebuild_module_data();
  $themes_number = 0;

  $form['dpm'] = array('#markup' => '');
  $default_theme = FALSE;
  foreach ($themes as $theme_name => $theme) {
    if (isset($theme->info['roomify_type'])) {
      $themes_number++;
      if (!$default_theme) {
        $default_theme = $theme_name; // Set the default theme to the first option.
      }
      $options[$theme_name] = '<img class="screenshot" src="' .
       $theme->info['screenshot'] .
       '" width="300px"/><div class="theme-info"><h3>' . $theme->info['name'] . '</h3><div class="theme-description">' . str_replace('. ', '.<br /><br />', $theme->info['description']) . '</div></div>';
    }
  }

  if ($themes_number == 1) {
    $form['select_a_theme']['theme_default'] = array(
      '#type' => 'radios',
      '#options' => $options,
      '#default_value' => $default_theme,
    );
  }
  else {
    $form['select_a_theme'] = array(
      '#type' => 'fieldset',
      '#title' => st('Select a theme'),
      '#description' => st('RoomifyCasa provides the following designs for your site. You may change the design later.'),
    );
    $form['select_a_theme']['theme_default'] = array(
      '#type' => 'radios',
      '#options' => $options,
      '#default_value' => $default_theme,
    );
  }

  $form['install_example_content'] = array(
    '#type' => 'checkbox',
    '#title' => st('Install example content.'),
    '#description' => st('Recommended for first-time installations of RoomifyCasa.'),
    '#default_value' => 1,
    '#weight' => -15,
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Save and continue'),
    '#weight' => 15,
  );
  return $form;
}

function roomifycasa_choose_theme_form_submit($form, &$form_state) {
  variable_set('theme_default', $form_state['values']['theme_default']);
  if ($form_state['values']['install_example_content'] == 1) {
    module_enable(array('casa_example_content'), TRUE);
    variable_set('install_example_content', 'yes');
  }
}

/**
 * Callback to perform actions after all modules have been enabled.
 */
function roomifycasa_finish() {
  // The Unit Description content type is only needed when there are
  // multiple Unit types, but RoomifyCasa only has one Unit Type and doesn't
  // need the description.
  node_type_delete('unit_description');

  // Setting some variables
  variable_set_value('rooms_booking_manager_select_your_stay', 'Booking Details and Price');
  variable_set_value('rooms_booking_manager_your_current_search', 'Dates');
  variable_set_value('rooms_booking_manager_arrival_date', 'Arriving on');
  variable_set_value('rooms_booking_manager_departure_date', 'Departing on');


  // Set this variable to show availability of individual units.
  variable_set('rooms_presentation_style', ROOMS_INDIVIDUAL);
  // Set JPEG quality to 100%
  variable_set('image_jpeg_quality', '100');

  roomifycasa_create_menu_links();

  if (variable_get('roomifycasa_multilingual_support', FALSE)) {
    roomifycasa_enable_multilingual_support();
    roomifycasa_enable_multilingual_variables();
    variable_del('roomifycasa_multilingual_support');
  }

  if (variable_get('install_example_content') == 'yes') {
    create_homepage_example();
    variable_del('install_example_content');
  }

  module_list(TRUE);
  drupal_flush_all_caches();
  // Rebuild default components.
  if (module_exists('defaultconfig')) {
    drupal_flush_all_caches();
    module_list(TRUE);
    return defaultconfig_rebuild_batch_defintion(
      st('Apply configuration'),
      st('The installation encountered an error.')
    );
  }

  return array();
}

/**
 * Enables RoomifyCasa multilingual support.
 */
function roomifycasa_enable_multilingual_support() {
  $modules = array('i18n_variable', 'i18n_menu');
  module_enable($modules);

  drupal_flush_all_caches();

  $main_menu = menu_load('main-menu');
  $main_menu['i18n_mode'] = I18N_MODE_MULTIPLE;
  menu_save($main_menu);

  $negotiation = array(
    LOCALE_LANGUAGE_NEGOTIATION_URL => 1,
    LANGUAGE_NEGOTIATION_DEFAULT => 5
  );
  language_negotiation_set(LANGUAGE_TYPE_INTERFACE, $negotiation);
}

/**
 * Enables multilingual support for variables defined in Rooms modules.
 */
function roomifycasa_enable_multilingual_variables() {
  // Load all the variables defined by rooms.
  $variables = variable_list_group('rooms_booking_manager') + variable_list_group('rooms');

  // Enable multilingual support adding those variables to Language realm.
  $variable_names = array_keys($variables);
  $controller = variable_realm_controller('language');
  $controller->setRealmVariable('list', $variable_names);

  // Set default value as English translation to avoid inconsistencies.
  foreach ($variables as $name => $variable) {
    variable_realm_set('language', 'en', $name, $variable['default']);
  }

  module_enable(array('variable_admin'));
}

/**
 * Generates RoomifyCasa profile menu links.
 */
function roomifycasa_create_menu_links() {
  // Delete Drupal default menu links.
  menu_delete_links('main-menu');

  // Create menu links.
  if (variable_get('install_example_content') == 'yes') {
    $page_nid = db_select('migrate_map_casaexamplecontentpage', 'page')
      ->condition('sourceid1', 'Page Example')->fields('page', array('destid1'))
      ->execute()->fetchField();
    $casa_path = 'node/' . $page_nid;
  }
  else {
    $casa_path = '<front>';
  }
  casa_system_create_update_menu_link('The Casa', $casa_path, 'main-menu', -2);
  casa_system_create_update_menu_link('Directions', 'location', 'main-menu', -1);
  casa_system_create_update_menu_link('Contact', 'contact', 'main-menu', 1);
}

/**
 * Generates the RoomifyCasa profile homepage.
 */
function create_homepage_example() {
  $amenity_nid = db_select('migrate_map_casaexamplecontentamenities', 'amenities')->condition('sourceid1', 'Amenities')->fields('amenities', array('destid1'))->execute()->fetchField();
  $further_nid = db_select('migrate_map_casaexamplecontentfurtherinfo', 'further_info')->condition('sourceid1', 'The Neighborhood')->fields('further_info', array('destid1'))->execute()->fetchField();
  $slideshow_nid = db_select('migrate_map_casaexamplecontentslideshow', 'slideshow')->condition('sourceid1', 'Slideshow Example')->fields('slideshow', array('destid1'))->execute()->fetchField();
  $features_nid1 = db_select('migrate_map_casaexamplecontentfeatures', 'features')->condition('sourceid1', 'Living')->fields('features', array('destid1'))->execute()->fetchField();
  $features_nid2 = db_select('migrate_map_casaexamplecontentfeatures', 'features')->condition('sourceid1', 'Bedroom')->fields('features', array('destid1'))->execute()->fetchField();
  $features_nid3 = db_select('migrate_map_casaexamplecontentfeatures', 'features')->condition('sourceid1', 'Bathroom')->fields('features', array('destid1'))->execute()->fetchField();
  $page_nid = db_select('migrate_map_casaexamplecontentpage', 'page')->condition('sourceid1', 'The Casa')->fields('page', array('destid1'))->execute()->fetchField();

  $new_node = new StdClass();
  $new_node->type = 'homepage';
  $new_node->title = 'Homepage Test';
  $new_node->field_homepage_choose_intro['und'][0]['target_id'] = $page_nid;
  $new_node->field_homepage_choose_slideshow['und'][0]['target_id'] = $slideshow_nid;
  $new_node->field_homepage_choose_further['und'][0]['target_id'] = $further_nid;
  $new_node->field_homepage_choose_amenities['und'][0]['target_id'] = $amenity_nid;
  $new_node->field_homepage_choose_features['und'][0]['target_id'] = $features_nid1;
  $new_node->field_homepage_choose_features['und'][1]['target_id'] = $features_nid2;
  $new_node->field_homepage_choose_features['und'][2]['target_id'] = $features_nid3;

  node_save($new_node);


  // Set This node as Homepage.
  $front_page = 'node/' . $new_node->nid;
  variable_set('site_frontpage', $front_page);
}
