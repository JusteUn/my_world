/*
** EPITECH PROJECT, 2020
** game.c
** File description:
** game
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void game(global_game_t *global_game)
{
    sfRenderWindow_clear(global_game->set->window, sfCyan);
    analyse_events_game(global_game);
    draw_back_button(global_game);
    if (global_game->set->error == 1)
        return;
    draw_exit_button(global_game);
    draw_2d_map(global_game);
    display_game(global_game);
    if (global_game->set->error == 1)
        return;
}