/*
** EPITECH PROJECT, 2020
** init_framerate_text.c
** File description:
** init_framerate_text
*/

#include "my_world.h"

int init_settings_framerate_text(global_game_t *global_game)
{
    int pos_box_x = global_game->menu->box_button->pos.x + 225;
    int pos_box_y = global_game->menu->box_button->pos.y + 340;

    global_game->settings->framerate_text = malloc(sizeof(text_t));
    if (!global_game->settings->framerate_text)
        return (1);
    global_game->settings->framerate_text->color = (sfColor){0, 0, 0, 255};
    global_game->settings->framerate_text->pos.x = pos_box_x;
    global_game->settings->framerate_text->pos.y = pos_box_y;
    global_game->settings->framerate_text->size = 100;
    if (create_text(global_game, global_game->settings->framerate_text, \
    "Framerate") == 1) {
        return (1);
    }
    return (0);
}

int init_settings_60_framerate_text(global_game_t *global_game)
{
    int pos_box_x = global_game->settings->framerate_60_button->pos.x + 65;
    int pos_box_y = global_game->settings->framerate_60_button->pos.y - 15;

    global_game->settings->framerate_60_text = malloc(sizeof(text_t));
    if (!global_game->settings->framerate_60_text)
        return (1);
    global_game->settings->framerate_60_text->color = (sfColor){255, 255, \
        255, 255};
    global_game->settings->framerate_60_text->pos.x = pos_box_x;
    global_game->settings->framerate_60_text->pos.y = pos_box_y;
    global_game->settings->framerate_60_text->size = 100;
    if (create_text(global_game, global_game->settings->framerate_60_text, \
        "60") == 1)
        return (1);
    return (0);
}

int init_settings_45_framerate_text(global_game_t *global_game)
{
    int pos_box_x = global_game->settings->framerate_45_button->pos.x + 65;
    int pos_box_y = global_game->settings->framerate_45_button->pos.y - 15;

    global_game->settings->framerate_45_text = malloc(sizeof(text_t));
    if (!global_game->settings->framerate_45_text)
        return (1);
    global_game->settings->framerate_45_text->color = (sfColor){255, 255, \
        255, 255};
    global_game->settings->framerate_45_text->pos.x = pos_box_x;
    global_game->settings->framerate_45_text->pos.y = pos_box_y;
    global_game->settings->framerate_45_text->size = 100;
    if (create_text(global_game, global_game->settings->framerate_45_text, \
        "45") == 1)
        return (1);
    return (0);
}

int init_settings_30_framerate_text(global_game_t *global_game)
{
    int pos_box_x = global_game->settings->framerate_30_button->pos.x + 65;
    int pos_box_y = global_game->settings->framerate_30_button->pos.y - 15;

    global_game->settings->framerate_30_text = malloc(sizeof(text_t));
    if (!global_game->settings->framerate_30_text)
        return (1);
    global_game->settings->framerate_30_text->color = (sfColor){255, 255, \
        255, 255};
    global_game->settings->framerate_30_text->pos.x = pos_box_x;
    global_game->settings->framerate_30_text->pos.y = pos_box_y;
    global_game->settings->framerate_30_text->size = 100;
    if (create_text(global_game, global_game->settings->framerate_30_text, \
        "30") == 1)
        return (1);
    return (0);
}