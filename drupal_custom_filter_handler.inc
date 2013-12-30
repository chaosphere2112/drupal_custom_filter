<?php

//Subclass the views_handler_filter_in_operator to provide a list of options to filter by.
class drupal_custom_filter_handler extends views_handler_filter_in_operator {
  function get_value_options() {
    $this->value_options = array("test"=>1, "test 2"=>2);
    return $this->value_options;
  }
}
