/*
** EPITECH PROJECT, 2022
** my_compute_power_it.c
** File description:
** power
*/

int my_compute_power_it(int nb, int p)
{
    int fact = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    while (p > 1) {
        fact = fact * nb;
        p--;
    }
    return (fact);
}
