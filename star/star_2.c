/*
** EPITECH PROJECT, 2022
** star_2.c
** File description:
** star
*/

#include "include/my.h"

void star_2_inter(void)
{
    star_c(5);
    space(1);
    star_c(5);
    my_putchar('\n');
    space(1);
    star_c(1);
    space(7);
    star_c(1);
    my_putchar('\n');
}

void star_2_up(void)
{
    space(5);
    my_putchar('*');
    my_putchar('\n');
    space(4);
    my_putchar('*');
    space(1);
    my_putchar('*');
    my_putchar('\n');
    star_2_inter();
}

void star_2_inter_down(void)
{
    space(1);
    star_c(1);
    space(7);
    star_c(1);
    my_putchar('\n');
    star_c(5);
    space(1);
    star_c(5);
    my_putchar('\n');
}

void star_2_down(void)
{
    my_putchar('\n');
    star_2_inter_down();
    space(4);
    my_putchar('*');
    space(1);
    my_putchar('*');
    my_putchar('\n');
    space(5);
    my_putchar('*');
}

void star_2(void)
{
    star_2_up();
    space(2);
    star_c(1);
    space(5);
    star_c(1);
    star_2_down();
    my_putchar('\n');
}
