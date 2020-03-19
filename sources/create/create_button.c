/*
** EPITECH PROJECT, 2020
** create_button
** File description:
** create_button
*/

#include "my_world.h"

int create_button(button_t *button)
{
    button->rect = sfRectangleShape_create();
    if (!button->rect)
        return (1);
    sfRectangleShape_setPosition(button->rect, button->pos);
    sfRectangleShape_setSize(button->rect, button->size);
    sfRectangleShape_setFillColor(button->rect, button->color);
    return (0);
}