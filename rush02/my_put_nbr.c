/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** display nbr given in parameter
*/

#include "include/my.h"

void my_putchar(char c);

int my_put_nbr(int n)
{
    if (n < 0) {
        my_putchar('-');
        n = n * -1;
    }
    if (n > 9) {
        my_put_nbr(n / 10);
        my_put_nbr(n % 10);
    } else
        my_putchar(n + '0');

    return (0);
}
