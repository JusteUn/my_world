/*
** EPITECH PROJECT, 2020
** destroy_all_struct.c
** File description:
** destroy_all_struct
*/

#include "my_world.h"

void destroy_all_struct(global_game_t *global_game)
{
    destroy_struct_settings(global_game->settings);
    destroy_struct_menu(global_game->menu);
    destroy_struct_game(global_game->game);
    destroy_struct_game_setup(global_game->set);
}