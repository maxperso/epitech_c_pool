/*
** EPITECH PROJECT, 2022
** my_is_prime.c
** File description:
** my is prime
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb < 2)
        return (0);
    while (i != nb) {
        if (nb % i == 0)
            return (0);
        else
            i++;
    }
    return (1);
}
