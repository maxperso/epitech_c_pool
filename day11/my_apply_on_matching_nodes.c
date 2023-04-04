/*
** EPITECH PROJECT, 2022
** my_apply_on_matching_nodes.c
** File description:
** apply a node
*/

#include "include/mylist.h"
#include "include/my.h"
#include <stdlib.h>

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(),
void const *data_ref, int (*cmp)())
{
    while (begin != NULL) {
        if ((*cmp)(begin->data, data_ref) == 0) {
            f(begin->data);
        }
        begin = begin->next;
    }
    return (0);
}
