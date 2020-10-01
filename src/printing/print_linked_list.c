/*
** Linked List LIB
** 18/09/2020
** Pol Bachelin
**
*/

#include "linked_list.h"

void print_linked_list(node_t *head)
{
    node_t *tmp = head;
    int i = 1;

    printf("head:\n");
    while(tmp != NULL ) {
        printf("   data : %i\n", tmp->data);
        print_link();
        printf("node #%i:\n", i++);
        tmp = tmp->next;
    }
    printf("\tNULL\n");
}
