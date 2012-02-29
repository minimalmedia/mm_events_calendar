<?php
/**
 * @file
 * mm_events_calendar.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function mm_events_calendar_content_defaults() {
$content = array();
$content['drupal-meetup'] = (object)array(
  'exported_path' => 'content/drupal-meetup',
  'title' => 'Drupal Meetup',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'event',
  'language' => 'und',
  'created' => '1330208092',
  'comment' => '2',
  'translate' => '0',
  'machine_name' => 'drupal-meetup',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Topics</h2><ul><li>Features</li><li>Views</li><li>Date/Calendar</li><li>Drupal&#39;s distro model</li><li>Open Q &amp; A</li></ul><p>&nbsp;</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h2>Topics</h2>
<ul><li>Features</li>
<li>Views</li>
<li>Date/Calendar</li>
<li>Drupal\'s distro model</li>
<li>Open Q &amp; A</li>
</ul><p> </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_date' => array(
    'und' => array(
      0 => array(
        'value' => '2012-02-29T02:00:00',
        'value2' => '2012-02-29T04:00:00',
        'rrule' => NULL,
        'timezone' => 'America/Los_Angeles',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
);
return $content;
}
