/*
** EPITECH PROJECT, 2020
** init_toolbar_box.c
** File description:
** toolbar box
*/

#include "my_world.h"

int init_game_toolbar_box(global_game_t *global_game)
{
    int win_x = global_game->set->mode.width;
    int toolbar_size = 0;

    global_game->game->toolbar_box = malloc(sizeof(button_t));
    if (!global_game->game->toolbar_box)
        return (1);
    global_game->game->toolbar_box->color = (sfColor){0, 0, 0, 200};
    global_game->game->toolbar_box->size = (sfVector2f){400, 50};
    toolbar_size = global_game->game->toolbar_box->size.x;
    global_game->game->toolbar_box->pos.x = win_x / 2 - toolbar_size / 2;
    global_game->game->toolbar_box->pos.y = 0;
    if (create_button(global_game->game->toolbar_box) == 1)
        return (1);
    return (0);
}