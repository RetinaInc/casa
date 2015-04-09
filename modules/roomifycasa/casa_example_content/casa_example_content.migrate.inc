<?php


function casa_example_content_migrate_api() {
  $lang = language_default();
  $lang = $lang->language;
  
  $api = array(
    'api' => 2,
    'migrations' => array(
      'CasaExampleContentPage' => array('class_name' => 'CasaExampleContentPageMigration', 'arguments' => array('lang' => $lang)),
      'CasaExampleContentFurtherInfo' => array('class_name' => 'CasaExampleContentFurtherInfoMigration', 'arguments' => array('lang' => $lang)),
      'CasaExampleContentFeatures' => array('class_name' => 'CasaExampleContentFeaturesMigration', 'arguments' => array('lang' => $lang)),
      'CasaExampleContentSlideshow' => array('class_name' => 'CasaExampleContentSlideshowMigration', 'arguments' => array('lang' => $lang)),
      'CasaExampleContentAmenities' => array('class_name' => 'CasaExampleContentAmenitiesMigration', 'arguments' => array('lang' => $lang)),
      'CasaExampleContentActivity' => array('class_name' => 'CasaExampleContentActivityMigration', 'arguments' => array('lang' => $lang)),
      'CasaExampleContentAmenitiesFieldCollection' => array('class_name' => 'CasaExampleContentAmenitiesFieldCollectionMigration', 'arguments' => array('lang' => $lang)),
      'CasaExampleContentSlideshowFieldCollection' => array('class_name' => 'CasaExampleContentSlideshowFieldCollectionMigration', 'arguments' => array('lang' => $lang)),
    ),
  );
  return $api;
}

class CasaExampleContentPageMigration extends Migration {
  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();
    $this->description = t('Import content page from CSV file.');

    $source_file = drupal_get_path('module', 'casa_example_content') . '/import/pages.csv';
    $theme = variable_get('theme_default');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
			array(
				'Title' => array(
					'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Title',
        ),
			),
			MigrateDestinationNode::getKeySchema()
		);

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceCSV($source_file, $this->csvcolumns(), array('header_rows' => 1));

    $node_options = MigrateDestinationNode::options($arguments['arguments']['lang'], 'full_html');
    $this->destination = new MigrateDestinationNode('page', $node_options);

    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('body', 'Body');

    // Add images mapping.
    $this->addFieldMapping('field_page_image', 'Image');
    $files_path = drupal_get_path('module', 'casa_example_content') . '/import/images/casa';
    $this->addFieldMapping('field_page_image:source_dir')
      ->defaultValue($files_path);
  }

  function csvcolumns() {
    $columns[0] = array('Title', 'Title');
    $columns[1] = array('Body', 'Body');
    $columns[2] = array('Image', 'Image');
    
    return $columns;
  }

}

class CasaExampleContentFurtherInfoMigration extends Migration {
  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();
    $this->description = t('Import content further info from CSV file.');

    $source_file = drupal_get_path('module', 'casa_example_content') . '/import/further_info.csv';
    $theme = variable_get('theme_default');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'Title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Title',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceCSV($source_file, $this->csvcolumns(), array('header_rows' => 1));

    $node_options = MigrateDestinationNode::options($arguments['arguments']['lang'], 'full_html');
    $this->destination = new MigrateDestinationNode('further_info', $node_options);

    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('body', 'Body');

    // Add images mapping.
    $this->addFieldMapping('field_further_info_image', 'Image');
    $files_path = drupal_get_path('module', 'casa_example_content') . '/import/images/casa';
    $this->addFieldMapping('field_further_info_image:source_dir')
      ->defaultValue($files_path);
  }

  function csvcolumns() {
    $columns[0] = array('Title', 'Title');
    $columns[1] = array('Body', 'Body');
    $columns[2] = array('Image', 'Image');
    
    return $columns;
  }

}

class CasaExampleContentFeaturesMigration extends Migration {
  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();
    $this->description = t('Import content Features from CSV file.');

    $source_file = drupal_get_path('module', 'casa_example_content') . '/import/features.csv';
    $theme = variable_get('theme_default');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'Title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Title',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceCSV($source_file, $this->csvcolumns(), array('header_rows' => 1));

    $node_options = MigrateDestinationNode::options($arguments['arguments']['lang'], 'full_html');
    $this->destination = new MigrateDestinationNode('features', $node_options);

    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('body', 'Body');

    // Add images mapping.
    $this->addFieldMapping('field_features_image', 'Image');
    $files_path = drupal_get_path('module', 'casa_example_content') . '/import/images/casa';
    $this->addFieldMapping('field_features_image:source_dir')
      ->defaultValue($files_path);
  }

  function csvcolumns() {
    $columns[0] = array('Title', 'Title');
    $columns[1] = array('Body', 'Body');
    $columns[2] = array('Image', 'Image');
    
    return $columns;
  }

}

class CasaExampleContentSlideshowMigration extends Migration {
  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();
    $this->description = t('Import content Slideshow from CSV file.');

    $source_file = drupal_get_path('module', 'casa_example_content') . '/import/slideshow.csv';
    $theme = variable_get('theme_default');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'Title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Title',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceCSV($source_file, $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('slideshow');

    $this->addFieldMapping('title', 'Title');

  }

