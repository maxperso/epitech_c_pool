/*
** EPITECH PROJECT, 2022
** my_show_word_array.c
** File description:
** show str
*/

#include "include/my.h"

int my_show_word_array(char * const *tab)
{
    for (int x = 0; tab[x]; x++) {
        for (int y = 0; tab[x][y] != '\0'; y++) {
            my_putchar(tab[x][y]);
        }
        my_putchar('\n');
    }
    return (0);
}
