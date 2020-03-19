/*
** EPITECH PROJECT, 2020
** init_water_button.c
** File description:
** init water button
*/

#include "my_world.h"

int init_sprite_select_house(global_game_t *global_game)
{
    int toolbar_x = global_game->game->toolbar_box->pos.x;
    int toolbar_y = global_game->game->toolbar_box->pos.y;
    sfVector2f scale = {0.1, 0.1};
    sfColor color = {100, 100, 100, 255};

    global_game->game->house_button = malloc(sizeof(game_assets_t));
    if (!global_game->game->house_button)
        return (1);
    if (create_sprite(global_game->game->house_button, \
        "resources/sprite/house.png", toolbar_x + 200, toolbar_y) \
        == 1)
        return (1);
    sfSprite_setColor(global_game->game->house_button->sprite, color);
    sfSprite_setScale(global_game->game->house_button->sprite, scale);
    global_game->game->house_map = malloc(sizeof(game_assets_t));
    if (create_sprite(global_game->game->house_map, \
        "resources/sprite/house.png", -50, -50) \
        == 1)
        return (1);
    return (0);
}

int init_button_select_house(global_game_t *global_game)
{
    int toolbar_x = global_game->game->select_water_button->pos.x;

    global_game->game->select_house_button = malloc(sizeof(button_t));
    if (!global_game->game->select_house_button)
        return (1);
    global_game->game->select_house_button->color = (sfColor){0, 0, 0, 200};
    global_game->game->select_house_button->size = (sfVector2f){65, 50};
    global_game->game->select_house_button->pos.x = toolbar_x + 65;
    global_game->game->select_house_button->pos.y = 0;
    if (create_button(global_game->game->select_house_button) == 1)
        return (1);
    return (0);
}

int init_sprite_select_water(global_game_t *global_game)
{
    int toolbar_x = global_game->game->toolbar_box->pos.x;
    int toolbar_y = global_game->game->toolbar_box->pos.y;
    sfVector2f scale = {0.3, 0.3};
    sfColor color = {100, 100, 100, 255};

    global_game->game->water = malloc(sizeof(game_assets_t));
    if (!global_game->game->water)
        return (1);
    if (create_sprite(global_game->game->water, \
        "resources/sprite/water.png", toolbar_x + 140, toolbar_y) \
        == 1)
        return (1);
    sfSprite_setColor(global_game->game->water->sprite, color);
    sfSprite_setScale(global_game->game->water->sprite, scale);
    return (0);
}

int init_button_select_water(global_game_t *global_game)
{
    int toolbar_x = global_game->game->select_corner_button->pos.x;

    global_game->game->select_water_button = malloc(sizeof(button_t));
    if (!global_game->game->select_water_button)
        return (1);
    global_game->game->select_water_button->color = (sfColor){0, 0, 0, 200};
    global_game->game->select_water_button->size = (sfVector2f){65, 50};
    global_game->game->select_water_button->pos.x = toolbar_x + 65;
    global_game->game->select_water_button->pos.y = 0;
    if (create_button(global_game->game->select_water_button) == 1)
        return (1);
    return (0);
}