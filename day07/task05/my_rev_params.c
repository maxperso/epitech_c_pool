/*
** EPITECH PROJECT, 2022
** my_rev_params.c
** File description:
** print param reversed
*/

#include "../include/my.h"

void my_rev_params(int ac, char **av)
{
    for (int i = (ac - 1); i >= 0; i--) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
}

int main(int ac, char **av)
{
    my_rev_params(ac, av);
    return (0);
}
