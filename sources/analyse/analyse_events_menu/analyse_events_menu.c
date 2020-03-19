/*
** EPITECH PROJECT, 2020
** analyse_events_menu.c
** File description:
** analyse_events_menu
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void analyse_events_menu(global_game_t *global_game)
{
    while (sfRenderWindow_pollEvent(global_game->set->window, \
    &global_game->set->event)) {
        switch (global_game->set->event.type) {
        case sfEvtClosed:
            sfRenderWindow_close(global_game->set->window);
            break;
        case sfEvtKeyPressed:
            analyse_key_pressed(global_game);
            break;
        case sfEvtMouseButtonPressed:
            menu_manage_mouse_click(global_game);
            break;
        default:
            break;
        }
        if (global_game->set->error == 1)
            return;
    }
}