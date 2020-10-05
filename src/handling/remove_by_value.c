/*
** Linked List LIB
** Pol Bachelin
*/

#include "linked_list.h"

void remove_by_value(node_t **head, size_t value)
{
  node_t *tmp = *head;
  node_t *remove_node;
  
  while ((*head)->next->data != value) {
    (*head) = (*head)->next;
  }
  remove_node = (*head)->next;
  (*head)->next = remove_node->next;
  *head = tmp;
  free(remove_node);
}
