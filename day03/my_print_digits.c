/*
** EPITECH PROJECT, 2022
** my_print_digits.c
** File description:
** print digits in ascending order
*/

void my_putchar(char c);

int my_print_digits(void)
{
    for (int cpt = 48; cpt < 58; cpt++)
        my_putchar(cpt);

    return (0);
}
