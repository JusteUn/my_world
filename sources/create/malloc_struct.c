/*
** EPITECH PROJECT, 2020
** malloc_struct.c
** File description:
** malloc_struct
*/

#include "my_world.h"

int malloc_struct(global_game_t *global_game)
{
    global_game->scene = malloc(3 * 8);
    global_game->set = malloc(sizeof(game_setup_t));
    if (!global_game->scene || !global_game->set)
        return (1);
    set_scene(global_game);
    global_game->game = malloc(sizeof(game_object_t));
    global_game->menu = malloc(sizeof(menu_t));
    global_game->settings = malloc(sizeof(settings_t));
    if (!global_game->game || !global_game->menu || !global_game->settings)
        return (1);
    return (0);
}