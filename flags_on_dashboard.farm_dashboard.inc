<?php
/**
 * @file
 * Farm dashboard hooks implemented by farm log module.
 */

/**
 * Implements hook_farm_dashboard_panes().
 */
function flags_on_dashboard_farm_dashboard_panes() {
  return array(
    'flags_on_dashboard' => array(
      'view' => 'flags_on_dashboard',
      'view_display_id' => 'block_flags',
    ),
    
  );
}

