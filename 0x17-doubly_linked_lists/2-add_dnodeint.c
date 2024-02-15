#include "lists.h"

/**
* *add_dnodeint - adds a new node at the beginning
* @head: pointer to head of the list
* @n: element to be added
* Return: return the address of the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
