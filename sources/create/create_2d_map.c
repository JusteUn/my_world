/*
** EPITECH PROJECT, 2020
** create_2d_map.c
** File description:
** create_2d_map
*/

#include "my_world.h"
#include <SFML/Graphics.h>
#include <stdio.h>

sfVector2f **create_2d_map(global_game_t *g, int **map_3d)
{
    int y;
    int map_x = g->game->map.map_x;
    int map_y = g->game->map.map_y;
    sfVector2f **map_2d = malloc(sizeof(sfVector2f *) * (map_y + 1));

    if (!map_2d)
        return (NULL);
    for (y = 0; y != map_y; y++) {
        map_2d[y] = malloc(sizeof(sfVector2f) * map_x);
        if (!map_2d)
            return (NULL);
        for (int x = 0; x != map_x; x++) {
            map_2d[y][x] = project_iso_point(y, x, map_3d[y][x] * 10, g);
            map_2d[y][x].x += 1000;
            map_2d[y][x].y += 200;
        }
    }
    map_2d[y] = NULL;
    return (map_2d);
}