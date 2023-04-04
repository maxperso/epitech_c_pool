/*
** EPITECH PROJECT, 2022
** rush2
** File description:
** count occurence of letter
*/

#include "include/my.h"

int my_is_lower(char c)
{
    if (c >= 97 && c <= 122)
        return (0);
    else
        return (1);
}

int letters(char **av, int cpt, int i, int occu)
{
    char lett;
    lett = av[cpt][0];

    if (my_is_lower(lett) == 0)
        my_strlowcase(av[1]);
    else
        my_strupcase(av[1]);

    if (av[1][i] == av[cpt][0])
        occu++;
    return (occu);
}

int occurence(int ac, char **av)
{
    int cpt = 2;
    int occu = 0;

    for (int b = 0; b < ac - 2; b++) {
        for (int i = 0; av[1][i] != '\0'; i++) {
            occu = letters(av, cpt, i , occu);
        }
        my_putchar(av[cpt][0]);
        my_putchar(':');
        my_put_nbr(occu);
        my_putchar(' ');
        step_3(av, occu);
        my_putchar('\n');
        occu = 0;
        cpt++;
    }
    return (0);
}
