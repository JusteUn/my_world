/*
** EPITECH PROJECT, 2020
** manage_mouse_click_tiles_button.c
** File description:
** manage tiles button
*/

#include "my_world.h"

void manage_mouse_click_tiles_button(global_game_t *g)
{
    int pos_tiles_x = g->game->select_tiles_button->pos.x;
    int pos_tiles_y = g->game->select_tiles_button->pos.y;
    int pos_tiles_size_x = g->game->select_tiles_button->size.x;
    int pos_tiles_size_y = g->game->select_tiles_button->size.y;

    if (g->set->event.mouseButton.x > pos_tiles_x && \
    g->set->event.mouseButton.x < pos_tiles_x + pos_tiles_size_x) {
        if (g->set->event.mouseButton.y > pos_tiles_y && \
        g->set->event.mouseButton.y < pos_tiles_y + \
        pos_tiles_size_y) {
            is_button_hover(g, g->game->select_tiles_button, \
            g->set->mouse_pos, sfRed);
            g->game->button_id = 1;
            play_sound_effect(g->set);
        }
        if (g->set->error == 1)
            return;
    }
}

void manage_mouse_click_corner_button(global_game_t *global_game)
{
    int pos_tiles_x = global_game->game->select_corner_button->pos.x;
    int pos_tiles_y = global_game->game->select_corner_button->pos.y;
    int pos_tiles_size_x = global_game->game->select_corner_button->size.x;
    int pos_tiles_size_y = global_game->game->select_corner_button->size.y;

    if (global_game->set->event.mouseButton.x > pos_tiles_x && \
    global_game->set->event.mouseButton.x < pos_tiles_x + pos_tiles_size_x) {
        if (global_game->set->event.mouseButton.y > pos_tiles_y && \
        global_game->set->event.mouseButton.y < pos_tiles_y + \
        pos_tiles_size_y) {
            is_button_hover(global_game, global_game->game-> \
            select_corner_button, global_game->set->mouse_pos, sfRed);
            global_game->game->button_id = 2;
            play_sound_effect(global_game->set);
        }
        if (global_game->set->error == 1)
            return;
    }
}

void manage_mouse_click_water_button(global_game_t *global_game)
{
    int pos_tiles_x = global_game->game->select_water_button->pos.x;
    int pos_tiles_y = global_game->game->select_water_button->pos.y;
    int pos_tiles_size_x = global_game->game->select_water_button->size.x;
    int pos_tiles_size_y = global_game->game->select_water_button->size.y;

    if (global_game->set->event.mouseButton.x > pos_tiles_x && \
    global_game->set->event.mouseButton.x < pos_tiles_x + pos_tiles_size_x) {
        if (global_game->set->event.mouseButton.y > pos_tiles_y && \
        global_game->set->event.mouseButton.y < pos_tiles_y + \
        pos_tiles_size_y) {
            is_button_hover(global_game, global_game->game-> \
            select_water_button, global_game->set->mouse_pos, sfRed);
            global_game->game->button_id = 3;
            play_sound_effect(global_game->set);
        }
        if (global_game->set->error == 1)
            return;
    }
}

void manage_mouse_click_house_button(global_game_t *global_game)
{
    int pos_tiles_x = global_game->game->select_house_button->pos.x;
    int pos_tiles_y = global_game->game->select_house_button->pos.y;
    int pos_tiles_size_x = global_game->game->select_house_button->size.x;
    int pos_tiles_size_y = global_game->game->select_house_button->size.y;

    if (global_game->set->event.mouseButton.x > pos_tiles_x && \
    global_game->set->event.mouseButton.x < pos_tiles_x + pos_tiles_size_x) {
        if (global_game->set->event.mouseButton.y > pos_tiles_y && \
        global_game->set->event.mouseButton.y < pos_tiles_y + \
        pos_tiles_size_y) {
            is_button_hover(global_game, global_game->game-> \
            select_house_button, global_game->set->mouse_pos, sfRed);
            global_game->game->button_id = 4;
            play_sound_effect(global_game->set);
        }
        if (global_game->set->error == 1)
            return;
    }
}