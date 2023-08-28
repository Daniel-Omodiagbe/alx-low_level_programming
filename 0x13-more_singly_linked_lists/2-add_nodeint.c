#include "lists.h"

/**
* *add_nodeint - add new node at the beginning
* @head: pointer to head of the linked list
* @n: value of the new node
* Return: NULL or the address of the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node)
		{
			new_node->n = n;
			new_node->next = *head;
			(*head) = new_node;
			return (new_node);
		}
		return (NULL);
	}
	return (NULL);
}
