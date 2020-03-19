/*
** EPITECH PROJECT, 2019
** convert_int_to_char.c
** File description:
** convert_int_to_char
*/

#include "my_world.h"

char *convert_int_to_char(int nb, char *score)
{
    int temp = 0;

    for (int i = my_strlen(score); i != 0; i--) {
        temp = nb % 10;
        score[i] = temp + '0';
        nb = nb / 10;
    }
    return (score);
}