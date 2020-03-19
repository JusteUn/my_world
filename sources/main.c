/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "my_world.h"

int main(int ac, char **av)
{
    (void)av;
    if (ac != 1)
        return (84);
    if (start_game() == 1)
        return (84);
    return (0);
}