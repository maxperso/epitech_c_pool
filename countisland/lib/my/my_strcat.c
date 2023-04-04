/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** concate string
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, const char *src)
{
    int size_dest = my_strlen(dest);
    int size_src = my_strlen(src);
    int size = size_dest + size_src;

    for (int i = 0; i < size; i++) {
        dest[size_dest] = src[i];
        size_dest++;
    }
    dest[size_dest] = '\0';
    return (dest);
}
