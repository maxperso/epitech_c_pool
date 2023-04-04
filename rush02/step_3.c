/*
** EPITECH PROJECT, 2022
** step_3.c
** File description:
** step_3.c
*/

#include <stddef.h>
#include "include/my.h"

void step_3(char **av, int occu)
{
    int cpt = 0;
    int i;
    int frequency = 0;

    for (int i = 0; av[1][i] != '\0'; i++) {
        if (av[1][i] >= 65 && av[1][i] <= 90 ||
        av[1][i] >= 97 && av[1][i] <= 122)
            cpt++;
    }

    my_putstr("(");
    frequency = occu * 10000 / cpt;
    my_put_nbr(frequency / 100);
    my_putchar('.');
    if (frequency % 100 < 10)
        my_putchar('0');
    my_put_nbr(frequency % 100);
    my_putstr("%)");
}
