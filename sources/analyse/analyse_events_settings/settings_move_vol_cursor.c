/*
** EPITECH PROJECT, 2020
** settings_move_vol_cursor.c
** File description:
** settings_move_vol_cursor
*/

#include "my_world.h"

void set_volume_up(global_game_t *global_game)
{
    int size_scrollbar = global_game->settings->scroll_bar->size.x - 30;

    if (global_game->settings->cursor->pos.x < \
    global_game->settings->scroll_bar->pos.x + size_scrollbar) {
        global_game->settings->cursor->pos.x += 10;
        sfRectangleShape_setPosition(global_game->settings->cursor->rect, \
        global_game->settings->cursor->pos);
        global_game->set->volume += 2;
        sfMusic_setVolume(global_game->set->music, global_game->set->volume);
    }
}

void set_volume_down(global_game_t *global_game)
{
    if (global_game->settings->cursor->pos.x > \
    global_game->settings->scroll_bar->pos.x) {
        global_game->settings->cursor->pos.x -= 10;
        sfRectangleShape_setPosition(global_game->settings->cursor->rect, \
        global_game->settings->cursor->pos);
        global_game->set->volume -= 2;
        sfMusic_setVolume(global_game->set->music, global_game->set->volume);
    }
}

void up_cursor(global_game_t *global_game)
{
    int pos_x = global_game->settings->plus->pos.x;
    int pos_y = global_game->settings->plus->pos.y;
    int size_x = pos_x + global_game->settings->plus->size.x;
    int size_y = pos_y + global_game->settings->plus->size.y;

    if (global_game->set->event.mouseButton.x > pos_x && \
    global_game->set->event.mouseButton.x < size_x) {
        if (global_game->set->event.mouseButton.y > pos_y && \
        global_game->set->event.mouseButton.y < size_y) {
            set_volume_up(global_game);
            play_sound_effect(global_game->set);
        }
        if (global_game->set->error == 1)
            return;
    }
}

void down_cursor(global_game_t *global_game)
{
    int pos_x = global_game->settings->sub->pos.x;
    int pos_y = global_game->settings->sub->pos.y;
    int size_x = pos_x + global_game->settings->sub->size.x;
    int size_y = pos_y + global_game->settings->sub->size.y;

    if (global_game->set->event.mouseButton.x > pos_x && \
    global_game->set->event.mouseButton.x < size_x) {
        if (global_game->set->event.mouseButton.y > pos_y && \
        global_game->set->event.mouseButton.y < size_y) {
            set_volume_down(global_game);
            play_sound_effect(global_game->set);
        }
        if (global_game->set->error == 1)
            return;
    }
}

void settings_move_vol_cursor(global_game_t *global_game)
{
    up_cursor(global_game);
    if (global_game->set->error == 1)
        return;
    down_cursor(global_game);
    if (global_game->set->error == 1)
        return;
    is_button_hover(global_game, global_game->settings->plus, \
    global_game->set->mouse_pos, sfRed);
    is_button_hover(global_game, global_game->settings->sub, \
    global_game->set->mouse_pos, sfRed);
    is_button_hover(global_game, global_game->settings->framerate_30_button, \
    global_game->set->mouse_pos, sfRed);
    is_button_hover(global_game, global_game->settings->framerate_45_button, \
    global_game->set->mouse_pos, sfRed);
    is_button_hover(global_game, global_game->settings->framerate_60_button, \
    global_game->set->mouse_pos, sfRed);
}