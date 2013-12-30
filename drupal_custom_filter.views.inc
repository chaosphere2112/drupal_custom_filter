<?php

//Implements hook_views_data_alter
//We use data_alter instead of hook_views_data because we're not adding a new 'type' to views.

function drupal_custom_filter_views_data_alter(&$data) {
  $data["node"]["drupal_custom_filter_handler"] = array(
    "title"  => t("Drupal Custom Filter"),
    "help"   => t("Performs some custom filtering on nodes in the view."),
    "filter" => array(
      "handler"=>"drupal_custom_filter_handler",
    ),
  );
}
