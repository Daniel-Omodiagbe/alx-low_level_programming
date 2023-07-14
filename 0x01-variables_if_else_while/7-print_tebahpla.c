#include <stdio.h>

/**
* main - entry point
* Return: return 0
*/

int main(void)
{
	char c;

	for (c = 122; c >= 97; c--)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
