<?php

function hqsms_settings_form(){
	$form = array();

	$form['hqsms_login'] = array(
		'#type' => 'textfield',
		'#title' => t('Login'),
		'#default_value' => variable_get('hqsms_login', ''),
	);
	$form['hqsms_pass'] = array(
		'#type' => 'textfield',
		'#title' => t('Pass'),
		'#default_value' => variable_get('hqsms_pass', ''),
	);
	$form['hqsms_from'] = array(
		'#type' => 'textfield',
		'#title' => t('From'),
		'#default_value' => variable_get('hqsms_from', ''),
	);
	return system_settings_form($form);
}