/*
** EPITECH PROJECT, 2020
** destroy_menu.c
** File description:
** destroy_menu
*/

#include "my_world.h"

void destroy_menu_button(menu_t *menu)
{
    sfRectangleShape_destroy(menu->play_button->rect);
    sfRectangleShape_destroy(menu->settings_button->rect);
    sfRectangleShape_destroy(menu->box_button->rect);
    free(menu->play_button);
    free(menu->settings_button);
    free(menu->box_button);
}

void destroy_menu_text(menu_t *menu)
{
    sfText_destroy(menu->title_text->text);
    sfText_destroy(menu->play_text->text);
    sfText_destroy(menu->settings_text->text);
    free(menu->title_text);
    free(menu->play_text);
    free(menu->settings_text);
}

void destroy_background(menu_t *menu)
{
    sfTexture_destroy(menu->background->texture);
    sfSprite_destroy(menu->background->sprite);
}

void destroy_struct_menu(menu_t *menu)
{
    destroy_menu_button(menu);
    destroy_menu_text(menu);
    destroy_background(menu);
    free(menu);
}