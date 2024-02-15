#include "lists.h"

/**
* free_dlistint - function that frees a linked list
* @head: head of the linked list
* Return: Nothing
*/

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head)
		{
			free(head);
			head = head->next;
		}
	}
}
