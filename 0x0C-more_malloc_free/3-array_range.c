#include "main.h"

/**
* *array_range - creates an array of integers
* @min: smallest value in the array
* @max: highest value in the array
* Return: integer
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i, start, len = 0;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min;
	ptr = malloc(sizeof(int) * (len + 1));
	if (ptr)
	{
		start = min;
		for (i = 0; i <= len; i++, start++)
		{
			ptr[i] = start;
		}
		return (ptr);
	}
	return (NULL);
}
