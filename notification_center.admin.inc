<?php

function notification_center_admin_settings() {
  $form = array();

  $node_types = node_type_get_names();
  $form['notification_center_link_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Display link on the selected content types'),
    '#description' => t('Select which content types could generate user notifications.'),
    '#default_value' => variable_get('privatemsg_link_node_types', array()),
    '#options' => $node_types,
  );

  $form['#submit'][] = 'notification_center_admin_settings_submit';
  return system_settings_form($form);
}

function notification_center_admin_settings_submit() {
  drupal_theme_rebuild();
}

