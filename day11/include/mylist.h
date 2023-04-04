/*
** EPITECH PROJECT, 2022
** synthesys.h
** File description:
** synthesys
*/

#ifndef SYNTHESYS_H_
    #define SYNTHESYS_H_

    typedef struct linked_list {
        void *data;
        struct linked_list *next;
    } linked_list_t;

    linked_list_t *my_params_to_list(int ac, char * const *av);
    int my_list_size(linked_list_t const *begin);
    void my_rev_list(linked_list_t **begin);
    int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *));
    int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(),
    void const *data_ref , int (*cmp)());
    linked_list_t *my_find_node(linked_list_t const *begin,
    void const *data_ref, int (* cmp)());
    int my_delete_nodes(linked_list_t **begin, void const *data_ref,
    int (*cmp)());
    void my_concat_list(linked_list_t **begin1, linked_list_t *begin2);

    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <unistd.h>

#endif
