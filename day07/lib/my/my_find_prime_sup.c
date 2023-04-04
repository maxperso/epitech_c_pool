/*
** EPITECH PROJECT, 2022
** my_find_prime_sup.c
** File description:
** find prime
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    for (nb; my_is_prime(nb) == 0; nb++);
    return (nb);
}
