/*
** EPITECH PROJECT, 2022
** my_putchar.c
** File description:
** put a char
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}
