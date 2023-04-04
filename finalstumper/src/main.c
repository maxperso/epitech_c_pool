/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../include/rush3.h"
#include "../include/my.h"

int main(void)
{
    char buff[30000 + 1];
    int offset = 0;
    int len;
    while ((len = read(0, buff + offset, 30000 - offset)) > 0) {
        offset += len;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    rush3(buff);
    return (0);
}
