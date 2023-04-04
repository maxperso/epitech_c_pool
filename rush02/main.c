/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "include/my.h"

int main(int ac, char **av)
{
    if (ac < 3)
        return (84);
    occurence(ac, av);
    return (0);
}
