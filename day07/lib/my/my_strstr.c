/*
** EPITECH PROJECT, 2022
** my_strstr.c
** File description:
** str tr
*/

int verif(char *str, char const *to_find, int cpt)
{
    for (int i = 0; to_find[i] != '\0'; i++) {
        if (str[i + cpt] != to_find[i])
            return (1);
    }
    return (0);
}

char *my_strstr(char *str, char const *to_find)
{
    int cpt = 0;

    while (str[cpt] != '\0') {
        if (str[cpt] == to_find[0] && verif(str, to_find, cpt) == 0)
            return(&str[cpt]);
        cpt++;
    }
}
