/*
** Linked List LIB
** Pol Bachelin
*/

#include "linked_list.h"

void assing_siblings(d_node_t **node, d_node_t *prev, d_node_t *next)
{
    (*node)->next = next;
    (*node)->prev = prev;
}

d_node_t *create_double_list(size_t size)
{
    d_node_t *prev_node;
    d_node_t *node;
    d_node_t *new_node;
    d_node_t *head;

    if (!(head = malloc(sizeof(d_node_t))))
        malloc_error();
    dmemset(&head);
    node = head;
    prev_node = head;
    for (size_t i = 1; i < size; i++) {
        if (!(new_node = malloc(sizeof(d_node_t))))
            malloc_error();
        dmemset(&new_node);
        assing_siblings(&node, prev_node, new_node);
        prev_node = node;
        node = new_node;
    }
    assing_siblings(&node, prev_node, head);
    node = node->next;
    return node;
}
