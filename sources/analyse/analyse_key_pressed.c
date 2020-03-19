/*
** EPITECH PROJECT, 2020
** analyse_key_pressed.c
** File description:
** analyse_key_pressed
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void analyse_key_pressed(global_game_t *global_game)
{
    switch (global_game->set->event.key.code) {
    case sfKeyEscape:
        sfView_reset(global_game->set->view, global_game->set->rect);
        if (global_game->set->switch_scene != 0)
            global_game->set->switch_scene = 0;
        else
            sfRenderWindow_close(global_game->set->window);
        break;
    case sfKeySpace:
        if (global_game->set->switch_scene == 1) {
            update_game_map(global_game, 1);
        }
    default:
        break;
    }
}