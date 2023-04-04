/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** displays the characters of a string
*/

#include "include/my.h"

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
