/*
** EPITECH PROJECT, 2020
** init_toolbar_button.c
** File description:
** init button
*/

#include "my_world.h"

int init_sprite_select_tiles(global_game_t *global_game)
{
    int toolbar_x = global_game->game->toolbar_box->pos.x;
    int toolbar_y = global_game->game->toolbar_box->pos.y;
    sfVector2f scale = {0.1, 0.1};

    global_game->game->select_tiles = malloc(sizeof(game_assets_t));
    if (!global_game->game->select_tiles)
        return (1);
    if (create_sprite(global_game->game->select_tiles, \
        "resources/sprite/grass_tiles.png", toolbar_x + 5, toolbar_y - 15) \
        == 1)
        return (1);
    sfSprite_setScale(global_game->game->select_tiles->sprite, scale);
    return (0);
}

int init_sprite_select_corner(global_game_t *global_game)
{
    int toolbar_x = global_game->game->toolbar_box->pos.x;
    int toolbar_y = global_game->game->toolbar_box->pos.y;
    sfVector2f scale = {0.04, 0.04};
    sfColor color = {0, 255, 0, 255};

    global_game->game->select_corner = malloc(sizeof(game_assets_t));
    if (!global_game->game->select_corner)
        return (1);
    if (create_sprite(global_game->game->select_corner, \
        "resources/sprite/corner.png", toolbar_x + 75, toolbar_y + 10) \
        == 1)
        return (1);
    sfSprite_setColor(global_game->game->select_corner->sprite, color);
    sfSprite_setScale(global_game->game->select_corner->sprite, scale);
    return (0);
}

int init_button_select_corner(global_game_t *global_game)
{
    int toolbar_x = global_game->game->select_tiles_button->pos.x;

    global_game->game->select_corner_button = malloc(sizeof(button_t));
    if (!global_game->game->select_corner_button)
        return (1);
    global_game->game->select_corner_button->color = (sfColor){0, 0, 0, 200};
    global_game->game->select_corner_button->size = (sfVector2f){65, 50};
    global_game->game->select_corner_button->pos.x = toolbar_x + 65;
    global_game->game->select_corner_button->pos.y = 0;
    if (create_button(global_game->game->select_corner_button) == 1)
        return (1);
    return (0);
}

int init_button_select_tiles(global_game_t *global_game)
{
    int toolbar_x = global_game->game->toolbar_box->pos.x;

    global_game->game->select_tiles_button = malloc(sizeof(button_t));
    if (!global_game->game->select_tiles_button)
        return (1);
    global_game->game->select_tiles_button->color = (sfColor){0, 0, 0, 200};
    global_game->game->select_tiles_button->size = (sfVector2f){65, 50};
    global_game->game->select_tiles_button->pos.x = toolbar_x;
    global_game->game->select_tiles_button->pos.y = 0;
    if (create_button(global_game->game->select_tiles_button) == 1)
        return (1);
    return (0);
}

int init_toolbar_button(global_game_t *global_game)
{
    if (init_sprite_select_tiles(global_game) == 1 || \
        init_button_select_tiles(global_game) == 1 || \
        info_tiles_button(global_game) == 1 || \
        init_sprite_select_corner(global_game) == 1 || \
        init_button_select_corner(global_game) == 1 || \
        info_corner_button(global_game) == 1 || \
        init_sprite_select_water(global_game) || \
        init_button_select_water(global_game) || \
        info_water_button(global_game) == 1 || \
        init_sprite_select_house(global_game) == 1 || \
        init_button_select_house(global_game) == 1 || \
        info_house_button(global_game) == 1)
        return (1);
    return (0);
}