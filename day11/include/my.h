/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <unistd.h>

    void my_putchar(char c);
    int my_isneg(int nb);
    int my_put_nbr(int nb);
    void my_swap(int *a, int *b);
    void my_putstr(char const *str);
    int my_getnbr(char const *str);
    int my_compute_square_root(int nb);
    int my_is_prime(int nb);
    int my_find_prime_sup(int nb);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_strstr(char *str, char const *to_find);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    int my_str_isalpha(char const *str);
    int my_str_islower(char const *str);
    int my_str_isupper(char const *str);
    int my_str_isprintable(char const *str);
    int my_showstr(char const *str);
    int my_showmem(char const *str, int size);
    char *my_strcat(char *dest, char const *src);
    char *my_strncat(char *dest, char const *src, int nb);
    int my_strcmp(char *src, char *src1);
    char *my_revstr(char *str);
    int my_strlen(char const *str);
    char **my_str_to_word_array(char const *str);
    int my_compute_power_rec(int nb, int p);
    char *my_strdup(char const *src);

#endif
