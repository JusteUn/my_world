/*
** EPITECH PROJECT, 2020
** draw_sprite_menu.c
** File description:
** draw_sprite_menu
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void draw_sprite_menu(global_game_t *global_game)
{
    sfRenderWindow_drawSprite(global_game->set->window, \
    global_game->menu->background->sprite, NULL);
}