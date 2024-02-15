#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
* print_dlistint - prints the elements in the linked list
* @h: head of the linked list
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
