#include "lists.h"

/**
* free_list - frees list_t list
* @head: head of linked list
* Return: Nothing
*/

void free_list(list_t *head)
{
	if (head)
	{
		while (head)
		{
			free(head->str);
			free(head);
			head = head->next;
		}
	}
}
