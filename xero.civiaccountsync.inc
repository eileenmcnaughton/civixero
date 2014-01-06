<?php
function xero_civiaccountsync_initialise(){
  $xero = new CRM_Xerosync_Base();
  return $xero->getSingleton();
}
