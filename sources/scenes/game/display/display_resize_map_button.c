/*
** EPITECH PROJECT, 2020
** display_resize_map_button.c
** File description:
** display_resize_map_button
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void display_tool_bar(global_game_t *global_game)
{
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->game->toolbar_box->rect, NULL);
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->game->select_tiles_button->rect, NULL);
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->game->select_corner_button->rect, NULL);
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->game->select_water_button->rect, NULL);
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->game->select_house_button->rect, NULL);
    sfRenderWindow_drawSprite(global_game->set->window, \
    global_game->game->select_tiles->sprite, NULL);
    sfRenderWindow_drawSprite(global_game->set->window, \
    global_game->game->select_corner->sprite, NULL);
    sfRenderWindow_drawSprite(global_game->set->window, \
    global_game->game->water->sprite, NULL);
    sfRenderWindow_drawSprite(global_game->set->window, \
    global_game->game->house_button->sprite, NULL);
}

void display_resize_map_button(global_game_t *global_game)
{
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->game->plus_button->rect, NULL);
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->game->box_size_map->rect, NULL);
    sfRenderWindow_drawRectangleShape(global_game->set->window, \
    global_game->game->sub_button->rect, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->game->plus_text->text, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->game->sub_text->text, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->game->map_x->text, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->game->cross->text, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->game->map_y->text, NULL);
}

void display_game(global_game_t *global_game)
{
    button_hover_toolbar(global_game);
    button_toolbar_is_select(global_game);
    display_tool_bar(global_game);
    display_resize_map_button(global_game);
}