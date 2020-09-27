/*
** Linked List LIB
** Pol Bachelin
*/

#include "linked_list.h"

void lmemset(node_t **node)
{
    (*node)->next = NULL;
    (*node)->data = 0;
}

void dmemset(d_node_t **node)
{
    (*node)->next = NULL;
    (*node)->prev = NULL;
    (*node)->data = 0;
}
