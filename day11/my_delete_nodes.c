/*
** EPITECH PROJECT, 2022
** my_delete_nodes.c
** File description:
** delete node
*/

#include "include/mylist.h"
#include "include/my.h"
#include <stdlib.h>

int my_delete_nodes(linked_list_t **begin, void const *data_ref,
int (*cmp)())
{
    linked_list_t *element = *begin;

    while (element != NULL) {
        if ((*cmp)(element->data, data_ref) == 0)
            element->data = element->next;
        element = element->next;
    }
    return (0);
}
