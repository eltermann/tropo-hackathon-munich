<?php
/**
 * @file
 * tropo_hackathon.features.inc
 */

/**
 * Implements hook_node_info().
 */
function tropo_hackathon_node_info() {
  $items = array(
    'group' => array(
      'name' => t('group'),
      'base' => 'node_content',
      'description' => t('Type of subscription'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
