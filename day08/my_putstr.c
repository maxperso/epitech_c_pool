/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** print a string
*/

#include "include/my.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}
