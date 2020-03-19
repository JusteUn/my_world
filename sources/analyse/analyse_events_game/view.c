/*
** EPITECH PROJECT, 2020
** view.c
** File description:
** view
*/

#include "my_world.h"
#include <SFML/Graphics.h>

int new_map_zoom(global_game_t *g)
{
    free_2d_map(g->game);
    g->game->map.map_2d = \
    create_2d_map(g, g->game->map.map_3d);
    if (!g->game->map.map_2d)
        return (1);
    return (0);
}

void view_control(global_game_t *g)
{
    g->set->error = 0;
    if (g->set->event.mouseWheelScroll.delta > 0) {
        g->game->map.gap_point += 1;
    } else if (g->set->event.mouseWheelScroll.delta < 0) {
        g->game->map.gap_point -= 1;
    }
    if (new_map_zoom(g) == 1) {
        g->set->error = 1;
        return;
    }
}