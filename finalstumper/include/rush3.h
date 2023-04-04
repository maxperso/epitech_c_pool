/*
** EPITECH PROJECT, 2022
** rush3
** File description:
** all prototype for rush3 project
*/

#ifndef RUSH3
    #define RUSH3

    /* INCLUDE */
    #include <stdlib.h>
    #include <stddef.h>
    #include <unistd.h>

    /* STRUCT */
    typedef struct rush3 {
        int x;
        int y;
        int len_x;
        int len_y;
        char a1;
        char a2;
        char a3;
        char a4;
        char h;
        char v;
    } rush3_t;

    /* FUNCTION */
    void init_struct(rush3_t *r);
    int my_find_solution(int x, int y, rush3_t *rush);
    int rush3(char *str);

#endif /* !RUSH3 */
