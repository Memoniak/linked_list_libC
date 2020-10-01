/*
** Linked List LIB
** Pol Bachelin
*/

#include "linked_list.h"

void free_circular_list(node_t *head)
{
  node_t *tmp;
  node_t *first = head;

  head = head->next;
  while (head != first) {
    tmp = head;
    head = head->next;
    free(tmp);
  }
  free(head);
}
