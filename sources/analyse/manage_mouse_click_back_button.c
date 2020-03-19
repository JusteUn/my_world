/*
** EPITECH PROJECT, 2020
** manage_mouse_click_back_button.c
** File description:
** manage_mouse_click_back_button
*/

#include "my_world.h"

void manage_mouse_click_back_button(global_game_t *global_game)
{
    int pos_back_x = global_game->set->back_button->pos.x;
    int pos_back_y = global_game->set->back_button->pos.y;
    int pos_back_size_x = global_game->set->back_button->size.x;
    int pos_back_size_y = global_game->set->back_button->size.y;

    if (global_game->set->event.mouseButton.x > pos_back_x && \
    global_game->set->event.mouseButton.x < pos_back_x + pos_back_size_x) {
        if (global_game->set->event.mouseButton.y > pos_back_x && \
        global_game->set->event.mouseButton.y < pos_back_y + pos_back_size_y) {
            global_game->set->switch_scene = 0;
            play_sound_effect(global_game->set);
        }
        if (global_game->set->error == 1)
            return;
    }
}