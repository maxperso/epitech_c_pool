/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** calcul the len of an array
*/

#include "include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}
