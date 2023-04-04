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
    void my_putstr(char const *str);
    int cat(int ac, char **av);

#endif
