/*
** Linked List LIB
** 18/09/2020
** Pol Bachelin
**
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/* STRUCTS */

typedef struct node {
    int data;
    struct node *next;
} node_t;

typedef struct d_node {
    int data;
    struct d_node *next;
    struct d_node *prev;
} d_node_t;

/**************************/

//ERROR_HANDLING
void malloc_error();


//CREATING
node_t *create_linked_list(size_t size);
node_t *create_circ_list(size_t size);

//PRINTING
void print_linked_list(node_t *head);
void print_circ_list(node_t *head);

//HANDLING
size_t get_list_size(node_t *head);

//FREEING
void free_linked_list(node_t *head);
