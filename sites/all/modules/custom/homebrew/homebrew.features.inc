<?php
/**
 * @file
 * homebrew.features.inc
 */

/**
 * Implements hook_node_info().
 */
function homebrew_node_info() {
  $items = array(
    'homebrew' => array(
      'name' => t('Homebrew'),
      'base' => 'node_content',
      'description' => t('Add a new brew profile!'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
