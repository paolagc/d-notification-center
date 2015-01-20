<?php

/**
 * Implements hook_node_insert().
 */
function notification_center_node_insert($node) {

}
/**
 * Implements hook_node_delete().
 */
function notification_center_node_delete($node) {
  db_delete('notification')->condition('oid', $node->nid)->execute();
}

/**
 * Implements hook_comment_insert().
 */
function notification_center_comment_insert($comment) {

}

/**
 * Implements hook_comment_delete().
 */
function hook_comment_delete($comment) {
  db_delete('notification')->condition('oid', $comment->cid)->execute();
}

/**
 * Implements hook_flag_flag().
 */
function notification_center_flag_flag($flag, $entity_id, $account, $flagging) {

}

/**
 * Implements hook_flag_unflag().
 */
function notification_center_flag_unflag($flag, $entity_id, $account, $flagging) {

}