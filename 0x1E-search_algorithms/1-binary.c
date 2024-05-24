#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array
* @array: array to be searched
* @size: number of elements in array
* @value: element to search for
* Return: index where is value is found or -1 if it fails
*/

int binary_search(int *array, size_t size, int value)
{
	 size_t low, high, mid;

	if (array == NULL)
	{
		return (-1);
	}
	if (array)
	{
		low = 0;
		high = size - 1;
		while (low <= high)
		{
			mid = low + (high - low) / 2;
			if (array[mid] == value)
			{
				return (mid);
			}
			else if (array[mid] < value)
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
	}
	return (-1);
}
