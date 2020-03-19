/*
** EPITECH PROJECT, 2020
** draw_rectangle_shape.c
** File description:
** draw_rectangle_shape
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void draw_rectangle_shape_menu(global_game_t *global_game)
{
    draw_transparent_box(global_game);
    draw_exit_button(global_game);
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->menu->play_button->rect, NULL);
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->menu->settings_button->rect, NULL);
}