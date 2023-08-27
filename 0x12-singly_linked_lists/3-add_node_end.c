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
* *add_node_end - adds a new node at the end of a list_t list
* @head: head of the linked list
* @str: parameter to be added
* Return: NULL or address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	if (head)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node)
		{
			tmp = *head;
			new_node->str = strdup(str);
			new_node->len = _strlen(str);
			new_node->next = NULL;
			if ((*head) == NULL || head == NULL)
			{
				(*head) = new_node;
			}
			else
			{
				while (tmp->next != NULL)
				{
					tmp = tmp->next;
				}
				tmp->next = new_node;
			}
			return (new_node);
		}
		return (NULL);
	}
	return (NULL);
}
