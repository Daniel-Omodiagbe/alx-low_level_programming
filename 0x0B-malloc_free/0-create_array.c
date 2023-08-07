#include "main.h"

/**
* *create_array - creates an array of characters
* @size: size of the array
* @c: character to initialize the array
* Return: pointer to char
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[i] = '\0';
	return (str);
}
