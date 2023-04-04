/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** cpy n char from a string
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    for (int i = 0; i != n; i++) {
        dest[a] = src[i];
        a++;
    }
    return (dest);
}
