/*
** Linked list LIB
** Pol Bachelin
*/

#include "linked_list.h"

void remove_by_index(node_t **head, int index)
{
  node_t *tmp = *head;
  node_t *remove_node;


  if (index < 0) {
    return;
  }
  for (size_t i = 0; i + 1 != index; i++) {
    *head = (*head)->next;
  }
  remove_node = (*head)->next;
  (*head)->next = remove_node->next;
  *head = tmp;
  free(remove_node);
}
