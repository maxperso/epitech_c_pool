/*
** EPITECH PROJECT, 2022
** my_isneg.c
** File description:
** know if a integer is + or -
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    if (n < 0)
        my_putchar('N');

    return (0);
}
