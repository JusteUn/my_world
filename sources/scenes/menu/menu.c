/*
** EPITECH PROJECT, 2020
** menu.c
** File description:
** menu
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void menu(global_game_t *global_game)
{
    sfRenderWindow_clear(global_game->set->window, sfBlack);
    analyse_events_menu(global_game);
    if (global_game->set->error == 1)
        return;
    draw_sprite_menu(global_game);
    draw_rectangle_shape_menu(global_game);
    draw_text_menu(global_game);
    button_hover_menu(global_game);
}