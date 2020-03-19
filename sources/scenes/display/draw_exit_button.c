/*
** EPITECH PROJECT, 2020
** display_exit_button.c
** File description:
** display_exit_button
*/

#include "my_world.h"

void draw_exit_button(global_game_t *global_game)
{
    sfColor color = {1, 215, 88, 200};

    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->set->exit_button->rect, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->set->exit_text->text, NULL);
    is_button_hover(global_game, global_game->set->exit_button, \
    global_game->set->mouse_pos, color);
}