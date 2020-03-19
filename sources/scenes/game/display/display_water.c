/*
** EPITECH PROJECT, 2020
** display_water.c
** File description:
** display water
*/

#include "my_world.h"

int display_triangle_water(global_game_t *g, int x, int y)
{
    sfConvexShape *triangle = NULL;
    sfColor color = {15, 157, 232, 255};

    if ((y + 1) != g->game->map.map_y && (x + 1) != g->game->map.map_x) {
        triangle = create_triangle(g->game->map.map_2d[y][x], \
        g->game->map.map_2d[y + 1][x], \
        g->game->map.map_2d[y + 1][x + 1], color);
        if (!triangle)
            return (1);
        sfRenderWindow_drawConvexShape(g->set->window, \
        triangle, NULL);
        triangle = create_triangle(g->game->map.map_2d[y][x], \
        g->game->map.map_2d[y][x + 1], \
        g->game->map.map_2d[y + 1][x + 1], color);
        if (!triangle)
            return (1);
        sfRenderWindow_drawConvexShape(g->set->window, \
        triangle, NULL);
    }
    sfConvexShape_destroy(triangle);
    return (0);
}