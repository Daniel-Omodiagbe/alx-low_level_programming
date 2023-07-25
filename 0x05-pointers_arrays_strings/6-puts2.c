#include "main.h"

/**
* puts2 - function that prints even characters
* @str: pointer to string
* Return: Nothing
*/

void puts2(char *str)
{
	int count, i;
	char *str2;

	str2 = str;
	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	if (count % 2 == 0)
	{
		while (*str2 != '\0')
		{
			_putchar(*str2);
			str2 = str2 + 2;
			count = count - 2;
		}
	}
	else
	{
		for (i = 0; i < (count + 1) / 2; i++)
		{
			_putchar(*str2);
			str2 = str2 + 2;
		}
	}
	_putchar(10);
}
