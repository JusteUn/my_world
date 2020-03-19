/*
** EPITECH PROJECT, 2020
** create_3d_map.c
** File description:
** create_3d_map
*/

#include "my_world.h"

int **create_3d_map(global_game_t *global_game)
{
    int y = 0;
    int map_x = global_game->game->map.map_x;
    int map_y = global_game->game->map.map_y;
    int **map_3d = malloc(sizeof(int *) * (map_y + 1));

    if (!map_3d)
        return (NULL);
    for (y = 0; y != map_y; y++) {
        map_3d[y] = malloc(sizeof(int) * map_x);
        if (!map_3d[y])
            return (NULL);
        for (int x = 0; x != map_x; x++)
            map_3d[y][x] = 0;
    }
    map_3d[y] = NULL;
    return (map_3d);
}