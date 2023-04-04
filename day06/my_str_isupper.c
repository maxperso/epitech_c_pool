/*
** EPITECH PROJECT, 2022
** my_str_isupper.c
** File description:
** return 1 if only uppercase in string
*/

#include "include/my.h"

int my_str_isupper(const char *str)
{
    int cpt = my_strlen(str);
    int ret = 1;

    if (cpt == 0)
        return (1);
    for (int i = 0; str[i] != '\0' && ret != 0; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            ret = 1;
        else
            ret = 0;
    }
    return (ret);
}
