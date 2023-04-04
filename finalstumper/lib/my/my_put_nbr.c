/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** displays the number given in parameter
*/

void my_putchar(char c);
static void display_min(void);

int my_put_nbr(int nb)
{
    int i;

    if (nb == -2147483648) {
        display_min();
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb *= (-1);
    }
    for (i = 1; (nb / i) >= 10; i *= 10);
    for (; i > 0; i /= 10)
        my_putchar((nb / i) % 10 + 48);
    return (0);
}

static void display_min(void)
{
    my_putchar('-');
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}
