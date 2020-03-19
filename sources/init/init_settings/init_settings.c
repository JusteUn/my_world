/*
** EPITECH PROJECT, 2020
** init_settings.c
** File description:
** init_settings
*/

#include "my_world.h"

int init_settings(global_game_t *global_game)
{
    if (init_settings_vol_scrollbar_button(global_game) == 1 || \
        init_settings_vol_cursor(global_game) == 1 || \
        init_settings_vol_plus_button(global_game) == 1 || \
        init_settings_vol_sub_button(global_game) == 1 || \
        init_60_framerate_button(global_game) == 1 || \
        init_45_framerate_button(global_game) == 1 || \
        init_30_framerate_button(global_game) == 1 || \
        init_text_settings(global_game) == 1)
        return (1);
    return (0);
}