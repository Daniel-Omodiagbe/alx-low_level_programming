#include "main.h"

/**
* main - entry point
* Return: 0
*/

int main(void)
{
	char *c = "_putchar";

	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar(10);
	return (0);
}
