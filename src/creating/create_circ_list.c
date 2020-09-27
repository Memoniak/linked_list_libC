/*
** Linked List LIB
** Pol Bachelin
*/

#include "linked_list.h"

node_t *create_circ_list(size_t size)
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
    prev_node->next = head;
    prev_node = prev_node->next;
    return prev_node;
}
