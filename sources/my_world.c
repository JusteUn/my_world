/*
** EPITECH PROJECT, 2020
** my world.c
** File description:
** my world
*/

#include "my_world.h"

int start_game(void)
{
    global_game_t *global_game = global_init();

    if (!global_game)
        return (1);
    game_loop(global_game);
    if (global_game->set->error == 1)
        return (1);
    destroy_var(global_game);
    return (0);
}