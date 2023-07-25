#include "main.h"

/**
* puts_half - prints second half of the string
* @str: pointer to string
* Return: Nothing
*/

void puts_half(char *str)
{
	int len, i;
	char *str2;

	str2 = str;
	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	if ((len - 1) % 2 != 0)
	{
		for (i = 0; i < len; i++)
		{
			if (i >= ((len - 1) / 2) + 1)
			{
				_putchar(*str2);
			}
			str2++;
		}
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			if (i > (len - 1) / 2)
			{
				_putchar(*str2);
			}
			str2++;
		}
	}
	_putchar(10);
}
