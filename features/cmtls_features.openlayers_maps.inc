<?php
/**
 * @file
 * cmtls_features.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function cmtls_features_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'cmtls_geometry_side_map';
  $openlayers_maps->title = 'CT geometry sidebar map';
  $openlayers_maps->description = 'A map used in the sidebar';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '200px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 1,
    'center' => array(
      'initial' => array(
        'centerpoint' => '0, 0',
        'zoom' => '1',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'cmtls_common_elements_cmtls_common_geometry_ol_overlay' => 'cmtls_common_elements_cmtls_common_geometry_ol_overlay',
          'mapquest_osm' => 0,
        ),
        'point_zoom_level' => '14',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'cmtls_common_elements_cmtls_common_geometry_ol_overlay' => 'cmtls_common_elements_cmtls_common_geometry_ol_overlay',
    ),
    'layer_weight' => array(
      'cmtls_global_marker_layers_cmtls_marker_4' => '0',
      'cmtls_global_marker_layers_cmtls_marker_3' => '0',
      'cmtls_global_marker_layers_cmtls_marker_9' => '0',
      'cmtls_global_marker_layers_cmtls_marker_5' => '0',
      'cmtls_global_marker_layers_cmtls_marker_8' => '0',
      'cmtls_global_marker_layers_cmtls_marker_6' => '0',
      'cmtls_group_marker_layers_cmtls_marker_10' => '0',
      'cmtls_group_marker_layers_cmtls_marker_8' => '0',
      'cmtls_group_marker_layers_cmtls_marker_3' => '0',
      'cmtls_common_elements_cmtls_common_geometry_ol_overlay' => '0',
      'cmtls_group_marker_layers_cmtls_marker_4' => '0',
      'cmtls_group_marker_layers_cmtls_marker_9' => '0',
      'cmtls_group_marker_layers_cmtls_marker_6' => '0',
      'cmtls_group_marker_layers_cmtls_marker_5' => '0',
      'cmtls_global_marker_layers_cmtls_marker_10' => '0',
      'cmtls_application_marker_layers_cmtls_marker_3' => '0',
      'cmtls_map_cmtls_map_location_ol_overlay' => '0',
      'cmtls_map_cmtls_map_event_ol_overlay' => '0',
      'cmtls_map_cmtls_map_post_ol_overlay' => '0',
      'cmtls_map_cmtls_map_application_ol_overlay' => '0',
      'openlayers_geojson_picture_this' => '0',
      'cmtls_map_cmtls_map_group_ol_overlay' => '0',
      'cmtls_map_cmtls_map_media_ol_overlay' => '0',
      'cmtls_locations_page_map_ol_overlay' => '0',
      'cmtls_application_marker_layers_cmtls_marker_9' => '0',
      'cmtls_application_marker_layers_cmtls_marker_4' => '0',
      'cmtls_application_marker_layers_cmtls_marker_5' => '0',
      'cmtls_application_marker_layers_cmtls_marker_6' => '0',
      'cmtls_application_marker_layers_cmtls_marker_10' => '0',
      'cmtls_application_marker_layers_cmtls_marker_8' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'cmtls_map_cmtls_map_group_ol_overlay' => '0',
      'cmtls_map_cmtls_map_application_ol_overlay' => '0',
      'cmtls_map_cmtls_map_post_ol_overlay' => '0',
      'cmtls_map_cmtls_map_location_ol_overlay' => '0',
      'cmtls_map_cmtls_map_event_ol_overlay' => '0',
      'cmtls_map_cmtls_map_media_ol_overlay' => '0',
      'cmtls_locations_page_map_ol_overlay' => '0',
      'cmtls_application_marker_layers_cmtls_marker_10' => '0',
      'cmtls_application_marker_layers_cmtls_marker_8' => '0',
      'cmtls_application_marker_layers_cmtls_marker_6' => '0',
      'cmtls_application_marker_layers_cmtls_marker_5' => '0',
      'cmtls_application_marker_layers_cmtls_marker_9' => '0',
      'cmtls_application_marker_layers_cmtls_marker_4' => '0',
      'cmtls_application_marker_layers_cmtls_marker_3' => '0',
      'cmtls_global_marker_layers_cmtls_marker_10' => '0',
      'cmtls_global_marker_layers_cmtls_marker_8' => '0',
      'cmtls_global_marker_layers_cmtls_marker_6' => '0',
      'cmtls_global_marker_layers_cmtls_marker_5' => '0',
      'cmtls_global_marker_layers_cmtls_marker_9' => '0',
      'cmtls_global_marker_layers_cmtls_marker_4' => '0',
      'cmtls_global_marker_layers_cmtls_marker_3' => '0',
      'cmtls_group_marker_layers_cmtls_marker_10' => '0',
      'cmtls_group_marker_layers_cmtls_marker_8' => '0',
      'cmtls_group_marker_layers_cmtls_marker_6' => '0',
      'cmtls_group_marker_layers_cmtls_marker_5' => '0',
      'cmtls_group_marker_layers_cmtls_marker_9' => '0',
      'cmtls_group_marker_layers_cmtls_marker_4' => '0',
      'cmtls_group_marker_layers_cmtls_marker_3' => '0',
      'cmtls_common_elements_cmtls_common_geometry_ol_overlay' => 'cmtls_dynamic_marker',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'cmtls_map_cmtls_map_group_ol_overlay' => '0',
      'cmtls_map_cmtls_map_application_ol_overlay' => '0',
      'cmtls_map_cmtls_map_post_ol_overlay' => '0',
      'cmtls_map_cmtls_map_location_ol_overlay' => '0',
      'cmtls_map_cmtls_map_event_ol_overlay' => '0',
      'cmtls_map_cmtls_map_media_ol_overlay' => '0',
      'cmtls_locations_page_map_ol_overlay' => '0',
      'cmtls_application_marker_layers_cmtls_marker_10' => '0',
      'cmtls_application_marker_layers_cmtls_marker_8' => '0',
      'cmtls_application_marker_layers_cmtls_marker_6' => '0',
      'cmtls_application_marker_layers_cmtls_marker_5' => '0',
      'cmtls_application_marker_layers_cmtls_marker_9' => '0',
      'cmtls_application_marker_layers_cmtls_marker_4' => '0',
      'cmtls_application_marker_layers_cmtls_marker_3' => '0',
      'cmtls_global_marker_layers_cmtls_marker_10' => '0',
      'cmtls_global_marker_layers_cmtls_marker_8' => '0',
      'cmtls_global_marker_layers_cmtls_marker_6' => '0',
      'cmtls_global_marker_layers_cmtls_marker_5' => '0',
      'cmtls_global_marker_layers_cmtls_marker_9' => '0',
      'cmtls_global_marker_layers_cmtls_marker_4' => '0',
      'cmtls_global_marker_layers_cmtls_marker_3' => '0',
      'cmtls_group_marker_layers_cmtls_marker_10' => '0',
      'cmtls_group_marker_layers_cmtls_marker_8' => '0',
      'cmtls_group_marker_layers_cmtls_marker_6' => '0',
      'cmtls_group_marker_layers_cmtls_marker_5' => '0',
      'cmtls_group_marker_layers_cmtls_marker_9' => '0',
      'cmtls_group_marker_layers_cmtls_marker_4' => '0',
      'cmtls_group_marker_layers_cmtls_marker_3' => '0',
      'cmtls_common_elements_cmtls_common_geometry_ol_overlay' => 'cmtls_dynamic_marker',
    ),
    'layer_activated' => array(
      'cmtls_common_elements_cmtls_common_geometry_ol_overlay' => 'cmtls_common_elements_cmtls_common_geometry_ol_overlay',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'cmtls_map_cmtls_map_group_ol_overlay' => 0,
      'cmtls_map_cmtls_map_application_ol_overlay' => 0,
      'cmtls_map_cmtls_map_post_ol_overlay' => 0,
      'cmtls_map_cmtls_map_location_ol_overlay' => 0,
      'cmtls_map_cmtls_map_event_ol_overlay' => 0,
      'cmtls_map_cmtls_map_media_ol_overlay' => 0,
      'cmtls_locations_page_map_ol_overlay' => 0,
      'cmtls_application_marker_layers_cmtls_marker_10' => 0,
      'cmtls_application_marker_layers_cmtls_marker_8' => 0,
      'cmtls_application_marker_layers_cmtls_marker_6' => 0,
      'cmtls_application_marker_layers_cmtls_marker_5' => 0,
      'cmtls_application_marker_layers_cmtls_marker_9' => 0,
      'cmtls_application_marker_layers_cmtls_marker_4' => 0,
      'cmtls_application_marker_layers_cmtls_marker_3' => 0,
      'cmtls_global_marker_layers_cmtls_marker_10' => 0,
      'cmtls_global_marker_layers_cmtls_marker_8' => 0,
      'cmtls_global_marker_layers_cmtls_marker_6' => 0,
      'cmtls_global_marker_layers_cmtls_marker_5' => 0,
      'cmtls_global_marker_layers_cmtls_marker_9' => 0,
      'cmtls_global_marker_layers_cmtls_marker_4' => 0,
      'cmtls_global_marker_layers_cmtls_marker_3' => 0,
      'cmtls_group_marker_layers_cmtls_marker_10' => 0,
      'cmtls_group_marker_layers_cmtls_marker_8' => 0,
      'cmtls_group_marker_layers_cmtls_marker_6' => 0,
      'cmtls_group_marker_layers_cmtls_marker_5' => 0,
      'cmtls_group_marker_layers_cmtls_marker_9' => 0,
      'cmtls_group_marker_layers_cmtls_marker_4' => 0,
      'cmtls_group_marker_layers_cmtls_marker_3' => 0,
    ),
    'layer_switcher' => array(
      'cmtls_common_elements_cmtls_common_geometry_ol_overlay' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'cmtls_map_cmtls_map_group_ol_overlay' => 0,
      'cmtls_map_cmtls_map_application_ol_overlay' => 0,
      'cmtls_map_cmtls_map_post_ol_overlay' => 0,
      'cmtls_map_cmtls_map_location_ol_overlay' => 0,
      'cmtls_map_cmtls_map_event_ol_overlay' => 0,
      'cmtls_map_cmtls_map_media_ol_overlay' => 0,
      'cmtls_locations_page_map_ol_overlay' => 0,
      'cmtls_application_marker_layers_cmtls_marker_10' => 0,
      'cmtls_application_marker_layers_cmtls_marker_8' => 0,
      'cmtls_application_marker_layers_cmtls_marker_6' => 0,
      'cmtls_application_marker_layers_cmtls_marker_5' => 0,
      'cmtls_application_marker_layers_cmtls_marker_9' => 0,
      'cmtls_application_marker_layers_cmtls_marker_4' => 0,
      'cmtls_application_marker_layers_cmtls_marker_3' => 0,
      'cmtls_global_marker_layers_cmtls_marker_10' => 0,
      'cmtls_global_marker_layers_cmtls_marker_8' => 0,
      'cmtls_global_marker_layers_cmtls_marker_6' => 0,
      'cmtls_global_marker_layers_cmtls_marker_5' => 0,
      'cmtls_global_marker_layers_cmtls_marker_9' => 0,
      'cmtls_global_marker_layers_cmtls_marker_4' => 0,
      'cmtls_global_marker_layers_cmtls_marker_3' => 0,
      'cmtls_group_marker_layers_cmtls_marker_10' => 0,
      'cmtls_group_marker_layers_cmtls_marker_8' => 0,
      'cmtls_group_marker_layers_cmtls_marker_6' => 0,
      'cmtls_group_marker_layers_cmtls_marker_5' => 0,
      'cmtls_group_marker_layers_cmtls_marker_9' => 0,
      'cmtls_group_marker_layers_cmtls_marker_4' => 0,
      'cmtls_group_marker_layers_cmtls_marker_3' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['cmtls_geometry_side_map'] = $openlayers_maps;

  return $export;
}
