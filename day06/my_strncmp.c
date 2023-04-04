/*
** EPITECH PROJECT, 2022
** my_strncmp.c
** File description:
** compare string (n parameter)
*/

#include "include/my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i;

    for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] &&
    i < (n - 1); i++);
        if (s1[i] < s2[i])
            return (-1);
        else if (s1[i] > s2[i])
            return (1);
        else
            return (0);
}
