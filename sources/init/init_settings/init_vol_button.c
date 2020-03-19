/*
** EPITECH PROJECT, 2020
** init_vol_button.c
** File description:
** init_vol_button
*/

#include "my_world.h"

int init_settings_vol_scrollbar_button(global_game_t *global_game)
{
    int pos_box_x = global_game->menu->box_button->pos.x;
    int pos_box_y = global_game->menu->box_button->pos.y;
    int size_button_x = global_game->menu->box_button->size.x;
    int size_x = 0;

    global_game->settings->scroll_bar = malloc(sizeof(button_t));
    if (!global_game->settings->scroll_bar)
        return (1);
    global_game->settings->scroll_bar->color = (sfColor){0, 0, 0, 100};
    global_game->settings->scroll_bar->size = (sfVector2f){600, 50};
    size_x = global_game->settings->scroll_bar->size.x;
    global_game->settings->scroll_bar->pos.x = pos_box_x + size_button_x \
    / 2 - size_x / 2;
    global_game->settings->scroll_bar->pos.y = pos_box_y + 300;
    if (create_button(global_game->settings->scroll_bar) == 1)
        return (1);
    return (0);
}

int init_settings_vol_cursor(global_game_t *global_game)
{
    int pos_scrollbar_x = global_game->settings->scroll_bar->pos.x;
    int pos_scrollbar_y = global_game->settings->scroll_bar->pos.y;
    int size_scrollbar_x = global_game->settings->scroll_bar->size.x;

    global_game->settings->cursor = malloc(sizeof(button_t));
    if (!global_game->settings->cursor)
        return (1);
    global_game->settings->cursor->color = (sfColor){0, 0, 0, 200};
    global_game->settings->cursor->size = (sfVector2f){30, 50};
    global_game->settings->cursor->pos.x = pos_scrollbar_x + \
    size_scrollbar_x / 2;
    global_game->settings->cursor->pos.y = pos_scrollbar_y;
    if (create_button(global_game->settings->cursor) == 1)
        return (1);
    return (0);
}

int init_settings_vol_plus_button(global_game_t *global_game)
{
    int pos_scrollbar_x = global_game->settings->scroll_bar->pos.x;
    int pos_scrollbar_y = global_game->settings->scroll_bar->pos.y;
    int size_scrollbar_x = global_game->settings->scroll_bar->size.x;

    global_game->settings->plus = malloc(sizeof(button_t));
    if (!global_game->settings->plus)
        return (1);
    global_game->settings->plus->color = (sfColor){0, 0, 0, 200};
    global_game->settings->plus->size = (sfVector2f){50, 50};
    global_game->settings->plus->pos.x = pos_scrollbar_x + \
    size_scrollbar_x + 10;
    global_game->settings->plus->pos.y = pos_scrollbar_y;
    if (create_button(global_game->settings->plus) == 1)
        return (1);
    return (0);
}

int init_settings_vol_sub_button(global_game_t *global_game)
{
    int pos_scrollbar_x = global_game->settings->scroll_bar->pos.x;
    int pos_scrollbar_y = global_game->settings->scroll_bar->pos.y;

    global_game->settings->sub = malloc(sizeof(button_t));
    if (!global_game->settings->sub)
        return (1);
    global_game->settings->sub->color = (sfColor){0, 0, 0, 200};
    global_game->settings->sub->size = (sfVector2f){50, 50};
    global_game->settings->sub->pos.x = pos_scrollbar_x - 60;
    global_game->settings->sub->pos.y = pos_scrollbar_y;
    if (create_button(global_game->settings->sub) == 1)
        return (0);
    return (0);
}