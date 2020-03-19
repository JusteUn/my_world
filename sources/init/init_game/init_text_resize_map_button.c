/*
** EPITECH PROJECT, 2020
** init_button_resize_map.c
** File description:
** init_text_resize_map_button
*/

#include "my_world.h"

int init_game_text_map_x(global_game_t *g)
{
    int pos_plus_x = g->game->plus_button->pos.x;
    int pos_plus_y = g->game->plus_button->pos.y;
    char *str = malloc(sizeof(char));

    g->game->map_x = malloc(sizeof(text_t));
    if (!g->game->map_x || !str)
        return (1);
    str = convert_size_map_x_to_str(g, str);
    g->game->map_x->color = (sfColor){255, 255, 255, 255};
    g->game->map_x->pos.x = pos_plus_x + 75;
    g->game->map_x->pos.y = pos_plus_y - 5;
    g->game->map_x->size = 50;
    if (create_text(g, g->game->map_x, str) == 1)
        return (1);
    free(str);
    return (0);
}

int init_game_text_map_y(global_game_t *g)
{
    int pos_plus_x = g->game->plus_button->pos.x;
    int pos_plus_y = g->game->plus_button->pos.y;
    char *str = malloc(sizeof(char));

    g->game->map_y = malloc(sizeof(text_t));
    if (!g->game->map_y || !str)
        return (1);
    str = convert_size_map_y_to_str(g, str);
    g->game->map_y->color = (sfColor){255, 255, 255, 255};
    g->game->map_y->pos.x = pos_plus_x + 180;
    g->game->map_y->pos.y = pos_plus_y - 5;
    g->game->map_y->size = 50;
    if (create_text(g, g->game->map_y, str) == 1)
        return (1);
    free(str);
    return (0);
}

int init_game_text_cross(global_game_t *g)
{
    int pos_plus_x = g->game->plus_button->pos.x;
    int pos_plus_y = g->game->plus_button->pos.y;

    g->game->cross = malloc(sizeof(text_t));
    if (!g->game->cross)
        return (1);
    g->game->cross->color = (sfColor){255, 255, 255, 255};
    g->game->cross->pos.x = pos_plus_x + 140;
    g->game->cross->pos.y = pos_plus_y - 5;
    g->game->cross->size = 50;
    if (create_text(g, g->game->cross, "X") == 1)
        return (1);
    return (0);
}

int init_game_text_plus_button(global_game_t *global_game)
{
    int pos_plus_x = global_game->game->plus_button->pos.x;
    int pos_plus_y = global_game->game->plus_button->pos.y;

    global_game->game->plus_text = malloc(sizeof(text_t));
    if (!global_game->game->plus_text)
        return (1);
    global_game->game->plus_text->color = (sfColor){255, 255, 255, 255};
    global_game->game->plus_text->pos.x = pos_plus_x + 2;
    global_game->game->plus_text->pos.y = pos_plus_y - 42;
    global_game->game->plus_text->size = 100;
    if (create_text(global_game, global_game->game->plus_text, "+") == 1)
        return (1);
    return (0);
}

int init_game_text_sub_button(global_game_t *global_game)
{
    int pos_plus_x = global_game->game->sub_button->pos.x;
    int pos_plus_y = global_game->game->sub_button->pos.y;

    global_game->game->sub_text = malloc(sizeof(text_t));
    if (!global_game->game->sub_text)
        return (1);
    global_game->game->sub_text->color = (sfColor){255, 255, 255, 255};
    global_game->game->sub_text->pos.x = pos_plus_x + 4;
    global_game->game->sub_text->pos.y = pos_plus_y - 42;
    global_game->game->sub_text->size = 100;
    if (create_text(global_game, global_game->game->sub_text, "-") == 1)
        return (1);
    return (0);
}