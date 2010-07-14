<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _drupalsesitenetwork_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _drupalsesitenetwork_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_network_client';
  $strongarm->value = 1;

  $export['site_network_client'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_network_client_notice';
  $strongarm->value = 0;

  $export['site_network_client_notice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_network_client_server';
  $strongarm->value = 'drupal.org';

  $export['site_network_client_server'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_network_client_server_only';
  $strongarm->value = 0;

  $export['site_network_client_server_only'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_network_server';
  $strongarm->value = 1;

  $export['site_network_server'] = $strongarm;
  return $export;
}
