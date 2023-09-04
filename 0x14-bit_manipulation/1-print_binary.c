#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: integer to be converted
* Return: Nothing
*/

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i;

	for (i = 32 - 1; i >= 0; i--)
	{
		num = n >> i;
		if (num & '1')
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
