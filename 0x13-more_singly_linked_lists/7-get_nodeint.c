#include "lists.h"

/**
* *get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: head of the linked list
* @index: index of the node
* Return: NULL or Nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0, count = 0;

	if (head)
	{
		tmp = head;
		while (head->next != NULL)
		{
			count++;
			head = head->next;
		}
		if (index >= count)
		{
			return (NULL);
		}
		for (i = 0; i < count && tmp->next != NULL; i++, tmp = tmp->next)
		{
			if (i == index)
			{
				return (tmp);
			}
		}
	}
	return (NULL);
}
