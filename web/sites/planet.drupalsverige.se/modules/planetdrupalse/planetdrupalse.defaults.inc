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

  // Exported field: field_planet_feed_persons
  $fields[] = array(
    'field_name' => 'field_planet_feed_persons',
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
    ),
    'referenceable_status' => '1',
    'advanced_view' => '',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Personer',
      'weight' => '-3',
      'description' => 'Ange de användare som har med den här feeden att göra här.',
      'type' => 'userreference_buttons',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_feed_body
  $fields[] = array(
    'field_name' => 'field_feed_body',
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
    t('Personer'),
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
  elseif ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
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
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          '2' => array(
            'source' => 'url',
            'target' => 'field_planet_feed_original_post:url',
            'unique' => FALSE,
          ),
          '3' => array(
            'source' => 'author_name',
            'target' => 'field_planet_feed_item_author',
            'unique' => FALSE,
          ),
          '4' => array(
            'source' => 'description',
            'target' => 'field_feed_body',
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

/**
 * Helper to implementation of hook_default_page_manager_handlers().
 */
function _planetdrupalse_default_page_manager_handlers() {
  $export = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Feed node',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        '0' => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'planet_feed' => 'planet_feed',
            ),
          ),
          'context' => 'argument_nid_1',
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        '0' => 'argument_nid_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['bottom'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'left';
    $pane->type = 'content_field';
    $pane->subtype = 'field_planet_feed_desc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['left'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'feed_persons-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        '0' => 'argument_nid_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['right'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $export['node_view_panel_context'] = $handler;
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_feeds-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        '0' => 'argument_uid_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'tweets-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        '0' => 'argument_uid_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2';
  $handler->conf['display'] = $display;

  $export['user_view_panel_context'] = $handler;
  return $export;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _planetdrupalse_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_cron_limit';
  $strongarm->value = '50';

  $export['apachesolr_cron_limit'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_failure';
  $strongarm->value = 'show_error';

  $export['apachesolr_failure'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_host';
  $strongarm->value = 'localhost';

  $export['apachesolr_host'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_index_last';
  $strongarm->value = array(
    'apachesolr_search' => array(
      'last_change' => '1279133010',
      'last_nid' => '123',
    ),
  );

  $export['apachesolr_index_last'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_index_updated';
  $strongarm->value = 1279133690;

  $export['apachesolr_index_updated'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_last_optimize';
  $strongarm->value = 1279133690;

  $export['apachesolr_last_optimize'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_mlt_blocks';
  $strongarm->value = array(
    'mlt-001' => array(
      'name' => 'More like this',
      'num_results' => '5',
      'mlt_fl' => array(
        'title' => 'title',
        'taxonomy_names' => 'taxonomy_names',
      ),
      'mlt_mintf' => '1',
      'mlt_mindf' => '1',
      'mlt_minwl' => '3',
      'mlt_maxwl' => '15',
      'mlt_maxqt' => '20',
    ),
  );

  $export['apachesolr_mlt_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_path';
  $strongarm->value = '/solr';

  $export['apachesolr_path'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_port';
  $strongarm->value = '8080';

  $export['apachesolr_port'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_read_only';
  $strongarm->value = '0';

  $export['apachesolr_read_only'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_rows';
  $strongarm->value = '10';

  $export['apachesolr_rows'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_default_previous';
  $strongarm->value = 0;

  $export['apachesolr_search_default_previous'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_make_default';
  $strongarm->value = '0';

  $export['apachesolr_search_make_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_spellcheck';
  $strongarm->value = 0;

  $export['apachesolr_search_spellcheck'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_taxonomy_links';
  $strongarm->value = '0';

  $export['apachesolr_search_taxonomy_links'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_taxonomy_previous';
  $strongarm->value = 0;

  $export['apachesolr_search_taxonomy_previous'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_set_nodeapi_messages';
  $strongarm->value = '1';

  $export['apachesolr_set_nodeapi_messages'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_site_hash';
  $strongarm->value = '4ec0fa6501ee';

  $export['apachesolr_site_hash'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_planet_feed';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '-1',
    'comment_settings' => '0',
    'menu' => '-2',
  );

  $export['content_extra_weights_planet_feed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_planet_feed_item';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '-3',
    'comment_settings' => '-2',
    'menu' => '-4',
  );

  $export['content_extra_weights_planet_feed_item'] = $strongarm;
  return $export;
}
