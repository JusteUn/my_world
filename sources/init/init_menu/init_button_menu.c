/*
** EPITECH PROJECT, 2020
** init_button_menu.c
** File description:
** init_button_menu
*/

#include "my_world.h"

int init_button_play(global_game_t *global_game)
{
    int pos_box_x = global_game->menu->box_button->pos.x;
    int pos_box_y = global_game->menu->box_button->pos.y;
    int size_button_x = global_game->menu->box_button->size.x;
    int size_x = 0;
    int size_y = 0;

    global_game->menu->play_button = malloc(sizeof(button_t));
    if (!global_game->menu->play_button)
        return (1);
    global_game->menu->play_button->color = (sfColor){0, 0, 0, 175};
    global_game->menu->play_button->size = (sfVector2f){300, 100};
    size_x = global_game->menu->play_button->size.x;
    size_y = global_game->menu->play_button->size.y;
    global_game->menu->play_button->pos.x = pos_box_x + size_button_x / 2 - \
    size_x / 2;
    global_game->menu->play_button->pos.y = pos_box_y + 300 - size_y / 2;
    if (create_button(global_game->menu->play_button) == 1)
        return (1);
    return (0);
}

int init_button_settings(global_game_t *global_game)
{
    int pos_box_x = global_game->menu->box_button->pos.x;
    int pos_box_y = global_game->menu->box_button->pos.y;
    int size_button_x = global_game->menu->box_button->size.x;
    int size_x = 0;
    int size_y = 0;

    global_game->menu->settings_button = malloc(sizeof(button_t));
    if (!global_game->menu->settings_button)
        return (1);
    global_game->menu->settings_button->color = (sfColor){0, 0, 0, 175};
    global_game->menu->settings_button->size = (sfVector2f){300, 100};
    size_x = global_game->menu->settings_button->size.x;
    size_y = global_game->menu->settings_button->size.y;
    global_game->menu->settings_button->pos.x = pos_box_x + size_button_x / \
    2 - size_x / 2;
    global_game->menu->settings_button->pos.y = pos_box_y + 475 - size_y / 2;
    if (create_button(global_game->menu->settings_button) == 1)
        return (1);
    return (0);
}