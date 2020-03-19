/*
** EPITECH PROJECT, 2020
** search_near_point.c
** File description:
** search_near_point
*/

#include "my_world.h"
#include <SFML/Graphics.h>
#include <math.h>

int get_near_point(global_game_t *g, int y, int temp)
{
    int result = 0;

    for (int x = 0; x != g->game->map.map_x; x++) {
        result = \
        sqrt(pow((g->game->mouse_x - g->game->map.map_2d[y][x].x), 2) + \
        pow((g->game->mouse_y - g->game->map.map_2d[y][x].y), 2));
        if (result < temp) {
            g->game->x_near = x;
            g->game->y_near = y;
            temp = result;
        }
    }
    return (temp);
}

void search_near_point(global_game_t *global_game)
{
    int temp = 1000;
    sfVector2i mouse_pos = global_game->set->mouse_pos;

    global_game->game->mouse_x = mouse_pos.x;
    global_game->game->mouse_y = mouse_pos.y;
    for (int y = 0; y != global_game->game->map.map_y; y++)
        temp = get_near_point(global_game, y, temp);
}