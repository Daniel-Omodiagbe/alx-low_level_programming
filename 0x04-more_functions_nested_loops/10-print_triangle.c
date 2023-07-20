#include "main.h"

/**
* print_triangle - prints a triangle
* @size: formal parameter
* Return: Nothing
*/

void print_triangle(int size)
{
	int i, j, z;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = j; i < size - 1; i++)
			{
				_putchar(' ');
			}
			for (z = 0; z < j + 1; z++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
