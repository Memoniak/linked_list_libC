/*
** Linked List LIB
** Pol Bachelin
*/

#include "linked_list.h"

void push_linked_list(node_t **head, size_t data)
{
  node_t *new_node;
  node_t *tmp = head;
  
  if (!(new_node = malloc(sizeof(node_t))))
    malloc_error();
  lmemset(&new_node);
  new_node->data = data;
  new_node->next = (*head);
  (*head) = new_node;
}
