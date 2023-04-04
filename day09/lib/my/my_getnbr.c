/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** get nbr
*/

#include <limits.h>
#include "../../include/my.h"

int my_getnbr(char const *str)
{
    int nbr = 0;
    int signe = 1;
    int i = 0;

    for (i; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-')
            signe = -signe;
    }
    for (i; str[i] >= '0' && str[i] <= '9'; i++) {
        if (nbr >= 0)
            nbr = nbr * 10 + str[i] - '0';
        if (nbr < 0)
            nbr = nbr * 10 - (str[i] - '0');
        if (nbr > 0 && signe < 0)
            nbr = nbr * signe;
    }
    if (nbr > INT_MAX || nbr < INT_MIN)
        return (1);
    return (nbr);
}
