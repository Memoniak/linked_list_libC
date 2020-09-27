/*
** Linked List LIB
** 18/09/2020
** Pol Bachelin
** File description:
** creates a normal linked list of size
*/

#include "linked_list.h"

node_t *create_linked_list(size_t size)
{
    node_t *prev_node;
    node_t *new_node;
    node_t *head;

    if (!(head = malloc(sizeof(node_t))))
        malloc_error();
    lmemset(&head);
    prev_node = head;
    for (size_t i = 1; i < size; i++) {
        if (!(new_node = malloc(sizeof(node_t))))
            malloc_error();
        lmemset(&new_node);
        prev_node->next = new_node;
        prev_node = new_node;
    }
    prev_node->next = NULL;
    prev_node = head;
    return prev_node;
}
