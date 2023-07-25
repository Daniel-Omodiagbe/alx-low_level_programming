#include "main.h"

/**
* puts2 - function that prints even characters
* @str: pointer to string
* Return: Nothing
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar(10);
}
