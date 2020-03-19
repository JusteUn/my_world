/*
** EPITECH PROJECT, 2020
** analyse_events_game.c
** File description:
** analyse_events_game
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void manage_game_events(global_game_t *global_game)
{
    switch (global_game->set->event.type) {
    case sfEvtClosed:
        sfRenderWindow_close(global_game->set->window);
        break;
    case sfEvtMouseWheelScrolled:
        view_control(global_game);
        if (global_game->set->error == 1)
            return;
        break;
    case sfEvtKeyPressed:
        analyse_key_pressed(global_game);
        break;
    case sfEvtMouseButtonPressed:
        game_manage_mouse_click(global_game);
        if (global_game->set->error == 1)
            return;
        break;
    default:
        break;
    }
}

void analyse_events_game(global_game_t *global_game)
{
    while (sfRenderWindow_pollEvent(global_game->set->window, \
    &global_game->set->event)) {
        manage_game_events(global_game);
        if (global_game->set->error == 1)
            return;
    }
}