#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data (n) of a linked list
* @head: head of the linked list
* Return: returns the sum of all the data (n)
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
