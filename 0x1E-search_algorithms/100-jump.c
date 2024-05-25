#include "search_algos.h"
#include <math.h>

/**
* jump_search -  searches for a value in a sorted array
* @array: array to be searched
* @size: size of array
* @value: element to search for
* Return: index of the value or -1 if it fails
*/

int jump_search(int *array, size_t size, int value)
{
	size_t jump, step, i, prev = 0;

	if (array == NULL)
	{
		return (-1);
	}
	if (array)
	{
		step = sqrt(size);
		jump = step;
		while (jump < size)
		{
			if (array[jump] < value)
			{
				printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
				prev = jump;
			}
			else if (array[jump] > value)
			{
				printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
				break;
			}
			jump = jump + step;
		}
		if (jump > size)
		{
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		}
		printf("Value found between indexes [%lu] and [%ld]\n", prev, prev + step);
		for (i = prev; i < jump; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (jump > size)
			{
				return (-1);
			}
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
