/*
** EPITECH PROJECT, 2020
** init_settings_text.c
** File description:
** init text
*/

#include "my_world.h"

int init_settings_title_text(global_game_t *global_game)
{
    int pos_box_x = global_game->menu->box_button->pos.x + 180;
    int pos_box_y = global_game->menu->box_button->pos.y + 25;

    global_game->settings->title_text = malloc(sizeof(text_t));
    if (!global_game->settings->title_text)
        return (1);
    global_game->settings->title_text->color = (sfColor){1, 215, 88, 255};
    global_game->settings->title_text->pos.x = pos_box_x;
    global_game->settings->title_text->pos.y = pos_box_y;
    global_game->settings->title_text->size = 150;
    if (create_text(global_game, global_game->settings->title_text, \
        "Settings") == 1)
        return (1);
    return (0);
}

int init_text_settings(global_game_t *global_game)
{
    if (init_settings_plus_text(global_game) == 1 || \
        init_settings_sound_text(global_game) == 1 || \
        init_settings_sub_text(global_game) == 1 || \
        init_settings_title_text(global_game) == 1 || \
        init_settings_sound_text(global_game) == 1 || \
        init_settings_framerate_text(global_game) == 1 || \
        init_settings_60_framerate_text(global_game) == 1 || \
        init_settings_45_framerate_text(global_game) == 1 || \
        init_settings_30_framerate_text(global_game))
        return (1);
    return (0);
}