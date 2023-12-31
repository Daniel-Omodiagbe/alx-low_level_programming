#include "lists.h"

/**
* *add_nodeint_end - adds a new node at the end of a listint_t list
* @head: pointer to the head to the linked list
* @n: value of the new node
* Return: NULL or the address of the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	if (head)
	{
		tmp = *head;
		new_node = malloc(sizeof(listint_t));
		if (new_node)
		{
			new_node->n = n;
			new_node->next = NULL;
			if ((*head) == NULL)
			{
				(*head) = new_node;
			}
			else
			{
				while (tmp->next != NULL)
				{
					tmp = tmp->next;
				}
				tmp->next = new_node;
			}
			return (new_node);
		}
		return (NULL);
	}
	return (NULL);
}
