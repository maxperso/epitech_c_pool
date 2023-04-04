/*
** EPITECH PROJECT, 2022
** my_strncmp.c
** File description:
** compare string (n parameter)
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a = 0;

    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i])
            return (1);
    }
    return (0);
}
