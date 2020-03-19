/*
** EPITECH PROJECT, 2020
** init_menu.c
** File description:
** init_menu
*/

#include "my_world.h"

int init_menu(global_game_t *global_game)
{
    global_game->menu->background = malloc(sizeof(game_assets_t));
    if (!global_game->menu->background)
        return (1);
    global_game->menu->background->pos.x = global_game->set->mode.width;
    global_game->menu->background->pos.y = global_game->set->mode.height;
    if (create_sprite(global_game->menu->background, \
        "resources/sprite/menu_bg.png", 0, 0) == 1)
        return (1);
    if (init_box_menu(global_game) == 1 || init_button_play(global_game) == 1 \
|| init_button_settings(global_game) == 1 || init_menu_text(global_game) == 1)
        return (1);
    return (0);
}