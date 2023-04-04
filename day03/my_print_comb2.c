/*
** EPITECH PROJECT, 2022
** my_print_comb2.c
** File description:
** print in ascending order combinaisons of 4 digits all differents
*/

void my_putchar(char c);

int print_c2(int a)
{
    int one;
    int two;
    one = a / 10 + 48;
    two = a % 10 + 48;
    my_putchar(one);
    my_putchar(two);
    return (0);
}

int check(int a, int b)
{
    if (a != 98 || b != 99) {
        my_putchar(',');
        my_putchar(' ');
    }
    return (0);
}

int my_print_comb2(void)
{
    int b = 0;
    int cpt = 0;
    int a = 0;

    for (; a < 100; a++) {
        for (int b = a + 1; b < 100 && cpt == 0; b++) {
            print_c2(a);
            my_putchar(' ');
            print_c2(b);
            check(a, b);
        }
    }
}
