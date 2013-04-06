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
  $view->name = 'people_fpp_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'fieldable_panels_panes';
  $view->human_name = 'People FPP Displays';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People FPP Display';
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
  /* Relationship: Fieldable panel pane: People (field_person_description) */
  $handler->display->display_options['relationships']['field_person_description_value']['id'] = 'field_person_description_value';
  $handler->display->display_options['relationships']['field_person_description_value']['table'] = 'field_data_field_person_description';
  $handler->display->display_options['relationships']['field_person_description_value']['field'] = 'field_person_description_value';
  $handler->display->display_options['relationships']['field_person_description_value']['delta'] = '-1';
  /* Field: Field collection item: Person */
  $handler->display->display_options['fields']['field_person_ref']['id'] = 'field_person_ref';
  $handler->display->display_options['fields']['field_person_ref']['table'] = 'field_data_field_person_ref';
  $handler->display->display_options['fields']['field_person_ref']['field'] = 'field_person_ref';
  $handler->display->display_options['fields']['field_person_ref']['relationship'] = 'field_person_description_value';
  $handler->display->display_options['fields']['field_person_ref']['label'] = '';
  $handler->display->display_options['fields']['field_person_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['relationship'] = 'field_person_description_value';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
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
    'people' => 'people',
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
  $export['people_fpp_view'] = $view;

  return $export;
}
