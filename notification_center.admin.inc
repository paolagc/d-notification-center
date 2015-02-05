<?php


/**
 * @file
 * Administration menu callbacks for Notification center
 */

function notification_center_admin_settings() {
  $form = array();

  $node_types = node_type_get_names();
  $form['notification_center_link_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Select the content types that triggers notifications'),
    '#description' => t('Select which content types could generate user notifications.'),
    '#options' => $node_types,
  );


  $flags = _flag_get_flag_names();
  dpm($flags);
  $form['notification_center_flags'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Select the flags that triggers notifications'),
    '#options' => $flags,
  );

  $form['#submit'][] = 'notification_center_admin_settings_submit';
  return system_settings_form($form);
}

function notification_center_admin_settings_submit() {
  drupal_theme_rebuild();
}

