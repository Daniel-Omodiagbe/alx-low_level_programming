#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: ppinter to head node
* Return: 0 or head node data
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (head)
	{
		value = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
		return (value);
	}
	return (0);
}
