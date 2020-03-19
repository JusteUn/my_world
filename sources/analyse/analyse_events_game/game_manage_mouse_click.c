/*
** EPITECH PROJECT, 2020
** game_manage_mouse_click.c
** File description:
** game_manage_mouse_click
*/

#include "my_world.h"

void game_manage_mouse_click(global_game_t *global_game)
{
    sfVector2i mouse_pos = global_game->set->mouse_pos;
    int map_x = global_game->game->map.map_x;
    int map_y = global_game->game->map.map_y;

    global_game->set->error = 0;
    if ((mouse_pos.y > global_game->game->map.map_2d[0][0].y && \
        mouse_pos.y < global_game->game->map.map_2d[map_y - 1][map_x - 1].y) \
        || (mouse_pos.x > global_game->game->map.map_2d[map_y - 1][0].x && \
        mouse_pos.x < global_game->game->map.map_2d[0][map_x - 1].x))
        update_game_map(global_game, 0);
    if (global_game->set->error == 1)
        return;
    manage_mouse_click_exit_button(global_game);
    manage_mouse_click_back_button(global_game);
    manage_mouse_click_resize_map_button(global_game);
    manage_mouse_click_tiles_button(global_game);
    manage_mouse_click_corner_button(global_game);
    manage_mouse_click_water_button(global_game);
    manage_mouse_click_house_button(global_game);
    if (global_game->set->error == 1)
        return;
}