/*
** Linked List LIB
** Pol Bachelin
*/

#include "linked_list.h"

void pop_linked_list(node_t **head)
{
  node_t *temp_head = *head;

  if (temp_head) {
    (*head) = (*head)->next;
    free(temp_head);
  }
}
