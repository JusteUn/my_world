/*
** EPITECH PROJECT, 2020
** create_sprite.c
** File description:
** create_sprite
*/

#include "my_world.h"

int create_sprite(game_assets_t *asset, char *path, int x, int y)
{
    asset->texture = sfTexture_createFromFile(path, NULL);
    if (!asset->texture)
        return (1);
    asset->sprite = sfSprite_create();
    if (!asset->sprite)
        return (1);
    sfSprite_setTexture(asset->sprite, asset->texture, sfTrue);
    sfSprite_setPosition(asset->sprite, (sfVector2f){x, y});
    return (0);
}