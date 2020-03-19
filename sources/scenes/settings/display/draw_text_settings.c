/*
** EPITECH PROJECT, 2020
** draw_settings_text.c
** File description:
** draw_settings_text
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void draw_vol_text(global_game_t *global_game)
{
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->settings->title_text->text, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->settings->plus_text->text, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->settings->sub_text->text, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->settings->sound->text, NULL);
}

void draw_framerate_text(global_game_t *global_game)
{
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->settings->framerate_text->text, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->settings->framerate_60_text->text, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->settings->framerate_45_text->text, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->settings->framerate_30_text->text, NULL);
}

void draw_settings_text(global_game_t *global_game)
{
    draw_vol_text(global_game);
    draw_framerate_text(global_game);
}