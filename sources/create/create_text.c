/*
** EPITECH PROJECT, 2020
** create_text.c
** File description:
** create_text
*/

#include "my_world.h"

int create_text(global_game_t *global_game, text_t *text, char *str)
{
    text->text = sfText_create();
    if (!text->text)
        return (1);
    sfText_setString(text->text, str);
    sfText_setFont(text->text, global_game->set->font);
    sfText_setPosition(text->text, text->pos);
    sfText_setCharacterSize(text->text, text->size);
    sfText_setColor(text->text, text->color);
    return (0);
}