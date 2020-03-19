/*
** EPITECH PROJECT, 2020
** create_triangle.c
** File description:
** create triangle
*/

#include "my_world.h"

sfConvexShape *create_triangle(sfVector2f point1, sfVector2f point2, \
sfVector2f point3, sfColor color)
{
    sfConvexShape *triangle = sfConvexShape_create();

    if (!triangle)
        return (NULL);
    sfConvexShape_setPointCount(triangle, 3);
    sfConvexShape_setPoint(triangle, 0, point1);
    sfConvexShape_setPoint(triangle, 1, point2);
    sfConvexShape_setPoint(triangle, 2, point3);
    sfConvexShape_setFillColor(triangle, color);
    return (triangle);
}