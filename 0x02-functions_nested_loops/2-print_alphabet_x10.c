#include "main.h"

/**
* print_alphabet_x10 - 10 times the alphabet, in lowercase
* Return: Nothing
*/

void print_alphabet_x10(void)
{
	int i;
	char *c;

	for (i = 0; i < 10; i++)
	{
		c = "abcdefghijklmnopqrstuvwxyz";
		while (*c != '\0')
		{
			_putchar(*c);
			c++;
		}
		_putchar(10);
	}
}
