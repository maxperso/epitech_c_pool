/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** concate string
*/

char *my_strcat(char *dest, const char *src)
{
    int size_dest = my_strlen(dest);
    int size_src = my_strlen(src);

    for (int i = 0; i < size_src; i++) {
        dest[size_dest] = src[i];
        size_dest++;
    }
    dest[size_dest] = '\0';
    return (dest);
}
