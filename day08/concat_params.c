/*
** EPITECH PROJECT, 2022
** concat_params.c
** File description:
** concat parameters
*/

#include "include/my.h"
#include <stdlib.h>

char *concat_params(int argc, char **argv)
{
    int b = 0;
    int a = 0;
    int len = 0;

    for (int cpt = 0; cpt <= argc - 1; cpt++)
        len = len + my_strlen(argv[cpt]);
    char *new_str = malloc(sizeof(char) * (len + argc + 1));
    for (int i = 0; i <= argc - 1; i++) {
        for (a; argv[i][a] != '\0'; a++) {
            new_str[b] = argv[i][a];
            b++;
        }
        a = 0;
        new_str[b] = '\n';
        b++;
    }
    new_str[b] = '\0';
    return (new_str);
}
