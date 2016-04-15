<?php

// Plugin definition
$plugin = array(
  'title' => t('Cuatro columnas'),
  'category' => t('BA Distro'),
  'icon' => 'cuatro-columnas.png',
  'theme' => 'cuatro-columnas',
  'css' => 'tres-columnas.css',
  'regions' => array(
  	'top' => t('Superior'), 
  	'bottom' => t('Inferior'), 
  	'body-left' => t('Columna izquierda'),
    'body-middle'  => t('Columna central'),
    'body-right'  => t('Columna derecha'),
    'body-test'  => t('Columna test'),
    'full'  => t('De lado a lado'),
  ),
);