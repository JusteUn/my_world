/*
** EPITECH PROJECT, 2020
** set_scene.c
** File description:
** set_scene
*/

#include "my_world.h"

void set_scene(global_game_t *global_game)
{
    global_game->scene[0] = menu;
    global_game->scene[1] = game;
    global_game->scene[2] = settings;
}