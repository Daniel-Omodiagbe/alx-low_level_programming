#include "lists.h"

/**
* list_len - returns the number of elements in a linked list_t list
* @h: pointer to list_t
* Return: number of list elements
*/

size_t list_len(const list_t *h)
{
	size_t length = 0;

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
