/*
** EPITECH PROJECT, 2022
** my_evil_str.c
** File description:
** reverse string
*/

int my_strlen_evil(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}

char *my_evil_str(char *str)
{
    int len = my_strlen_evil(str);
    int a = len - 1;
    int i = 0;
    char tmp;

    for (i; i < a; i++) {
        tmp = str[i];
        str[i] = str[a];
        str[a] = tmp;
        a--;
    }
    return (str);
}
