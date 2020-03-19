/*
** EPITECH PROJECT, 2020
** global_init.c
** File description:
** global init
*/

#include "my_world.h"

global_game_t *global_init(void)
{
    global_game_t *global_game = malloc(sizeof(global_game_t));

    if (!global_game)
        return (NULL);
    if (malloc_struct(global_game) == 1)
        return (NULL);
    if (init_game_setup(global_game) == 1 \
        || init_game(global_game) == 1 \
        || init_menu(global_game) == 1 \
        || init_settings(global_game) == 1)
        return (NULL);
    return (global_game);
}