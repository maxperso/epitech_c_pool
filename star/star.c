/*
** EPITECH PROJECT, 2022
** star.c
** File description:
** display a star with n param
*/

#include "include/my.h"

void space(int cpt)
{
    for (int i = 0; i != cpt; i++) {
        my_putchar(' ');
    }
}

void star_c(int cpt)
{
    for (int i = 0; i != cpt; i++) {
        my_putchar('*');
    }
}

void star_1_up(void)
{
    star_c(3);
    my_putchar(' ');
    star_c(3);
    my_putchar('\n');
}

void star_1(void)
{
    space(3);
    my_putchar('*');
    my_putchar('\n');
    star_1_up();
    space(1);
    my_putchar('*');
    space(3);
    my_putchar('*');
    my_putchar('\n');
    star_1_up();
    space(3);
    my_putchar('*');
    my_putchar('\n');
}

void star(unsigned int size)
{
    if (size == 1) {
        star_1();
        return;
    }
    if (size == 2) {
        star_2();
        return;
    }
    if (size > 2 || size <= 0)
        return;
}
