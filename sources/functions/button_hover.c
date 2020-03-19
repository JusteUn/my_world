/*
** EPITECH PROJECT, 2020
** button_hover.c
** File description:
** button hover
*/

#include "my_world.h"

void is_button_hover(global_game_t *g, button_t *button, \
sfVector2i mouse_pos, sfColor color)
{
    int button_x = button->pos.x;
    int button_y = button->pos.y;
    int button_size_x = button->size.x;
    int button_size_y = button->size.y;

    if (mouse_pos.x > button_x && mouse_pos.x < button_x + button_size_x && \
    mouse_pos.y > button_y && mouse_pos.y < button_y + button_size_y) {
        button->color = color;
        g->game->button_hover = true;
    } else
        button->color = (sfColor){0, 0, 0, 175};
    sfRectangleShape_setFillColor(button->rect, \
    button->color);
}