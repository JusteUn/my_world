/*
** EPITECH PROJECT, 2020
** analyse_events_settings.c
** File description:
** analyse_events_settings
*/

#include "my_world.h"
#include <SFML/Graphics.h>

int manage_settings_events(global_game_t *global_game)
{
    switch (global_game->set->event.type) {
    case sfEvtClosed:
        sfRenderWindow_close(global_game->set->window);
        break;
    case sfEvtKeyPressed:
        analyse_key_pressed(global_game);
        break;
    case sfEvtMouseButtonPressed:
        if (settings_manage_mouse_click(global_game) == 1)
            return (1);
        break;
    default:
        break;
    }
    return (0);
}

int analyse_events_settings(global_game_t *global_game)
{
    while (sfRenderWindow_pollEvent(global_game->set->window, \
    &global_game->set->event)) {
        if (manage_settings_events(global_game) == 1)
            return (1);
    }
    return (0);
}