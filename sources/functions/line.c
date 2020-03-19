/*
** EPITECH PROJECT, 2020
** line.c
** File description:
** line
*/

#include <SFML/Graphics.h>

sfVertexArray *create_line(sfVector2f *point1, sfVector2f *point2)
{
    sfVertexArray *vertex_array = sfVertexArray_create();
    sfVertex vertex1 = {.position = * point1, .color = sfWhite};
    sfVertex vertex2 = {.position = * point2, .color = sfWhite};

    if (!vertex_array)
        return (NULL);
    sfVertexArray_append(vertex_array, vertex1);
    sfVertexArray_append(vertex_array, vertex2);
    sfVertexArray_setPrimitiveType(vertex_array, sfLinesStrip);
    return (vertex_array);
}