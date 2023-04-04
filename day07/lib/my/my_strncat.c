/*
** EPITECH PROJECT, 2022
** my_strncat.c
** File description:
** concate string with n parameter
*/

char *my_strncat(char *dest, const char *src, int nb)
{
    int size_dest = my_strlen(dest);

    for (int i = 0; i < nb; i++) {
        dest[size_dest] = src[i];
        size_dest++;
    }
    dest[size_dest] = '\0';
    return (dest);
}
