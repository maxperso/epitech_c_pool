/*
** EPITECH PROJECT, 2022
** test_my_strstr.c
** File description:
** test strstr
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_strstr, find_good_word)
{
    cr_assert_str_eq(my_strstr("maman maison", "maison"), "maison");
}