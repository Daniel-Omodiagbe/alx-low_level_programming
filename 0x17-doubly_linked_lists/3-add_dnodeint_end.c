#include "lists.h"

/**
* *add_dnodeint_end - that adds a new node at the end of a linked list
* @head: pointer to head of linked lists
* @n: element to be added
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node)
	{
		tmp = *head;
		new_node->n = n;
		if (*head == NULL)
		{
			*head = new_node;
			new_node->next = NULL;
		}
		else
		{
			while (tmp->next != NULL)
			{
				tmp = (tmp)->next;
			}
			tmp->next = new_node;
			new_node->prev = tmp;
			new_node->next = NULL;
		}
		return (new_node);
	}
	return (NULL);
}
