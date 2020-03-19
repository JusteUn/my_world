/*
** EPITECH PROJECT, 2020
** manage_mouse_click_resize_map_button.c
** File description:
** manage_mouse_click_resize_map_button
*/

#include "my_world.h"

int update_map_plus_button(global_game_t *g)
{
    int pos_plus_size_y = g->game->plus_button->size.y;
    int pos_plus_y = g->game->plus_button->pos.y;

    if (g->set->event.mouseButton.y > pos_plus_y && \
g->set->event.mouseButton.y < pos_plus_y + pos_plus_size_y) {
        if (set_new_size_plus_button(g) == 1)
            return (1);
        play_sound_effect(g->set);
        if (g->set->error == 1)
            return (1);
    }
    return (0);
}

int manage_mouse_click_plus_button(global_game_t *global_game)
{
    int pos_x = global_game->game->plus_button->pos.x;
    int pos_plus_size_x = global_game->game->plus_button->size.x;

    if (global_game->set->event.mouseButton.x > pos_x && \
global_game->set->event.mouseButton.x < pos_x + pos_plus_size_x) {
        if (update_map_plus_button(global_game) == 1)
            return (1);
    }
    return (0);
}

int update_map_sub_button(global_game_t *g)
{
    int pos_y = g->game->sub_button->pos.y;
    int pos_sub_size_y = g->game->sub_button->size.y;

    if (g->set->event.mouseButton.y > pos_y && \
g->set->event.mouseButton.y < pos_y + pos_sub_size_y) {
        if (set_new_size_sub_button(g) == 1)
            return (1);
        play_sound_effect(g->set);
        if (g->set->error == 1)
            return (1);
    }
    return (0);
}

int manage_mouse_click_sub_button(global_game_t *global_game)
{
    int pos_x = global_game->game->sub_button->pos.x;
    int size_x = global_game->game->sub_button->size.x;

    if (global_game->set->event.mouseButton.x > pos_x && \
global_game->set->event.mouseButton.x < pos_x + size_x) {
        if (update_map_sub_button(global_game) == 1)
            return (1);
    }
    return (0);
}

void manage_mouse_click_resize_map_button(global_game_t *global_game)
{
    global_game->set->error = 0;
    if (manage_mouse_click_plus_button(global_game) == 1) {
        global_game->set->error = 1;
        return;
    }
    if (manage_mouse_click_sub_button(global_game) == 1) {
        global_game->set->error = 1;
        return;
    }
}