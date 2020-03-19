/*
** EPITECH PROJECT, 2020
** button_hover_toolbar.c
** File description:
** button_hover_toolbar
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void display_info_tiles_button(global_game_t *g, sfVector2i mouse_pos, \
sfColor color)
{
    is_button_hover(g, g->game->select_tiles_button, mouse_pos, color);
    if (g->game->button_hover == true) {
        sfRenderWindow_drawText(g->set->window, \
        g->game->info_tiles_button->text, NULL);
        g->game->button_hover = false;
    }
}

void display_info_corner_button(global_game_t *g, sfVector2i mouse_pos, \
sfColor color)
{
    is_button_hover(g, g->game->select_corner_button, mouse_pos, color);
    if (g->game->button_hover == true) {
        sfRenderWindow_drawText(g->set->window, \
        g->game->info_corner_button->text, NULL);
        g->game->button_hover = false;
    }
}

void display_info_water_button(global_game_t *g, sfVector2i mouse_pos, \
sfColor color)
{
    is_button_hover(g, g->game->select_water_button, mouse_pos, color);
    if (g->game->button_hover == true) {
        sfRenderWindow_drawText(g->set->window, \
        g->game->info_water_button->text, NULL);
        g->game->button_hover = false;
    }
}

void display_info_house_button(global_game_t *g, sfVector2i mouse_pos, \
sfColor color)
{
    is_button_hover(g, g->game->select_house_button, mouse_pos, color);
    if (g->game->button_hover == true) {
        sfRenderWindow_drawText(g->set->window, \
        g->game->info_house_button->text, NULL);
        g->game->button_hover = false;
    }
}

void button_hover_toolbar(global_game_t *g)
{
    sfColor color = {1, 215, 88, 200};
    sfVector2i mouse_pos = g->set->mouse_pos;

    is_button_hover(g, g->game->plus_button, mouse_pos, color);
    is_button_hover(g, g->game->sub_button, mouse_pos, color);
    g->game->button_hover = false;
    display_info_tiles_button(g, mouse_pos, color);
    display_info_corner_button(g, mouse_pos, color);
    display_info_water_button(g, mouse_pos, color);
    display_info_house_button(g, mouse_pos, color);
}