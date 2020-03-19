/*
** EPITECH PROJECT, 2020
** display_map.c
** File description:
** display_map
*/

#include "my_world.h"
#include <SFML/Graphics.h>

int display_triangle(global_game_t *global_game, int x, int y)
{
    if (display_triangle_grass(global_game, x, y) == 1)
        return (1);
    if (display_triangle_shadow(global_game, x, y) == 1)
        return (1);
    return (0);
}

int display_line(global_game_t *global_game, int x, int y)
{
    sfVertexArray *line = NULL;

    if ((x + 1) != global_game->game->map.map_x) {
        line = create_line(&global_game->game->map.map_2d[y][x], \
        &global_game->game->map.map_2d[y][x + 1]);
        if (!line)
            return (1);
        sfRenderWindow_drawVertexArray(global_game->set->window, line, NULL);
    }
    if ((y + 1) != global_game->game->map.map_y) {
        line = create_line(&global_game->game->map.map_2d[y][x], \
        &global_game->game->map.map_2d[y + 1][x]);
        if (!line)
            return (1);
        sfRenderWindow_drawVertexArray(global_game->set->window, line, NULL);
    }
    if (display_triangle(global_game, x, y) == 1)
        return (1);
    sfVertexArray_destroy(line);
    return (0);
}

int draw_line(global_game_t *global_game, int y)
{
    for (int x = 0; x != global_game->game->map.map_x; x++) {
        if (display_line(global_game, x, y) == 1)
            return (1);
    }
    return (0);
}

void draw_2d_map(global_game_t *global_game)
{
    global_game->set->error = 0;
    for (int y = 0; y != global_game->game->map.map_y; y++) {
        if (draw_line(global_game, y) == 1) {
            global_game->set->error = 1;
            return;
        }
    }
}