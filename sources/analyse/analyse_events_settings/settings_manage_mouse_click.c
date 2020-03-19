/*
** EPITECH PROJECT, 2020
** settings_manage_mouse_click.c
** File description:
** settings_manage_mouse_click
*/

#include "my_world.h"

int settings_manage_mouse_click(global_game_t *g)
{
    manage_mouse_click_exit_button(g);
    manage_mouse_click_back_button(g);
    settings_move_vol_cursor(g);
    if (manage_framerate_button(g) == 1 || g->set->error == 1)
        return (1);
    return (0);
}