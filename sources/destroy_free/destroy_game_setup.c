/*
** EPITECH PROJECT, 2020
** detroy_game_setup.c
** File description:
** detroy_game_setup
*/

#include "my_world.h"

void destroy_game_setup_button(game_setup_t *set)
{
    sfRectangleShape_destroy(set->back_button->rect);
    sfRectangleShape_destroy(set->box_fps->rect);
    sfRectangleShape_destroy(set->exit_button->rect);
    free(set->exit_button);
    free(set->back_button);
    free(set->box_fps);
    free(set->box_vol);
}

void destroy_game_setup_text(game_setup_t *set)
{
    sfText_destroy(set->exit_text->text);
    sfText_destroy(set->fps->text);
    sfText_destroy(set->nb_fps->text);
    sfText_destroy(set->back_text->text);
    free(set->exit_text);
    free(set->back_text);
    free(set->nb_fps);
    free(set->nb_vol);
    free(set->fps);
    free(set->vol);
}

void destroy_struct_game_setup(game_setup_t *set)
{
    sfMusic_destroy(set->music);
    sfMusic_destroy(set->sound_effect);
    destroy_game_setup_button(set);
    destroy_game_setup_text(set);
    sfFont_destroy(set->font);
    sfView_destroy(set->view);
    sfRenderWindow_destroy(set->window);
    free(set);
}