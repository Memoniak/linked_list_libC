/*
** Linked List LIB
** 18/09/2020
** Pol Bachelin
**
*/

#include <criterion/criterion.h>
#include "linked_list.h"

Test(create_linked_list, simple_create)
{
    size_t size = 5;
    node_t *head = create_linked_list(size);
    node_t *tmp = head;
    size_t i = 0;

    while (tmp != NULL) {
        i++;
        if (tmp->data != 0) {
            free_linked_list(head);
            cr_assert(1 == 0);
        }
        tmp = tmp->next;
    }
    free_linked_list(head);
    cr_assert(i == size);
}

Test(get_list_size, simple_list_size)
{
    size_t size = 5;
    node_t *head = create_linked_list(size);

    int res = get_list_size(head);
    free_linked_list(head);
    cr_assert(res == size);
}

Test(get_list_size, singe_list_size)
{
    size_t size = 1;
    node_t *head = create_linked_list(size);

    int res = get_list_size(head);
    free_linked_list(head);
    cr_assert(res == size);
}

Test(create_circ_list, simple_circ_create)
{
    size_t size = 5;
    node_t *head = create_circ_list(size);
    node_t *tmp = head;
    size_t i = 0;

    do {
        i++;
        tmp = tmp->next;
    } while(tmp != head);
    free_circular_list(head);
    cr_assert(i == size);
}

Test(create_double_list, simple_double_create)
{
    size_t size = 5;
    d_node_t *head = create_double_list(size);
    d_node_t *temp = head;
    d_node_t *prev;
    size_t i = 0;

    do {
        i++;
	temp = temp->next;
    } while (temp != head);
    cr_assert(i == size);
}

Test(push_linked_list, simple_push)
{
  size_t data = 150;
  size_t size = 5;
  node_t *head = create_linked_list(size);
  node_t *tmp = head;

  push_linked_list(&head, data);
  cr_assert(head->data == data);
}

Test(pop_linked_list, simple_pop)
{
  int data = 10;
  int size = 5;
  node_t *head = create_linked_list(size);

  head->next->data = data;
  pop_linked_list(&head);
  cr_assert(head->data == data);
}

Test(remove_by_index, simple_remove)
{
  int size = 5;
  int data = 10;
  node_t *head = create_linked_list(size);
  
  head->next->next->data = data;
  remove_by_index(&head, 2);
  cr_assert(head->next->next->data != data);
}

Test(remove_by_index, remove_negative)
{
  int size = 5;
  int data = 20;
  node_t *head = create_linked_list(size);

  head->next->next->data = data;
  remove_by_index(&head, -10);
  cr_assert(head->next->next->data == data);
}

Test(remove_by_value, simple_remove_by_value)
{
  int size = 6;
  int data = 30;
  node_t *head = create_linked_list(size);

  head->next->data = data;
  remove_by_value(&head, data);
  cr_assert(head->next->data != data);
}
