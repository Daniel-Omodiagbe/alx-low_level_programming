#include "main.h"

/**
* print_array - prints elements in an array
* @a: pointer to integer
* @n:formal parameter
* Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	putchar(10);
}
