#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: head of the linked list
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int length = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			length++;
			h = h->next;
		}
	}
	return (length);
}
