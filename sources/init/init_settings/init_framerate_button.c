/*
** EPITECH PROJECT, 2020
** init_framerate_button.c
** File description:
** init_framerate_button
*/

#include "my_world.h"

int init_60_framerate_button(global_game_t *global_game)
{
    int pos_box_x = global_game->menu->box_button->pos.x;
    int pos_box_y = global_game->menu->box_button->pos.y;
    int size_button_x = global_game->menu->box_button->size.x;
    int size_x = 0;
    int size_y = 0;

    global_game->settings->framerate_60_button = malloc(sizeof(button_t));
    if (!global_game->settings->scroll_bar)
        return (1);
    global_game->settings->framerate_60_button->color = (sfColor){0, 0, 0, \
        175};
    global_game->settings->framerate_60_button->size = (sfVector2f){225, 100};
    size_x = global_game->settings->framerate_60_button->size.x;
    size_y = global_game->settings->framerate_60_button->size.y;
    global_game->settings->framerate_60_button->pos.x = pos_box_x - 250 + \
    (size_button_x / 2) - (size_x / 2);
    global_game->settings->framerate_60_button->pos.y = pos_box_y + 510 - \
    (size_y / 2);
    if (create_button(global_game->settings->framerate_60_button) == 1)
        return (1);
    return (0);
}

int init_45_framerate_button(global_game_t *global_game)
{
    int pos_box_x = global_game->menu->box_button->pos.x;
    int pos_box_y = global_game->menu->box_button->pos.y;
    int size_button_x = global_game->menu->box_button->size.x;
    int size_x = 0;
    int size_y = 0;

    global_game->settings->framerate_45_button = malloc(sizeof(button_t));
    if (!global_game->settings->scroll_bar)
        return (1);
    global_game->settings->framerate_45_button->color = (sfColor){0, 0, 0, \
        175};
    global_game->settings->framerate_45_button->size = (sfVector2f){225, 100};
    size_x = global_game->settings->framerate_45_button->size.x;
    size_y = global_game->settings->framerate_45_button->size.y;
    global_game->settings->framerate_45_button->pos.x = pos_box_x + \
    (size_button_x / 2) - (size_x / 2);
    global_game->settings->framerate_45_button->pos.y = pos_box_y + 510 - \
    (size_y / 2);
    if (create_button(global_game->settings->framerate_45_button) == 1)
        return (1);
    return (0);
}

int init_30_framerate_button(global_game_t *global_game)
{
    int pos_box_x = global_game->menu->box_button->pos.x;
    int pos_box_y = global_game->menu->box_button->pos.y;
    int size_button_x = global_game->menu->box_button->size.x;
    int size_x = 0;
    int size_y = 0;

    global_game->settings->framerate_30_button = malloc(sizeof(button_t));
    if (!global_game->settings->scroll_bar)
        return (1);
    global_game->settings->framerate_30_button->color = (sfColor){0, 0, 0, \
        175};
    global_game->settings->framerate_30_button->size = (sfVector2f){225, 100};
    size_x = global_game->settings->framerate_30_button->size.x;
    size_y = global_game->settings->framerate_30_button->size.y;
    global_game->settings->framerate_30_button->pos.x = pos_box_x + 250 + \
    (size_button_x / 2) - (size_x / 2);
    global_game->settings->framerate_30_button->pos.y = pos_box_y + 510 - \
    (size_y / 2);
    if (create_button(global_game->settings->framerate_30_button) == 1)
        return (1);
    return (0);
}