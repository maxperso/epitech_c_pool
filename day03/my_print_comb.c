/*
** EPITECH PROJECT, 2022
** my_print_comb.c
** File description:
** print in ascending order 3 digit different
*/

void my_putchar(char c);

int my_printc(int a, int b, int c)
{
    while (c <= '9') {
        if (a == '7' && b == '8' && c == '9') {
            my_putchar(a);
            my_putchar(b);
            my_putchar(c);
        } else {
            my_putchar(a);
            my_putchar(b);
            my_putchar(c);
            my_putchar(',');
            my_putchar(' ');
        }
        c++;
    }
    return (0);
}

int my_print_comb(void)
{
    int a = '0';
    int b = '0';
    int c = '0';

    while (a <= '7') {
        b = a + 1;
        while (b <= '8') {
            c = b + 1;
            my_printc(a, b, c);
            b++;
        }
        a++;
    }
    return (0);
}
