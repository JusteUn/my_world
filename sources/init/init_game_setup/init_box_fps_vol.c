/*
** EPITECH PROJECT, 2020
** init_box_fps_vol.c
** File description:
** init_box_fps_vol
*/

#include "my_world.h"

int init_text_nb_fps(global_game_t *global_game)
{
    int pos_button_x = global_game->set->box_fps->pos.x + 100;
    int pos_button_y = global_game->set->box_fps->pos.y - 1;

    global_game->set->nb_fps = malloc(sizeof(text_t));
    if (!global_game->set->nb_fps)
        return (1);
    global_game->set->nb_fps->color = (sfColor){255, 255, 255, 255};
    global_game->set->nb_fps->pos.x = pos_button_x;
    global_game->set->nb_fps->pos.y = pos_button_y;
    global_game->set->nb_fps->size = 40;
    if (create_text(global_game, global_game->set->nb_fps, \
        "60") == 1)
        return (1);
    return (0);
}

int init_text_fps(global_game_t *global_game)
{
    int pos_button_x = global_game->set->box_fps->pos.x + 15;
    int pos_button_y = global_game->set->box_fps->pos.y - 1;

    global_game->set->fps = malloc(sizeof(text_t));
    if (!global_game->set->fps)
        return (1);
    global_game->set->fps->color = (sfColor){255, 255, 255, 255};
    global_game->set->fps->pos.x = pos_button_x;
    global_game->set->fps->pos.y = pos_button_y;
    global_game->set->fps->size = 40;
    if (create_text(global_game, global_game->set->fps, \
        "FPS :") == 1)
        return (1);
    return (0);
}

int init_box_fps(global_game_t *global_game)
{
    global_game->set->box_fps = malloc(sizeof(button_t));
    if (!global_game->set->box_fps)
        return (1);
    global_game->set->box_fps->color = (sfColor){0, 0, 0, 200};
    global_game->set->box_fps->size = (sfVector2f){150, 50};
    global_game->set->box_fps->pos.x = global_game->set->back_button->pos.x \
    + 100;
    global_game->set->box_fps->pos.y = 0;
    if (create_button(global_game->set->box_fps) == 1)
        return (1);
    return (0);
}