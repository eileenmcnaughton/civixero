<?php
function xero_civiaccountsync_initialise(){
  define('XERO_KEY',variable_get('civixero_key',""));
  define('XERO_SECRET',variable_get('civixero_secret',""));
  $publicCertificate = variable_get('civixero_publiccert',"");
  $privateKey = variable_get('civixero_privatekey',"");
  $xero = CRM_Xerosync_Base::singleton(XERO_KEY, XERO_SECRET, $publicCertificate , $privateKey);
  return $xero;
}
