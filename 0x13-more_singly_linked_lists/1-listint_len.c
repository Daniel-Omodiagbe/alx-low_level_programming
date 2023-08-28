#include "lists.h"

/**
* listint_len - returns number of nodes
* @h: head of the linked list
* Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	int length = 0;

	if (h)
	{
		while (h)
		{
			length++;
			h = h->next;
		}
	}
	return (length);
}
