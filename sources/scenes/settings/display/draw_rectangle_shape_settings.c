/*
** EPITECH PROJECT, 2020
** draw_rectangle_shape.c
** File description:
** draw_rectangle_shape
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void draw_volume(global_game_t *global_game)
{
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->settings->scroll_bar->rect, NULL);
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->settings->cursor->rect, NULL);
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->settings->plus->rect, NULL);
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->settings->sub->rect, NULL);
}

void draw_framerate(global_game_t *global_game)
{
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->settings->framerate_60_button->rect, NULL);
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->settings->framerate_45_button->rect, NULL);
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->settings->framerate_30_button->rect, NULL);
}

void draw_rectangle_shape_settings(global_game_t *global_game)
{
    draw_back_button(global_game);
    draw_nb_fps(global_game);
    draw_transparent_box(global_game);
    draw_exit_button(global_game);
    draw_volume(global_game);
    draw_framerate(global_game);
}