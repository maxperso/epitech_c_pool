/*
** EPITECH PROJECT, 2022
** rush3.c
** File description:
** rush3
*/

#include "../include/my.h"
#include "../include/rush3.h"

char **check_char(char **tab, int x, int y, rush3_t *r)
{
    if (r->len_x + 1 == 1 && r->len_y + 1 == 1)
        r->a1 = tab[0][0];
    if (r->len_y + 1 >= 3)
        r->h = tab[0][1];
    if (r->len_x + 1 >= 3)
        r->v = tab[1][0];
    r->a1 = tab[0][0];
    r->a2 = tab[0][r->len_y];
    r->a3 = tab[r->len_x][0];
    r->a4 = tab[r->len_x][r->len_y];
    return (tab);
}

void check_rush(char **tab, rush3_t *r)
{
    int x = 0;
    int y = 0;

    for (x; tab[x] != NULL; x++) {
        for (y; tab[x][y] != '\0'; y++) {
        }
        if (x == 0)
            r->len_y = y - 1;
        y = 0;
    }
    r->len_x = x - 2;
    check_char(tab, x, y, r);
}

int rush3(char *str)
{
    rush3_t *rush3 = malloc(sizeof(rush3_t));
    init_struct(rush3);

    if (str[0] == '\0') {
        mini_printf("none\n");
        return (0);
    }
    char **tab = my_str_to_word_array(str, '\n');
    check_rush(tab, rush3);
    my_find_solution(rush3->len_y + 1, rush3->len_x + 1, rush3);
    return (0);
}
