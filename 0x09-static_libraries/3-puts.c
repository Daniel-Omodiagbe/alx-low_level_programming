#include "main.h"

/**
* _puts - prints a string
* @s: formal parameter
* Return: Nothing
*/

void _puts(char *s)
{

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar(10);
}
