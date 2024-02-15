#include "lists.h"

/**
* *get_dnodeint_at_index - function that returns the nth node of a linked list
* @head: head of the list
* @index:index of the node starting from 0
* Return: returns nth node or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int j, i = 0;

	if (head)
	{
		tmp = head;
		while (head != NULL)
		{
			i++;
			head = head->next;
		}
		if (index <= i)
		{
			for (j = 0; j < index; j++)
			{
				tmp = tmp->next;
			}
			return (tmp);
		}
	}
	return (NULL);
}
