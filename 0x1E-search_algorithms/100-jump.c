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
				printf("Value checked array[%lu] = [%lu]\n", prev, prev);
				prev = jump;
			}
			else if (array[jump] > value)
			{
				printf("Value checked array[%lu] = [%lu]\n", prev, prev);
				break;
			}
			jump = jump + step;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + step);
		for (i = prev; i < jump; i++)
		{
			printf("Value checked array[%lu] = [%lu]\n", i, i);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
