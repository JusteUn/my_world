/*
** EPITECH PROJECT, 2020
** draw_black_button.c
** File description:
** draw_back_button
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void draw_back_button(global_game_t *global_game)
{
    sfColor color = {1, 215, 88, 200};

    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->set->back_button->rect, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->set->back_text->text, NULL);
    is_button_hover(global_game, global_game->set->back_button, \
    global_game->set->mouse_pos, color);
}