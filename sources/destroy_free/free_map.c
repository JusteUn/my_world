/*
** EPITECH PROJECT, 2020
** free_map.c
** File description:
** free_map
*/

#include "my_world.h"
#include <stdlib.h>

void free_map_water(game_object_t *game)
{
    for (int i = 0; i != game->map.map_y; i++)
        free(game->map.map_water[i]);
    free(game->map.map_water);
}

void free_2d_map(game_object_t *game)
{
    for (int i = 0; i != game->map.map_y; i++)
        free(game->map.map_2d[i]);
    free(game->map.map_2d);
}

void free_3d_map(game_object_t *game)
{
    for (int i = 0; i != game->map.map_y; i++)
        free(game->map.map_3d[i]);
    free(game->map.map_3d);
}