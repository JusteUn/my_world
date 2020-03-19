/*
** EPITECH PROJECT, 2020
** settings.c
** File description:
** settings
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void settings(global_game_t *global_game)
{
    global_game->set->error = 0;
    sfRenderWindow_clear(global_game->set->window, sfBlack);
    if (analyse_events_settings(global_game) == 1) {
        global_game->set->error = 1;
        return;
    }
    draw_sprite_menu(global_game);
    draw_rectangle_shape_settings(global_game);
    draw_settings_text(global_game);
    button_hover_settings(global_game);
}
