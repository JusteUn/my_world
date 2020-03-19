/*
** EPITECH PROJECT, 2020
** init_exit_button.c
** File description:
** init_exit_button
*/

#include "my_world.h"

int init_exit_button_text(global_game_t *global_game)
{
    int pos_plus_x = global_game->set->exit_button->pos.x;
    int pos_plus_y = global_game->set->exit_button->pos.y;

    global_game->set->exit_text = malloc(sizeof(text_t));
    if (!global_game->set->exit_text)
        return (1);
    global_game->set->exit_text->color = (sfColor){255, 255, 255, 255};
    global_game->set->exit_text->pos.x = pos_plus_x + 10;
    global_game->set->exit_text->pos.y = pos_plus_y - 28;
    global_game->set->exit_text->size = 78;
    if (create_text(global_game, global_game->set->exit_text, "X") == 1)
        return (1);
    return (0);
}

int init_exit_button(global_game_t *global_game)
{
    int pos_window_x = global_game->set->mode.width / 2;
    int pos_window_y = global_game->set->mode.height / 2;

    global_game->set->exit_button = malloc(sizeof(button_t));
    if (!global_game->set->exit_button)
        return (1);
    global_game->set->exit_button->color = (sfColor){0, 0, 0, 200};
    global_game->set->exit_button->size = (sfVector2f){50, 50};
    global_game->set->exit_button->pos.x = pos_window_x + 910;
    global_game->set->exit_button->pos.y = pos_window_y - 545;
    if (create_button(global_game->set->exit_button) == 1)
        return (1);
    return (0);
}