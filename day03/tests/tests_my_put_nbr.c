/*
** EPITECH PROJECT, 2022
** tests_my_put_nbr.c
** File description:
** test my put nbr
*/

int main(void)
{
    my_put_nbr(42);
    my_put_nbr(0);
    my_put_nbr(2147483647);
    my_put_nbr(-2147483647);

    return (0);
}
