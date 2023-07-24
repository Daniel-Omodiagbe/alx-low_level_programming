#include "main.h"

/**
* print_rev - prints string in reverse
* @s: pointer to char
* Return: Nothing
*/

void print_rev(char *s)
{
	int i, count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	for (i = 0; i < count + 1; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
