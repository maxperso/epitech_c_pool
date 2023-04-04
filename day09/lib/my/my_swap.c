/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** swap the content of 2 integer
*/

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
