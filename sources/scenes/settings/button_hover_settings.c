/*
** EPITECH PROJECT, 2020
** button_hover_settings.c
** File description:
** button hover
*/

#include "my_world.h"

void button_hover_settings(global_game_t *g)
{
    sfVector2i pos = g->set->mouse_pos;
    sfColor color = {1, 215, 88, 200};

    is_button_hover(g, g->settings->plus, pos, color);
    is_button_hover(g, g->settings->sub, pos, color);
    is_button_hover(g, g->settings->framerate_60_button, pos, color);
    is_button_hover(g, g->settings->framerate_30_button, pos, color);
    is_button_hover(g, g->settings->framerate_45_button, pos, color);
    is_button_hover(g, g->set->back_button, pos, color);
}