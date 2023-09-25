#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *node, *node1, *node2;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    node = get_nodeint_at_index(head, 5);
    node1 = get_nodeint_at_index(head, 7);
    node2 = get_nodeint_at_index(head, 8);
    printf("%d\n", node->n);
    printf("%d\n", node1->n);
    printf("%d\n", node2->n);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
