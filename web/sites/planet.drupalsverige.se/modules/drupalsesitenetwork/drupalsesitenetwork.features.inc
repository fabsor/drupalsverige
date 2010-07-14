<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function drupalsesitenetwork_ctools_plugin_api() {
  module_load_include('inc', 'drupalsesitenetwork', 'drupalsesitenetwork.defaults');
  $args = func_get_args();
  return call_user_func_array('_drupalsesitenetwork_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function drupalsesitenetwork_strongarm() {
  module_load_include('inc', 'drupalsesitenetwork', 'drupalsesitenetwork.defaults');
  $args = func_get_args();
  return call_user_func_array('_drupalsesitenetwork_strongarm', $args);
}
