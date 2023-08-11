#include "main.h"

/**
* *_calloc - allocates memory for an array using malloc
* @nmemb: number of elements
* @size: bytes of each element
* Return: Nothing
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int total_size = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr)
	{
		for (i = 0; i < total_size; i++)
		{
			ptr[i] = 0;
		}
		return (ptr);
	}
	return (NULL);
}
