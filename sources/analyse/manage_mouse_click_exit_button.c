/*
** EPITECH PROJECT, 2020
** manage_mouse_click_exit_button.c
** File description:
** manage_mouse_click_exit_button
*/

#include "my_world.h"

void manage_mouse_click_exit_button(global_game_t *global_game)
{
    int pos_x = global_game->set->exit_button->pos.x;
    int pos_y = global_game->set->exit_button->pos.y;
    int size_x = pos_x + global_game->set->exit_button->size.x;
    int size_y = pos_y + global_game->set->exit_button->size.y;

    if (global_game->set->event.mouseButton.x > pos_x && \
    global_game->set->event.mouseButton.x < size_x) {
        if (global_game->set->event.mouseButton.y > pos_y && \
        global_game->set->event.mouseButton.y < size_y) {
            sfRenderWindow_close(global_game->set->window);
        }
    }
}