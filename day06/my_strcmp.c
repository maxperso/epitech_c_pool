/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** compare string
*/

#include "include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i;

    for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++);
        if (s1[i] < s2[i])
            return (-1);
        else if (s1[i] > s2[i])
            return (1);
        else
            return (0);
}
