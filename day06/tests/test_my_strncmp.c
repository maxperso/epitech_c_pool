/*
** EPITECH PROJECT, 2022
** test_my_strncmp.c
** File description:
** test strcmp
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_strncmp, test)
{
    char dest[] = "Salut comment tu vas ?";
    char src[] = "Salut comment tu vas ?";
    int a = my_strncmp(dest, src, 5);

    cr_assert_eq(a, 0);
}
