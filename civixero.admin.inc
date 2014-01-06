<?php
// $Id$

function civixero_settings_form ($form_state = NULL){
  $form['civixero_key']= array(
  '#type' => 'textfield',
  '#description' => 'Please enter your Xero key',
  '#default_value' => variable_get('civixero_key', ""),
  );

  $form['civixero_secret']= array(
  '#type' => 'textfield',
  '#description' => 'Please enter your Xero secret',
  '#default_value' => variable_get('civixero_secret', ""),
   );

   $form['civixero_publiccert']= array(
  '#type' => 'textfield',
  '#description' => 'Enter the full path to your public Certificate',
  '#default_value' => variable_get('civixero_publiccert', ""),
   );
  $form['civixero_privatekey']= array(
  '#type' => 'textfield',
  '#description' => 'Enter the full path to your private Key',
  '#default_value' => variable_get('civixero_privatekey', ""),
   );

   $form['civixero_dayzero']= array(
    '#type' => 'date',
    '#title' => 'Day Zero',
    '#description' => 'CiviXero will never push or pull invoices before this date',
    '#default_value' => variable_get('civixero_dayzero', 0),
   );

  $form['civixero_lastxerocontactget']= array(
  '#type' => 'textfield',
  '#description' => 'Date of last contact sync from Xero - think before you meddle',
  '#default_value' => variable_get('civixero_lastxerocontactget', ""),
   );
  $form['civixero_lastcivicontactput']= array(
  '#type' => 'textfield',
  '#description' => 'Date of last contact sync to Xero- think before you meddle',
  '#default_value' => variable_get('civixero_lastcivicontactput', ""),
   );
   $form['civixero_lastxeroinvoiceget']= array(
  '#type' => 'date',
  '#description' => 'Date of last invoice from Xero retrieval - think before you meddle',
  '#default_value' => variable_get('civixero_lastxeroinvoiceget', ""),
   );

   $form['civixero_automaticallymatchcontact']= array(
    '#type' => 'select',
    '#description' => 'If a Xero contact has a single match in Civi create link automatically?',
    '#default_value' => variable_get('civixero_automaticallymatchcontact', 0),
    '#options' => array(0 => 'No', 1 => 'Yes'),
   );

   #TODO Harden private key location + set defaults
  return system_settings_form($form);
}
