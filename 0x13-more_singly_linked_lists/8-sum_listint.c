#include "lists.h"

/**
* sum_listint - sum all of the data of a listint_t
* @head: head of the linked list
* Return: 0 or the sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum = sum + head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
