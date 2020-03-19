/*
** EPITECH PROJECT, 2020
** destroy_settings.c
** File description:
** destroy settings
*/

#include "my_world.h"

void destroy_framerate_button(settings_t *settings)
{
    sfText_destroy(settings->framerate_text->text);
    sfText_destroy(settings->framerate_30_text->text);
    sfText_destroy(settings->framerate_45_text->text);
    sfText_destroy(settings->framerate_60_text->text);
    sfRectangleShape_destroy(settings->framerate_60_button->rect);
    sfRectangleShape_destroy(settings->framerate_45_button->rect);
    sfRectangleShape_destroy(settings->framerate_30_button->rect);
}

void destroy_vol_button(settings_t *settings)
{
    sfText_destroy(settings->sub_text->text);
    sfText_destroy(settings->plus_text->text);
    sfText_destroy(settings->sound->text);
    sfRectangleShape_destroy(settings->plus->rect);
    sfRectangleShape_destroy(settings->sub->rect);
    sfRectangleShape_destroy(settings->scroll_bar->rect);
    sfRectangleShape_destroy(settings->cursor->rect);
}

void destroy_struct_settings(settings_t *settings)
{
    sfText_destroy(settings->title_text->text);
    destroy_vol_button(settings);
    destroy_framerate_button(settings);
    free(settings);
}