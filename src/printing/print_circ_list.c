/*
** Linked List LIB
** Pol Bachelin
*/

#include "linked_list.h"

void print_circ_list(node_t *head)
{
  node_t *tmp = head;
  int i = 1;

  printf("head\n");
  do {
    printf("  data : %i\n", tmp->data);
    print_link();
    printf("node #%i:\n", i++);
    tmp = tmp->next;
  } while (tmp != head);
  print_link();
  printf("head\n");
  print_link();
  printf("...\n");
}
