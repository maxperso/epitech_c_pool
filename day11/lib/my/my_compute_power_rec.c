/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** power
*/

int my_compute_power_rec(int nb, int p)
{
    int fact = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    else
        return (fact * my_compute_power_rec(fact, p - 1));
}
