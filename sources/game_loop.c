/*
** EPITECH PROJECT, 2020
** game_loop.c
** File description:
** game_loop
*/

#include "my_world.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

void manage_scene(global_game_t *global_game)
{
    global_game->set->error = 0;
    switch (global_game->set->switch_scene) {
    case 0:
        global_game->scene[0](global_game);
        if (global_game->set->error == 1)
            return;
        break;
    case 1:
        global_game->scene[1](global_game);
        if (global_game->set->error == 1)
            return;
        break;
    case 2:
        global_game->scene[2](global_game);
        if (global_game->set->error == 1)
            return;
        break;
    default:
        break;
    }
}

void game_loop(global_game_t *global_game)
{
    sfRenderWindow_setFramerateLimit(global_game->set->window, 60);
    sfMusic_play(global_game->set->music);
    while (sfRenderWindow_isOpen(global_game->set->window)) {
        global_game->set->mouse_pos = \
        sfMouse_getPositionRenderWindow(global_game->set->window);
        manage_scene(global_game);
        if (global_game->set->error == 1)
            return;
        sfRenderWindow_display(global_game->set->window);
    }
}
