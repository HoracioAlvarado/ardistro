<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Página principal'),
  'category' => t('Principal'),
  'icon' => 'principal.png',
  'theme' => 'panels-principal',
  'theme arguments' => array('id', 'content'),
  'css' => 'principal.css',
  'regions' => array(
    'top' => t('Top'), 
    'middle' => t('Middle'), 
    'middle_bottom_left' => t('Middle bottom left'),
    'middle_bottom_center' => t('Middle bottom center'),
    'middle_bottom_right' => t('Middle bottom right'),
    'bottom' => t('Bottom')
  ),
);

