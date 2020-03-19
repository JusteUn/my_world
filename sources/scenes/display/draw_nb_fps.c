/*
** EPITECH PROJECT, 2020
** draw_nb_fps.c
** File description:
** draw_nb_fps
*/

#include "my_world.h"

void draw_nb_fps(global_game_t *global_game)
{
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->set->box_fps->rect, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->set->fps->text, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->set->nb_fps->text, NULL);
}