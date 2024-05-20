#include "search_algos.h"

/**
* linear_search - performs linear search on an array
* @array: array to be searched
* @size: number of elements in array
* @value: value to search for
* Return: first index when value is located or -1 if it fails
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
