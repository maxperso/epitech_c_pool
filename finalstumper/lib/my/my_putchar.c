/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** display on standart output one character
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
