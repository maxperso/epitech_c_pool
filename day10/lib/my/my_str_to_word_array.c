/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** str to word array
*/

#include <stdlib.h>
#include <unistd.h>

int separator(char cha)
{
    int ret = 1;

    if (cha >= 48 && cha <= 57 || cha >= 65 && cha <= 90 ||
    cha >= 97 && cha <= 122)
        ret = 0;
    else
        ret = 1;
    return (ret);
}

int line(char const *str)
{
    int cpt = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (separator(str[i]) == 1)
            cpt++;
    }
    return (cpt);
}

int size_word(char const *str, int a)
{
    int i = 0;

    for (int i = a; str[i] != '\0'; i++) {
        if (separator(str[i]) == 1 && separator(str[i - 1]) == 0)
            return (a);
        a++;
    }
    return (a);
}

int stop(char const *str, int a)
{
    int x = 0;

    if (str[a] == '\0' && separator(str[a - 1]) == 1)
        x = 1;
    return (x);
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int b = 0;
    int a = 0;
    int x = 0;
    char **tab = malloc(sizeof(char *) * (line(str) + 1));
    for (i; i < (line(str) + 1) && x == 0; i++) {
        tab[i] = malloc(sizeof(char) * size_word(str, a));
        while (separator(str[a]) == 1 && str[a + 1] != '\0')
            a++;
        for (a; a < size_word(str, a); a++) {
            tab[i][b] = str[a];
            b++;
        }
        tab[i][b] = '\0';
        x = stop(str, a);
        a++;
        b = 0;
    }
    tab[i - x] = NULL;
    return (tab);
}
