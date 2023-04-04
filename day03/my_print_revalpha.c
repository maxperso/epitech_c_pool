/*
** EPITECH PROJECT, 2022
** my_print_revalpha.c
** File description:
** print alphabet in descending order
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    for (int cpt = 122; cpt > 96; cpt--)
        my_putchar(cpt);

    return (0);
}
