/*
** EPITECH PROJECT, 2022
** my_apply_on_nodes.c
** File description:
** apply nodes
*/

#include "include/mylist.h"
#include "include/my.h"
#include <stdlib.h>

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    while (begin != NULL) {
        f(begin->data);
        begin = begin->next;
    }
    return (0);
}
