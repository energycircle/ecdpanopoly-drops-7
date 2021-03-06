<?php
$databases = array (
  'default' =>
  array (
    'default' =>
    array (
      'database' => 'some_db',
      'username' => 'root',
      'password' => 'some_pw',
      'host' => '127.0.0.1',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);


// Other stuff useful during development
$conf['composer_manager_file_dir'] = "files/composer";
ini_set('memory_limit', '512M');

// Disable cache
$conf['cache'] = 0;

// Disable css and javascript aggregation by default
$conf['preprocess_css'] = 0;
$conf['preprocess_js'] = 0;
