/*
** EPITECH PROJECT, 2022
** test_my_strcapitalize.c
** File description:
** test str capitalize
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_strcapitalize, capitalize_first_letter) {

    char *str = strdup("hey, how are you? 42WORds forty-two; fifty+one");

    my_strcapitalize(str);
    cr_assert_str_eq(str, "Hey, How Are You? 42words Forty-Two; Fifty+One");
}
