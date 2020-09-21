/*
** Linked List LIB
** Pol Bachelin
*/

#include "linked_list.h"

void free_linked_list(node_t *head)
{
    node_t *tmp;

    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
