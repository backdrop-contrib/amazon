<?php
/**
 * @file amazon.locales.inc
 */

function _amazon_load_locales() {
  $locales = array();
  // United States Amazon Locale:
  $locales['US'] = array(
    'url' => 'http://ecs.amazonaws.com/onca/xml',
    'name' => t('United States'),
    'da_associate_id' => 'backdrop0a-20',
    'search_indexes' => array(
      'All' => 'All Indexes',
      'Apparel' => 'Apparel',
      'Appliances' => 'Appliances',
      'ArtsAndCrafts' => 'Arts & Crafts',
      'Automotive' => 'Automotive',
      'Baby' => 'Baby',
      'Beauty' => 'Beauty',
      'Books' => 'Books',
      'Classical' => 'Classical',
      'DigitalMusic' => 'Digital Music',
      'DVD' => 'DVD',
      'Electronics' => 'Electronics',
      'GourmetFood' => 'Gourmet Food',
      'Grocery' => 'Grocery',
      'HealthPersonalCare' => 'Health & Personal Care',
      'HomeGarden' => 'Home & Garden',
      'Industrial' => 'Industrial',
      'Jewelry' => 'Jewelry',
      'KindleStore' => 'Kindle Store',
      'Kitchen' => 'Kichen',
      'LawnAndGarden' => 'Lawn & Garden',
      'Magazines' => 'Magazines',
      'Marketplace' => 'Marketplace',
      'Miscellaneous' => 'Miscellaneous',
      'MobileApps' => 'Mobile Apps',
      'MP3Downloads' => 'MP3 Downloads',
      'Music' => 'Music',
      'MusicalInstruments' => 'Musical Instruments',
      'MusicTracks' => 'Music Tracks',
      'OfficeProducts' => 'Office',
      'OutdoorLiving' => 'Outdoor Living',
      'PCHardware' => 'PC Hardware',
      'PetSupplies' => 'Pet Supplies',
      'Photo' => 'Photo',
      'Shoes' => 'Shoes',
      'Software' => 'Software',
      'SportingGoods' => 'Sporting Goods',
      'Tools' => 'Tools',
      'Toys' => 'Toys',
      'UnboxVideo' => 'Unbox Video',
      'VHS' => 'VHS',
      'Video' => 'Video',
      'VideoGames' => 'Video Games',
      'Watches' => 'Watches',
      'Wireless' => 'Wireless',
      'WirelessAccessories' => 'Wireless Accessories',
    ),
  );

  // United Kingdom Amazon Locale:
  $locales['UK'] = array(
    'url' => 'http://ecs.amazonaws.co.uk/onca/xml',
    'name' => t('United Kingdom'),
    'da_associate_id' => '',
    'search_indexes' => array(
      'All' => 'All Indexes',
      'Apparel' => 'Apparel',
      'Automotive' => 'Automotive',
      'Baby' => 'Baby',
      'Beauty' => 'Beauty',
      'Books' => 'Books',
      'Classical' => 'Classical',
      'DVD' => 'DVD',
      'Electronics' => 'Electronics',
      'Grocery' => 'Grocery',
      'HealthPersonalCare' => 'Health & Personal Care',
      'HomeGarden' => 'Home & Garden',
      'HomeImprovement' => 'Home Improvement',
      'Jewelry' => 'Jewelry',
      'KindleStore' => 'Kindle Store',
      'Kitchen' => 'Kichen',
      'Lighting' => 'Lighting',
      'Marketplace' => 'Marketplace',
      'MP3Downloads' => 'MP3 Downloads',
      'Music' => 'Music',
      'MusicalInstruments' => 'Musical Instruments',
      'MusicTracks' => 'Music Tracks',
      'OfficeProducts' => 'Office',
      'OutdoorLiving' => 'Outdoor Living',
      'Outlet' => 'Outlet',
      'PCHardware' => 'PC Hardware',
      'Shoes' => 'Shoes',
      'Software' => 'Software',
      'SoftwareVideoGames' => 'Software: Video Games',
      'SportingGoods' => 'Sporting Goods',
      'Tools' => 'Tools',
      'Toys' => 'Toys',
      'VHS' => 'VHS',
      'Video' => 'Video',
      'VideoGames' => 'Video Games',
      'Watches' => 'Watches',
    ),
  );

  // Germany Amazon Locale:
  $locales['DE'] = array(
    'url' => 'http://ecs.amazonaws.de/onca/xml',
    'name' => t('Germany'),
    'da_associate_id' => '',
    'search_indexes' => array(
      'All' => 'All Indexes',
      'Apparel' => 'Apparel',
      'Automotive' => 'Automotive',
      'Baby' => 'Baby',
      'Beauty' => 'Beauty',
      'Books' => 'Books',
      'Classical' => 'Classical',
      'DVD' => 'DVD',
      'Electronics' => 'Electronics',
      'ForeignBooks' => 'Foreign Books',
      'Grocery' => 'Grocery',
      'HealthPersonalCare' => 'Health & Personal Care',
      'HomeGarden' => 'Home & Garden',
      'HomeImprovement' => 'Home Improvement',
      'Jewelry' => 'Jewelry',
      'KindleStore' => 'Kindle Store',
      'Kitchen' => 'Kichen',
      'Lighting' => 'Lighting',
      'Magazines' => 'Magazines',
      'Marketplace' => 'Marketplace',
      'MP3Downloads' => 'MP3 Downloads',
      'Music' => 'Music',
      'MusicalInstruments' => 'Musical Instruments',
      'MusicTracks' => 'Music Tracks',
      'OfficeProducts' => 'Office',
      'OutdoorLiving' => 'Outdoor Living',
      'Outlet' => 'Outlet',
      'PCHardware' => 'PC Hardware',
      'Photo' => 'Photo',
      'Shoes' => 'Shoes',
      'Software' => 'Software',
      'SoftwareVideoGames' => 'Software Video Games',
      'SportingGoods' => 'Sporting Goods',
      'Tools' => 'Tools',
      'Toys' => 'Toys',
      'VHS' => 'VHS',
      'Video' => 'Video',
      'VideoGames' => 'Video Games',
      'Watches' => 'Watches',
    ),
  );

  // Japan Amazon Locale:
  $locales['JP'] = array(
    'url' => 'http://ecs.amazonaws.jp/onca/xml',
    'name' => t('Japan'),
    'da_associate_id' => '',
    'search_indexes' => array(
      'All' => 'All Indexes',
      'Apparel' => 'Apparel',
      'Appliances' => 'Appliances',
      'Automotive' => 'Automotive',
      'Baby' => 'Baby',
      'Beauty' => 'Beauty',
      'Books' => 'Books',
      'Classical' => 'Classical',
      'DVD' => 'DVD',
      'Electronics' => 'Electronics',
      'ForeignBooks' => 'Foreign Books',
      'Grocery' => 'Grocery',
      'HealthPersonalCare' => 'Health & Personal Care',
      'Hobbies' => 'Hobbies',
      'HomeImprovement' => 'Home Improvement',
      'Jewelry' => 'Jewelry',
      'Kitchen' => 'Kichen',
      'Marketplace' => 'Marketplace',
      'MP3Downloads' => 'MP3 Downloads',
      'Music' => 'Music',
      'MusicalInstruments' => 'Musical Instruments',
      'MusicTracks' => 'Music Tracks',
      'OfficeProducts' => 'Office',
      'Shoes' => 'Shoes',
      'Software' => 'Software',
      'SportingGoods' => 'Sporting Goods',
      'Toys' => 'Toys',
      'VHS' => 'VHS',
      'Video' => 'Video',
      'VideoGames' => 'Video Games',
    ),
  );

  // France Amazon Locale:
  $locales['FR'] = array(
    'url' => 'http://ecs.amazonaws.fr/onca/xml',
    'name' => t('France'),
    'da_associate_id' => '',
    'search_indexes' => array(
      'All' => 'All Indexes',
      'Apparel' => 'Apparel',
      'Baby' => 'Baby',
      'Beauty' => 'Beauty',
      'Books' => 'Books',
      'Classical' => 'Classical',
      'DVD' => 'DVD',
      'Electronics' => 'Electronics',
      'HealthPersonalCare' => 'Health & Personal Care',
      'Jewelry' => 'Jewelry',
      'KindleStore' => 'Kindle Store',
      'Kitchen' => 'Kichen',
      'Lighting' => 'Lighting',
      'MP3Downloads' => 'MP3 Downloads',
      'Music' => 'Music',
      'MusicalInstruments' => 'Musical Instruments',
      'MusicTracks' => 'Music Tracks',
      'OfficeProducts' => 'Office',
      'PCHardware' => 'PC Hardware',
      'Shoes' => 'Shoes',
      'Software' => 'Software',
      'SportingGoods' => 'Sporting Goods',
      'Toys' => 'Toys',
      'VHS' => 'VHS',
      'Video' => 'Video',
      'VideoGames' => 'Video Games',
      'Watches' => 'Watches',
    ),
  );

  // Canada Amazon Locale:
  $locales['CA'] = array(
    'url' => 'http://ecs.amazonaws.ca/onca/xml',
    'name' => t('Canada'),
    'da_associate_id' => '',
    'search_indexes' => array(
      'All' => 'All Indexes',
      'Baby' => 'Baby',
      'Books' => 'Books',
      'Classical' => 'Classical',
      'DVD' => 'DVD',
      'Electronics' => 'Electronics',
      'ForeignBooks' => 'Foreign Books',
      'Music' => 'Music',
      'Software' => 'Software',
      'SoftwareVideoGames' => 'Software: Video Games',
      'VHS' => 'VHS',
      'Video' => 'Video',
      'VideoGames' => 'Video Games',
    ),
  );

  // Italy Amazon Locale:
  $locales['IT'] = array(
    'url' => 'http://webservices.amazon.it/onca/xml',
    'name' => t('Italy'),
    'da_associate_id' => '',
    'search_indexes' => array(
      'All' => 'All Indexes',
      'Baby' => 'Baby',
      'Books' => 'Books',
      'DVD' => 'DVD',
      'Electronics' => 'Electronics',
      'ForeignBooks' => 'Foreign Books',
      'Garden' => 'Garden',
      'KindleStore' => 'Kindle Store',
      'Kitchen' => 'Kichen',
      'Lighting' => 'Lighting',
      'Music' => 'Music',
      'Shoes' => 'Shoes',
      'Software' => 'Software',
      'Toys' => 'Toys',
      'VideoGames' => 'Video Games',
      'Watches' => 'Watches',
    ),
  );

  // China Amazon Locale:
  $locales['CN'] = array(
    'url' => 'http://webservices.amazon.cn/onca/xml',
    'name' => t('China'),
    'da_associate_id' => '',
    'search_indexes' => array(
      'All' => 'All Indexes',
      'Apparel' => 'Apparel',
      'Appliances' => 'Appliances',
      'Automotive' => 'Automotive',
      'Baby' => 'Baby',
      'Beauty' => 'Beauty',
      'Books' => 'Books',
      'Electronics' => 'Electronics',
      'Grocery' => 'Grocery',
      'HealthPersonalCare' => 'Health & Personal Care',
      'Home' => 'Home',
      'Home Improvement' => 'Home Improvement',
      'Miscellaneous' => 'Miscellaneous',
      'Music' => 'Music',
      'OfficeProducts' => 'Office',
      'Photo' => 'Photo',
      'Shoes' => 'Shoes',
      'Software' => 'Software',
      'SportingGoods' => 'Sporting Goods',
      'Toys' => 'Toys',
      'Video' => 'Video',
      'VideoGames' => 'Video Games',
      'Watches' => 'Watches',
    ),
  );

  // Spain Amazon Locale:
  $locales['ES'] = array(
    'url' => 'http://webservices.amazon.es/onca/xml',
    'name' => t('Spain'),
    'da_associate_id' => '',
    'search_indexes' => array(
      'All' => 'All Indexes',
      'Books' => 'Books',
      'DVD' => 'DVD',
      'Electronics' => 'Electronics',
      'ForeignBooks' => 'Foreign Books',
      'KindleStore' => 'Kindle Store',
      'Kitchen' => 'Kichen',
      'Music' => 'Music',
      'Software' => 'Software',
      'Toys' => 'Toys',
      'VideoGames' => 'Video Games',
      'Watches' => 'Watches',
    ),
  );

  return $locales;
}
