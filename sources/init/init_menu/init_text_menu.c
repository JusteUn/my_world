/*
** EPITECH PROJECT, 2020
** init_text_menu.c
** File description:
** init_text_menu
*/

#include "my_world.h"

int init_play_text(global_game_t *global_game)
{
    int play_button_x = global_game->menu->play_button->pos.x + 90;
    int play_button_y = global_game->menu->play_button->pos.y + 2;

    global_game->menu->play_text = malloc(sizeof(text_t));
    if (!global_game->menu->play_text)
        return (1);
    global_game->menu->play_text->color = (sfColor){255, 255, 255, 255};
    global_game->menu->play_text->pos.x = play_button_x;
    global_game->menu->play_text->pos.y = play_button_y;
    global_game->menu->play_text->size = 75;
    if (create_text(global_game, global_game->menu->play_text, "Play") == 1)
        return (1);
    return (0);
}

int init_settings_text(global_game_t *global_game)
{
    int settings_button_x = global_game->menu->settings_button->pos.x + 40;
    int settings_button_y = global_game->menu->settings_button->pos.y + 2;

    global_game->menu->settings_text = malloc(sizeof(text_t));
    if (!global_game->menu->play_text)
        return (1);
    global_game->menu->settings_text->color = (sfColor){255, 255, 255, 255};
    global_game->menu->settings_text->pos.x = settings_button_x;
    global_game->menu->settings_text->pos.y = settings_button_y;
    global_game->menu->settings_text->size = 75;
    if (create_text(global_game, global_game->menu->settings_text, \
        "Settings") == 1)
        return (1);
    return (0);
}

int init_title(global_game_t *global_game)
{
    int box_x = global_game->menu->box_button->pos.x + 125;
    int box_y = global_game->menu->box_button->pos.y + 25;

    global_game->menu->title_text = malloc(sizeof(text_t));
    if (!global_game->menu->title_text)
        return (1);
    global_game->menu->title_text->color = (sfColor){1, 215, 88, 255};
    global_game->menu->title_text->pos.x = box_x;
    global_game->menu->title_text->pos.y = box_y;
    global_game->menu->title_text->size = 150;
    if (create_text(global_game, global_game->menu->title_text, \
        "My World") == 1)
        return (1);
    return (0);
}

int init_menu_text(global_game_t *global_game)
{
    if (init_play_text(global_game) == 1 || \
        init_settings_text(global_game) == 1 || init_title(global_game) == 1)
        return (1);
    return (0);
}