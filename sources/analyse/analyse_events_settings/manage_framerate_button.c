/*
** EPITECH PROJECT, 2020
** manage_framerate_button.c
** File description:
** manage_framerate_button
*/

#include "my_world.h"
#include <SFML/Graphics.h>

int framerate_60_button(global_game_t *global_game)
{
    int pos_x = global_game->settings->framerate_60_button->pos.x;
    int pos_y = global_game->settings->framerate_60_button->pos.y;
    int size_x = pos_x + global_game->settings->framerate_60_button->size.x;
    int size_y = pos_y + global_game->settings->framerate_60_button->size.y;

    if (global_game->set->event.mouseButton.x > pos_x && \
    global_game->set->event.mouseButton.x < size_x) {
        if (global_game->set->event.mouseButton.y > pos_y && \
        global_game->set->event.mouseButton.y < size_y) {
            play_sound_effect(global_game->set);
            return (1);
        }
    }
    return (0);
}

int framerate_45_button(global_game_t *global_game)
{
    int pos_x = global_game->settings->framerate_45_button->pos.x;
    int pos_y = global_game->settings->framerate_45_button->pos.y;
    int size_x = pos_x + global_game->settings->framerate_45_button->size.x;
    int size_y = pos_y + global_game->settings->framerate_45_button->size.y;

    if (global_game->set->event.mouseButton.x > pos_x && \
    global_game->set->event.mouseButton.x < size_x) {
        if (global_game->set->event.mouseButton.y > pos_y && \
        global_game->set->event.mouseButton.y < size_y) {
            play_sound_effect(global_game->set);
            return (2);
        }
    }
    return (0);
}

int framerate_30_button(global_game_t *global_game)
{
    int pos_x = global_game->settings->framerate_30_button->pos.x;
    int pos_y = global_game->settings->framerate_30_button->pos.y;
    int size_x = pos_x + global_game->settings->framerate_30_button->size.x;
    int size_y = pos_y + global_game->settings->framerate_30_button->size.y;

    if (global_game->set->event.mouseButton.x > pos_x && \
    global_game->set->event.mouseButton.x < size_x) {
        if (global_game->set->event.mouseButton.y > pos_y && \
        global_game->set->event.mouseButton.y < size_y) {
            play_sound_effect(global_game->set);
            return (3);
        }
    }
    return (0);
}

int manage_framerate_button(global_game_t *g)
{
    if (framerate_60_button(g) == 1) {
        if (create_text(g, g->set->nb_fps, "60") == 1 || g->set->error == 1)
            return (1);
        sfRenderWindow_setFramerateLimit(g->set->window, 60);
    }
    if (framerate_45_button(g) == 2) {
        if (create_text(g, g->set->nb_fps, "45") == 1 || g->set->error == 1)
            return (1);
        sfRenderWindow_setFramerateLimit(g->set->window, 45);
    }
    if (framerate_30_button(g) == 3) {
        if (create_text(g, g->set->nb_fps, "30") == 1 || g->set->error == 1)
            return (1);
        sfRenderWindow_setFramerateLimit(g->set->window, 30);
    }
    return (0);
}