/*
** EPITECH PROJECT, 2020
** display_house.c
** File description:
** display_house
*/

#include "my_world.h"

int display_house(global_game_t *g, int x, int y)
{
    if ((y + 1) != g->game->map.map_y && (x + 1) != g->game->map.map_x) {
        sfSprite_setColor(g->game->house_map->sprite, \
        (sfColor){255, 255, 255, 255});
        sfSprite_setScale(g->game->house_map->sprite, (sfVector2f){0.2, 0.2});
        sfSprite_setPosition(g->game->house_map->sprite, (sfVector2f) \
        {g->game->map.map_2d[y][x].x - 50, g->game->map.map_2d[y][x].y + 20});
        sfRenderWindow_drawSprite(g->set->window, g->game->house_map->sprite, \
        NULL);
    }
    return (0);
}