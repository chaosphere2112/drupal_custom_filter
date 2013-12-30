<?php

//Subclass the views_handler_filter_in_operator to provide a list of options to filter by.
class drupal_custom_filter_handler extends views_handler_filter_in_operator {
  function init(&$view, &$options) {
    parent::init($view, $options);
    $this->real_field = "status";
  }

  function get_value_options() {
    if (!isset($this->value_options)) {
      $this->value_options = array(0=>"Unpublished", 1=>"Published");
    }
    return $this->value_options;
  }
}
