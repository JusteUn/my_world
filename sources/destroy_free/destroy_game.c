/*
** EPITECH PROJECT, 2020
** destroy_game.c
** File description:
** destroy_game
*/

#include "my_world.h"

void destroy_game_text(game_object_t *game)
{
    sfText_destroy(game->sub_text->text);
    sfText_destroy(game->plus_text->text);
    sfText_destroy(game->map_x->text);
    sfText_destroy(game->map_y->text);
    sfText_destroy(game->cross->text);
    sfText_destroy(game->info_corner_button->text);
    sfText_destroy(game->info_tiles_button->text);
    sfText_destroy(game->info_water_button->text);
    free(game->sub_text);
    free(game->plus_text);
    free(game->map_x);
    free(game->map_y);
    free(game->cross);
    free(game->info_corner_button);
    free(game->info_tiles_button);
    free(game->info_water_button);
}

void destroy_resize_button(game_object_t *game)
{
    sfRectangleShape_destroy(game->plus_button->rect);
    sfRectangleShape_destroy(game->sub_button->rect);
    sfRectangleShape_destroy(game->box_size_map->rect);
    free(game->plus_button);
    free(game->sub_button);
    free(game->box_size_map);
}

void destroy_game_sprite(game_object_t *game)
{
    sfTexture_destroy(game->select_tiles->texture);
    sfSprite_destroy(game->select_tiles->sprite);
    sfTexture_destroy(game->select_corner->texture);
    sfSprite_destroy(game->select_corner->sprite);
    sfTexture_destroy(game->water->texture);
    sfSprite_destroy(game->water->sprite);
    sfTexture_destroy(game->house_map->texture);
    sfSprite_destroy(game->house_map->sprite);
    sfTexture_destroy(game->house_button->texture);
    sfSprite_destroy(game->house_button->sprite);
}

void destroy_toolbar(game_object_t *game)
{
    sfRectangleShape_destroy(game->toolbar_box->rect);
    sfRectangleShape_destroy(game->select_tiles_button->rect);
    sfRectangleShape_destroy(game->select_corner_button->rect);
    sfRectangleShape_destroy(game->select_water_button->rect);
    sfRectangleShape_destroy(game->select_house_button->rect);
    free(game->toolbar_box);
    free(game->select_tiles_button);
    free(game->select_corner_button);
    free(game->select_water_button);
    free(game->select_house_button);
}

void destroy_struct_game(game_object_t *game)
{
    destroy_game_sprite(game);
    destroy_resize_button(game);
    destroy_toolbar(game);
    destroy_game_text(game);
    free_map_water(game);
    free_3d_map(game);
    free_2d_map(game);
    free(game);
}