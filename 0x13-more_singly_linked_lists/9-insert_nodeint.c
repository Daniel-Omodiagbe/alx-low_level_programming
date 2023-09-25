#include "lists.h"

/**
* *insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to head of the linked list
* @idx: index to insert the new node
* @n: value of the new node
* Return: NULL or address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp, *tmp1;
	unsigned int i = 0, count = 0;

	if (head)
	{
		tmp = *head;
		tmp1 = *head;
		while (tmp1->next != NULL)
		{
			count++;
			(tmp1) = (tmp1)->next;
		}
		if (idx >= count)
		{
			return (NULL);
		}
		new_node = malloc(sizeof(listint_t));
		if (new_node)
		{
			for (i = 0; i < idx && tmp->next != NULL; i++, tmp = tmp->next)
			{
				if (i == idx)
				{
					tmp = new_node;
					new_node = new_node->next;
					new_node->n = n;
				}
			}
			return (new_node);
		}
	}
	return (NULL);
}
