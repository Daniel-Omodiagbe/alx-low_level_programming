#include "lists.h"
#include <string.h>

/**
* _strlen - length of string
* @str: to count
* Return: length
*/

size_t _strlen(char const *str)
{
	size_t i, count = 0;

	if (str)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			count++;
		}
		return (count);
	}
	return (0);
}

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
			new_node->len = _strlen(str);
			return (new_node);
		}
		return (NULL);
	}
	return (NULL);
}
