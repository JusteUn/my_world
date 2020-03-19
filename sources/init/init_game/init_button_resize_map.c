/*
** EPITECH PROJECT, 2020
** init_button_resize_map.c
** File description:
** init_button_resize_map
*/

#include "my_world.h"

int init_game_plus_button(global_game_t *global_game)
{
    int size_window_h = global_game->set->mode.height;

    global_game->game->plus_button = malloc(sizeof(button_t));
    if (!global_game->game->plus_button)
        return (1);
    global_game->game->plus_button->color = (sfColor){0, 0, 0, 200};
    global_game->game->plus_button->size = (sfVector2f){50, 50};
    global_game->game->plus_button->pos.x = 0;
    global_game->game->plus_button->pos.y = size_window_h - 114;
    if (create_button(global_game->game->plus_button) == 1)
        return (1);
    return (0);
}

int init_game_sub_button(global_game_t *global_game)
{
    int pos_box_size_map = global_game->game->box_size_map->pos.x;
    int size_window_h = global_game->set->mode.height;

    global_game->game->sub_button = malloc(sizeof(button_t));
    if (!global_game->game->sub_button)
        return (1);
    global_game->game->sub_button->color = (sfColor){0, 0, 0, 200};
    global_game->game->sub_button->size = (sfVector2f){50, 50};
    global_game->game->sub_button->pos.x = pos_box_size_map + 200;
    global_game->game->sub_button->pos.y = size_window_h - 114;
    if (create_button(global_game->game->sub_button) == 1)
        return (0);
    return (0);
}

int init_box_size_map(global_game_t *global_game)
{
    int pos_plus_button = global_game->game->plus_button->pos.x;
    int size_window_h = global_game->set->mode.height;

    global_game->game->box_size_map = malloc(sizeof(button_t));
    if (!global_game->game->box_size_map)
        return (1);
    global_game->game->box_size_map->color = (sfColor){0, 0, 0, 200};
    global_game->game->box_size_map->size = (sfVector2f){200, 50};
    global_game->game->box_size_map->pos.x = pos_plus_button + 50;
    global_game->game->box_size_map->pos.y = size_window_h - 114;
    if (create_button(global_game->game->box_size_map) == 1)
        return (0);
    return (0);
}