/*
** EPITECH PROJECT, 2020
** inti_box_menu.c
** File description:
** inti_box_menu
*/

#include "my_world.h"

int init_box_menu(global_game_t *global_game)
{
    int size_x = (global_game->set->mode.width / 2);
    int size_y = (global_game->set->mode.height / 2);
    int box_x = 0;
    int box_y = 0;

    global_game->menu->box_button = malloc(sizeof(button_t));
    if (!global_game->menu->box_button)
        return (1);
    global_game->menu->box_button->color = (sfColor){240, 240, 240, 100};
    global_game->menu->box_button->size = (sfVector2f){800, 600};
    box_x = global_game->menu->box_button->size.x / 2;
    box_y = global_game->menu->box_button->size.y / 2;
    global_game->menu->box_button->pos.x = size_x - box_x;
    global_game->menu->box_button->pos.y = size_y - box_y;
    if (create_button(global_game->menu->box_button) == 1)
        return (1);
    return (0);
}