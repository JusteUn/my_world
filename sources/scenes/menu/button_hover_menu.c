/*
** EPITECH PROJECT, 2020
** button_hover_menu.c
** File description:
** button hover
*/

#include "my_world.h"

void button_hover_menu(global_game_t *global_game)
{
    sfColor color = {1, 215, 88, 200};

    is_button_hover(global_game, global_game->menu->play_button, \
    global_game->set->mouse_pos, color);
    is_button_hover(global_game, global_game->menu->settings_button, \
    global_game->set->mouse_pos, color);
}