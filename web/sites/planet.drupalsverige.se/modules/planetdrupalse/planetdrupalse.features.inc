<?php

/**
 * Implementation of hook_content_default_fields().
 */
function planetdrupalse_content_default_fields() {
  module_load_include('inc', 'planetdrupalse', 'planetdrupalse.defaults');
  $args = func_get_args();
  return call_user_func_array('_planetdrupalse_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function planetdrupalse_ctools_plugin_api() {
  module_load_include('inc', 'planetdrupalse', 'planetdrupalse.defaults');
  $args = func_get_args();
  return call_user_func_array('_planetdrupalse_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_feeds_importer_default().
 */
function planetdrupalse_feeds_importer_default() {
  module_load_include('inc', 'planetdrupalse', 'planetdrupalse.defaults');
  $args = func_get_args();
  return call_user_func_array('_planetdrupalse_feeds_importer_default', $args);
}

/**
 * Implementation of hook_node_info().
 */
function planetdrupalse_node_info() {
  module_load_include('inc', 'planetdrupalse', 'planetdrupalse.features.node');
  $args = func_get_args();
  return call_user_func_array('_planetdrupalse_node_info', $args);
}
