/*
** EPITECH PROJECT, 2020
** update_game_map.c
** File description:
** update_game_map
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void update_corner_game_map(global_game_t *global_game, int reset, \
int y_near, int x_near)
{
    if (reset == 0) {
        switch (global_game->set->event.mouseButton.button) {
        case sfMouseLeft:
            global_game->game->map.map_3d[y_near][x_near] += 1;
            break;
        case sfMouseRight:
            global_game->game->map.map_3d[y_near][x_near] -= 1;
            break;
        default:
            break;
        }
    } else if (reset == 1)
        global_game->game->map.map_3d[y_near][x_near] = 0;
}

void update_3d_map_plus(global_game_t *global_game, int y_near, int x_near)
{
    if (y_near + 1 < global_game->game->map.map_y && \
    x_near + 1 < global_game->game->map.map_x) {
        global_game->game->map.map_3d[y_near][x_near] += 1;
        global_game->game->map.map_3d[y_near + 1][x_near] += 1;
        global_game->game->map.map_3d[y_near][x_near + 1] += 1;
        global_game->game->map.map_3d[y_near + 1][x_near + 1] += 1;
    }
}

void update_3d_map_sub(global_game_t *global_game, int y_near, int x_near)
{
    if (y_near + 1 < global_game->game->map.map_y && \
    x_near + 1 < global_game->game->map.map_x) {
        global_game->game->map.map_3d[y_near][x_near] -= 1;
        global_game->game->map.map_3d[y_near + 1][x_near] -= 1;
        global_game->game->map.map_3d[y_near][x_near + 1] -= 1;
        global_game->game->map.map_3d[y_near + 1][x_near + 1] -= 1;
    }
}

void update_tiles_game_map(global_game_t *global_game, int y_near, \
int x_near, int reset)
{
    if (reset == 0) {
        switch (global_game->set->event.mouseButton.button) {
        case sfMouseLeft:
            update_3d_map_plus(global_game, y_near, x_near);
            break;
        case sfMouseRight:
            update_3d_map_sub(global_game, y_near, x_near);
            break;
        default:
            break;
        }
    } else {
        if (y_near + 1 < global_game->game->map.map_y && \
        x_near + 1 < global_game->game->map.map_x) {
            global_game->game->map.map_3d[y_near][x_near] = 0;
            global_game->game->map.map_3d[y_near + 1][x_near] = 0;
            global_game->game->map.map_3d[y_near][x_near + 1] = 0;
            global_game->game->map.map_3d[y_near + 1][x_near + 1] = 0;
        }
    }
}

void update_game_map(global_game_t *g, int reset)
{
    int y_near = 0;
    int x_near = 0;

    g->set->error = 0;
    search_near_point(g);
    y_near = g->game->y_near;
    x_near = g->game->x_near;
    if (g->game->button_id == 2)
        update_corner_game_map(g, reset, y_near, x_near);
    else if (g->game->button_id == 1)
        update_tiles_game_map(g, y_near, x_near, reset);
    if (g->game->button_id == 3)
        g->game->map.map_water[g->game->y_near][g->game->x_near] = 1;
    if (g->game->button_id == 4)
        g->game->map.map_water[g->game->y_near][g->game->x_near] = 2;
    free_2d_map(g->game);
    if ((g->game->map.map_2d = create_2d_map(g, g->game->map.map_3d)) \
    == NULL) {
        g->set->error = 1;
        return;
    }
}