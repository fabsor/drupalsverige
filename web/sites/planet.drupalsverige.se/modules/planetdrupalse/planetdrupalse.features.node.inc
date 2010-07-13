<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _planetdrupalse_node_info() {
  $items = array(
    'planet_feed' => array(
      'name' => t('Planet Feed'),
      'module' => 'features',
      'description' => t('En feed i Planet Drupalsverige.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'planet_feed_item' => array(
      'name' => t('Aggregerat Innehåll'),
      'module' => 'features',
      'description' => t('Innehåll som aggregerats för Drupal Planet.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
