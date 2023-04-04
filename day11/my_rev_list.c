/*
** EPITECH PROJECT, 2022
** my_rev_list.c
** File description:
** reverse a list
*/

#include "include/mylist.h"
#include "include/my.h"
#include <stdlib.h>

void my_rev_list(linked_list_t **begin)
{
    int size = my_list_size(*begin);
    linked_list_t *tmp = *begin;
    linked_list_t *prev = NULL;
    linked_list_t *next = NULL;

    for (int i = 0; size > i; i++) {
        next = tmp->next;
        tmp->next = prev;
        prev = tmp;
        tmp = next;
    }
}
