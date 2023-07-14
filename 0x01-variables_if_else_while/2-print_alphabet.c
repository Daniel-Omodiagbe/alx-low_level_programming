#include <stdio.h>

/**
* main - entry point
* Return: return 0
*/

int main(void)
{
	char c;

	c = 97;
	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
