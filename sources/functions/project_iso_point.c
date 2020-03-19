/*
** EPITECH PROJECT, 2020
** project_iso_point.c
** File description:
** project_iso_point
*/

#include "my_world.h"
#include <SFML/Graphics.h>
#include <math.h>

sfVector2f project_iso_point(int x, int y, int z, global_game_t *global_game)
{
    sfVector2f point_2d;

    x *= global_game->game->map.gap_point;
    y *= global_game->game->map.gap_point;
    point_2d.x = (cos(45 * M_PI / 180) * x - cos(45 * M_PI / 180) * y);
    point_2d.y = (sin(35 * M_PI / 180) * y + sin(35 * M_PI / 180) * x - z);
    return (point_2d);
}