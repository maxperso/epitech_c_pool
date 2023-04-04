/*
** EPITECH PROJECT, 2022
** count_island.c
** File description:
** count nb of island in char**
*/

#include <stddef.h>
#include <stdio.h>

void check_if_x(char **word, int x, int y, int n)
{
    int prin = 48;

    if (word[x][y + 1] != '\0' && word[x][y + 1] == 'X') {
        word[x][y + 1] = prin + n;
        check_if_x(word, x, y + 1, n);
    }
    if (y > 0 && word[x][y - 1] == 'X') {
        word[x][y - 1] = prin + n;
        check_if_x(word, x, y - 1, n);
    }
    if (word[x + 1] != NULL && word[x + 1][y] == 'X') {
        word[x + 1][y] = prin + n;
        check_if_x(word, x + 1, y, n);
    }
    if (x > 0 && word[x - 1][y] == 'X') {
        word[x - 1][y] = prin + n;
        check_if_x(word, x - 1, y, n);
    }
}

int find_x(char **word, int x, int y, int n)
{
    if (word[x][y] == 'X') {
        check_if_x(word, x, y, n);
        n++;
    }
    return (n);
}

int count_island(char **word)
{
    int x = 0;
    int y = 0;
    int cpt = 0;

    for (x; word[x] != NULL; x++) {
        for (y; word[x][y] != '\0'; y++) {
            cpt = find_x(word, x, y, cpt);
        }
        y = 0;
    }
    return (cpt);
}
