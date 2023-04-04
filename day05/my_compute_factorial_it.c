/*
** EPITECH PROJECT, 2022
** my_compute_factorial_it.c
** File description:
** compute
*/

int my_compute_factorial_it(int nb)
{
    int fact = 1;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (1);
    while (nb > 1) {
        fact = fact * nb;
        nb--;
    }
    return (fact);
}
