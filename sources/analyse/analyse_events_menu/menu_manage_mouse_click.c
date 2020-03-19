/*
** EPITECH PROJECT, 2020
** menu_manage_mouse_click.c
** File description:
** menu_manage_mouse_click
*/

#include "my_world.h"
#include <SFML/Graphics.h>

void manage_play_bouton_click(global_game_t *global_game)
{
    int pos_x = global_game->menu->play_button->pos.x;
    int pos_y = global_game->menu->play_button->pos.y;
    int size_x = pos_x + global_game->menu->play_button->size.x;
    int size_y = pos_y + global_game->menu->play_button->size.y;

    if (global_game->set->event.mouseButton.x > pos_x && \
    global_game->set->event.mouseButton.x < size_x) {
        if (global_game->set->event.mouseButton.y > pos_y && \
        global_game->set->event.mouseButton.y < size_y) {
            global_game->set->switch_scene = 1;
            play_sound_effect(global_game->set);
        }
        if (global_game->set->error == 1)
            return;
    }
}

void manage_settings_bouton_click(global_game_t *global_game)
{
    int pos_x = global_game->menu->settings_button->pos.x;
    int pos_y = global_game->menu->settings_button->pos.y;
    int size_x = pos_x + global_game->menu->settings_button->size.x;
    int size_y = pos_y + global_game->menu->settings_button->size.y;

    if (global_game->set->event.mouseButton.x > pos_x && \
    global_game->set->event.mouseButton.x < size_x) {
        if (global_game->set->event.mouseButton.y > pos_y && \
        global_game->set->event.mouseButton.y < size_y) {
            global_game->set->switch_scene = 2;
            play_sound_effect(global_game->set);
        }
        if (global_game->set->error == 1)
            return;
    }
}

void menu_manage_mouse_click(global_game_t *global_game)
{
    manage_mouse_click_exit_button(global_game);
    manage_play_bouton_click(global_game);
    manage_settings_bouton_click(global_game);
    if (global_game->set->error == 1)
        return;
}