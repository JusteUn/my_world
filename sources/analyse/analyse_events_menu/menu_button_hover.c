/*
** EPITECH PROJECT, 2020
** menu_button_is_hover.c
** File description:
** menu_button_is_hover
*/

#include "my_world.h"

void menu_button_is_hover(global_game_t *global_game)
{
    int pos_x = global_game->menu->play_button->pos.x;
    int pos_y = global_game->menu->play_button->pos.y;
    int size_x = pos_x + global_game->menu->play_button->size.x;
    int size_y = pos_y + global_game->menu->play_button->size.y;

    if (global_game->set->event.mouseButton.x > pos_x && \
    global_game->set->event.mouseButton.x < size_x) {
        if (global_game->set->event.mouseButton.y > pos_y && \
        global_game->set->event.mouseButton.y < size_y) {
            global_game->menu->play_button->color = (sfColor){50, 50, 50, 225};
            sfRectangleShape_setFillColor(global_game->menu->play_button->\
            rect, global_game->menu->play_button->color);
        }
    }
}