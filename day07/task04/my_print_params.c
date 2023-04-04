/*
** EPITECH PROJECT, 2022
** my_print_params.c
** File description:
** print param
*/

#include "../include/my.h"

void my_print_params(int ac, char **av)
{
    for (int i = 0; i < ac; i++) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
}

int main(int ac, char **av)
{
    my_print_params(ac, av);
    return (0);
}
