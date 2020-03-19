/*
** EPITECH PROJECT, 2020
** draw_transparent_box.c
** File description:
** draw_transparent_box
*/

#include "my_world.h"

void draw_transparent_box(global_game_t *global_game)
{
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->menu->box_button->rect, NULL);
}