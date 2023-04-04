/*
** EPITECH PROJECT, 2022
** my_compute_square_root.c
** File description:
** compute square
*/

int my_compute_square_root(int nb)
{
    int i = nb;

    while (i >= 0) {
        if (i * i == nb)
            return (i);
        i--;
    }
    return (0);
}
