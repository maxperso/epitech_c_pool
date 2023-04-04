/*
** EPITECH PROJECT, 2022
** test_my_revstr.c
** File description:
** test revstr
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_revstr, reversting_abdef_string)
{
    char *src = strdup("abdef");

    src = my_revstr(src);
    cr_assert_str_eq(src, "fedba");
}
