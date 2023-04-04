/*
** EPITECH PROJECT, 2022
** my_strcapitalize.c
** File description:
** str capitalize
*/

#include "include/my.h"

char *my_strcapitalize(char *str)
{
    str = my_strlowcase(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[0] >= 97 && str[0] <= 122)
            str[i] = str[i] - 32;
        if (str[i] >= 32 && str[i] <= 47 &&
        str[i + 1] >= 97 && str[i + 1] <= 122)
            str[i + 1] = str[i + 1] - 32;
    }
    return (str);
}
