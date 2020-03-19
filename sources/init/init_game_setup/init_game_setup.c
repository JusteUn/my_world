/*
** EPITECH PROJECT, 2020
** init_game_setup.c
** File description:
** init_game_setup
*/

#include "my_world.h"

int init_window(game_setup_t *set)
{
    set->mode = (sfVideoMode){1920, 1080, 32};
    set->window = sfRenderWindow_create(set->mode, "My World", \
    sfResize | sfClose, NULL);
    if (!set->window)
        return (1);
    return (0);
}

int init_music_font(game_setup_t *set)
{
    set->font = sfFont_createFromFile("resources/Font/font.ttf");
    set->volume = 60;
    set->music = sfMusic_createFromFile("resources/music/world.ogg");
    set->sound_effect = NULL;
    sfMusic_setLoop(set->music, sfTrue);
    sfMusic_setVolume(set->music, set->volume);
    if (!set->music || !set->font)
        return (1);
    return (0);
}

int init_view(game_setup_t *set)
{
    set->rect = (sfFloatRect){0, 0, 1920, 1080};
    set->view = sfView_createFromRect(set->rect);
    if (!set->view)
        return (1);
    return (0);
}

void init_game_setup_var(game_setup_t *set)
{
    set->pos_exit_button.x = 0;
    set->pos_exit_button.y = 0;
    set->error = 0;
}

int init_game_setup(global_game_t *global_game)
{
    if (init_window(global_game->set) == 1 \
        || init_music_font(global_game->set) == 1 \
        || init_view(global_game->set) == 1 \
        || init_exit_button(global_game) == 1 \
        || init_exit_button_text(global_game) == 1 \
        || init_back_button(global_game) == 1 \
        || init_text_back_button(global_game) == 1
        || init_box_fps(global_game) == 1 \
        || init_text_nb_fps(global_game) == 1 \
        || init_text_fps(global_game) == 1)
        return (1);
    init_game_setup_var(global_game->set);
    return (0);
}