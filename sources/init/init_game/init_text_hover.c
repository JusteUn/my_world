/*
** EPITECH PROJECT, 2020
** init_text_hover.c
** File description:
** init_text_hover
*/

#include "my_world.h"

int info_house_button(global_game_t *global_game)
{
    int toolbar_box_x = global_game->game->toolbar_box->pos.x + 50;
    int toolbar_box_y = global_game->game->toolbar_box->pos.y + 50;

    global_game->game->info_house_button = malloc(sizeof(text_t));
    if (!global_game->game->info_house_button)
        return (1);
    global_game->game->info_house_button->color = (sfColor){255, 255, 255, \
255};
    global_game->game->info_house_button->pos.x = toolbar_box_x;
    global_game->game->info_house_button->pos.y = toolbar_box_y;
    global_game->game->info_house_button->size = 75;
    if (create_text(global_game, global_game->game->info_house_button, \
"Add House") == 1) {
        return (1);
    }
    return (0);
}

int info_water_button(global_game_t *global_game)
{
    int toolbar_box_x = global_game->game->toolbar_box->pos.x + 40;
    int toolbar_box_y = global_game->game->toolbar_box->pos.y + 50;

    global_game->game->info_water_button = malloc(sizeof(text_t));
    if (!global_game->game->info_water_button)
        return (1);
    global_game->game->info_water_button->color = (sfColor){255, 255, 255, \
255};
    global_game->game->info_water_button->pos.x = toolbar_box_x;
    global_game->game->info_water_button->pos.y = toolbar_box_y;
    global_game->game->info_water_button->size = 75;
    if (create_text(global_game, global_game->game->info_water_button, \
"Add Water") == 1) {
        return (1);
    }
    return (0);
}

int info_corner_button(global_game_t *global_game)
{
    int toolbar_box_x = global_game->game->toolbar_box->pos.x;
    int toolbar_box_y = global_game->game->toolbar_box->pos.y + 50;

    global_game->game->info_corner_button = malloc(sizeof(text_t));
    if (!global_game->game->info_corner_button)
        return (1);
    global_game->game->info_corner_button->color = (sfColor){255, 255, 255, \
255};
    global_game->game->info_corner_button->pos.x = toolbar_box_x;
    global_game->game->info_corner_button->pos.y = toolbar_box_y;
    global_game->game->info_corner_button->size = 75;
    if (create_text(global_game, global_game->game->info_corner_button, \
"Select Corner") == 1) {
        return (1);
    }
    return (0);
}

int info_tiles_button(global_game_t *global_game)
{
    int toolbar_box_x = global_game->game->toolbar_box->pos.x + 30;
    int toolbar_box_y = global_game->game->toolbar_box->pos.y + 50;

    global_game->game->info_tiles_button = malloc(sizeof(text_t));
    if (!global_game->game->info_tiles_button)
        return (1);
    global_game->game->info_tiles_button->color = (sfColor){255, 255, 255, \
255};
    global_game->game->info_tiles_button->pos.x = toolbar_box_x;
    global_game->game->info_tiles_button->pos.y = toolbar_box_y;
    global_game->game->info_tiles_button->size = 75;
    if (create_text(global_game, global_game->game->info_tiles_button, \
"Select Tiles") == 1) {
        return (1);
    }
    return (0);
}