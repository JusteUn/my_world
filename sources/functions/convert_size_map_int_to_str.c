/*
** EPITECH PROJECT, 2020
** convert_size_map_int_to_str.c
** File description:
** convert_size_map_int_to_str
*/

#include "my_world.h"

char *clean_str(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = '0';
    return (str);
}

char *manage_end_of_str(global_game_t *g, char *str, int j)
{
    if (g->game->map.map_y % 10 != 0)
        str[j] = '\0';
    else {
        str[j] = '0';
        str[j + 1] = '\0';
    }
    return (str);
}

char *convert_size_map_x_to_str(global_game_t *g, char *str)
{
    int j = 0;
    char *temp = malloc(sizeof(char));

    if (!temp)
        return (NULL);
    temp = clean_str(temp);
    str = clean_str(str);
    temp = convert_int_to_char(g->game->map.map_x, temp);
    for (int i = 0; temp[i] != '\0'; i++) {
        if ((temp[i] > '0' && temp[i] <= '9')) {
            str[j] = temp[i];
            j++;
        }
    }
    str = manage_end_of_str(g, str, j);
    free(temp);
    return (str);
}

char *convert_size_map_y_to_str(global_game_t *g, char *str)
{
    int j = 0;
    char *temp = malloc(sizeof(char));

    if (!temp)
        return (NULL);
    temp = clean_str(temp);
    str = clean_str(str);
    temp = convert_int_to_char(g->game->map.map_y, temp);
    for (int i = 0; temp[i] != '\0'; i++) {
        if ((temp[i] > '0' && temp[i] <= '9')) {
            str[j] = temp[i];
            j++;
        }
    }
    str = manage_end_of_str(g, str, j);
    free(temp);
    return (str);
}