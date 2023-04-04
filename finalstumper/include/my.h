/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** contains all prototype of lib/my/*.c
*/

#ifndef MY
    #define MY

    int mini_printf(const char *format, ...);
    int my_put_nbr(int nb);
    void my_putchar(char c);
    int my_putstr(char const *str);
    char **my_str_to_word_array(char *str, char separator);
    int my_strcmp(char const *s1, char const *s2);

#endif /* !MY */
