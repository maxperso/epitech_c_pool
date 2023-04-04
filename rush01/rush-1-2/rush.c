/*
** EPITECH PROJECT, 2022
** rush-1-2.c
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
        my_putchar('*');
}

void top_down(int x, char first, char last)
{
    my_putchar(first);
    char_c(x - 2);
    my_putchar(last);
    my_putchar('\n');
}

void body(int x, int y)
{
    for (int i = 0; i < (y - 2); i++) {
        my_putchar('*');
        if (x > 1) {
            space(x - 2);
            my_putchar('*');
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
    if (x == 1) {
        for (int i = 0; i < y; i++) {
            my_putchar('*');
            my_putchar('\n');
        }
        return;
    } if (y == 1) {
        char_c(x);
        my_putchar('\n');
        return;
    }
    top_down(x, '/', '\\');
    body(x, y);
    top_down(x, '\\', '/');
}
