/*
** EPITECH PROJECT, 2022
** my_concat_list.c
** File description:
** concat list
*/

#include "include/mylist.h"
#include "include/my.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *element = *begin1;

    while (element != NULL) {
        if (element->next == NULL)
            element->next = begin2;
        element = element->next;
    }
}
