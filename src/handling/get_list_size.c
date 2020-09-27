/*
** Linked List LIB
** Pol Bachelin
*/

#include "linked_list.h"

size_t get_list_size(node_t *head)
{
    size_t size = 1;
    node_t *tmp = head;

    while ((tmp = tmp->next) != NULL) { size++; }
    return size;
}
