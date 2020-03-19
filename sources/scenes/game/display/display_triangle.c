/*
** EPITECH PROJECT, 2020
** display_triangle.c
** File description:
** display triangle
*/

#include "my_world.h"

int set_draw_triangle_1(global_game_t *g, int x, int y)
{
    sfConvexShape *triangle = NULL;
    int green = 205 - g->game->map.map_3d[y][x];
    sfColor color2 = {40, green, 111, 255};

    triangle = create_triangle(g->game->map.map_2d[y][x], \
    g->game->map.map_2d[y - 1][x], \
    g->game->map.map_2d[y][x - 1], color2);
    if (!triangle)
        return (-1);
    sfRenderWindow_drawConvexShape(g->set->window, triangle, \
    NULL);
    triangle = create_triangle(g->game->map.map_2d[y][x], \
    g->game->map.map_2d[y][x + 1], \
    g->game->map.map_2d[y - 1][x], color2);
    if (!triangle)
        return (-1);
    sfRenderWindow_drawConvexShape(g->set->window, triangle, \
    NULL);
    sfConvexShape_destroy(triangle);
    return (0);
}

int set_draw_triangle_2(global_game_t *g, int x, int y)
{
    sfConvexShape *triangle = NULL;
    int green = 205 + g->game->map.map_3d[y][x];
    sfColor color1 = {40, green, 111, 255};

    if (green >= 255)
        color1 = (sfColor){255, 255, 255, 255};
    triangle = create_triangle(g->game->map.map_2d[y][x], \
    g->game->map.map_2d[y][x + 1], \
    g->game->map.map_2d[y + 1][x], color1);
    if (!triangle)
        return (-1);
    sfRenderWindow_drawConvexShape(g->set->window, triangle, NULL);
    triangle = create_triangle(g->game->map.map_2d[y][x], \
    g->game->map.map_2d[y][x - 1], \
    g->game->map.map_2d[y + 1][x], color1);
    if (!triangle)
        return (-1);
    sfRenderWindow_drawConvexShape(g->set->window, triangle, NULL);
    sfConvexShape_destroy(triangle);
    return (0);
}

int display_triangle_shadow(global_game_t *g, int x, int y)
{
    if ((x - 1) < 0 || (y - 1) < 0 || (x + 1) >= g->game->map.map_x \
        || (y + 1) >= g->game->map.map_y)
        return (2);
    if (g->game->map.map_3d[y][x] != 0) {
        if (set_draw_triangle_1(g, x, y) == -1)
            return (1);
        if (set_draw_triangle_2(g, x, y) == -1)
            return (1);
    }
    return (0);
}

int set_display_triangle_grass(global_game_t *g, int x, int y)
{
    sfConvexShape *triangle = NULL;
    sfColor color = {40, 205, 111, 255};

    triangle = create_triangle(g->game->map.map_2d[y][x], \
    g->game->map.map_2d[y + 1][x], \
    g->game->map.map_2d[y + 1][x + 1], color);
    if (!triangle)
        return (1);
    sfRenderWindow_drawConvexShape(g->set->window, \
    triangle, NULL);
    triangle = create_triangle(g->game->map.map_2d[y][x], \
    g->game->map.map_2d[y][x + 1], \
    g->game->map.map_2d[y + 1][x + 1], color);
    if (!triangle)
        return (1);
    sfRenderWindow_drawConvexShape(g->set->window, \
    triangle, NULL);
    sfConvexShape_destroy(triangle);
    return (0);
}

int display_triangle_grass(global_game_t *g, int x, int y)
{
    if ((y + 1) != g->game->map.map_y && (x + 1) != g->game->map.map_x) {
        if (g->game->map.map_water[y][x] == 0 || 2)
            set_display_triangle_grass(g, x, y);
        if (g->game->map.map_water[y][x] == 1)
            display_triangle_water(g, x, y);
        if (g->game->map.map_water[y][x] == 2)
            display_house(g, x, y);
    }
    return (0);
}