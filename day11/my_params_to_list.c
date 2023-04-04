/*
** EPITECH PROJECT, 2022
** my_params_to_list.c
** File description:
** list params node
*/

#include "include/mylist.h"
#include "include/my.h"
#include <stdlib.h>

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *element;
    linked_list_t *temp = NULL;

    for (int i = 0; i < ac; i++) {
        element = malloc(sizeof(*element));
        element->data = av[i];
        element->next = temp;
        temp = element;
    }
    return (element);
}
