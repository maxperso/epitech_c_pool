/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** reverse a string
*/

#include "include/my.h"

char *my_revstr(char *str)
{
    char tmp;
    int a = (my_strlen(str) - 1);

    for (int i = 0; i < a; i++) {
        tmp = str[a];
        str[a] = str[i];
        str[i] = tmp;
        a--;
    }
    return (str);
}
