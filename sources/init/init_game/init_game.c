/*
** EPITECH PROJECT, 2020
** init_game.c
** File description:
** game
*/

#include "my_world.h"

void init_game_var(global_game_t *global_game)
{
    global_game->game->map.map_x = 10;
    global_game->game->map.map_y = 10;
    global_game->game->map.gap_point = 128;
    global_game->game->button_id = 2;
    global_game->game->button_hover = false;
}

int init_map(global_game_t *global_game)
{
    global_game->game->map.map_3d = create_3d_map(global_game);
    global_game->game->map.map_water = create_3d_map(global_game);
    if (!global_game->game->map.map_3d || !global_game->game->map.map_water)
        return (1);
    global_game->game->map.map_2d = \
    create_2d_map(global_game, global_game->game->map.map_3d);
    if (!global_game->game->map.map_2d)
        return (1);
    return (0);
}

int init_game(global_game_t *global_game)
{
    init_game_var(global_game);
    if (init_map(global_game) == 1 \
        || init_game_plus_button(global_game) == 1 \
        || init_box_size_map(global_game) == 1 \
        || init_game_sub_button(global_game) == 1 \
        || init_game_text_plus_button(global_game) == 1 \
        || init_game_text_sub_button(global_game) == 1 \
        || init_game_toolbar_box(global_game) == 1 \
        || init_toolbar_button(global_game) == 1 \
        || init_game_text_map_x(global_game) == 1 \
        || init_game_text_map_y(global_game) == 1 \
        || init_game_text_cross(global_game) == 1)
        return (1);
    return (0);
}