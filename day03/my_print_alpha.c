/*
** EPITECH PROJECT, 2022
** my_print_alpha.c
** File description:
** print alphabet in alphabetic order
*/

void my_putchar(char c);

int my_print_alpha(void)
{
    for (int cpt = 97; cpt < 123; cpt++)
        my_putchar(cpt);

    return (0);
}
