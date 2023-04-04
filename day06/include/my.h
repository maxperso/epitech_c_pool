/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** MY
*/

#ifndef MY
    #define MY

    int my_strlen(char const *str);
    char *my_strcpy(char *dest, char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_revstr(char *str);
    char *my_strstr(char *str, char const *to_find);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    int my_strcmp(char const *s1, char const *s2);
    int my_strncmp(char const *s1, char const *s2, int n);
    int my_str_isalpha(const char *str);
    int my_str_isnum(const char *str);
    int my_str_islower(const char *str);
    int my_str_isupper(const char *str);

#endif /* !MY */