  function csvcolumns() {
    $columns[0] = array('Title', 'Title');
    
    return $columns;
  }

  public function prepareRow($row) {
    $images = array();

    // Parse each line of the file and find the rows that belong to the current(array) unit.
    if (is_array($this->images_csv)) {
      foreach ($this->images_csv as $line) {
        if ($csv_row = str_getcsv($line)) {
          if ($csv_row[0] == 'slideshow') {
            $images[] = $csv_row[1];
          }
        }
      }
    }
    $row->images = $images;
  }
}

class CasaExampleContentAmenitiesMigration extends Migration {
  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();
      
    $this->description = t('Import content Amenity from CSV file.');

    $source_file = drupal_get_path('module', 'casa_example_content') . '/import/amenities.csv';
    $theme = variable_get('theme_default');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'Title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Title',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceCSV($source_file, $this->csvcolumns(), array('header_rows' => 1));

    $node_options = MigrateDestinationNode::options($arguments['arguments']['lang'], 'full_html');
    $this->destination = new MigrateDestinationNode('amenities', $node_options);

    $this->addFieldMapping('title', 'Title');
    
    // Add images mapping.
    $this->addFieldMapping('field_amenity_image', 'Image');
    $files_path = drupal_get_path('module', 'casa_example_content') . '/import/images/casa';
    $this->addFieldMapping('field_amenity_image:source_dir')
      ->defaultValue($files_path);
  }

  function csvcolumns() {
    $columns[0] = array('Title', 'Title');
    $columns[1] = array('Image', 'Image');    
    return $columns;
  }

}

class CasaExampleContentActivityMigration extends Migration {
  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();

    $this->description = t('Import content Activity from CSV file.');

    $source_file = drupal_get_path('module', 'casa_example_content') . '/import/activity.csv';

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'Title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Title',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceCSV($source_file, $this->csvcolumns(), array('header_rows' => 1));

    $node_options = MigrateDestinationNode::options($arguments['arguments']['lang'], 'full_html');
    $this->destination = new MigrateDestinationNode('activity', $node_options);

    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('body', 'Body');
    $this->addFieldMapping('field_activity_type', 'Type')
      ->separator(',')
      ->arguments(array('create_term' => TRUE));

    // Add images mapping.
    $this->addFieldMapping('field_activity_image', 'Image');
    $files_path = drupal_get_path('module', 'casa_example_content') . '/import/images';
    $this->addFieldMapping('field_activity_image:source_dir')
      ->defaultValue($files_path);
  }

  function csvcolumns() {
    $columns[0] = array('Title', 'Title');
    $columns[1] = array('Image', 'Image');
    $columns[2] = array('Type', 'Type');
    $columns[3] = array('Body', 'Body');

    return $columns;
  }

}

class CasaExampleContentAmenitiesFieldCollectionMigration extends Migration {
  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();
    
    $this->dependencies = array('CasaExampleContentAmenities');
    $source_file = drupal_get_path('module', 'casa_example_content') . '/import/fields_collection.csv';
    
    $this->source = new MigrateSourceCSV($source_file, $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationFieldCollection('field_amenities',array('host_entity_type' => 'node'));
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'Id' => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'Id field collection',
        ),
      ), MigrateDestinationFieldCollection::getKeySchema());

    $this->addFieldMapping('host_entity_id', 'Title')
      ->sourceMigration('CasaExampleContentAmenities');

    $this->addFieldMapping('field_amenity_name', 'Name');
    $this->addFieldMapping('field_amenity_description', 'Description');
}

  function csvcolumns() {
    $columns[0] = array('Id', 'Id');
    $columns[1] = array('Title', 'Title');
    $columns[2] = array('Name', 'Name');
    $columns[3] = array('Description', 'Description');

    return $columns;
  }
}

class CasaExampleContentSlideshowFieldCollectionMigration extends Migration {
  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();
    
    $this->dependencies = array('CasaExampleContentSlideshow');
    $source_file = drupal_get_path('module', 'casa_example_content') . '/import/slideshow_fields_collection.csv';
    $theme = variable_get('theme_default');
    
    $this->source = new MigrateSourceCSV($source_file, $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationFieldCollection('field_images_collection',array('host_entity_type' => 'node'));
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'Id' => array(
          'type' => 'int',
          'not null' => TRUE,
        ),
      ), MigrateDestinationFieldCollection::getKeySchema());

    $this->addFieldMapping('host_entity_id', 'Title')
      ->sourceMigration('CasaExampleContentSlideshow');

    $this->addFieldMapping('field_image_description', 'Description');

     // Add images mapping.
    $this->addFieldMapping('field_image_image', 'Image');
    $files_path = drupal_get_path('module', 'casa_example_content') . '/import/images/casa';
    $this->addFieldMapping('field_image_image:source_dir')
      ->defaultValue($files_path);
}

  function csvcolumns() {
    $columns[0] = array('Id', 'Id');
    $columns[1] = array('Title', 'Title');
    $columns[2] = array('Image', 'Image');
    $columns[3] = array('Description', 'Description');

    return $columns;
  }
}
