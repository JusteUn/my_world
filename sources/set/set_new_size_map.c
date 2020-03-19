/*
** EPITECH PROJECT, 2020
** set_new_map_size.c
** File description:
** set_new_size_map
*/

#include "my_world.h"

int new_map(global_game_t *g)
{
    free_map_water(g->game);
    g->game->map.map_water = create_3d_map(g);
    free_3d_map(g->game);
    g->game->map.map_3d = create_3d_map(g);
    if (!g->game->map.map_3d)
        return (1);
    free_2d_map(g->game);
    g->game->map.map_2d = \
    create_2d_map(g, g->game->map.map_3d);
    if (!g->game->map.map_2d)
        return (1);
    return (0);
}

int new_text(global_game_t *g)
{
    sfText_destroy(g->game->map_x->text);
    free(g->game->map_x);
    if (init_game_text_map_x(g) == 1)
        return (1);
    sfText_destroy(g->game->map_y->text);
    free(g->game->map_y);
    if (init_game_text_map_y(g) == 1)
        return (1);
    return (0);
}

int set_new_size_sub_button(global_game_t *g)
{
    g->game->map.map_x -= 1;
    g->game->map.map_y -= 1;
    if ((g->game->map.map_x == 9) || (g->game->map.map_y == 9)) {
        g->game->map.map_x = 10;
        g->game->map.map_y = 10;
    }
    if (new_map(g) == 1)
        return (1);
    if (new_text(g) == 1)
        return (1);
    return (0);
}

int set_new_size_plus_button(global_game_t *g)
{
    g->game->map.map_x += 1;
    g->game->map.map_y += 1;
    if (new_map(g) == 1)
        return (1);
    if (new_text(g) == 1)
        return (1);
    return (0);
}