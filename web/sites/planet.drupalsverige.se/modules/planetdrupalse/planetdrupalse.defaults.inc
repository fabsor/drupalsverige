<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _planetdrupalse_content_default_fields() {
  $fields = array();

  // Exported field: field_planet_feed_desc
  $fields[] = array(
    'field_name' => 'field_planet_feed_desc',
    'type_name' => 'planet_feed',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_planet_feed_desc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Beskrivning av feed',
      'weight' => '-4',
      'description' => 'Beskriv den feed du vill ha tillagd här. En bra beskrivning av din feed är ett kriterium för att den ska få finnas med på Planet Drupalsverige.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_body
  $fields[] = array(
    'field_name' => 'field_body',
    'type_name' => 'planet_feed_item',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_body][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Brödtext',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_planet_feed_item_author
  $fields[] = array(
    'field_name' => 'field_planet_feed_item_author',
    'type_name' => 'planet_feed_item',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_planet_feed_item_author][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Författare',
      'weight' => '-1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_planet_feed_original_post
  $fields[] = array(
    'field_name' => 'field_planet_feed_original_post',
    'type_name' => 'planet_feed_item',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'value',
    'title_value' => 'Länk till originalpost',
    'enable_tokens' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Originalpost',
      'weight' => '1',
      'description' => 'Länk till originalposten.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Translatables
  array(
    t('Beskrivning av feed'),
    t('Brödtext'),
    t('Författare'),
    t('Originalpost'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _planetdrupalse_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_feeds_importer_default().
 */
function _planetdrupalse_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'planet_feeds';
  $feeds_importer->config = array(
    'name' => 'Planet Feeds',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 1,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'planet_feed_item',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          '0' => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          '1' => array(
            'source' => 'description',
            'target' => 'field_body',
            'unique' => FALSE,
          ),
          '2' => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          '3' => array(
            'source' => 'url',
            'target' => 'field_planet_feed_original_post:url',
            'unique' => FALSE,
          ),
          '4' => array(
            'source' => 'author_name',
            'target' => 'field_planet_feed_item_author',
            'unique' => FALSE,
          ),
        ),
        'author' => 0,
      ),
    ),
    'content_type' => 'planet_feed',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['planet_feeds'] = $feeds_importer;
  return $export;
}
