/*
** EPITECH PROJECT, 2022
** my_str_islower.c
** File description:
** return 1 if only lower char
*/

#include "include/my.h"

int my_str_islower(const char *str)
{
    int cpt = my_strlen(str);
    int ret = 1;

    if (cpt == 0)
        return (1);
    for (int i = 0; str[i] != '\0' && ret != 0; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            ret = 1;
        else
            ret = 0;
    }
    return (ret);
}
