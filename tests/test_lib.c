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
    size_t i = 1;

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

Test(create_circ_list, simple_circ_create)
{
    size_t size = 5;
    node_t *head = create_circ_list(size);
    node_t *tmp = head;
    size_t i = 1;

    do {
        i++;
        tmp = tmp->next;
    } while(tmp != head);
    cr_assert(i == size);
}
