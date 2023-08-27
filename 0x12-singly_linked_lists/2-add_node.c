#include "lists.h"
#include <string.h>

/**
* *add_node - add new node at the beginning of the list
* @head: double pointer
* @str: value of the new node
* Return: NULL or address of new_node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node)
		{
			new_node->next = *head;
			*head = new_node;
			new_node->str = strdup(str);
			return (new_node);
		}
		return (NULL);
	}
	return (NULL);
}
