/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** function counts returns number characters
*/

#include "my_world.h"

int my_strlen(char const *str)
{
    int nb_carac = 0;

    while (str[nb_carac] != '\0')
        nb_carac++;
    return (nb_carac);
}