<?php
/**
 * @file
 * mm_events_calendar.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mm_events_calendar_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:calendar/month
  $menu_links['main-menu:calendar/month'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendar/month',
    'router_path' => 'calendar/month',
    'link_title' => 'Calendar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Calendar');


  return $menu_links;
}
