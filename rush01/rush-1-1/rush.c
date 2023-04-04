/*
** EPITECH PROJECT, 2022
** rush-1-1.c
** File description:
** draw a square
*/

#include "include/my.h"

void space(int cpt)
{
    for (int i = 0; i != cpt; i++)
        my_putchar(' ');
}

void char_c(int cpt)
{
    for (int i = 0; i < cpt; i++)
        my_putchar('-');
}

void top_down(int x)
{
    my_putchar('o');
    char_c(x - 2);
    if (x > 1)
        my_putchar('o');
    my_putchar('\n');
}

void body(int x, int y)
{
    for (int i = 0; i < (y - 2); i++) {
        my_putchar('|');
        if (x > 1) {
            space(x - 2);
            my_putchar('|');
        }
        my_putchar('\n');
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        my_putstr("Invalid size\n");
        return;
    }
    top_down(x);
    if (y == 1)
        return;
    body(x, y);
    top_down(x);
}
