/*
** EPITECH PROJECT, 2020
** draw_text.c
** File description:
** draw_text
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void draw_text_menu(global_game_t *global_game)
{
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->menu->play_text->text, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->menu->settings_text->text, NULL);
    sfRenderWindow_drawText(global_game->set->window, \
    global_game->menu->title_text->text, NULL);
}