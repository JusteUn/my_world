/*
** EPITECH PROJECT, 2020
** button_toolbar_is_select.c
** File description:
** button_toolbar_is_select
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void when_select_tiles_is_select(global_game_t *global_game, \
sfColor color, sfColor color2)
{
    if (global_game->game->button_id == 1) {
        color = (sfColor){255, 255, 255, 200};
        sfSprite_setColor(global_game->game->\
        select_tiles->sprite, color);
        color2 = (sfColor){100, 100, 100, 200};
        sfSprite_setColor(global_game->game->\
        select_corner->sprite, color2);
        sfSprite_setColor(global_game->game->\
        water->sprite, color2);
        sfSprite_setColor(global_game->game->\
        house_button->sprite, color2);
    }
}

void when_select_corner_is_select(global_game_t *global_game, \
sfColor color, sfColor color2)
{
    if (global_game->game->button_id == 2) {
        color = (sfColor){255, 255, 255, 200};
        sfSprite_setColor(global_game->game->\
        select_corner->sprite, color);
        color2 = (sfColor){100, 100, 100, 200};
        sfSprite_setColor(global_game->game->\
        select_tiles->sprite, color2);
        sfSprite_setColor(global_game->game->\
        water->sprite, color2);
        sfSprite_setColor(global_game->game->\
        house_button->sprite, color2);
    }
}

void when_select_water_is_select(global_game_t *global_game, \
sfColor color, sfColor color2)
{
    if (global_game->game->button_id == 3) {
        color = (sfColor){255, 255, 255, 200};
        sfSprite_setColor(global_game->game->\
        water->sprite, color);
        color2 = (sfColor){100, 100, 100, 200};
        sfSprite_setColor(global_game->game->\
        select_tiles->sprite, color2);
        sfSprite_setColor(global_game->game->\
        select_corner->sprite, color2);
        sfSprite_setColor(global_game->game->\
        house_button->sprite, color2);
    }
}

void when_select_house_is_select(global_game_t *global_game, \
sfColor color, sfColor color2)
{
    if (global_game->game->button_id == 4) {
        color = (sfColor){255, 255, 255, 200};
        sfSprite_setColor(global_game->game->\
        house_button->sprite, color);
        color2 = (sfColor){100, 100, 100, 200};
        sfSprite_setColor(global_game->game->\
        select_tiles->sprite, color2);
        sfSprite_setColor(global_game->game->\
        select_corner->sprite, color2);
        sfSprite_setColor(global_game->game->\
        water->sprite, color2);
    }
}

void button_toolbar_is_select(global_game_t *global_game)
{
    sfColor color = {0, 0, 0, 200};
    sfColor color2 = {0, 0, 0, 200};

    when_select_tiles_is_select(global_game, color, color2);
    when_select_corner_is_select(global_game, color, color2);
    when_select_water_is_select(global_game, color, color2);
    when_select_house_is_select(global_game, color, color2);
}