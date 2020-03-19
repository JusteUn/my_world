/*
** EPITECH PROJECT, 2020
** init_back_button.c
** File description:
** init back button
*/

#include "my_world.h"

int init_text_back_button(global_game_t *global_game)
{
    int pos_button_x = global_game->set->back_button->pos.x + 15;
    int pos_button_y = global_game->set->back_button->pos.y - 1;

    global_game->set->back_text = malloc(sizeof(text_t));
    if (!global_game->set->back_text)
        return (1);
    global_game->set->back_text->color = (sfColor){255, 255, 255, 255};
    global_game->set->back_text->pos.x = pos_button_x;
    global_game->set->back_text->pos.y = pos_button_y;
    global_game->set->back_text->size = 40;
    if (create_text(global_game, global_game->set->back_text, \
        "Back") == 1)
        return (1);
    return (0);
}

int init_back_button(global_game_t *global_game)
{
    global_game->set->back_button = malloc(sizeof(button_t));
    if (!global_game->set->back_button)
        return (1);
    global_game->set->back_button->color = (sfColor){0, 0, 0, 200};
    global_game->set->back_button->size = (sfVector2f){100, 50};
    global_game->set->back_button->pos.x = 0;
    global_game->set->back_button->pos.y = 0;
    if (create_button(global_game->set->back_button) == 1)
        return (1);
    return (0);
}