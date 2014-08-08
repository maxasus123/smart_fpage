<?php

function _smart_fpage_config_form($form, &$form_state) {


	$form['front'] = array(
    	'#type' => 'fieldset',
    	'#title' => t('Frontpage Settings'),
    	'#collapsible' => FALSE,
  	);

  	$form['front']['smart_fpage_open'] = array(
    	'#type' => 'checkbox', 
    	'#title' => t('Opne set forntpage'), 
    	'#default_value' => variable_get('smart_fpage_open', '0'),
  	);

  	$form['front']['smart_fpage_node'] = array(
    	'#type' => 'textfield', 
    	'#title' => t('Node ID'), 
    	'#default_value' => variable_get('smart_fpage_node', '1'),
    	'#required' => TRUE,
  	);

	return system_settings_form($form);
}