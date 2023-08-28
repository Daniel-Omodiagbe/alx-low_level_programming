#include "lists.h"

/**
* free_listint - frees listint_t list
* @head: head of linked list
* Return: Nothing
*/

void free_listint(listint_t *head)
{
	if (head)
	{
		while (head->next != NULL)
		{
			free(head);
			head = head->next;
		}
		free(head);
	}
}
