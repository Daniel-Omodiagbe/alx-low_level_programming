#include "main.h"

/**
* print_diagsums - prints the sum of two diagonals of a square
* @a: pointer to int
* @size: size of the square matrix
*/

void print_diagsums(int *a, int size)
{
	int i, j, count1 = 0, count2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				count1 = count1 + a[i];
			}
			if ((size - 1 - i) == j)
			{
				count2 = count2 + a[i];
			}
		}
	}
	printf("%d, %d\n", count1, count2);
}
