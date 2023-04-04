/*
** EPITECH PROJECT, 2022
** my_find_node.c
** File description:
** find a node in list
*/

#include "include/mylist.h"
#include "include/my.h"
#include <stdlib.h>

linked_list_t *my_find_node(linked_list_t const *begin,
void const *data_ref, int (* cmp)())
{
    while (begin != NULL) {
        if (cmp(begin->data, data_ref) == 0)
            return (begin);
        begin = begin->next;
    }
    return (0);
}
