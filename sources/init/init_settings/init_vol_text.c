/*
** EPITECH PROJECT, 2020
** init_vol_text.c
** File description:
** init_vol_text
*/

#include "my_world.h"

int init_settings_plus_text(global_game_t *global_game)
{
    int pos_plus_x = global_game->settings->plus->pos.x;
    int pos_plus_y = global_game->settings->plus->pos.y;

    global_game->settings->plus_text = malloc(sizeof(text_t));
    if (!global_game->settings->plus_text)
        return (1);
    global_game->settings->plus_text->color = (sfColor){255, 255, 255, 255};
    global_game->settings->plus_text->pos.x = pos_plus_x + 2;
    global_game->settings->plus_text->pos.y = pos_plus_y - 42;
    global_game->settings->plus_text->size = 100;
    if (create_text(global_game, global_game->settings->plus_text, "+") == 1)
        return (1);
    return (0);
}

int init_settings_sub_text(global_game_t *global_game)
{
    int pos_plus_x = global_game->settings->sub->pos.x;
    int pos_plus_y = global_game->settings->sub->pos.y;

    global_game->settings->sub_text = malloc(sizeof(text_t));
    if (!global_game->settings->sub_text)
        return (1);
    global_game->settings->sub_text->color = (sfColor){255, 255, 255, 255};
    global_game->settings->sub_text->pos.x = pos_plus_x + 4;
    global_game->settings->sub_text->pos.y = pos_plus_y - 42;
    global_game->settings->sub_text->size = 100;
    if (create_text(global_game, global_game->settings->sub_text, "-") == 1)
        return (1);
    return (0);
}

int init_settings_sound_text(global_game_t *global_game)
{
    int pos_box_x = global_game->menu->box_button->pos.x + 300;
    int pos_box_y = global_game->menu->box_button->pos.y + 180;

    global_game->settings->sound = malloc(sizeof(text_t));
    if (!global_game->settings->sound)
        return (1);
    global_game->settings->sound->color = (sfColor){0, 0, 0, 255};
    global_game->settings->sound->pos.x = pos_box_x;
    global_game->settings->sound->pos.y = pos_box_y;
    global_game->settings->sound->size = 100;
    if (create_text(global_game, global_game->settings->sound, "Sound") == 1)
        return (1);
    return (0);
}