#include "lists.h"

/**
* free_listint2 - a function that frees listint_t list
* @head: head of linked list
* Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			free(tmp);
			(tmp) = (tmp)->next;
		}
		free(tmp);
	}
	head = NULL;
}
