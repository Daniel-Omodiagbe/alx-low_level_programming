#include "main.h"

/**
* print_line - draws a straight line
* @n: formal parameter
* Return: Nothing
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar(10);
}
