/*
** EPITECH PROJECT, 2022
** my_list_size.c
** File description:
** list size
*/

#include "include/mylist.h"
#include "include/my.h"
#include <stdlib.h>

int my_list_size(linked_list_t const *begin)
{
    linked_list_t *tmp;
    int cpt = 0;

    while (tmp != NULL) {
        cpt++;
        tmp = tmp->next;
    }
    return (cpt);
}
