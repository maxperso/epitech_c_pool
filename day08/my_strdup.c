/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** cpy a string
*/

#include "include/my.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
    int a = 0;
    char *new_str = malloc(sizeof(char) * my_strlen(src));

    for (int i = 0; src[i] != '\0'; i++) {
        new_str[a] = src[i];
        a++;
    }
    new_str[a] = '\0';
    return (new_str);
}
