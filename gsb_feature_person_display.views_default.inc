<?php
/**
 * @file
 * gsb_feature_person_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_person_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gsb_person_fpp_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'fieldable_panels_panes';
  $view->human_name = 'GSB Person FPP';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'GSB Person FPP';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Fieldable panel pane: Person Info (field_person_info) */
  $handler->display->display_options['relationships']['field_person_info_value']['id'] = 'field_person_info_value';
  $handler->display->display_options['relationships']['field_person_info_value']['table'] = 'field_data_field_person_info';
  $handler->display->display_options['relationships']['field_person_info_value']['field'] = 'field_person_info_value';
  $handler->display->display_options['relationships']['field_person_info_value']['delta'] = '-1';
  /* Field: Field collection item: Person Entity Ref */
  $handler->display->display_options['fields']['field_person_entity_ref']['id'] = 'field_person_entity_ref';
  $handler->display->display_options['fields']['field_person_entity_ref']['table'] = 'field_data_field_person_entity_ref';
  $handler->display->display_options['fields']['field_person_entity_ref']['field'] = 'field_person_entity_ref';
  $handler->display->display_options['fields']['field_person_entity_ref']['relationship'] = 'field_person_info_value';
  $handler->display->display_options['fields']['field_person_entity_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Quote or Summary */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'field_person_info_value';
  /* Contextual filter: Fieldable pane: Fieldable pane ID */
  $handler->display->display_options['arguments']['fpid']['id'] = 'fpid';
  $handler->display->display_options['arguments']['fpid']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['arguments']['fpid']['field'] = 'fpid';
  $handler->display->display_options['arguments']['fpid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['fpid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['fpid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['fpid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['fpid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Fieldable pane: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'gsb_person_fpp' => 'gsb_person_fpp',
  );

  /* Display: Grid */
  $handler = $view->new_display('block', 'Grid', 'grid');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: List */
  $handler = $view->new_display('block', 'List', 'list');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'gsb-person-featured';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Fieldable panel pane: Person Info (field_person_info) */
  $handler->display->display_options['relationships']['field_person_info_value']['id'] = 'field_person_info_value';
  $handler->display->display_options['relationships']['field_person_info_value']['table'] = 'field_data_field_person_info';
  $handler->display->display_options['relationships']['field_person_info_value']['field'] = 'field_person_info_value';
  $handler->display->display_options['relationships']['field_person_info_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_person_entity_ref_target_id']['id'] = 'field_person_entity_ref_target_id';
  $handler->display->display_options['relationships']['field_person_entity_ref_target_id']['table'] = 'field_data_field_person_entity_ref';
  $handler->display->display_options['relationships']['field_person_entity_ref_target_id']['field'] = 'field_person_entity_ref_target_id';
  $handler->display->display_options['relationships']['field_person_entity_ref_target_id']['relationship'] = 'field_person_info_value';
  $handler->display->display_options['relationships']['field_person_entity_ref_target_id']['label'] = 'Persion Entity Ref';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_person_entity_ref_target_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_person_entity_ref_target_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Person Entity Ref */
  $handler->display->display_options['fields']['field_person_entity_ref_1']['id'] = 'field_person_entity_ref_1';
  $handler->display->display_options['fields']['field_person_entity_ref_1']['table'] = 'field_data_field_person_entity_ref';
  $handler->display->display_options['fields']['field_person_entity_ref_1']['field'] = 'field_person_entity_ref';
  $handler->display->display_options['fields']['field_person_entity_ref_1']['relationship'] = 'field_person_info_value';
  $handler->display->display_options['fields']['field_person_entity_ref_1']['label'] = '';
  $handler->display->display_options['fields']['field_person_entity_ref_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_entity_ref_1']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_person_entity_ref_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_person_entity_ref_1']['alter']['path'] = 'node/[field_person_entity_ref_1-target_id]';
  $handler->display->display_options['fields']['field_person_entity_ref_1']['alter']['link_class'] = 'person-teaser-name';
  $handler->display->display_options['fields']['field_person_entity_ref_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_person_entity_ref_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_entity_ref_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_entity_ref_1']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Person Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['relationship'] = 'field_person_entity_ref_target_id';
  $handler->display->display_options['fields']['field_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_title']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_person_title']['element_class'] = 'person-title';
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_title']['element_default_classes'] = FALSE;
  /* Field: Content: Headshot */
  $handler->display->display_options['fields']['field_headshot']['id'] = 'field_headshot';
  $handler->display->display_options['fields']['field_headshot']['table'] = 'field_data_field_headshot';
  $handler->display->display_options['fields']['field_headshot']['field'] = 'field_headshot';
  $handler->display->display_options['fields']['field_headshot']['relationship'] = 'field_person_entity_ref_target_id';
  $handler->display->display_options['fields']['field_headshot']['label'] = '';
  $handler->display->display_options['fields']['field_headshot']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_headshot']['element_class'] = 'person-image';
  $handler->display->display_options['fields']['field_headshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headshot']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_headshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_headshot']['settings'] = array(
    'image_style' => '170x170',
    'image_link' => '',
  );
  /* Field: Field collection item: Quote or Summary */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'field_person_info_value';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_description']['element_class'] = 'person-quote';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = FALSE;
  $export['gsb_person_fpp_view'] = $view;

  return $export;
}
